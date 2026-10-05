import unittest
import numpy as np
import os, sys
import shutil
import random
from pathlib import Path
import tempfile
from zipfile import ZipFile

script_dir = os.path.dirname(os.path.realpath(__file__))
cw_dir = os.path.realpath('%s/../software' % script_dir)
sys.path.insert(1, cw_dir)

import chipwhisperer as cw
import chipwhisperer.common.utils.util as util
import chipwhisperer.analyzer as cwa
from chipwhisperer.analyzer import CPA, get_table_cb, leakage_models, key_schedule_rounds
from chipwhisperer.analyzer.mixcolumns_monobit import MixColumnsAttack, mixcolumns_cb
import itertools

N = 50
M = 5
T_LEN = 5000

def gen_proj(N, path=None, gen_pt=True, gen_ct=True, gen_key=True, *args, **kwargs):
    proj = cw.Project(path, *args, **kwargs)
    traces = np.random.randint(0, 4096, (N, T_LEN), dtype=np.int16)

    plaintexts = np.random.randint(0, 256, (N, 16), dtype=np.uint8) if gen_pt else [None] * N
    ciphertexts = np.random.randint(0, 256, (N, 16), dtype=np.uint8) if gen_ct else [None] * N
    keys = np.random.randint(0, 256, (N, 16), dtype=np.uint8) if gen_key else [None] * N
    for i in range(N):
        proj.append((traces[i], plaintexts[i], ciphertexts[i], keys[i]))

    return proj, traces, plaintexts, ciphertexts, keys

# TODO: Extend to do all tests with each missing field
def test_missing_field():
    l1 = ('gen_pt', 'gen_ct', 'gen_key')
    l2 = ('plaintext', 'ciphertext', 'key')
    l3 = ('plaintexts', 'ciphertexts', 'keys')
    for i in range(len(l1)):
        kwargs = {l1[i]: False}
        p = gen_proj(N, **kwargs)[0]
        assert (getattr(p, l3[i]) is None)
        assert (getattr(p[0], l2[i]) is None)
        

def test_append():
    proj, traces, plaintexts, ciphertexts, keys = gen_proj(N)

    assert((proj.traces == traces).all())
    assert((proj.plaintexts == plaintexts).all())
    assert((proj.ciphertexts == ciphertexts).all())
    assert((proj.keys == keys).all())

def test_extend_tuple():
    proj, traces, plaintexts, ciphertexts, keys = gen_proj(N)
    proj2, traces, plaintexts, ciphertexts, keys = gen_proj(N)

    proj.extend((traces, plaintexts, ciphertexts, keys))
    proj_equal(proj, proj2, slice(N, None))

