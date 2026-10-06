from .cpa import CPA, AttackResults
from .leakage_models import sbox
import numpy as np
import copy

gal1=np.array(range(0,256), dtype='uint8')

gal2=np.array((
0x00,0x02,0x04,0x06,0x08,0x0a,0x0c,0x0e,0x10,0x12,0x14,0x16,0x18,0x1a,0x1c,0x1e,
0x20,0x22,0x24,0x26,0x28,0x2a,0x2c,0x2e,0x30,0x32,0x34,0x36,0x38,0x3a,0x3c,0x3e,
0x40,0x42,0x44,0x46,0x48,0x4a,0x4c,0x4e,0x50,0x52,0x54,0x56,0x58,0x5a,0x5c,0x5e,
0x60,0x62,0x64,0x66,0x68,0x6a,0x6c,0x6e,0x70,0x72,0x74,0x76,0x78,0x7a,0x7c,0x7e,
0x80,0x82,0x84,0x86,0x88,0x8a,0x8c,0x8e,0x90,0x92,0x94,0x96,0x98,0x9a,0x9c,0x9e,
0xa0,0xa2,0xa4,0xa6,0xa8,0xaa,0xac,0xae,0xb0,0xb2,0xb4,0xb6,0xb8,0xba,0xbc,0xbe,
0xc0,0xc2,0xc4,0xc6,0xc8,0xca,0xcc,0xce,0xd0,0xd2,0xd4,0xd6,0xd8,0xda,0xdc,0xde,
0xe0,0xe2,0xe4,0xe6,0xe8,0xea,0xec,0xee,0xf0,0xf2,0xf4,0xf6,0xf8,0xfa,0xfc,0xfe,
0x1b,0x19,0x1f,0x1d,0x13,0x11,0x17,0x15,0x0b,0x09,0x0f,0x0d,0x03,0x01,0x07,0x05,
0x3b,0x39,0x3f,0x3d,0x33,0x31,0x37,0x35,0x2b,0x29,0x2f,0x2d,0x23,0x21,0x27,0x25,
0x5b,0x59,0x5f,0x5d,0x53,0x51,0x57,0x55,0x4b,0x49,0x4f,0x4d,0x43,0x41,0x47,0x45,
0x7b,0x79,0x7f,0x7d,0x73,0x71,0x77,0x75,0x6b,0x69,0x6f,0x6d,0x63,0x61,0x67,0x65,
0x9b,0x99,0x9f,0x9d,0x93,0x91,0x97,0x95,0x8b,0x89,0x8f,0x8d,0x83,0x81,0x87,0x85,
0xbb,0xb9,0xbf,0xbd,0xb3,0xb1,0xb7,0xb5,0xab,0xa9,0xaf,0xad,0xa3,0xa1,0xa7,0xa5,
0xdb,0xd9,0xdf,0xdd,0xd3,0xd1,0xd7,0xd5,0xcb,0xc9,0xcf,0xcd,0xc3,0xc1,0xc7,0xc5,
0xfb,0xf9,0xff,0xfd,0xf3,0xf1,0xf7,0xf5,0xeb,0xe9,0xef,0xed,0xe3,0xe1,0xe7,0xe5), dtype='uint8')

