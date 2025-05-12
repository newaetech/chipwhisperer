Simpleserial Documentation
==========================

SimpleSerial is the collective name for the protocols used for
communicating between ChipWhisperer Capture devices and ChipWhisperer
Target devices. The goal of these protocols is to both encode data and
allow the target device to utilize the data in different ways by way of
a command field.

In general, communication has the following steps:

1. Host PC sends a packet using ChipWhisperer's Python API
2. Capture device sends this packet over UART
3. Target receives the packet and decodes it
4. Target utilizes the data in a callback selected by the packet's
   command field
5. Target optionally sends data back
6. Target sends back an acknowledgement packet

There are two main versions of SimpleSerial, version 1.1 and version
2.1. **As version 1 and version 2 are both deprecated, version 1.1 and
version 2.1 will be referred to as V1 and V2 for the rest of this
document.**

V1 is simpler, but less robust and transfers data slower. It encodes
data as hexadecimal ASCII characters, such that ``0x1A`` would be sent
as ``'1'``, ``'A'`` (``[0x31, 0x41]``). This makes it fairly human
readable if converted to an ASCII string.

V2 is more complicated, but is much faster and has additional features,
such as variable length commands and a CRC. It leaves data as is, except
for Consistent Overhead Byte Stuffing (COBS), which replaces all null
bytes (``0x00``). In V2, ``0x1A`` is sent directly as ``0x1A``, making
it less human readable if converted to an ASCII string.

In general, the API for V1 and V2 are designed to be as similar as
possible to make it easy to switch between them.

SimpleSerial V1 can send a maximum of 64 bytes of data per packet.
SimpleSerial V2 can send a maximum of 249 bytes per packet.

Basic Usage
-----------

Python Initialization
~~~~~~~~~~~~~~~~~~~~~

To initialize SimpleSerial V1 Python communication, do the following:

.. code:: python

   import chipwhisperer as cw
   scope = cw.scope() # connect to scope
   scope.default_setup() # Setup sane defaults for clock, IO, etc.
   target = cw.target(scope, cw.targets.SimpleSerial)

To initialize SimpleSerial V2 Python communication, do the following:

.. code:: python

   import chipwhisperer as cw
   scope = cw.scope() # connect to scope
   scope.default_setup() # Setup sane defaults for clock, IO, etc.
   target = cw.target(scope, cw.targets.SimpleSerial2)

C Initialization
~~~~~~~~~~~~~~~~

To initialize both V1 and V2 from C, add the following calls to
``main()``:

.. code:: c

   // required for hardware setup
   platform_init();
   init_uart();

   // always required
   simpleserial_init();

To use V1, specify ``SS_VER=SS_VER_1_1`` when building firmware. To use
V2, specify ``SS_VER=SS_VER_2_1``. For example, building for V2 on our
STM32F3 target:

.. code:: bash

   make PLATFORM=CW308_STM32F3 SS_VER=SS_VER_2_1

Sending Data from Python
~~~~~~~~~~~~~~~~~~~~~~~~

After initializing SimpleSerial, you can send a packet using
``simpleserial_write()``:

.. code:: python

   cmd = 'a'
   data = list(range(16)) # [0, 1, 2, ..., 15]
   target.simpleserial_write(cmd, data)

``cmd`` **must be an ASCII letter or number in V1, but can be any 8-bit
number besides 0x00 in V2.**

Receiving Data in C
~~~~~~~~~~~~~~~~~~~

Receiving a packet is a little more involved. There are three things you
must do to receive a packet:

1. Create a callback function
2. Register that callback function using ``simpleserial_addcmd()``
3. Wait for a packet using ``simpleserial_get()``.

In V1, the callback function has the following form:

.. code:: c

   uint8_t my_callback(uint8_t *data, uint8_t dlen)
   {
       return ERROR_CODE; // 0x00 for success, other for error
   }

In V2, the callback function has the following form:

.. code:: c

   uint8_t my_callback(uint8_t cmd, uint8_t scmd, uint8_t dlen, uint8_t *data)
   {
       return ERROR_CODE; //0x00 for success, 0x01 to 0x0F reserved, other for error
   }

