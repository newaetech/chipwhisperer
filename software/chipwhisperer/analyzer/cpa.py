import numpy as np
from numpy import uint64
class CPA:
    def __init__(self):
        self._sum_h = None # sum of leakage guess for each subkey guess
        self._sum_h2 = None # sum of leakage guess squared for each subkey guess
        self._sum_t = None # sum of traces at each sample point
        self._sum_t2 = None # sum of traces squared at each sample point
        self._sum_th = None # sum of traces times guesses

        self._num_traces = 0
        self._trace_len = 0
        self._num_subkeys = 255

        self._traces = None
        self._plaintexts = None
        self._keys = None
        self._ciphertexts = None
        self._leakage_model = None
        pass

    def calculate_guesses(self):
        pass

    def update_correlations(self, traces, guesses):
        self._sum_h += np.sum(guesses, axis=2, dtype=uint64)
        self._sum_h2 += np.sum(np.square(guesses), axis=2, dtype=uint64)
        self._sum_t += np.resize(np.sum(traces, axis=0, dtype=uint64), (len(traces, len(traces[0]), self._num_subkeys)))
        self._sum_t2 += np.resize(np.sum(np.square(traces), axis=0, dtype=uint64), (len(traces, len(traces[0]), self._num_subkeys)))
        self._num_traces += len(traces)
        pass

    def return_correlation(self):
        numerator = (self._num_traces * self._sum_th - self._sum_h * self._sum_t)
        denominator = (np.square(self._sum_h) - self._num_traces * self._sum_h2) * \
            (np.square(self._sum_t) - self._num_traces * self._sum_t2)
        return numerator / denominator