from chipwhisperer import analyzer
import zarr
import numpy as np
from ...logging import analyzer_logger
from typing import Optional, Type, Union, List, Any
from numpy.typing import ArrayLike
from ..utils.util import dict_to_str
import tempfile, shutil
from pathlib import Path
import os


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

    def __repr__(self):
        return str(self)

def _resize_func(arr):
    # default function to resize length of array when we're at the end of the current storage
    # by default doubles each time
    new_size = (arr.shape[0] * 2, arr.shape[1])
    arr.resize(new_size)

def open_project(path):
    path = Path(path)
    if path.suffix == '.zip':
        return open_zip(path)
    else:
        analyzer_logger.info("Opening zarr archive at {}".format(path))
        group = zarr.open_group(path, mode='r+')
        return Project(group)

def open_zip(path, ftype='zip'):
    path = Path(path)
    analyzer_logger.info("Opening file at {}".format(path))

    # extract to temp file
    with tempfile.TemporaryDirectory() as name:
        analyzer_logger.debug("Extracting to temporary directory {}".format(name))
        shutil.unpack_archive(path, name, ftype)
        group = zarr.open_group(name, mode='r+')
        tmp_proj = Project(group)
        new_proj = Project()
        new_proj.extend(tmp_proj)
        return new_proj
        
PROJ_PROPERTIES = ['len', 'size']
DATA_PROPERTIES = ['exists', 'len', 'dtype']
DATA_NAMES = ['traces', 'plaintexts', 'ciphertexts', 'keys']
CONTAINER_NAMES = ['trace', 'plaintext', 'ciphertext', 'key']
DEFAULT_DTYPES = ['int16', 'uint8', 'uint8', 'uint8']