In both cases, after returning from your callback, an acknowledgement
packet will be sent back to the Capture device. For V1, ``'z'`` is used
as the command for the ack, while ``'e'`` is used for V2.

Your callback can be registered in both V1 and V2 in ``main()`` by
``simpleserial_addcmd()``:

.. code:: c

   uint8_t cmd = 'a';
   uint8_t cmd_len = 16;
   simpleserial_addcmd(cmd, cmd_len, my_callback);

**By default, V1 does not support variable length commands, so V1 will
ignore all packets that don't send** ``cmd_len`` **bytes of data unless
specified as a variable length command.**

To wait for a packet, use ``simpleserial_get()`` after registering your
commands:

.. code:: c

   while (1) simpleserial_get();

``simpleserial_get()`` **blocks until a packet is received, so your
target device won't be able to do anything between calling**
``simpleserial_get()`` **and receiving a packet.**

Sending Data in C
~~~~~~~~~~~~~~~~~

Data can be sent from a target device to a PC using
``simpleserial_put()``:

.. code:: c

   uint8_t cmd = 'r';
   uint8_t data[16] = {0};
   uint8_t dlen = SIZEOF(data);
   simpleserial_put(cmd, dlen, data);

In V1, ``cmd`` must be an ASCII letter, with ``'z'`` being reserved for
acknowledgement packets. In V2, ``cmd`` can be any 8-bit number besides
``0x00`` and ``'e'``, with the latter being used for acknowledgement
packets.

``simpleserial_put()`` is typically used from a callback function with
the ``'r'`` command.

Receiving Data in Python
~~~~~~~~~~~~~~~~~~~~~~~~

Packets sent with ``simpleserial_put()`` can be received in Python by
calling ``target.simpleserial_read()``. For example, the ``'r'`` packet
above can be received as follows:

.. code:: python

   rtn = target.simpleserial_read('r', 16)
   print(rtn) # should be a bytearray of lenth 16

Acknowledgement Packets
^^^^^^^^^^^^^^^^^^^^^^^

As previously mentioned, each time the target returns from a
SimpleSerial callback function, it also sends an acknowledgement packet.
You must read this packet after each ``simpleserial_write()``. By
default, ``target.simpleserial_read()`` will also look for an
acknowledgement packet:

.. code:: python

   target.simpleserial_write('a', data)
   data = target.simpleserial_read('r', 16)

You can skip the acknowledgement check by passing ``ack=False`` to
``simpleserial_read()``. You can also read the acknowledgement packet
using ``target.simpleserial_wait_ack()``. Combining the two:

.. code:: python

   target.simpleserial_write('a', data)
   data = target.simpleserial_read('r', 16, ack=False)
   rtn = target.simpleserial_wait_ack()

Reserved Commands
-----------------

V1
~~

In SimpleSerial V1, the following commands are reserved for
Capture->Target communication:

-  ``'v'`` Get SimpleSerial version (len=0)
-  ``'y'`` Get the number of SimpleSerial commands on the target
-  ``'w'`` Get SimpleSerial commands

``'z'`` is reserved for Target->Capture communication.

V2
~~

In SimpleSerial V2, the following commands are reserved for
Capture->Target communication:

-  ``'v'`` Get SimpleSerial version
-  ``'w'`` Get SimpleSerial commands

``'e'`` is reserved for Target->Capture communication.

Reserved Errors
-----------------

V2
~~

The following error codes (for acknowledgement packets) are reserved:

.. code::

    0x00 - OK
    0x01 - Invalid command
    0x02 - Bad CRC
    0x03 - Timeout
    0x04 - Invalid length
    0x05 - Unexpected frame byte (0x00)
    0x06 - Reserved
    ...
    0x0F - Reserved

Functions are free to use any other error codes. 

Advanced Usage
--------------

Using the C Preprocessor to Support Multiple SimpleSerial Versions
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