gal3=np.array((
0x00,0x03,0x06,0x05,0x0c,0x0f,0x0a,0x09,0x18,0x1b,0x1e,0x1d,0x14,0x17,0x12,0x11,
0x30,0x33,0x36,0x35,0x3c,0x3f,0x3a,0x39,0x28,0x2b,0x2e,0x2d,0x24,0x27,0x22,0x21,
0x60,0x63,0x66,0x65,0x6c,0x6f,0x6a,0x69,0x78,0x7b,0x7e,0x7d,0x74,0x77,0x72,0x71,
0x50,0x53,0x56,0x55,0x5c,0x5f,0x5a,0x59,0x48,0x4b,0x4e,0x4d,0x44,0x47,0x42,0x41,
0xc0,0xc3,0xc6,0xc5,0xcc,0xcf,0xca,0xc9,0xd8,0xdb,0xde,0xdd,0xd4,0xd7,0xd2,0xd1,
0xf0,0xf3,0xf6,0xf5,0xfc,0xff,0xfa,0xf9,0xe8,0xeb,0xee,0xed,0xe4,0xe7,0xe2,0xe1,
0xa0,0xa3,0xa6,0xa5,0xac,0xaf,0xaa,0xa9,0xb8,0xbb,0xbe,0xbd,0xb4,0xb7,0xb2,0xb1,
0x90,0x93,0x96,0x95,0x9c,0x9f,0x9a,0x99,0x88,0x8b,0x8e,0x8d,0x84,0x87,0x82,0x81,
0x9b,0x98,0x9d,0x9e,0x97,0x94,0x91,0x92,0x83,0x80,0x85,0x86,0x8f,0x8c,0x89,0x8a,
0xab,0xa8,0xad,0xae,0xa7,0xa4,0xa1,0xa2,0xb3,0xb0,0xb5,0xb6,0xbf,0xbc,0xb9,0xba,
0xfb,0xf8,0xfd,0xfe,0xf7,0xf4,0xf1,0xf2,0xe3,0xe0,0xe5,0xe6,0xef,0xec,0xe9,0xea,
0xcb,0xc8,0xcd,0xce,0xc7,0xc4,0xc1,0xc2,0xd3,0xd0,0xd5,0xd6,0xdf,0xdc,0xd9,0xda,
0x5b,0x58,0x5d,0x5e,0x57,0x54,0x51,0x52,0x43,0x40,0x45,0x46,0x4f,0x4c,0x49,0x4a,
0x6b,0x68,0x6d,0x6e,0x67,0x64,0x61,0x62,0x73,0x70,0x75,0x76,0x7f,0x7c,0x79,0x7a,
0x3b,0x38,0x3d,0x3e,0x37,0x34,0x31,0x32,0x23,0x20,0x25,0x26,0x2f,0x2c,0x29,0x2a,
0x0b,0x08,0x0d,0x0e,0x07,0x04,0x01,0x02,0x13,0x10,0x15,0x16,0x1f,0x1c,0x19,0x1a), dtype='uint8')

w=0x00
lut_input_col = [[0, 1, 2, 3],
        [4, 5, 6, 7],
        [8, 9, 10, 11],
        [12, 13, 14, 15]]

lut_input_row = np.transpose(lut_input_col)

def inc_vec(x):
    for i in range(4):
        r = range(4*i, 4*i + 4)
        if x in r:
            x += 1
            if not (x in r):
                x = r[0]

    return x

def wrap_inc(x):
    if x >= 3:
        x = 0
    else:
        x += 1
    return x

base_lut_mix_column_col = [[0, 13, 10, 7],
                     [4, 1, 14, 11],
                     [8, 5, 2, 15],
                     [12, 9, 6, 3]] # lut to find which pt to xor with mixcolumn output

base_lut_mix_column_row = np.transpose(base_lut_mix_column_col) # lut to find which pt to xor with mixcolumn output

# generate luts for figuring out which pt input needs to be xor'd with the mixcol output for HD
lut_mix_column_col = [copy.deepcopy(base_lut_mix_column_col)]
lut_mix_column_row = [copy.deepcopy(base_lut_mix_column_row)]
for i in range(3):
    tmp = copy.deepcopy(lut_mix_column_col[i])
    tmp2 = copy.deepcopy(lut_mix_column_row[i])
    for j in range(4):
        for k in range(4):
            tmp[j][k] = inc_vec(tmp[j][k])
            tmp2[j][k] = inc_vec(tmp2[j][k])

    lut_mix_column_col.append(tmp)
    lut_mix_column_row.append(tmp2)

# let's do attack against byte 0
# NOTE: For row, 
def leak_0(pt, ct, subkey, bit, campaign=0, hd=True):
    lut = lut_mix_column_row[0].flatten('C')
    rtn = np.zeros((len(pt[0]), 256), dtype=np.uint8)
    if hd:
        diff = pt[lut[subkey]]
    else:
        diff = np.zeros(pt[lut[subkey]].shape)
    for kguess in range(256):
        rtn[:, kguess] = ((gal2[sbox[pt[subkey] ^ kguess]] ^ diff) >> bit) & 0x01
    return rtn

