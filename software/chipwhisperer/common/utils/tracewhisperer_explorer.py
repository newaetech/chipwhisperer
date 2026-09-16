import numpy as np
import chipwhisperer as cw
from chipwhisperer.common.utils import util
import importlib.util

try:
    from bokeh.plotting import figure, show # type: ignore
    from bokeh.io import push_notebook # type: ignore
    from bokeh.models import Span # type: ignore
    from ipywidgets import interact, Layout, widgets # type: ignore
except Exception as e:
    figure = None
    show = None
    push_notebook = None
    Span = None
    interact = None
    Layout = None 
    widgets = None


class TraceWhispererExplorer(util.DisableNewAttr):
    """Class to interactively capture power traces and TraceWhisperer data.
    See the companion notebook (jupyter/demos/husky/13 - Husky TraceWhisperer Exploration) for usage details.

    """

    _name = 'Husky Trace Explorer Module'

    def __init__(self, scope, target, functions, width=2000, height=600, plot_tools='pan, box_zoom, hover, reset, save'):
        super().__init__()
        # We don't directly call anything from jupyter_bokeh, but the interactive plotting
        # that we do here will silently fail if this package is not installed:
        if importlib.util.find_spec('jupyter_bokeh') is None:
            raise ImportError("The jupyter_bokeh package is required for TraceWhispererExplorer. Try installing chipwhisperer-jupyter's requirements.txt.")
        if interact is None:
            raise ImportError("The bokeh and ipywidgets packages are required for TraceWhispererExplorer. Try installing chipwhisperer-jupyter's requirements.txt.")
        self.scope = scope
        self.target = target
        self.functions = functions
        self.p = figure(width=width, height=height, tools=plot_tools)
        self.scope.trace.capture.use_husky_arm  = True
        xrange = list(range(self.scope.adc.samples))
        self.S = self.p.line(xrange, [0]*scope.adc.samples, color='black')
        self.D = self.p.line(xrange, [0]*scope.adc.samples, color='blue')

        self.captureout = widgets.Output(layout={'border': '1px solid black', 'width': '50%'})
        self.dissout = widgets.Output(layout={'border': '1px solid black', 'width': '50%'})
        textoutputs = widgets.HBox([self.captureout, self.dissout])

        show(self.p, notebook_handle=True)

        style= {'description_width': '300px'}
        layout=Layout(width='600px')

        self.tlist = []

        self.disassembled = None
        self.acpr = 0

        function_names = []
        for f in self.functions:
            function_names.append(f[-1])

        my_interact = interact(self.update_plot,
                               dwt_comp0 =    widgets.Textarea(value='0x080018c4', description='DWT_COMP0 value', style=style, layout=layout),
                               dwt_comp1 =    widgets.Textarea(value='0x0800188c', description='DWT_COMP1 value', style=style, layout=layout),
                               comparators  = widgets.Dropdown(options=['0', '1', 'both', 'None'], style=style, layout=layout, disabled=False),
                               acpr =         widgets.Textarea(value='0', description='TPI.ACPR value', style=style, layout=layout),
                               disassemble =  widgets.Dropdown(options=function_names, style=style, layout=layout, disabled=False),
                               trace_noise =  widgets.Checkbox(value=False, description='include trace activity "noise"', style=style, layout=layout),
                               SWO =          widgets.Checkbox(value=False, description='capture SWO activity', style=style, layout=layout),
                               run =          widgets.Checkbox(value=False, description='run the capture', style=style, layout=layout))

        display(textoutputs)
        self.disable_newattr()


    def update_plot(self,
                    dwt_comp0='',
                    dwt_comp1='',
                    acpr='',
                    disassemble='',
                    comparators='',
                    trace_noise=False,
                    SWO=False,
                    run=False):
        dwt_comp0 = int(dwt_comp0, 16)
        dwt_comp1 = int(dwt_comp1, 16)
        acpr = int(acpr)
        if comparators == '0':
            comps = 0
        elif comparators == '1':
            comps = 1
        elif comparators == 'both':
            comps = 'both'
        elif comparators == 'None':
            comps = None
        else:
            raise ValueError()

        # only update the disassemble output if it's changed:
        if disassemble != self.disassembled:
            self.dissout.clear_output()
            with self.dissout:
                entry = None
                for f in self.functions:
                    if f[-1] == disassemble:
                        entry = f
                        break
                if not entry:
                    raise ValueError()
                else:
                    print('Function: %s' % disassemble)
                    print('Start address: %0x' % entry[0])
                    print('End   address: %0x' % entry[1])
                    print(entry[2])

        if acpr != self.acpr:
            self.acpr = acpr
            self.scope.trace.target_registers.TPI_ACPR = acpr
            self.scope.trace.swo_div = 8 * (acpr + 1)

        if run:
            self.captureout.clear_output()
            trace = None

            with self.captureout:

                # visually indicate that a new capture has started:
                self.p.background_fill_color = 'yellow'
                self.p.background_fill_alpha = 0.3
                push_notebook()

                # get the trace!
                self.scope.trace.set_isync_matches(addr0=dwt_comp0, addr1=dwt_comp1, match=comps)
                trace = cw.capture_trace(self.scope, self.target, bytearray(16), bytearray(16), as_int=False)
                if self.scope.adc.errors:
                    print('scope.adc.errors: %s' % self.scope.adc.errors)

                if self.scope.trace.fifo_empty():
                    print('ERROR: Trace FIFO empty!')
                    trace_success = False
                    ttimes = []
                else:
                    trace_success = True
                    raw = self.scope.trace.read_capture_data()
                    ttimes = self.scope.trace.get_rule_match_times(raw, rawtimes=True, verbose=False)
                    print('%d trace events' % len(ttimes))

                if not trace_noise:
                    # repeat trace capture but with no SWO activity:
                    self.scope.trace.set_isync_matches(addr0=dwt_comp0, addr1=dwt_comp1, match=None)
                    trace = cw.capture_trace(self.scope, self.target, bytearray(16), bytearray(16), as_int=False)
                    if self.scope.adc.errors:
                        print('scope.adc.errors: %s' % self.scope.adc.errors)

                if SWO:
                    # repeat trace capture, with SWO activity, and capture that with scope.LA (which requires disabling scope.trace):
                    self.scope.trace.set_isync_matches(addr0=dwt_comp0, addr1=dwt_comp1, match=comps)
                    self.setup_LA(True)
                    self.scope.LA.arm()
                    cw.capture_trace(self.scope, self.target, bytearray(16), bytearray(16), as_int=False)
                    if self.scope.adc.errors:
                        print('scope.adc.errors: %s' % self.scope.adc.errors)
                    if self.scope.LA.fifo_empty():
                        print('ERROR: LA FIFO empty!')
                        la_success = False
                    else:
                        la_success = True
                        swd_data = self.scope.LA.extract(self.scope.LA.read_capture_data(), 2)
                        # adjust for apparent scope.LA capture offset:
                        #swd_data = np.insert(swd_data, 0, [0.5]*48)
                    self.setup_LA(False)


                if trace is None or not trace_success:
                    self.p.background_fill_color = 'red'
                    self.p.background_fill_alpha = 0.7
                    push_notebook()

                else:
                    self.p.background_fill_color = 'green'
                    push_notebook()

                if trace:
                    self.S.data_source.data = {'y': trace.wave,
                                               'x': list(range(self.scope.adc.samples))}

                    for span in self.tlist:
                        self.p.renderers.remove(span)

                    self.tlist = []
                    last_time = 0
                    for i,match in enumerate(ttimes):
                        time = match[0]*self.scope.clock.adc_mul
                        self.tlist.append(Span(location=time, dimension='height', line_color='red', line_width=2))
                        delta = time - last_time
                        print('Trace event %2d @ sample %6d (delta: %6d samples)' % (i, time, delta))
                        last_time = time

                    self.p.renderers.extend(self.tlist)

                if SWO and la_success:
                    if len(swd_data) < self.scope.adc.samples:
                        swd_data = np.append(swd_data, [0.5]*(self.scope.adc.samples - len(swd_data)))
                    elif len(swd_data) > self.scope.adc.samples:
                        swd_data = swd_data[:self.scope.adc.samples]
                    self.D.data_source.data = {'y': swd_data/8 +0.4,
                                               'x': list(range(self.scope.adc.samples))}
                else:
                    self.D.data_source.data = {'y': [0]*self.scope.adc.samples,
                                               'x': list(range(self.scope.adc.samples))}


            # end of huge 'with self.captureout' block

            if trace is not None and trace_success:
                self.p.background_fill_color = 'white'

            push_notebook()
            if self.scope.adc.errors:
                self.scope.errors.clear()

    def setup_LA(self, on=True):
        if on:
            self.scope.trace.enabled = False
            self.scope.LA.enabled = True
            self.scope.LA.oversampling_factor = self.scope.clock.adc_mul
            self.scope.LA.capture_group = 'USERIO 20-pin'
            self.scope.LA.capture_depth = self.scope.LA.max_capture_depth
            self.scope.LA.trigger_source = 'capture'
        else:
            self.scope.LA.enabled = False
            self.scope.trace.enabled = True
            self.scope.trace.capture.use_husky_arm = True
            self.scope.trace.clock.swo_clock_freq = self.scope.clock.clkgen_freq * 8
            


