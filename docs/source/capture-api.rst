
.. _capture-api:

***********************
Capture and Project API
***********************

This page documents the included helper functions and classes
for capturing, storing, and plotting traces.

.. _api-project:

Project
=======

The ChipWhisperer project is a simple way of storing your traces and related data. It's a fairly thin
wrapper over a Zarr group and so behaves a lot like one. To create a new Project::

    import chipwhisperer as cw
    proj = cw.Project()
    proj.save("/path/to/proj") # end with .zip for zip file

You can also open an existing project::

    proj = cw.open_project("/path/to/project")


.. autoclass:: chipwhisperer.common.project.Project
    :members:


.. _api-capture-helpers:

Capture
=======

Before capturing a trace make sure:

#. The :ref:`scope <api-scope>` has been connected.
#. The :ref:`scope <api-scope>` is configured.
#. The :ref:`target <api-target>` has been connected.
#. The :ref:`target <api-target>` is configured.
#. The :ref:`target <api-target>` has been :ref:`programmed <api-target-program>`
   with the correct firmware.

Once you completed these steps you can use the
:func:`capture_trace <chipwhisperer.capture_trace>` function to complete a
capture of one trace. There are some helper classes that generate types of
:ref:`key text patterns <api-capture-ktp>` for input to the
:func:`capture_trace <chipwhisperer.capture_trace>` function. The function
will return a :ref:`TraceContainer <api-capture-trace>`.


.. autofunction:: chipwhisperer.capture_trace

.. _api-capture-trace:

TraceContainer
==============

This class is a simple way of grouping a power trace and related data. It's the preferred
way of passing single traces around in ChipWhisperer and is returned by 
:func:`capture_trace <chipwhisperer.capture_trace>`.

You can easily construct a TraceContainer by passing the relevant fields::

    cont = cw.TraceContinaer(trace, plaintext, ciphertext, key)


.. autoclass:: chipwhisperer.common.project.TraceContainer
    :members:

.. versionadded:: 7.0
    Added Trace class.


.. _api-capture-ktp:

Key Text Patterns
=================

Currently ChipWhisperer supports a single class for generating key text pairs:

* :class:`chipwhisperer.capture.acq_patterns.basic.AcqKeyTextPattern_Basic`

.. _api-capture-ktp-basic:

Basic
-----

.. autoclass:: chipwhisperer.capture.acq_patterns.basic.AcqKeyTextPattern_Basic
    :members:

This class is also available as a simple iterator::

    N = 100
    for key, text, n in cw.ktp.BasicIt(N):
        pass