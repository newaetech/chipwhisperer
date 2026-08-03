
.. _api-target:

**********
Target API
**********

The target object provides the interface for configuring the target device
under test (DUT). There are currently two UART communication classes:

* :ref:`api-target-simpleserial` (default)
* :ref:`api-target-simpleserial2`

The easiest way to create a target object is to use the :code:`chipwhisperer.target`
function:

.. code:: python

    import chipwhisperer as cw
    scope = cw.scope()
    target = cw.target(scope, cw.targets.SimpleSerial)


.. autodata:: chipwhisperer.target

Serial Targets
==============

.. _api-target-simpleserial:

Simple Serial Target
--------------------

38400bps ASCII encoded serial. See :doc:`simpleserial` for protocol documentation.::

    import chipwhisperer as cw
    scope = cw.scope()
    target = cw.target(scope)

.. autoclass:: chipwhisperer.targets.SimpleSerial
    :members:

.. _api-target-simpleserial2:

Simple Serial V2 Target
-----------------------

230400bps COBS serial. See :doc:`simpleserial` for protocol documentation.::

    import chipwhisperer as cw
    scope = cw.scope()
    target = cw.target(scope, cw.targets.SimpleSerial2)

.. autoclass:: chipwhisperer.targets.SimpleSerial2
    :members:

Simple Serial V2 CDC Target
---------------------------

Variant of :ref:`api-target-simpleserial2` that uses the ChipWhisperer's CDC serial port instead of
its custom USB interface.::

    import chipwhisperer as cw
    scope = cw.scope()
    target = cw.target(scope, cw.targets.SimpleSerial2_CDC) # autodetects COM (/dev/ttyACMx) port

.. autoclass:: chipwhisperer.targets.SimpleSerial2_CDC
    :members:


.. _api-target-program:

Serial Target Programming
=========================

ChipWhisperer includes built in bootloaders for the SAM4S target board.
This bootloader can be accessed via the 
:func:`chipwhisperer.program_target` function. There are multiple programmer
types available:

* :class:`programmers.STM32FProgrammer <chipwhisperer.capture.api.programmers.SAM4SProgrammer>`

Example::

    import chipwhisperer as cw
    # ...scope setup, firmware build, etc

    cw.program_target(scope, cw.programmers.SAM4SProgrammer, "/path/to/firmware.hex")


.. autofunction:: chipwhisperer.program_target