V1 and V2 support can be swapped at compile time by using the ``SS_VER``
define. If V1 is used, this define will equal ``SS_VER_1_1``, while if
V2 is used it will equal ``SS_VER_2_1``. For example:

.. code:: c

   #if SS_VER == SS_VER_2_1
   uint8_t my_callback(uint8_t cmd, uint8_t scmd, uint8_t dlen, uint8_t *data)
   #else
   uint8_t my_callback(uint8_t *data, uint8_t dlen)
   #endif
   {
       return 0x00;
   }

Using SimpleSerial Outside of ChipWhipserer's HAL
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

SimpleSerial can be used in other projects by including
``Makefile.simpleserial`` from ``firmware/mcu/simpleserial`` in your
makefile and defining the following function signatures in a file called
``hal.h``:

-  ``char getch();`` - this function is used to receive characters and
   must block until a character is received
-  ``void putch(char c);`` - this function is used to send characters

The implementation of these functions is up to you, so long as
``getch()`` blocks.

Using V2's Additional Features
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Variable Length Commands
^^^^^^^^^^^^^^^^^^^^^^^^

Variable length commands are supported without any additional
requirement in C or Python. The length of the data sent is always passed
as the third parameter to your callback (called ``len`` in this
document). For example:

.. code:: c

   uint8_t get_key(uint8_t cmd, uint8_t scmd, uint8_t dlen, uint8_t *buf)
   {
       if (len == 16) {/* AES128 stuff */}
       else if (len == 32) {/* AES256 stuff */}
       return 0x00;
   }

Sub Commands
^^^^^^^^^^^^

In addition to the main ``cmd`` field, there's an additional byte,
``scmd``, which is passed to your callback function. This field can be
useful for changing behaviour of callbacks. For example, you can use
``scmd`` when transferring large amounts of data to indicate which chunk
of data this packet is, or use ``scmd`` to change between encryption and
decryption:

.. code:: c

   uint8_t get_pt(uint8_t cmd, uint8_t scmd, uint8_t dlen, uint8_t *buf)
   {
       if (scmd == 0x00) {/*Do AES encryption*/}
       else if (scmd == 0x01) {/*Do AES decryption*/}
       return 0x00;
   }

You can specify ``scmd`` in Python using the ``send_cmd()`` method:

.. code:: python

   target = cw.target(scope, cw.targets.SimpleSerial2)
   target.send_cmd('p', 0x00, data) # encryption
   target.send_cmd('p', 0x01, data) # decryption

V1 variable length commands
~~~~~~~~~~~~~~~~~~~~~~~~~~~

As ChipWhisperer 6.1, you can use V1 variable length commands by registering a callback
in C using ``simpleserial_addcmd_flags()``:

.. code:: c

    uint8_t get_key(uint8_t *data, uint8_t len)
    {
        if (len == 16) {/* AES128 stuff */}
        else if (len == 32) {/* AES256 stuff */}
    }


    simpleserial_addcmd_flags('k', 16, get_key, CMD_FLAG_LEN);

You can send variable length commands in Python by specifying ``var_len=True`` when
calling ``simpleserial_write()``:

.. code:: python

    target.simpleserial_write('k', key, var_len=True)

.. warning:: You must manually keep track of variable length and non-variable length commands
    in V1 and mixing them up will cause communication errors.

Protocol Details
----------------

SimpleSerial Version 1.1
~~~~~~~~~~~~~~~~~~~~~~~~

SimpleSerial V1 is a communication protocol, typically run on serial
lines at 38400bps 8n1. There are three parts of each packet:

.. code:: python

   cmd = 'a'
   data = [1, 3, 255]
   packet = bytearray([cmd] + ascii(data) + ['\n'])

Where ``cmd`` is an ASCII character and ``data`` is a list containing
values from 0 to 255. In this case, the above packet would be encoded to
be
``['a', '0', '1', '0', '3', 'F', 'F', '\n']``/``[0x61, 0x30, 0x31, 0x30, 0x33, 0x46, 0x46, 0x0A]``.

.. _variable-length-commands-1:

