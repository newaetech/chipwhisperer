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

        self._storage = zarr.create_group()
        self._path = path
        self._has_plaintexts = False
        self._has_ciphertexts = False
        self._has_keys = False
        self._has_metadata = False
        self._len = 0
        pass

    def append(self, tracecontainer):
        if type(tracecontainer) is TraceContainer:
            trace = tracecontainer.trace
            plaintext = tracecontainer.plaintext
            ciphertext = tracecontainer.ciphertext
            key = tracecontainer.key
            metadata = tracecontainer.metadata

        if self._has_plaintexts:
            assert plaintext is not None
        if self._has_ciphertexts:
            assert ciphertext is not None
        if self._has_keys:
            assert key is not None

        i = self._len
        self._storage.plaintext[i][:] = plaintext[:]
        self._storage.ciphertext[i][:] = ciphertext[:]
        self._storage.keys[i][:] = key[i]
        self._len += 1
        pass

    def extend(self, project):
        pass

    def save(self, path):
        pass

    def traces(self):
        return self._storage.traces

    def plaintexts(self):
        return self._storage.plaintexts

    def ciphertexts(self):
        return self._storage.ciphertexts

    def keys(self):
        return self._storage.keys

    def _make_container(self, n):
        plaintext = None
        ciphertext = None
        key = None
        metadata = None

        if self._has_plaintexts:
            plaintext = self._storage.plaintexts[n]

        if self._has_ciphertexts:
            ciphertext = self._storage.ciphertexts[n]

        if self._has_keys:
            key = self._storage.ciphertexts[n]

        if self._has_metadata:
            metadata = self._storage.metadata[n]
        
        return TraceContainer(self._storage.traces[n], plaintext, ciphertext, key, metadata)

    # iterator
    def containers(self):
        for i in range(len(self._storage.traces)):
            yield self._make_container(i)