from typing import Iterable, Sized
from collections.abc import Collection, Sequence

import numpy as np
from numba import njit
from ..common.project import Project
from .leakage_models import LeakageFunction
from ..logging import analyzer_logger
# from ..__init__ import plot

def generate_hw_table():
    ret = []
    for i in range(256):
        ret.append(bin(i).count('1'))
    return np.array(ret, dtype=np.uint8)

hw_table = generate_hw_table()

"""
State calculation functions.

This is quite tricky due to the fact that these are multidimensional arrays

calc_th_array() is the slowest calculation and therefore the most important to optimize
"""
@njit
def calc_th_array(t, h):
    prod = np.zeros((len(t[0]), len(h[0])), dtype=np.int64)
    # note: this order is by far the fastest, I think due to better cache access on t and h
    # roughly 1.5x faster compared to point and tnum being swapped
    for tnum in range(len(t)):
        for point in range(len(t[0])):
            for guess in range(len(h[0])):
                prod[point][guess] += t[tnum][point] * h[tnum][guess]
    return prod

def sum_t_or_h(h):
    prod = np.sum(h, axis=0, dtype=np.int64)
    return prod

@njit
def mult_tsum_hsum(tsum, hsum):
    ret = np.zeros((len(tsum),len(hsum)), dtype=np.int64)
    for i in range(len(tsum)):
        ret[i] = tsum[i] * hsum
    return ret

# unit test ideas
# test correlation
# ensure state the same no matter if broken into smaller chunks

