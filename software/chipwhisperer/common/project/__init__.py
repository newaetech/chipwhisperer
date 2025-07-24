# import zarr
import numpy as np

class TraceContainer:
    def __init__(self, trace, plaintext=None, ciphertext=None, key=None, metadata=None):
        self.trace = trace
        self.plaintext = plaintext
        self.ciphertext = ciphertext
        self.key = key
        self.metadata = metadata
        pass


    def __getitem__(self, k):
        assert type(k) is str
        if k == "plaintext":
            return self.plaintext
        if k == "ciphertext":
            return self.ciphertext
        if k == "key":
            return self.key
        if k == "trace":
            return self.trace
        else:
            raise KeyError("Unknown key {}".format(k))

    def __str__(self):
        return "trace: {}\nplaintext: {}\nciphertext: {}\nkey: {}\n".format(self.trace, self.plaintext, self.ciphertext, self.key)

def _resize_func(arr):
    # default function to resize length of array when we're at the end of the current storage
    # by default doubles each time
    new_size = (arr.shape[0] * 2, arr.shape[1])
    arr.resize(new_size)

def open_project(path, zip_in_ram=True):
    import zarr
    group = zarr.open_group(path)
    if path.endswith(".zip"):
        if zip_in_ram:
            new_store = zarr.storage.MemoryStore()
        else:
            pass
            # new_store = zarr.storage.LocalStore("tmp file")
        ngroup = group.from_store(new_store)
        group.close()
        group = ngroup
    project = Project(group)
    Project._path = path
    return Project
        

class Project:
    def __init__(self, group=None, num_traces=100, dtype='int16', pt_dtype='uint8', ct_dtype = 'uint8', key_dtype='uint8', \
                 pt_len=16, ct_len=16, key_len=16, resize_func=_resize_func):
        import zarr
        self._initialized = True
        if group:
            assert 'traces' in group
            assert 'plaintexts' in group
            assert 'ciphertexts' in group
            assert 'keys' in group
            self._initialized = True
            
            dtype = group['traces'].dtype
            pt_dtype = group['plaintexts'].dtype
            ct_dtype = group['ciphertexts'].dtype
            key_dtype = group['keys'].dtype
            
        if not group:
            self._initialized = False
            group = zarr.create_group(store={})
        self._tarr_len = num_traces
        self._dtype = dtype
        self._pt_dtype = pt_dtype
        self._ct_dtype = ct_dtype
        self._key_dtype = key_dtype
        self._num_traces = 0

        self._ptlen = pt_len
        self._ctlen = ct_len
        self._key_len = key_len
        self._resize_func = resize_func
        self._path = None
        
        self._group = group
        
        pass

    def _init_storage(self, trace, plaintext, ciphertext, key):
        if self._initialized:
            print("WARNING ALREADY INITIALIZED")

        storage = self._group
        
        trace_len = len(trace)
        tarr_len = self._tarr_len
        self._ptlen = len(plaintext)
        self._ctlen = len(ciphertext)
        self._keylen = len(key)
        
        
        storage.create_array(name='traces', shape=(tarr_len, trace_len), \
                             chunks=(tarr_len, trace_len), dtype=self._dtype, compressors=None)
        
        storage.create_array(name='plaintexts', shape=(self._tarr_len, len(plaintext)), \
                            chunks=(tarr_len, len(plaintext)), dtype=self._pt_dtype, compressors=None)
        
        storage.create_array(name='ciphertexts', shape=(self._tarr_len, len(ciphertext)), \
                            chunks=(tarr_len, len(ciphertext)), dtype=self._ct_dtype, compressors=None)
        
        storage.create_array(name='keys', shape=(self._tarr_len, len(key)), \
                            chunks=(tarr_len, len(key)), dtype=self._key_dtype, compressors=None)
        self._initialized = True
        pass

    def save(self, path):
        if path is None:
            pass
            #use self._path
        pass

    def _resize_all(self):
        for k in ['traces', 'keys', 'plaintexts', 'ciphertexts']:   
            self._resize_func(self._group[k])

    def append(self, tracecontainer):
        if type(tracecontainer) is tuple:
            pass

        if not self._initialized:
            self._init_storage(tracecontainer['trace'], tracecontainer['plaintext'], tracecontainer['ciphertext'], tracecontainer['key'])

        i = self._num_traces
        if self._num_traces >= self._group['traces'].shape[0]:
            self._resize_all()
            print("Resized")

        for l in ['trace', 'plaintext', 'ciphertext', 'key']:
            val = tracecontainer[l]
            if tracecontainer[l] is None:
                continue
                val = np.zeros(self._group[l+'s'][0].shape, dtype=self._group[l+'s'][0].dtype)
            self._group[l+'s'][i,:] = val
            
        self._num_traces += 1

        # note: by default, double array
        pass

    def extend(self, project):
        # TODO: arr.resize all arrays, then copy over
        pass

    def save(self, path):
        pass

    @property
    def trace_len(self):
        return self._group['traces'].shape[1]

    @property
    def num_traces(self):
        return self._num_traces

    @property
    def traces(self):
        return self._group['traces']

    @property
    def plaintexts(self):
        return self._group['plaintexts']

    @property
    def ciphertexts(self):
        return self._group['ciphertexts']

    @property
    def keys(self):
        return self._group['keys']

    def _make_container(self, n):
        plaintext = None
        ciphertext = None
        key = None
        metadata = None
        plaintext = self._group['plaintexts', n]
        ciphertext = self._group['ciphertexts', n]
        key = self._group['keys', n]
        
        return TraceContainer(self._group['traces'][n], plaintext, ciphertext, key, metadata)

    # iterator
    def containers(self):
        for i in range(self._num_traces):
            yield self._make_container(i)