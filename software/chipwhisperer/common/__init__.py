import zarr

class TraceContainer:
    def __init__(self, trace, plaintext=None, ciphertext=None, key=None, metadata=None):
        self.trace = trace
        self.plaintext = plaintext
        self.ciphertext = ciphertext
        self.key = key
        self.metadata = metadata
        pass

class Project:
    def __init__(self, path=None, num_traces=100, dtype='int32'):

        self._storage = zarr.create_group(store=path)
        pass

    def append(self, trace):
        if type(trace) is TraceContainer:
            pass
        pass

    def extend(self, project):
        pass

    def save(self, path):
        pass

    def traces(self):
        pass

    def plaintexts(self):
        return self._storage.plaintexts[:]

    def ciphertexts(self):
        return self._storage.ciphertexts[:]

    def keys(self):
        return self._storage.keys[:]

    def containers(self):
        rtn = []
        for i in range(len(self._storage.traces)):
            pass
        pass