"""Works via online correlation calculation

For traces t and hypothetical leakages h and for a single location in traces and key guess,
the following internal state can be calculated and easily updated:

tb = mean(t)
hb = mean(h)
th = dot(t, h)
t2 = mean(t^2) = dot(t, t)
h2 = mean(h^2) = dot(h, h)
N = number of traces

Then, the correlation can be calculated by:

                  N * th - hb * tb
corr = ---------------------------------------
       sqrt((h2 - N * hb^2) - (t2 - N * tb^2))

These calculations need to be repeated for each key guess and location in the trace.
"""
class CPA:
    """Class for doing correlation power analysis attacks.

    After creating the CPA object::

        from chipwhisperer.analyzer import CPA, models
        cpa = CPA(project, models.sbox_output, list(range(16)))
    
    You can run an attack::

        # optional callback to display results table in jupyter
        from chipwhisperer.analyzer import get_jupyter_cb
        cb = get_jupyter_cb()
        cpa.run(interval=10, callback=cb) # update the table every 10 traces

    After the attack finishes, you can get its results and related plots::

        key_guess = cpa.key_guess()
        print(cpa.correlations[0]) # print correlations for subkey 0
        cpa.corr_v_time_plot() # or pge_v_traces_plot() or corr_v_traces_plot()

    Args:
        project (cw.Project): Project that contains trace and plaintext/ciphertext
            data. 
        leakage_model (function): Model to calculate leakage guesses from plaintext/ciphertext
        subkeys (list): List of subkeys to attack
    """
    def __init__(self, project: Project, leakage_model: LeakageFunction, subkeys: Sequence | int):

        self.project = project
        self.trace_len = project.traces.shape[1]
        self.kguesses = 256
        self.traces_used = 0
        pt_array = None
        ct_array = None

        if type(subkeys) is int:
            subkeys = list(range(subkeys))

        assert isinstance(subkeys, Sequence)
        self.subkeys: Sequence = subkeys
        self.num_traces = project.num_traces

        if project.plaintexts is not None:
            pt_array = np.swapaxes(project.plaintexts, 0, 1)
            assert pt_array.shape[1] == project.num_traces
        if project.ciphertexts is not None:
            ct_array = np.swapaxes(project.ciphertexts, 0, 1)
            assert ct_array.shape[1] == project.num_traces

        self.trace_array = project.traces
        
        self.pt_array = pt_array
        self.ct_array = ct_array
        self.reset()
        
        self.known_key = None
        # self.ct_array = None
        
        self.correlations = None
        self.leakage_model = leakage_model
        self.gen_hyp()

        if project.keys is not None:
            self.known_key = project.keys[0]

    def reset(self):
        """Reset internal results to 0
        """
        self.th_sum = np.zeros((len(self.subkeys), self.project.trace_len, self.kguesses), dtype=np.int64)
        self.tsum = np.zeros((self.project.trace_len), dtype=np.int64)
        self.hsum = np.zeros((len(self.subkeys), self.kguesses), dtype=np.int64)
        
        self.t2_sum = np.zeros((self.project.trace_len), dtype=np.int64)
        self.h2_sum = np.zeros((len(self.subkeys), self.kguesses), dtype=np.int64)
        self.hyp_array = np.zeros((len(self.subkeys), self.project.num_traces, self.kguesses), dtype=np.uint8)
        self.sorted_kguesses_hist = []
        self.traces_used_hist = []
        self.max_correlations_hist = []
        pass

    def set_leakage_model(self, leakage_model: LeakageFunction):
        """Set the leakage model and regenerate hypotheticals.

        Args:
            leakage_model (func): Leakage model to use
        """
        self.leakage_model = leakage_model
        self.gen_hyp()

    def gen_hyp(self):
        """Generate hypothetical leakages from leakage_model
        """
        for i in range(len(self.subkeys)):
            self.hyp_array[i] = self.leakage_model(self.pt_array, self.ct_array, self.subkeys[i])
    
    def update_state(self, start, stop):
        """Update the internal state tsum, t2_sum, th_sum, h_sum and h2_sum using traces between start and stop
        """
        # update the traces we used for corr/pge_v_traces plots
        self.traces_used += stop - start
        self.traces_used_hist.append(self.traces_used)
        
        # calculate sum of t
        self.tsum += sum_t_or_h(self.trace_array[start:stop])
        
        # calculate sum of t^2
        self.t2_sum += np.sum(np.square(self.trace_array[start:stop], dtype=np.int64), axis=0)
        
        for i in range(len(self.subkeys)):
            # calculate sum of h*t
            self.th_sum[i] += calc_th_array(self.trace_array[start:stop], self.hyp_array[i][start:stop])
            
            # calculate sum of h
            self.hsum[i] += sum_t_or_h(self.hyp_array[i][start:stop])

            # calculate sum of h^2
            self.h2_sum[i] += np.sum(np.square(self.hyp_array[i][start:stop], dtype=np.int64), axis=0)

    
    def calculate_correlation(self):
        """Calculate correlations using internal state
        """
        # important: only record the max correlation for each kguess, otherwise memory blows up
        corr = np.zeros((len(self.subkeys), self.project.trace_len, self.kguesses), dtype=np.float32)

        # calculate (sum of t) ^ 2
        t_sum2 = np.square(self.tsum, dtype=np.int64)

        # calculate trace sqrt for denominator
        sqrt_t = np.sqrt(-(t_sum2 - self.traces_used * self.t2_sum))
        
        for i in range(len(self.subkeys)):
            # calculate numerator
            num = self.traces_used * self.th_sum[i] - mult_tsum_hsum(self.tsum, self.hsum[i])

            # calculate (sum of h) ^ 2
            h_sum2 = np.square(self.hsum[i], dtype=np.int64)
            dem = mult_tsum_hsum(\
                np.sqrt(-(h_sum2 - self.traces_used * self.h2_sum[i])),\
                sqrt_t\
            )
            with np.errstate(divide='ignore', invalid='ignore'):
                corr[i] = num / dem.transpose()
        np.nan_to_num(corr, copy=False)
        self.correlations = corr

    def _calc_sort_and_rank(self, index=-1):
        """Sort and rank kguesses based on correlation
        """
        sorted_kguesses = []
        self.best_corrs = np.zeros((len(self.subkeys), self.kguesses), dtype=np.float32)
        for i in range(len(self.subkeys)):
            assert self.correlations is not None
            abscor = np.abs(self.correlations[i])
            self.max_corr_loc = np.argmax(abscor, axis=0) # arguments of abscor sorted by max: arg_along_trace[-1] has the location in correlation of largest corr

            self.best_corrs[i] = abscor[self.max_corr_loc].diagonal()

            sorted_kguesses.append(np.flip(np.argsort(self.best_corrs[i])))
        self.max_correlations_hist.append(self.best_corrs)
        return sorted_kguesses

    def sort_and_rank(self):
        """Sort and rank kguesses based on correlation
        """
        self.sorted_kguesses_hist.append(self._calc_sort_and_rank())
    
    def run(self, interval=None, callback=None):
        """Run a full CPA attack, updating internal records and callback every interval
        """
        if interval is None:
            interval = self.num_traces
        for i in range(0, self.num_traces, interval):
            analyzer_logger.info("Updating traces between {} and {}".format(i, min(i+interval, self.num_traces)))
            self.update_state(i, min(i + interval, self.num_traces))

            analyzer_logger.debug("Calculating correlation")
            self.calculate_correlation()

            analyzer_logger.debug("Sorting and ranking guesses")
            self.sort_and_rank()
            if callback:
                analyzer_logger.info("Calling callback function")
                callback(self)

    def _corr_v_time(self, sub_byte, kguess):
        assert self.correlations is not None
        return self.correlations[sub_byte,:,kguess]

    def corr_v_time(self, sub_byte):
        if self.known_key is None:
            key = self.key_guess()
        else:
            key = self.known_key
        return self._corr_v_time(sub_byte, key[sub_byte])

    def _corr_v_traces(self, sub_byte, kguess):
        maxes = []
        for corr in self.max_correlations_hist:
            maxes.append(np.abs(corr[sub_byte,kguess]))
        return maxes

    def corr_v_traces(self, sub_byte, abval=True):
        maxes = []
        if self.known_key is None:
            key = self.key_guess()
        else:
            key = self.known_key
        for corr in self.max_correlations_hist:
            if abval:
                maxes.append(np.abs(corr[sub_byte, key[sub_byte]]))
            else:
                maxes.append(corr[sub_byte, key[sub_byte]])
        return maxes

    def highest_corr_v_traces(self, sub_byte, exclude=None):
        maxes = []
        for corr in self.max_correlations_hist:
            if exclude is None:
                x = corr[sub_byte]
            else:
                x = np.delete(corr[sub_byte], exclude)
            maxes.append(np.max(np.abs(x)))
        return maxes

    def lowest_corr_v_traces(self, sub_byte, exclude=None):
        pass

    def highest_corr_v_time(self, sub_byte, exclude=None):
        assert self.correlations is not None
        ncorr = self.correlations[sub_byte]
        if exclude is not None:
            ncorr = np.delete(ncorr, exclude, axis=1)
        return np.max(ncorr, axis=1)

    def lowest_corr_v_time(self, sub_byte, exclude=None):
        assert self.correlations is not None
        ncorr = self.correlations[sub_byte]
        if exclude is not None:
            ncorr = np.delete(ncorr, exclude, axis=1)
        return np.min(ncorr, axis=1)

    def pge_v_traces(self, sub_byte):
        pges = []
        if self.known_key is None:
            key = self.key_guess()
            analyzer_logger.warning("Key not specified, using recovered key")
        else:
            key = self.known_key
        assert self.known_key is not None
        for i in range(len(self.sorted_kguesses_hist)):
            pges.append(self._pge(sub_byte, self.known_key[sub_byte], i))
        return pges

    def avg_pge(self):
        avgs = []
        assert self.known_key is not None, "You must know the get to calculate the average PGE"
        for i in range(len(self.sorted_kguesses_hist)):
            avg = 0
            for j in self.subkeys:
                avg += self._pge(j, self.known_key[j], i)
            avg /= len(self.subkeys)
            avgs.append(avg)
        return avgs

    def _pge(self, sub_byte, kguess, index=-1):
        return np.argwhere(self.sorted_kguesses_hist[index][sub_byte] == kguess)[0][0]

    def pge(self):
        assert self.known_key is not None, "You must know the get to calculate the average PGE"
        return [self._pge(i, self.known_key[i]) for i in range(len(self.subkeys))]

    def run_with_progress(self, interval, progbar):
        pass

    def key_guess(self):
        return np.array(self.sorted_kguesses_hist[-1], dtype=np.uint8)[:,0]

    def key_recovered(self):
        return bool((self.key_guess() == self.known_key).all())

    def kguess_corrs(self):
        key = self.key_guess()
        return np.array([self.max_correlations_hist[-1][sub_byte][key[sub_byte]] for sub_byte in range(len(self.subkeys))])

    def corr_v_traces_plot(self, subkeys=None):
        import holoviews as hv
        from ..__init__ import plot
        if subkeys is None:
            subkeys = list(range(16))
        plt = plot()
        for i in subkeys:
            plt *= plot((self.traces_used_hist, self.highest_corr_v_traces(i, self.known_key[i]))).opts(color='black')
            plt *= plot((self.traces_used_hist, self.corr_v_traces(i)), label='Subkey {}'.format(i)).opts(color=hv.Palette('Spectral'))
            
        return plt.opts(title='Correlation v. Traces', xlabel='Traces used', ylabel='Correlation', legend_position='right', legend_limit=250, bgcolor='lightgray', height=800, width=1000)

    def corr_v_time_plot(self, subkeys=None):
        import holoviews as hv
        from ..__init__ import plot
        if subkeys is None:
            subkeys = list(range(16))
        plt = plot()
        for i in subkeys:
            plt *= plot(self.lowest_corr_v_time(i, self.known_key[i])).opts(color='black')
            plt *= plot(self.highest_corr_v_time(i, self.known_key[i])).opts(color='black')
            plt *= plot(self.corr_v_time(i), label='Subkey {}'.format(i)).opts(color=hv.Palette('Spectral'))
            
        return plt.opts(title='Correlation vs. Time', xlabel='sample', ylabel='correlation', legend_position='right', legend_limit=250, bgcolor='lightgray', height=800, width=1000)

    def pge_v_traces_plot(self, subkeys=None):
        import holoviews as hv
        from ..__init__ import plot
        if subkeys is None:
            subkeys = list(range(16))
        plt = plot()
        for i in subkeys:
            plt *= plot((self.traces_used_hist, self.pge_v_traces(i)), label='Subkey {}'.format(i)).opts(color=hv.Palette('Spectral'))
            
        return plt.opts(title='Partial Guessing Entropy v. Traces', xlabel='traces used', ylabel='PGE', legend_position='right', legend_limit=250, bgcolor='lightgray', height=800, width=1000)

    def __str__(self):
        rtn = {}
        rtn['leakage_function']
        rtn['project']
        rtn['num_traces']
        return str(rtn)