class Project:
    """ChipWhisperer project for holding traces and interacting with Analyzer.

    To create a project in memory::

        import chipwhisperer as cw
        proj = cw.Project()
        cont = cw.TraceContainer(trace, pt, ct, key) # pt, ct, key optional
        proj.append(cont) # internal arrays created here

    To create a project on disk::

        proj = cw.Project('path/to/project')

    To save as a zip file::

        proj.save('path/to/file.zip') # .zip suffix used to detect zip save

    To access fields::

        proj.traces
        proj.plaintexts
        proj.ciphertexts
        proj.keys
        proj.containers # returns TraceContainer

    To open a saved project::

        cw.open_project('/path/to/project')

    This class is also printable as a string::

        print(proj) # shows metadata such as len, size, available fields, etc

    Args:
        group (zarr.Group, str, Optional): If a zarr.Group, assume a zarr group with self.PROJ_PROPERTIES as attrs
            and self.DATA_NAMES as arrays. If str, assume a path to create a zarr group at. If None, put project
            in memory. Defaults to None
        init_size (int, optional): Number of elements to create for initial arrays. Does nothing if a zarr.Group is passed
            to group. Defaults to 100
        dtypes (list, dict, optional): Datatypes to use for arrays if otherwise unspecified. Defaults to self.DEFAULT_DTYPES
        resize_func (func optional): Function to use when resizing arrays. Defaults to _resize_func (size doubling)
        overwrite (bool, optional): Whether or not to overwrite a project is you want to create and one already exists at your path
    """
    PROJ_PROPERTIES = PROJ_PROPERTIES
    DATA_NAMES = DATA_NAMES
    DATA_PROPERTIES = DATA_PROPERTIES
    CONTAINER_NAMES = CONTAINER_NAMES
    DEFAULT_DTYPES = DEFAULT_DTYPES

    def __init__(self, group : Optional[zarr.Group | str | Path]=None, init_size=100, dtypes=DEFAULT_DTYPES, \
                 resize_func=_resize_func, overwrite=False):
        self._initialized = True

        self._overwrite = overwrite

        # Three init options: zarr group, str (or path), and nothing
        if not group is None:
            # if str or path, create array at that path
            if isinstance(group, Path):
                group = str(group)
            if type(group) is str:
                analyzer_logger.info("Creating new zarr group at {}".format(group))
                self._initialized = False
                group = zarr.create_group(store=group)
            # otherwise, assume already initialized group
            elif type(group) is zarr.Group:
                analyzer_logger.info("Converting group to project")
                self._validate_group(group)
                self._initialized = True
            else:
                raise ValueError("Invalid type of group {}".format(type(group)))
        else:
            # if group is None, create in memory
            analyzer_logger.info("Creating zarr group in memory")
            self._initialized = False
            group = zarr.create_group(store={}, overwrite=self._overwrite)

        assert type(group) is zarr.Group # for typechecking
        self._group = group

        # TODO: refactor into metadata
        if type(dtypes) in (list, tuple):
            # if a
            self._dtypes = {}
            for i in range(len(DATA_NAMES)):
                self._dtypes[DATA_NAMES[i]] = dtypes[i]
        elif type(dtypes) is dict:
            # for name in DATA_NAMES:
            # if group.attrs[name]['exists']:
            #     assert name in dtypes
            self._dtypes = dtypes
        else:
            raise ValueError('Invalid dtype {}'.format(type(dtypes)))

        # initialize metadata
        if not self._initialized:
            # set to zero
            for prop in PROJ_PROPERTIES:
                self._group.attrs[prop] = 0
            # defaults for data metadata
            data_metadata = {'exists': 0, 'len': 0, 'dtype': None}
            for name in DATA_NAMES:
                self._group.attrs[name] = dict(data_metadata)

        self._init_size = init_size

        self._resize_func = resize_func
        self._path = None
        
        pass

    def _init_storage(self, tracecontainer: TraceContainer):
        if self._initialized:
            analyzer_logger.warning("PROJECT ALREADY INITIALIZED")

        storage = self._group
        fields = tracecontainer
        
        tarr_len = self._init_size
        for i in range(len(DATA_NAMES)):
            name = DATA_NAMES[i]
            cont_name = CONTAINER_NAMES[i]
            if fields[cont_name] is None:
                # NOTE: Have to be careful with modifying dict in attr
                tmp = self._group.attrs[name]
                assert type(tmp) is dict
                tmp['exists'] = 0
                self._group.attrs[name] = tmp

                self._dtypes[name] = None
            else:
                analyzer_logger.info("Has " + name)
                field_len = len(fields[cont_name]) # type: ignore
                storage.create_array(name=name, shape=(tarr_len, field_len), \
                                    chunks=(tarr_len, field_len), dtype=self._dtypes[name], compressors=None)
                self._group.attrs[name]['exists'] = 1 # type: ignore
                self._group.attrs[name]['len'] = field_len # type: ignore
                if hasattr(fields[cont_name], 'dtype'):
                    self._group.attrs[name]['dtype'] = str(fields[cont_name].dtype) # type: ignore
                else:
                    self._group.attrs[name]['dtype'] = str(self._dtypes[name]) # type: ignore
        
        self._initialized = True
        analyzer_logger.info("Project initialized")

    def save(self, path, ftype=None):
        """Save this project to a zip file or zarr directory

        If ftype is not specified (default), tries to determine save type via extension.

        Args:
            path (Path, str): Path to save project to
            ftype (str, Optional): Type to save project as. Can be None, 'zarr', 'zip', or
                other types supported by shutils.archive_export

        Returns:
            A new project if saving as a zarr type, or None
        """
        path = Path(path) # ensure path is Path
        if not ftype:
            if path.suffix == '.zip':
                ftype = 'zip'
            else:
                ftype = 'zarr'

        if ftype == 'zarr':
            analyzer_logger.info("Saving zarr array to {}".format(path))
            return self.export(path)
        else:
            analyzer_logger.info("Saving zip file to {}".format(path))
            self.archive_export(path, ftype)


    def archive_export(self, path : Path, exp_type='zip'):
        path = Path(path)
        if os.path.exists(str(path)):
            if (self._overwrite is False):
                raise OSError("File {} already exists!".format(path))
            else:
                os.remove(str(path))

        with tempfile.TemporaryDirectory() as tmpname:
            tmpproj = Project(tmpname)
            tmpproj.extend(self)

            final_path = path.parent / path.stem

            shutil.make_archive(str(final_path), exp_type, tmpname)
            print('saving to ' + path.stem)

    def export(self, path):
        path = str(path)
        new_proj = Project(path)
        new_proj.extend(self)
        return new_proj

    def _resize_all(self):
        for k in DATA_NAMES:   
            if self._group.attrs[k]['exists']: # type: ignore
                self._resize_func(self._group[k])
        self._group.attrs['size'] = self._group['traces'].shape[0] # type: ignore
        analyzer_logger.info("Resized project to {}".format(self.size))

    def append(self, tracecontainer):
        """Append a new TraceContainer to this project.

        Automatically resizes project if not enough space is available. Will attempt to
        convert to a tracecontainer if a Tuple or List is passed

        The fields of the TraceContainer must match the existing fields of this Project,
        meaning if this project has plaintexts, the TraceContainer must contain plaintext
        and vice versa.

        Args:
            tracecontainer (List, Tuple, TraceContainer): 
        """
        # handle data passed in as tuple
        if type(tracecontainer) in (tuple, list):
            tracecontainer = TraceContainer(*tracecontainer)

        assert type(tracecontainer) is TraceContainer

        if not self._initialized:
            self._init_storage(tracecontainer)

        # if we're at max of allocated storage, get some more
        if self.num_traces >= self.size:
            self._resize_all()
            analyzer_logger.info("Resized")

        for i in range(len(self.CONTAINER_NAMES)):
            cname = self.CONTAINER_NAMES[i]
            name = self.DATA_NAMES[i]
            val = tracecontainer[cname]

            # make sure fields match between us and tracecontainer
            if tracecontainer[cname] is None:
                if cname != 'key':
                    assert self._group.attrs[name]['exists'] == False # type: ignore
                continue
            assert self._group.attrs[name]['exists'] # type: ignore

            # assign data
            self._group[name][self.num_traces,:] = val # type: ignore
            
        # update our length
        tmplen = self._group.attrs['len']
        assert type(tmplen) is int
        tmplen += 1
        self._group.attrs['len'] = tmplen

    def _make_container(self, n) -> TraceContainer | List:
        plaintext = None
        ciphertext = None
        key = None

        parameters = [self.traces[n]]

        if self.plaintexts is not None:
            parameters.append(self.plaintexts[n])
        if self.ciphertexts is not None:
            parameters.append(self.ciphertexts[n])
        if self.keys is not None:
            parameters.append(self.keys[n])
        
        if type(n) is slice:
            rtn = []
            for p in zip(*parameters):
                rtn.append(TraceContainer(*p))
            return rtn
        else:
            return TraceContainer(*parameters)

    def extend(self, project):
        """Extends this project with another project

        Automatically resizes internal arrays if not enough space is available

        The fields of project must match the existing fields of this Project,
        meaning if this project has plaintexts, project must contain plaintexts
        and vice versa.

        Args:
            project (Project): Project to extend this project with.
        """
        if not self._initialized:
            self._init_storage(project[0])
            pass
        # resize until we can fit all the new data
        while self.size < (self.num_traces + project.num_traces):
            self._resize_all()

        # then copy over new data
        for name in DATA_NAMES:
            # check that field exists
            if self._group.attrs[name]['exists']: # type: ignore
                # if it does, copy to end of new data
                self._group[name][self.num_traces:(self.num_traces + project.num_traces)] = project._group[name][:project.num_traces] # type: ignore
            else:
                # if it doesn't make sure it doesn't exist in other project as well
                assert not project._group.attrs[name]['exists']
        self._group.attrs['len'] += project.num_traces

    #########################
    ###### PROPERTIES #######
    #########################

    @property
    def trace_len(self) -> int:
        """Get the length (in samples) of the traces in this project
        """
        return self._group['traces'].shape[1] # type: ignore


    @property
    def num_traces(self) -> int:
        """Get the number of traces in this project
        """
        return self._group.attrs['len'] # type: ignore

    @property
    def size(self) -> int:
        """Get the number of traces that can be held in this project without resizing

        Note that resizing is automatic and isn't typically an issue for most users
        """
        return self._group.attrs['size'] # type: ignore

    @property
    def traces(self) -> np.typing.NDArray:
        """Get all the traces in this project as a numpy array

        If you want to access these as a zarr array, access via project._group
        """
        return self._group['traces'][:self.num_traces] # type: ignore

    @property
    def has_plaintexts(self) -> bool:
        """True if this project has plaintexts, false if not
        """
        return self._group.attrs['plaintexts']['exists'] == 1 # type: ignore

    @property
    def plaintexts(self) -> np.typing.NDArray | None:
        """Get all the plaintexts in this project as a numpy array, or None if there aren't any

        If you want to access these as a zarr array, access via project._group
        """
        if self.has_plaintexts:
            return self._group['plaintexts'][:self.num_traces] # type: ignore
        else:
            return None

    @property
    def plaintext_len(self) -> int | None:
        """Get the length of the plaintexts, or None if there aren't any
        """
        if self.has_plaintexts:
            return self._group['plaintexts'].shape[1] # type: ignore
        else:
            return None

    @property
    def has_ciphertexts(self) -> bool:
        """True if this project has ciphertexts, false if not
        """
        return self._group.attrs['ciphertexts']['exists'] == 1 # type: ignore

    @property
    def ciphertexts(self) -> np.typing.NDArray | None:
        """Get all the ciphertexts in this project as a numpy array, or None if there aren't any

        If you want to access these as a zarr array, access via project._group
        """
        if self.has_ciphertexts:
            return self._group['ciphertexts'][:self.num_traces] # type: ignore
        else:
            return None

    @property
    def ciphertext_len(self) -> int | None:
        """Get the length of the ciphertexts, or None if there aren't any
        """
        if self.has_ciphertexts:
            return self._group['ciphertexts'].shape[1] # type: ignore
        else:
            return None

    @property
    def has_keys(self) -> bool:
        """True if this project has keys, false if not
        """
        return self._group.attrs['keys']['exists'] == 1 # type: ignore

    @property
    def keys_len(self) -> int | None:
        """Get the length of the keys, or None if there aren't any
        """
        if self.has_keys:
            return self._group['keys'].shape[1] # type: ignore
        else:
            return None

    @property
    def keys(self) -> np.typing.NDArray | None:
        """Get all the keys in this project as a numpy array, or None if there aren't any

        If you want to access these as a zarr array, access via project._group
        """
        if self.has_keys:
            return self._group['keys'][:self.num_traces] # type: ignore
        else:
            return None

    @property
    def metadata(self) -> dict:
        return dict(self._group.attrs)


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

    def _validate_group(self, group):
        assert type(group) is zarr.Group
        for name in self.DATA_NAMES:
            # assert group has all data fields
            assert name in group

            # assert metadata exists for all possible data fields
            assert (name in group.attrs) and (type(group.attrs[name]) is dict) 

            # and that it has the exists field
            name_data = group.attrs[name]
            assert (type(name_data) is dict) and (prop in name_data for prop in self.DATA_PROPERTIES)

            if name_data['exists']:
                # if the field 'exists', it shouldn't be none
                a = group[name]
                assert isinstance(a, zarr.Array)
                assert a.dtype == name_data['dtype']
                assert a.shape[1] == name_data['len']
            pass
            
        # make sure the other properties exist
        for prop in self.PROJ_PROPERTIES:
            assert prop in group.attrs