Variable Length Commands
^^^^^^^^^^^^^^^^^^^^^^^^

If the target registers the command as variable length using
``simpleserial_addcmd_flags()``, an additional ``dlen`` field will be
present:

.. code:: python

   cmd = 'a'
   data = [1, 3, 255]
   dlen = "{:02X}".format(len(data))
   packet = bytearray([cmd] + dlen + ascii(data) + ['\n'])

In this case, the above packet would be encoded to be
``['a', '0', '3', '0', '1', '0', '3', 'F', 'F', '\n']``/``[0x61, 0x30, 0x33, 0x30, 0x31, 0x30, 0x33, 0x46, 0x46, 0x0A]``.

SimpleSerial Version 2.1
~~~~~~~~~~~~~~~~~~~~~~~~

SimpleSerial V2 is a communication protocol, typically run on serial
lines at 230400bps 8n1. There are five parts of each packet:

.. code:: python

   cmd = 'a'
   scmd = 0x00
   data = [1, 3, 255]
   dlen = len(data)
   packet = [cmd, scmd, dlen] + data
   crc = CRC(packet, poly=0x4D)
   packet = bytearray(packet + [crc])

Where ``cmd`` is in the range ``[1, 255]``, ``scmd`` is in the range
``[0, 255]``, dlen is in the range ``[1, 249]``\ and ``data`` is a list
containing values from 0 to 255, and ``crc`` is a CRC calculated with
the polynomial ``0x4D`` . In this case, the above packet would be
encoded to be ``[0x61, 0x00, 0x03, 0x01, 0x03, 0xFF, 0xB9]``.

Note that packets sent from C are missing the ``scmd`` field.

Consistent Overhead Byte Stuffing
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Before being sent, the above packet is also encoded using Consistent
Overhead Byte Stuffing, which is a 3 step process:

1. A zero is added at the start of the packet:
   ``[0x00, 0x61, 0x00, 0x03, 0x01, 0x03, 0xFF, 0xB9]`` and after
   every run of 255 non-zero bytes
2. Each zero is replaced with the offset from that byte to the next
   zero. If there are no more zeros, the offset is instead to the end of
   the packet: ``[0x02, 0x61, 0x06, 0x03, 0x01, 0x03, 0xFF, 0xB9]``
3. A zero byte is added to the end of the packet if there are fewer than
   255 bytes from the final zero to the end of the packet:
   ``[0x02, 0x61, 0x06, 0x03, 0x01, 0x03, 0xFF, 0xB9, 0x00]``

API Documentation
-----------------

Python
~~~~~~

Please see our :ref:`SimpleSerial <api-target-simpleserial>` 
and :ref:`SimpleSerial2 <api-target-simpleserial2>` docs.

C
~

The following functions are defined by SimpleSerial:

``void simpleserial_init(void)``
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

This sets up the SimpleSerial module and prepares any internal commands.
It mostly there for future usage.

Example
'''''''

Calling it is as simple as:

.. code:: c

   #include  "simpleserial.h"

   // ..snip

   simpleserial_init();

``int simpleserial_addcmd(char cmd, unsigned int len, ss_funcptr callback)``
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

.. note: The C implementation of SimpleSerial can only hold a maximum of 16
    active commands.

Adds a listener on the target for a specific command.

