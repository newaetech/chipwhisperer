import tqdm
def gen_iterator(ktp):
    """Shortcut function for making KTPIterators.
    
    The following::

        ktpiterator = gen_iterator(ktp_class)
        ktpiterator(N)

    is equivalent to::
    
        KTPIterator(ktp_class, N)

    Args:
        ktp (): ktp class to use for generator.

    Returns:
        Function
    """
    return lambda N, key_once=True: KTPIterator(ktp, N, key_once)

class KTPIterator:
    """
    """
    def __init__(self, ktp, N, key_once=True):
        self._ktp_class = ktp
        self._ktp = ktp()
        self._N = N
        self.is_first = False
        self.key_once = key_once

    def reset(self):
        self._ktp = self._ktp_class()

    def __iter__(self):
        self.is_first = False
        return self

    def __next__(self):
        key, text = self._ktp.next()
        self.is_first = True
        if self.key_once is True and self.is_first:
            key = None
        return key, text