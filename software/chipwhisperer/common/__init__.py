import zarr

class TraceContainer:
    def __init__(self, trace, plaintext=None, ciphertext=None, key=None):
        self._trace = trace
        pass

class Project:
    def __init__(self, path, samples, num_traces=100, dtype='int32'):

        self._storage = zarr.create_group(store=path)
        self._traces = None
        self._plaintexts = None
        self._ciphertexts = None
        self._keys = None
        pass

    def append(self, trace):
        if type(trace) in [list, tuple]:
            pass
        pass

    def extend(self, project):
        pass

    def save(self, path):
        pass

    def traces(self):
        pass

    def plaintexts(self):
        pass

    def ciphertexts(self):
        pass

    def keys(self):
        pass

    def containers(self):
        pass