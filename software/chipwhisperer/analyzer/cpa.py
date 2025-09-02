import numpy as np
from numba import njit

def generate_hw_table():
    ret = []
    for i in range(256):
        ret.append(bin(i).count('1'))
    return np.array(ret, dtype=np.uint8)

hw_table = generate_hw_table()

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

class CPA:

    def __init__(self, project, leakage_model, num_subkeys):
        self.trace_len = project.traces.shape[1]
        self.kguesses = 255
        self.traces_used = 0
        self.subkeys = num_subkeys
        self.num_traces = project.num_traces

        pt_array = np.swapaxes(project.plaintexts, 0, 1)
        ct_array = np.swapaxes(project.ciphertexts, 0, 1)
        assert pt_array.shape[0] == self.subkeys

        self.trace_array = project.traces
        
        self.pt_array = pt_array
        self.reset()
        
        self.known_key = None
        self.ct_array = None
        
        self.correlations = None
        self.leakage_model = leakage_model
        self.gen_hyp()

        self.known_key = np.array(project.keys[0])

    def reset(self):
        self.th_sum = np.zeros((self.subkeys, self.trace_len, self.kguesses), dtype=np.int64)
        self.tsum = np.zeros((self.trace_len), dtype=np.int64)
        self.hsum = np.zeros((self.subkeys, self.kguesses), dtype=np.int64)
        
        self.t2_sum = np.zeros((self.trace_len), dtype=np.int64)
        self.h2_sum = np.zeros((self.subkeys, self.kguesses), dtype=np.int64)
        self.hyp_array = np.zeros((self.subkeys, self.pt_array.shape[1], self.kguesses), dtype=np.uint8)
        self.sorted_kguesses_hist = []
        self.traces_used_hist = []
        self.max_correlations_hist = []
        pass

    def leakage_model(self, leakage_model):
        self.leakage_model = leakage_model
        self.gen_hyp()

    def gen_hyp(self):
        for subkey in range(self.subkeys):
            self.hyp_array[subkey] = self.leakage_model(self.pt_array[subkey])
    
    def update_state(self, start, stop):
        self.traces_used += stop - start
        self.traces_used_hist.append(self.traces_used)
        
        # calculate sum of t
        self.tsum += sum_t_or_h(self.trace_array[start:stop])
        
        #print(self.trace_array[start:stop])
        # calculate sum of t^2
        self.t2_sum += np.sum(np.square(self.trace_array[start:stop], dtype=np.int64), axis=0)
        
        for subkey in range(self.subkeys):
            # calculate sum of h*d
            self.th_sum[subkey] += calc_th_array(self.trace_array[start:stop], self.hyp_array[subkey][start:stop])
            
            # calculate sum of h
            self.hsum[subkey] += sum_t_or_h(self.hyp_array[subkey][start:stop])

            # calculate sum of h^2
            self.h2_sum[subkey] += np.sum(np.square(self.hyp_array[subkey][start:stop], dtype=np.int64), axis=0)

    
    def calculate_correlation(self):
        # TODO important: only record the max correlation for each kguess
        # or could just get rid of corr v traces plot
        corr = np.zeros((self.subkeys, self.trace_len, self.kguesses), dtype=np.float32)

        # calculate (sum of t) ^ 2
        t_sum2 = np.square(self.tsum, dtype=np.int64)

        # calculate trace sqrt for denominator
        sqrt_t = np.sqrt(-(t_sum2 - self.traces_used * self.t2_sum))
        
        for subkey in range(self.subkeys):
            # calculate numerator
            num = self.traces_used * self.th_sum[subkey] - mult_tsum_hsum(self.tsum, self.hsum[subkey])

            # calculate (sum of h) ^ 2
            h_sum2 = np.square(self.hsum[subkey], dtype=np.int64)
            dem = mult_tsum_hsum(\
                np.sqrt(-(h_sum2 - self.traces_used * self.h2_sum[subkey])),\
                sqrt_t\
            )
            with np.errstate(divide='ignore', invalid='ignore'):
                corr[subkey] = num / dem.transpose()
        np.nan_to_num(corr, copy=False)
        self.correlations = corr

    def _calc_sort_and_rank(self, index=-1):
        sorted_kguesses = []
        self.best_corrs = np.zeros((self.subkeys, self.kguesses), dtype=np.float32)
        for subkey in range(self.subkeys):
            abscor = np.abs(self.correlations[subkey])
            self.max_corr_loc = np.argmax(abscor, axis=0) # arguments of abscor sorted by max: arg_along_trace[-1] has the location in correlation of largest corr

            self.best_corrs[subkey] = abscor[self.max_corr_loc].diagonal()

            sorted_kguesses.append(np.flip(np.argsort(self.best_corrs[subkey])))
        self.max_correlations_hist.append(self.best_corrs)
        return sorted_kguesses

    def sort_and_rank(self):
        self.sorted_kguesses_hist.append(self._calc_sort_and_rank())
    
    def run(self, interval=None, callback=None):
        if interval is None:
            interval = self.num_traces
        for i in range(0, self.num_traces, interval):
            self.update_state(i, min(i + interval, self.num_traces))
            self.calculate_correlation()
            self.sort_and_rank()
            if callback:
                callback(self)

    def _corr_v_time(self, sub_byte, kguess):
        return self.correlations[sub_byte,:,kguess]

    def corr_v_time(self, sub_byte):
        return self._corr_v_time(sub_byte, self.known_key[sub_byte])

    def _corr_v_traces(self, sub_byte, kguess):
        maxes = []
        for corr in self.max_correlations_hist:
            maxes.append(np.abs(corr[sub_byte,kguess]))
        return maxes

    def corr_v_traces(self, sub_byte, abval=True):
        maxes = []
        for corr in self.max_correlations_hist:
            if abval:
                maxes.append(np.abs(corr[sub_byte, self.known_key[sub_byte]]))
            else:
                maxes.append(corr[sub_byte, self.known_key[sub_byte]])
        return maxes

    def highest_corr_v_traces(self, sub_byte, exclude=None):
        maxes = []
        for corr in self.max_correlations_hist:
            x = np.delete(corr, exclude, axis=1)
            maxes.append()
        pass

    def lowest_corr_v_traces(self, sub_byte, exclude=None):
        pass

    def highest_corr_v_time(self, sub_byte, exclude=None):
        maxes = []
        ncorr = self.correlations[sub_byte]
        if exclude is not None:
            ncorr = np.delete(ncorr, exclude, axis=1)
        return np.max(ncorr, axis=1)

    def lowest_corr_v_time(self, sub_byte, exclude=None):
        maxes = []
        ncorr = self.correlations[sub_byte]
        if exclude is not None:
            ncorr = np.delete(ncorr, exclude, axis=1)
        return np.min(ncorr, axis=1)

    def pge_v_traces(self, sub_byte):
        pges = []
        for i in range(len(self.sorted_kguesses_hist)):
            pges.append(self._pge(sub_byte, self.known_key[sub_byte], i))
        return pges

    def avg_pge(self):
        avgs = []
        for i in range(len(self.sorted_kguesses_hist)):
            avg = 0
            for j in range(self.subkeys):
                avg += self._pge(j, self.known_key[j], i)
            avg /= self.subkeys
            avgs.append(avg)
        return avgs

    def _pge(self, sub_byte, kguess, index=-1):
        return np.argwhere(self.sorted_kguesses_hist[index][sub_byte] == kguess)[0][0]

    def pge(self):
        return [self._pge(i, self.known_key[i]) for i in range(self.subkeys)]

    def run_with_progress(self, interval, progbar):
        pass

    def key_guess(self):
        return np.array(self.sorted_kguesses_hist[-1], dtype=np.uint8)[:,0]

    def key_recovered(self):
        return bool((self.key_guess() == self.known_key).all())

    def kguess_corrs(self):
        pass

    def corr_v_traces_plot(self, subkeys=None):
        pass

    def corr_v_time_plot(self, subkeys=None):
        pass

    def pge_v_traces_plot(self, subkeys=None):
        """Return a pge v traces plot object with sane labelling

        Args:
            subkeys (iterable or str)
        """
        pass

    def __str__(self):
        rtn = {}
        rtn['leakage_function']
        rtn['project']
        rtn['num_traces']

def _default_jupyter_callback(cpa, head = 6, fmt = "{:02X}<br>{:.3f}"):
    import pandas as pd # type: ignore
    from IPython.display import clear_output # type: ignore

    sub_byte = 0
    corrs = []
    fmt = "{:02X}<br>{:.3f}"
    head = 6

    # turn kguesses that match known_key red
    def colour_corr_key(row):
        ret = [""] * 16
        #print(row)
        key = cpa.known_key
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
    for sub_byte in range(len(cpa.correlations)):
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
        
    df_pge = pd.DataFrame([cpa._pge(i, cpa.known_key[i]) for i in range(cpa.subkeys)]).transpose().rename(index={0:"PGE="}, columns=int)
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

def get_jupyter_callback(head = 6, fmt="{:02X}<br>{:.3f}"):
    """Get callback for use in Jupyter"""
    return lambda x : _default_jupyter_callback(x, head, fmt)