def _default_jupyter_callback(cpa, head = 6, fmt = "{:02X}<br>{:.3f}"):
    import pandas as pd # type: ignore
    from IPython.display import clear_output # type: ignore

    sub_byte = 0
    corrs = []
    fmt = "{:02X}<br>{:.3f}"
    head = 6

    # turn kguesses that match known_key red
    def colour_corr_key(row):
        ret = [""] * len(cpa.subkeys)
        #print(row)
        key = cpa.known_key[cpa.subkeys]
        for i,bnum in enumerate(row):
            #print(bnum, i)
            try:
                if (type(bnum) is int) or (type(bnum) is float):
                    continue
                if bnum['kguess'] == key[i]:
                    ret[i] = "color: red"
                else:
                    ret[i] = ""
            except Exception as e:
                print("bnum: {}, key: {}".format(bnum, key))
        return ret
                
    # format display as determined by fmt
    def format_stat(stat):
        if type(stat) is dict:
            return str(fmt.format(stat['kguess'], stat['corr']))
        return str(stat)

    # TODO: this should probably be something we do when updating correlations
    for sub_byte in range(len(cpa.subkeys)):
        # get sorted list of correlations
        corr = cpa.correlations[sub_byte]
        abscor = np.abs(corr)
        max_corr_loc = np.argmax(abscor, axis=0) # get location of max correlation for each kguess
        sorted_kguesses = cpa.sorted_kguesses_hist[-1][sub_byte] # get sorted kguesses
        max_corr = corr[max_corr_loc].diagonal()[sorted_kguesses] # get sorted correlations

        # for each correlation, do a dict of the correlation and the kguess
        rtn = []
        for i in range(len(max_corr)):
            rtn.append({'corr': max_corr[i], 'kguess': sorted_kguesses[i]})

        corrs.append(rtn)
        #corrs.append({'sub_byte': sub_byte, 'sorted_correlations': corr[max_corr_loc].diagonal()[sorted_kguesses], 'ranked_guesses': sorted_kguesses})
        #pd.DataFrame({'corr_{}'.format(sub_byte): corr[max_corr_loc].diagonal()[sorted_kguesses], 'index_{}'.format(sub_byte): sorted_kguesses})
        
    df_pge = pd.DataFrame([cpa._pge(i, cpa.known_key[cpa.subkeys[i]]) for i in range(len(cpa.subkeys))]).transpose().rename(index={0:"PGE="}, columns=int)
    df = pd.DataFrame(corrs).transpose()
    df = pd.concat([df_pge, df], ignore_index=False)
    if len(cpa.traces_used_hist) < 2:
        tstart = 0
    else:
        tstart = cpa.traces_used_hist[-2]
    tend = cpa.traces_used_hist[-1]
    clear_output(wait=True)
    chart = df.head(head).style.format(format_stat).apply(colour_corr_key, axis=1).set_caption("Finished traces {} to {} of {}".format(tstart, tend, cpa.num_traces))
    display(chart)
    # return chart

def get_table_cb(head = 6, fmt="{:02X}<br>{:.3f}"):
    """Get callback for use in Jupyter"""
    return lambda x : _default_jupyter_callback(x, head, fmt)