# let's do attack against byte 0
def leak_1(pt, ct, subkey, bit, campaign=0, hd=True):
    lut = lut_mix_column_row[1].flatten('C')
    rtn = np.zeros((len(pt[0]), 256), dtype=np.uint8)
    if hd:
        diff = pt[lut[subkey]]
    else:
        diff = np.zeros(pt[lut[subkey]].shape)
    for kguess in range(256):
        rtn[:, kguess] = ((sbox[pt[subkey] ^ kguess] ^ diff) >> bit) & 0x01
    return rtn

# let's do attack against byte 0
def leak_2(pt, ct, subkey, bit, campaign=0, hd=True):
    lut = lut_mix_column_row[2].flatten('C')
    rtn = np.zeros((len(pt[0]), 256), dtype=np.uint8)
    if hd:
        diff = pt[lut[subkey]]
    else:
        diff = np.zeros(pt[lut[subkey]].shape)
    for kguess in range(256):
        rtn[:, kguess] = ((sbox[pt[subkey] ^ kguess] ^ diff) >> bit) & 0x01
    return rtn

# let's do attack against byte 0
def leak_3(pt, ct, subkey, bit, campaign=0, hd=True):
    lut = lut_mix_column_row[3].flatten('C')
    rtn = np.zeros((len(pt[0]), 256), dtype=np.uint8)
    if hd:
        diff = pt[lut[subkey]]
    else:
        diff = np.zeros(pt[lut[subkey]].shape)
    for kguess in range(256):
        rtn[:, kguess] = ((gal3[sbox[pt[subkey] ^ kguess]] ^ diff) >> bit) & 0x01
    return rtn

class MultiLeakageMonoBitCPA(CPA):
    """CPA attack that attacks a single bit using multiple leakage models
    """
    def __init__(self, project, leakage_model, subkeys):
        if callable(leakage_model):
            leakage_model = [leakage_model]
        super().__init__(project, leakage_model, subkeys)
        self.corr_sum = None

    def reset(self):
        super().reset()
        self.additions = 0
        self.corr_sum = None
        
    def gen_hyp(self, model_num=0, bit=0, hd=True):
        """Generate hypotheticals for a single model and bit.

        Args:
            model_num (int): Model number to generate hypotheticals for
            bit (int): Bit to generate hypotheticals for
            hd (bool): Whether or not to use Hamming distance
        """
        for i in range(len(self.subkeys)):
            self.hyp_array[i] = self.leakage_model[model_num](self.pt_array, self.ct_array, self.subkeys[i], bit, hd=hd)

    def set_sample_range(self, start=None, stop=None, reset=True):
        """Change the sample range used in the CPA attack. Calling this function
        causes this class to reset and hypotheticals to be recalculated.

        Args:
            start (None, int): Sample to start attack at
            stop (None, int): Sample to stop attack at
        """
        if start is None:
            start = 0
        if stop is None:
            stop = self.project.trace_len
        assert start >= 0
        assert stop <= self.project.trace_len
        self._sample_range = slice(start, stop)
        if reset:
            self.reset()
            self.gen_hyp()

    def set_trace_range(self, start=None, stop=None, reset=True):
        """Change the range of traces used in the CPA attack. Calling this function
        causes this class to reset and hypotheticals to be recalculated.

        Args:
            start (None, int): Trace to start attack at
            stop (None, int): Trace to stop attack at
        """
        if start is None:
            start = 0
        if stop is None:
            stop = self.project.num_traces
        assert start >= 0
        assert stop <= self.project.num_traces
        self._trace_range = slice(start, stop)
        self.num_traces = stop - start
        self.reset()
        self.gen_hyp()
        if reset:
            self.reset()
            self.gen_hyp()

    def run(self, interval=None, callback=None, bit_range=range(8), model_range=range(4), reset=True, super_reset=True, hd=True):
        """Run a CPA attack against a range of bits using a range of models.

        NOTE: For monobit, we need to run this attack on each bit in the key 4 times across all the traces. The normal CPA state needs
        to be reset after each model, but we don't want to lose the correlation sum after each attack, so we only reset that if reset=True. If using
        a subset of traces, we also need to avoid doing any reset(), which is why the super_reset is there too.

        TODO: This model tries to account for the number of times corr_sum is updated via self.additions. This is a bit wonky with trace intervals
        and should probably be updated to only recalculate the full sum once super().reset() is called or something like that.
        """
        if reset:
            self.reset()

        if interval is None:
            interval = self.num_traces
        if isinstance(interval, int):
            interval = range(self._trace_range.start, self._trace_range.stop, interval)

        if bit_range is None:
            bit_range = range(8)

        if model_range is None:
            model_range = range(len(self.leakage_model))

        self.interval = interval
        
        for bit in bit_range:
            for model_num in model_range:
                # need to reset internal state a
                if super_reset:
                    super().reset() # need to reset internal state values
                self.gen_hyp(model_num, bit, hd)
                for i in range(interval.start, interval.stop, interval.step):
                    self._cur_model = model_num
                    self._cur_bit = bit
                    self.update_state(i, min(i + interval.step, self.num_traces))
                    self.calculate_correlation()
            
                    self.sort_and_rank()
                    self.additions += 1 # number of times corr_sum was updated
                    
                    if callback:
                        callback(self)
                

    def calculate_correlation(self):
        """Calculate correlation and update corr_sum with that correlation
        """
        super().calculate_correlation()
        if self.corr_sum is None:
            self.corr_sum = np.abs(np.array(self.correlations))
        else:
            self.corr_sum += np.abs(self.correlations)

    def _calc_sort_and_rank(self, bit=0):
        """Sort and rank using corr_sum instead of correlations
        """
        sorted_kguesses = []
        self.best_corrs = np.zeros((len(self.subkeys), self.kguesses), dtype=np.float64)
        for i in range(len(self.subkeys)):
            assert self.corr_sum is not None
            abscor = np.abs(self.corr_sum[i])
            self.max_corr_loc = np.argmax(abscor, axis=0) # arguments of abscor sorted by max: arg_along_trace[-1] has the location in correlation of largest corr

            self.best_corrs[i] = abscor[self.max_corr_loc].diagonal()

            sorted_kguesses.append(np.flip(np.argsort(self.best_corrs[i])))
        self.max_correlations_hist.append(self.best_corrs)
        return sorted_kguesses

