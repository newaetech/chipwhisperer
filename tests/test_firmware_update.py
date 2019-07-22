import unittest

import chipwhisperer as cw


class TestCWLiteFirmwareUpdateInteractive(unittest.TestCase):

    def setUp(self):
        scope = cw.scope(scope_type=cw.scopes.OpenADC)
        self.programmer = cw.SAMFWLoader(scope=scope)
        self.scope = None

    def test_firmware_update(self):
        self.programmer.enter_bootloader(really_enter=True)
        input('Action required: Replugin the device. Press Enter when done...')
        port = input('Enter port: ')
        self.programmer.program(port, hardware_type='cwlite')

        input('Action required: Replugin the device. Press Enter when done...')
        # make sure the scope works
        self.scope = cw.scope()
        self.scope.dis()

    def test_firmware_update_invalid_inputs(self):
        # make sure rejects invalid types
        self.assertRaises(TypeError, self.programmer.program, port='foobar', hardware_type='invalid type')

        # make sure both cannot be specified
        self.assertRaises(TypeError, self.programmer.program, port='foobar', hardware_type='cwlite', fw_path='path')


if __name__ == '__main__':
    unittest.main()