def test_reduce():
    proj, traces, plaintexts, ciphertexts, keys = gen_proj(N)
    red_proj = proj.reduce(None, (0, N // 2))
    proj_equal(proj, red_proj, slice(0, N//2))
    ref_proj2 = proj.reduce((0, T_LEN // 2))
    assert(ref_proj2.trace_len == T_LEN//2)
    assert((ref_proj2.traces[:] == proj.traces[:,:T_LEN//2]).all())



def proj_equal(proj1, proj2, n1=None, n2=None):
    if n1 is None:
        n1 = slice(proj1.num_traces)
    if n2 is None:
        n2 = slice(proj2.num_traces)
    assert (proj1.traces[n1] == proj2.traces[n2]).all(), f"{proj1.traces[n1]} != {proj2.traces[n2]}"
    assert (proj1.plaintexts[n1] == proj2.plaintexts[n2]).all(), f"{proj1.plaintexts[n1]} != {proj2.plaintexts[n2]}"
    assert (proj1.ciphertexts[n1] == proj2.ciphertexts[n2]).all(), f"{proj1.ciphertexts[n1]} != {proj2.ciphertexts[n2]}"
    assert (proj1.keys[n1] == proj2.keys[n2]).all(), f"{proj1.keys[n1]} != {proj2.keys[n2]}"

def test_extend(N=10, M=5):
    proj_arr = []
    mproj = cw.Project()
    for i in range(M):
        proj = gen_proj(N)[0]
        proj_arr.append(proj)
        mproj.extend(proj)
        n1 = slice(i*N, (i+1)*N)
        n2 = slice(N*M)
        proj_equal(mproj, proj, n1, n2)

    for i in range(M):
        n1 = slice(i*N, (i+1)*N)
        n2 = slice(N*M)
        #print(mproj)
        #print(proj)
        
        proj_equal(mproj, proj_arr[i], n1, n2)

def test_save():
    with tempfile.TemporaryDirectory() as tmpname:
        # test saving seems to work
        proj = gen_proj(N, tmpname + "/test1")[0]
        try:
            proj2 = cw.open_project(tmpname + "/test1")
        except:
            print(tmpname)
            print(os.listdir("/tmp"))
            print(os.listdir(tmpname))
            print(os.listdir(tmpname + "/test1"))
            raise
        proj_equal(proj, proj2)

        # do an additional save
        proj.save(tmpname + "/test2")

        # this new project should be the same as the original
        proj3 = cw.open_project(tmpname + "/test2")
        proj_equal(proj, proj3)

        # but not if we change the original (proj2 actually will be the same)
        proj._group['traces'][0,0] = 1 # type: ignore
        proj_equal(proj, proj2)
        # try:
        #     test_eq(proj, proj3)
        #     # a little weird, raise a different error so that we can tell if above failed
        #     raise Warning("Dummy error")
        # except Exception as e:
        #     assert isinstance(e, AssertionError)

        # final test, zip save and open
        #proj.save('test.zip')
        #proj4 = cw.open_project('test.zip')
        zpath = Path(tmpname) / 'test.zip'
        #print(zpath)
        proj.save(zpath)
        proj4 = cw.open_project(zpath)
        proj_equal(proj, proj4)

class TestUtils(unittest.TestCase):
    _OBJ_HW_DICT = {
        False: 2,
        True: 4,
        2: 6,
    }

    _OBJ_HW_MAP = {
        2: False,
        4: True,
        6: 2,
    }

    _ENUM_HW_LIST = (
        2,
        4,
        6,
    )

    _ENUM_HW_MAP = {
        2: 0,
        4: 1,
        6: 2,
    }

    _OBJ_STR_DICT = {
        False: 'false',
        True: 'true',
        2: 'int',
    }

    _ENUM_STR_LIST = (
        'zero',
        'one',
        'two',
    )

    _OBJ_EXTRA_DICT = {
        None: False,
    }

    _ENUM_EXTRA_DICT = {
        None: 0,
    }

    _OBJ_TRANSLATE_DIRECT = util.ObjTranslationDirect.alloc_instance(
        _OBJ_STR_DICT,
        _OBJ_EXTRA_DICT
    )

    _ENUM_TRANSLATE_DIRECT = util.EnumTranslationDirect.alloc_instance(
        _ENUM_STR_LIST,
        _ENUM_EXTRA_DICT
    )

    _OBJ_TRANSLATE_HW = util.ObjTranslationToHW.alloc_instance(
        _OBJ_HW_DICT,
        _OBJ_STR_DICT,
        _OBJ_EXTRA_DICT
    )

    _ENUM_TRANSLATE_HW = util.EnumTranslationToHW.alloc_instance(
        _ENUM_HW_LIST,
        _ENUM_STR_LIST,
        _ENUM_EXTRA_DICT
    )

    _OBJ_TRANSLATE_API = util.ObjTranslationAPI.alloc_instance(
        _OBJ_HW_DICT,
        _OBJ_STR_DICT,
        _OBJ_EXTRA_DICT
    )

    _ENUM_TRANSLATE_API = util.EnumTranslationAPI.alloc_instance(
        _ENUM_HW_LIST,
        _ENUM_STR_LIST,
        _ENUM_EXTRA_DICT
    )

    _TEST_BFIELD = util.BitField(3, 2)

    def test_bytearray(self):
        arr = cw.bytearray([1, 2, 3])
        self.assertEqual(str(arr), "CWbytearray(b'01 02 03')")

        arr = cw.bytearray([14, 10, 2])
        self.assertEqual(str(arr), "CWbytearray(b'0e 0a 02')")

    @staticmethod
    def _iter_to_tuple(itr):
        tup = ()
        for val in itr:
            tup += ( val, )
        return tup

    def _test_obj_direct(self, conv):
        self.assertTrue(conv.is_valid_api(False))
        self.assertTrue(conv.is_valid_api(True))
        self.assertTrue(conv.is_valid_api(2))
        self.assertFalse(conv.is_valid_api(3))
        self.assertFalse(conv.is_valid_api(None))
        self.assertEqual(conv.try_var_to_api('false', -1), False)
        self.assertEqual(conv.try_var_to_api('true', -1), True)
        self.assertEqual(conv.try_var_to_api('int', -1), 2)
        self.assertEqual(conv.try_var_to_api(None, -1), False)
        self.assertEqual(conv.try_var_to_api(3, -1), -1)
        self.assertEqual(conv.api_to_str(False), 'false')
        self.assertEqual(conv.api_to_str(True), 'true')
        self.assertEqual(conv.api_to_str(2), 'int')

    def _test_obj_hw(self, conv):
        test_coll = {
            False: conv.api_to_hw(False),
            True: conv.api_to_hw(True),
            2: conv.api_to_hw(2),
        }
        self.assertEqual(test_coll, self._OBJ_HW_DICT)

        actual = self._iter_to_tuple(self._OBJ_HW_DICT.values())
        test_coll = self._iter_to_tuple(conv.hw_values())
        self.assertEqual(len(test_coll), len(actual))
        for key in actual:
            self.assertTrue(key in test_coll)

    def test_obj_direct(self):
        self._test_obj_direct(self._OBJ_TRANSLATE_DIRECT)

    def test_obj_hw(self):
        self._test_obj_direct(self._OBJ_TRANSLATE_HW)
        self._test_obj_hw(self._OBJ_TRANSLATE_HW)

    def test_obj_api(self):
        self._test_obj_direct(self._OBJ_TRANSLATE_API)
        self._test_obj_hw(self._OBJ_TRANSLATE_API)
        test_dict = {}
        for hw in self._OBJ_TRANSLATE_API.hw_values():
            test_dict[hw] = self._OBJ_TRANSLATE_API.try_hw_to_api(hw, -1)
        self.assertEqual(len(test_dict), len(self._OBJ_HW_MAP))
        self.assertEqual(test_dict, self._OBJ_HW_MAP)

    def _test_enum_direct(self, conv):
        self.assertTrue(conv.is_valid_api(0))
        self.assertTrue(conv.is_valid_api(1))
        self.assertTrue(conv.is_valid_api(2))
        self.assertFalse(conv.is_valid_api(-1))
        self.assertFalse(conv.is_valid_api(3))
        self.assertEqual(conv.try_var_to_api('zero'), 0)
        self.assertEqual(conv.try_var_to_api('one'), 1)
        self.assertEqual(conv.try_var_to_api('two'), 2)
        self.assertEqual(conv.try_var_to_api(None), 0)
        self.assertEqual(conv.try_var_to_api(-1), -1)
        self.assertEqual(conv.try_var_to_api(3), -1)
        self.assertEqual(conv.api_to_str(0), 'zero')
        self.assertEqual(conv.api_to_str(1), 'one')
        self.assertEqual(conv.api_to_str(2), 'two')

    def _test_enum_hw(self, conv):
        test_coll = (
            conv.api_to_hw(0),
            conv.api_to_hw(1),
            conv.api_to_hw(2),
        )
        self.assertEqual(test_coll, self._ENUM_HW_LIST)

        test_coll = self._iter_to_tuple(conv.hw_values())
        self.assertEqual(test_coll, self._ENUM_HW_LIST)

    def test_enum_direct(self):
        self._test_enum_direct(self._ENUM_TRANSLATE_DIRECT)

    def test_enum_hw(self):
        self._test_enum_direct(self._ENUM_TRANSLATE_HW)
        self._test_enum_hw(self._ENUM_TRANSLATE_HW)

    def test_enum_api(self):
        self._test_enum_direct(self._ENUM_TRANSLATE_API)
        self._test_enum_hw(self._ENUM_TRANSLATE_API)
        test_dict = {}
        for hw in self._ENUM_TRANSLATE_API.hw_values():
            test_dict[hw] = self._ENUM_TRANSLATE_API.try_hw_to_api(hw)
        self.assertEqual(len(test_dict), len(self._ENUM_HW_MAP))
        self.assertEqual(test_dict, self._ENUM_HW_MAP)

    def test_bfield(self):
        self.assertEqual(self._TEST_BFIELD.width, 3)
        self.assertEqual(self._TEST_BFIELD.pos, 2)
        self.assertEqual(self._TEST_BFIELD.value_mask, 0x7)
        self.assertEqual(self._TEST_BFIELD.extr_mask, 0x1C)
        self.assertEqual(self._TEST_BFIELD.clr_mask, ~0x1C)
        self.assertEqual(self._TEST_BFIELD.clr_field(0x3F), 0x23)
        self.assertEqual(self._TEST_BFIELD.extr_field(0x3F), 0x1C)
        self.assertEqual(self._TEST_BFIELD.make_field(0xF), 0x1C)
        self.assertEqual(self._TEST_BFIELD.extr_value(0x3F), 0x7)
        self.assertEqual(self._TEST_BFIELD.ins_field(0x37, 0x28), 0x2B)
        self.assertEqual(self._TEST_BFIELD.ins_value(0x37, 0xA), 0x2B)

def test_attack():
    proj = cw.open_project('./gold_ref.zip')
    cpa = CPA(proj, leakage_models.sbox_output, 16)
    cpa.run()

    print(cw.bytearray(cpa.key_guess()))
    print(cpa.kguess_corrs())
    assert (cpa.key_recovered())
    assert ((cpa.kguess_corrs() > 0.8).all())

    cpa.run(10)
    cpa.run(range(0, 50, 10))

def test_last_round_state_diff():
    proj = cw.open_project('f4_reduced.zip')
    cpa = CPA(proj, leakage_models.last_round_state_diff, 16)
    cpa.set_known_key(key_schedule_rounds(proj.keys[0], 0, 10))
    cpa.run()
    print(cw.bytearray(cpa.key_guess()))
    print(cpa.kguess_corrs())
    assert (cpa.key_recovered())

def test_mixcolumns():
    projects = []
    for i in range(4):
        project = cw.open_project(f"Var_Vec_red_{i}.zip")
        projects.append(project)
    cpa = MixColumnsAttack(projects)
    cpa.run()
    print(cw.bytearray(cpa.key_guess()))
    assert (cpa.key_recovered())



if __name__ == '__main__':
    unittest.main()