class MixColumnsAttack:
    """Attacks across MixColumns using a row/column of variable plaintext/ciphertext and the rest constant.

    Uses 4 campaigns, each recovering 4 bytes of the key.

    WARNING: Does not currently support column vector attacks yet
    """
    def __init__(self, projects, vec_type='row', hd=True):
        if vec_type != 'row':
            raise ValueError("Column vector not yet supported!")
        self.subkeysarr4 = [[0, 4, 8, 12],
                    [1, 5, 9, 13],
                    [2, 6, 10, 14],
                    [3, 7, 11, 15]]
        self.attacks = [MultiLeakageMonoBitCPA(projects[i], (leak_0, leak_1, leak_2, leak_3), self.subkeysarr4[i]) for i in range(4)]
        # for attack in self.attacks:
        #     attack.set_trace_range(0, 1000)
        self.projects = projects
        self.known_key = projects[0].keys[0]
        self.num_traces = self.attacks[0].num_traces
        self.hd = hd

    def set_trace_range(self, start=None, stop=None):
        for attack in self.attacks:
            attack.set_trace_range(start, stop, False)

    def set_sample_range(self, start=None, stop=None):
        for attack in self.attacks:
            attack.set_sample_range(start, stop, False)
            
    def run(self, interval=None, callback=None, reset=True):
        """Run a MixColumns attack.

        Supports 
        """
        if interval is None:
            interval = self.attacks[0].num_traces
        if isinstance(interval, int):
            interval = range(self.attacks[0]._trace_range.start, self.attacks[0]._trace_range.stop, interval)

        self.interval = interval
        for bit in range(8):
            for model_num in range(4):
                for i in interval:
                    for attack in self.attacks:
                        attack.run(range(i, i+interval.step, interval.step),
                                   bit_range=range(bit, bit+1), model_range=range(model_num, model_num+1), reset=reset, 
                                   super_reset=(i==interval.start), hd=self.hd)
                    reset = False
                    self.correlations = np.zeros((attack.corr_sum.shape[0] * 4, attack.corr_sum.shape[1], attack.corr_sum.shape[2]))
                    self.sorted_kguesses_hist = [[]]
                    for j in range(4):
                        self.correlations[self.subkeysarr4[j]] += self.attacks[j].corr_sum[:]
                    for j in range(16):
                        self.sorted_kguesses_hist[-1].append(self.attacks[j % 4].sorted_kguesses_hist[-1][j // 4])
                        
                    #print(correlations)
                    self.subkeys = list(range(16))
                    self.traces_used_hist = attack.traces_used_hist
                    self._cur_model = model_num
                    self._cur_bit = bit
                    self._trace_range = slice(0, self.projects[0].num_traces)
                    self.corr_sum = self.correlations
                    self.additions = attack.additions
                    self.max_corr_loc = np.argmax(self.correlations, axis=1)
                    if callback:
                        callback(self)

    def _pge(self, sub_byte, kguess):
        return np.argwhere(self.sorted_kguesses_hist[-1][sub_byte] == kguess)[0][0]

    def key_guess(self):
        return np.array(self.sorted_kguesses_hist[-1])[:,0].tolist()

    def key_recovered(self):
        return (self.key_guess() == self.projects[0].keys[0]).all()

    def kguess_corrs(self):
        import numpy as np
        key = self.key_guess()
        return np.array( [self.correlations[sub_byte, self.max_corr_loc[sub_byte, key[sub_byte]],key[sub_byte]] 
                   / self.additions for sub_byte in range(16)] )

def mixcolumns_cb(cpa, head = 6, fmt = "{:02X}<br>{:.4f}", use_additions=True):
    import pandas as pd # type: ignore
    from IPython.display import clear_output # type: ignore

    sub_byte = 0
    corrs = []
    #fmt = "{:02X}<br>{:.3f}"
    #head = 6

    # turn kguesses that match known_key red
    def colour_corr_key(row):
        ret = [""] * len(cpa.subkeys)
        #print(row)
        key = cpa.known_key[cpa.subkeys]
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
    for sub_byte in range(len(cpa.subkeys)):
        # get sorted list of correlations
        corr = cpa.corr_sum[sub_byte]
        abscor = np.abs(corr)
        max_corr_loc = np.argmax(abscor, axis=0) # get location of max correlation for each kguess
        sorted_kguesses = cpa.sorted_kguesses_hist[-1][sub_byte] # get sorted kguesses
        max_corr = corr[max_corr_loc].diagonal()[sorted_kguesses] # get sorted correlations

        # for each correlation, do a dict of the correlation and the kguess
        rtn = []
        for i in range(len(max_corr)):
            corr = max_corr[i]
            if use_additions:
                corr /= cpa.additions
            rtn.append({'corr': corr, 'kguess': sorted_kguesses[i]})

        corrs.append(rtn)
        #corrs.append({'sub_byte': sub_byte, 'sorted_correlations': corr[max_corr_loc].diagonal()[sorted_kguesses], 'ranked_guesses': sorted_kguesses})
        #pd.DataFrame({'corr_{}'.format(sub_byte): corr[max_corr_loc].diagonal()[sorted_kguesses], 'index_{}'.format(sub_byte): sorted_kguesses})
        
    df_pge = pd.DataFrame([cpa._pge(i, cpa.known_key[cpa.subkeys[i]]) for i in range(len(cpa.subkeys))]).transpose().rename(index={0:"PGE="}, columns=int)
    df = pd.DataFrame(corrs).transpose()
    df = pd.concat([df_pge, df], ignore_index=False)
    if len(cpa.traces_used_hist) < 2:
        tstart = 0
    else:
        tstart = cpa.traces_used_hist[-2]
    tend = cpa.traces_used_hist[-1]
    clear_output(wait=True)
    if hasattr(cpa, '_cur_camp'):
        cur_camp = cpa._cur_camp
    else:
        cur_camp = 0
    chart = df.head(head).style.format(format_stat).apply(colour_corr_key, axis=1).set_caption("Finished traces {} to {} of {}, model {}, bit {}".format(tstart, tend, cpa.interval.stop, cpa._cur_model, cpa._cur_bit))
    display(chart)
    # return chart