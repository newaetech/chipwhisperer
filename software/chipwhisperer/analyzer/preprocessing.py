from ..common.project import Project, TraceContainer
from ..common.utils.util import dict_to_str
from typing import Optional, Type, Union, List, Any
import numpy as np
from numba import njit

# TODO: Try out sliding window view for numpy
@njit
def find_min_sad(trace, ref, ref_range):    
    st = ref_range[0]
    end = ref_range[1]
    rlen = end-st
    tlen = len(trace)
    pattern = ref[st:end]
    final_sads = np.zeros((tlen-rlen), dtype=np.int32)
    for i in range(tlen-rlen):
        final_sads[i] = np.sum(np.abs(trace[i:i+rlen] - pattern))

    return np.argmin(final_sads), np.min(final_sads)

def sad_resync(trace, ref, ref_range):
    off, diff = find_min_sad(trace, ref, ref_range)
    #print(off)
    actual_offset = ref_range[0] - off
    new = np.array(ref)
    try:
        if actual_offset > 0:
            new[actual_offset:] = trace[:-actual_offset]
        elif actual_offset < 0:
            new[:actual_offset] = trace[-actual_offset:]
        else:
            new[:] = trace[:]
    except:
        print(off, diff, len(new), actual_offset)
        print(new)
        print(trace)
        raise
    return new

class SADTraceGetter:
    def __init__(self, proj: Project, orig_proj: Project, ref_trace, ref_range):
        self._proj = proj
        self._orig_proj = orig_proj
        self._ref_trace = ref_trace
        self._ref_range = ref_range

    def __getitem__(self, n):
        trace_max = n
        if n >= self._orig_proj.num_traces:
            raise ValueError("{} out of range (max {})".format(n, self._orig_proj.num_traces))
        if isinstance(n, slice):
            trace_max = n.stop
            #raise ValueError("Slice not net supported")

        # resync traces up to max requested
        if self._proj.num_traces < trace_max:
            for i in range(self._proj.num_traces, trace_max):
                new_trace = sad_resync(self._orig_proj.traces[i], self._ref_trace, self._ref_range)
                self._resync_proj.append((new_trace, self._proj.plaintexts[i], self._proj.ciphertexts[i], self._proj.keys[i]))

        return self._resync_proj.traces[n]

class ResyncSAD:
    """Resync traces by minimizing Sum of Absolute Difference between a reference trace subset and other traces

    Args:
        proj (cw.Project): The project to resynchronize
        ref_trace (np.NDArray): The reference trace to resync with
        ref_range (list): 2 position list or tuple containing the start and end of the resync range
    """
    def __init__(self, proj, ref_trace, ref_range):
        self._proj = proj
        self._ref_trace = ref_trace
        self._ref_range = ref_range
        self._resync_proj = Project()
        self._trace_getter = SADTraceGetter(self._resync_proj, proj, ref_trace, ref_range)
        pass

    def resync_all(self) -> Project:
        for i in range(self._proj.num_traces):
            new_trace = sad_resync(self._proj.traces[i], self._ref_trace, self._ref_range)
            self._resync_proj.append((new_trace, self._proj.plaintexts[i], self._proj.ciphertexts[i], self._proj.keys[i]))
        return self._resync_proj

    def trace_len(self):
        return self._proj.trace_len

    def num_traces(self):
        return self._proj.num_traces

    def size(self):
        return self._proj.size

    @property
    def traces(self):
        return self._trace_getter

    def has_plaintexts(self):
        return self._proj.has_plaintexts

    def plaintexts(self):
        return self._proj.plaintexts

    @property
    def plaintext_len(self) -> int | None:
        return self._proj.plaintext_len

    @property
    def has_ciphertexts(self) -> bool:
        """True if this project has ciphertexts, false if not
        """
        return self._proj.has_ciphertexts

    @property
    def ciphertexts(self) -> np.typing.NDArray | None:
        """Get all the ciphertexts in this project as a numpy array, or None if there aren't any

        If you want to access these as a zarr array, access via project._group
        """
        return self._proj.ciphertexts

    @property
    def ciphertext_len(self) -> int | None:
        """Get the length of the ciphertexts, or None if there aren't any
        """
        return self._proj.ciphertext_len

    @property
    def has_keys(self) -> bool:
        """True if this project has keys, false if not
        """
        return self._proj.has_keys

    @property
    def keys_len(self) -> int | None:
        """Get the length of the keys, or None if there aren't any
        """
        return self._proj.keys_len

    @property
    def keys(self) -> np.typing.NDArray | None:
        """Get all the keys in this project as a numpy array, or None if there aren't any

        If you want to access these as a zarr array, access via project._group
        """
        return self._proj.keys

    @property
    def metadata(self) -> dict:
        return self._proj.metadata

    # def _make_container(self, n) -> TraceContainer | List:
    #     pass

    # iterator
    def containers(self):
        for i in range(self.num_traces):
            yield self._make_container(i)

    def __str__(self):
        return dict_to_str(dict(self._group.attrs))

    def __repr__(self):
        return dict_to_str(dict(self._group.attrs))

    def __getitem__(self, k):
        return self._make_container(k)