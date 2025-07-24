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
        
        self.th_sum = np.zeros((self.subkeys, self.trace_len, self.kguesses), dtype=np.int64)
        self.tsum = np.zeros((self.trace_len), dtype=np.int64)
        self.hsum = np.zeros((self.subkeys, self.kguesses), dtype=np.int64)
        
        self.t2_sum = np.zeros((self.trace_len), dtype=np.int64)
        self.h2_sum = np.zeros((self.subkeys, self.kguesses), dtype=np.int64)
        
        self.trace_array = project.traces
        self.hyp_array = np.zeros((self.subkeys, pt_array.shape[1], self.kguesses), dtype=np.uint8)
        
        self.pt_array = pt_array
        
        self.known_key = None
        self.ct_array = None
        
        self.correlations = []
        self.leakage_model = leakage_model
        self.gen_hyp()
        self.corr_argsort = []
        self.sorted_kguesses_hist = []
        self.max_correlations = []

        self.sorted_kguesses = None

    def leakage_model(self, leakage_model):
        self.leakage_model = leakage_model
        self.gen_hyp()

    def gen_hyp(self):
        for subkey in range(self.subkeys):
            self.hyp_array[subkey] = self.leakage_model(self.pt_array[subkey])
    
    def update_state(self, start, stop):
        self.traces_used += stop - start
        
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
        corr = np.zeros((self.subkeys, self.trace_len, self.kguesses), dtype=np.float64)

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
            with np.errstate(divide='ignore'):
                corr[subkey] = num / dem.transpose()
        np.nan_to_num(corr, copy=False)
        self.correlations = corr

    def _update_sort_and_rank(self, index=-1):
        sorted_kguesses = []
        for subkey in range(self.subkeys):
            abscor = np.abs(self.correlations[index][subkey])
            max_corr_loc = np.argmax(abscor, axis=0) # arguments of abscor sorted by max: arg_along_trace[-1] has the location in correlation of largest corr

            max_per_kguess = abscor[max_corr_loc].diagonal()
            sorted_kguesses.append(np.flip(np.argsort(max_per_kguess)))

            # sorted_along_trace = np.take_along_axis(abscor, arg_along_trace, axis=0)
            # tp = np.transpose(sorted_along_trace)
            # arg_along_trace2 = np.argsort(tp, axis=0)
            # #sorted_along_trace2 = np.flip(np.take_along_axis(tp, arg_along_trace2, axis=0), axis=(0,1))
            # sorted_kguesses.append(np.flip(arg_along_trace2, axis=(0,1)))
        return sorted_kguesses

    def sort_and_rank(self):
        self.sorted_kguesses_hist.append(self._update_sort_and_rank(i))
    
    def run(self, interval=None):
        if interval is None:
            interval = self.num_traces
        for i in range(0, self.num_traces, interval):
            self.update_state(i, min(i + interval, self.num_traces))
            self.calculate_correlation()
        self.sort_and_rank()

    def _corr_v_time(self, sub_byte, kguess, index=-1):
        return self.correlations[index][sub_byte,:,kguess]

    def _corr_v_traces(self, sub_byte, kguess):
        maxes = []
        for corr in self.correlations:
            loc = np.argmax(np.abs(corr[sub_byte,:,kguess]))
            maxes.append(corr[sub_byte,loc,kguess])
        return maxes

    def _pge(self, sub_byte, kguess, index=-1):
        return np.argwhere(self.sorted_kguesses_hist[index][sub_byte] == kguess)

    def pge_v_traces(self, sub_byte):
        pass

    def run_with_progress(self, interval, progbar):
        pass

    def key_guess(self):
        pass

    def __str__(self):
        rtn = {}
        rtn['leakage_function']
        rtn['project']
        rtn['num_traces']