Arguments
'''''''''

This function takes the following ordered arguments:

-  ``char cmd`` - the **command** the target needs to listen for
-  ``unsigned int len`` - the **amount of data bytes** expected. The max
   is 64 on V1 and 249 on V2.
-  ``ss_funcptr callback`` - the **handler** for the command.

On V1, ``ss_funcptr callback`` is defined as
``uint8_t (*callback)(uint8_t *data, uint8_t dlen)``. On V2, it is
defined as
``uint8_t (*callback)(uint8_t cmd, uint8_t scmd, uint8_t dlen, uint8_t *data)``.
These arguments correspond to their matching fields in SimpleSerial
packets. The return value is used for the acknowledgement packet sent
after the command is completed.

``simpleserial_addcmd`` returns 0 upon success or 1 if an error has
occurred. An error can occur if ``len`` is too large, or if too many
commands have been added.

Example
'''''''

.. code:: c

   #include "simpleserial.h"

   uint8_t set_key(uint8_t cmd, uint8_t scmd, uint8_t dlen, uint8_t* data)
   {
       // ...snip

       return 0;
   }

   uint8_t encrypt_plaintext(uint8_t cmd, uint8_t scmd, uint8_t dlen, uint8_t* data)
   {
       // ...snip

       return 0;
   }

   // ... snip

   simpleserial_addcmd('k', 16, set_key);
   simpleserial_addcmd('p', 16, encrypt_plaintext);

``void simpleserial_put(char cmd, uint8_t dlen, uint8_t *data)``
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Send a SimpleSerial packet.

.. _arguments-1:

Arguments
'''''''''

This function takes the following ordered arguments:

-  ``char cmd`` - the **command** for the capture board (e.g. ``'z'``
   for ack, or ``'e'`` for error).

-  ``uint8_t dlen`` - the **size of the data buffer**.

-  ``uint8_t* data`` - the **data buffer** of the packet send.

.. _example-1:

Example
'''''''

The following is a SimpleSerial V2 example (although this has no impact
on the usage of the ``simpleserial_put`` function).

.. code:: c

   #include "simpleserial.h"

   uint8_t encrypt_plaintext(uint8_t cmd, uint8_t scmd, uint8_t dlen, uint8_t* data)
   {
       // ...snip (do the actual encryption).

       // Send the result back to the capture board.
       simpleserial_put('r', 16, result_buffer);

       return 0;
   }

   // ... snip

   simpleserial_addcmd('p', 16, encrypt_plaintext);

``void simpleserial_get()``
^^^^^^^^^^^^^^^^^^^^^^^^^^^

Attempt to process a received command. If a packet from the capture
board is found relevant callback function(s) are called.

This is mostly used at the end of binaries to keep checking for commands
being check.

It might return without calling a callback for several reasons:

-  There are no handler listening to the command send.

-  The send packet is invalid. e.g. in SimpleSerial this could be due to
   data bytes not being in HexASCII format.

-  The data buffer has an unexpected length.

.. _example-2:

Example
'''''''

.. code:: c

   #include "simpleserial.h"

   // ...snip

   // Add a listener
   simpleserial_addcmd('p', 16, encrypt);

   // Keep check if a command was sent fitting one of the listeners.
   while(1)
       simpleserial_get();

``int simpleserial_addcmd_flags(char cmd, unsigned int len, ss_funcptr callback, uint8_t fl)``
^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

Add a listener for SimpleSerial that specifies additional flags for the
command. This call is only valid for V1 and can be used to specify
either a normal function (``fl == CMD_FLAG_NONE``), in which case the
call is equivalent to ``simpleserial_addcmd()``, or a variable length
command (``fl == CMD_FLAG_LEN``).

.. _example-3:

Example
'''''''

.. code:: c

   #include "simpleserial.h"

   uint8_t set_key(uint8_t* data, uint8_t dlen)
   {
       // ...snip
       if (dlen == 16) {/* Do AES128 stuff */}
       else if (dlen == 32) {/* Do AES256 stuff */}

       return 0;
   }

   uint8_t encrypt_plaintext(uint8_t* data, uint8_t dlen)
   {
       // ...snip

       return 0;
   }

   // ... snip

   simpleserial_addcmd_flags('k', 16, set_key, CMD_FLAG_LEN);
   simpleserial_addcmd_flags('p', 16, encrypt_plaintext, CMD_FLAG_NONE);

Deprecated Versions
-------------------

SimpleSerial V1.0
~~~~~~~~~~~~~~~~~

SimpleSerial V1.0 is the same as V1.1, except that it lacks the
acknowledgement packet.

SimpleSerial V2.0
~~~~~~~~~~~~~~~~~

SimpleSerial V2.0 is the same as V2.1, except that it uses a different
CRC (0xA6) than V2.1.
