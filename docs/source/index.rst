************
Introduction
************

Welcome for the documentation for ChipWhisperer's power101 branch, made specifically 
for our Power Analysis 101 course, available at learn.chipwhisperer.io. This documentation has been slimmed down
for this course, so if you're not doing the course, we recommend that you switch to the develop branch.

Some of the content has moved from where it was before. If you can't find the
page that you're looking for, use the **Search** feature on the left.

If you're new to ChipWhisperer, the Power Analysis 101 course is a great way to get started!

The :ref:`installation <install>` sections have everything you need to know to
install ChipWhisperer. We also have installation videos available at https://www.youtube.com/@NewaeTech

After setting up your :doc:`hardware <Capture/index>`, run:

.. code:: python

    >>> import chipwhisperer as cw
    >>> scope = cw.scope()
    >>> scope
    cwlite Device
    gain =
        mode = low
        gain = 0
        db   = -6.5
    adc =
        state      = False
        basic_mode = low
        timeout    = 2
        offset     = 0
    ...


You now have access to an object-oriented interface to configure the attached
hardware. To see what is possible with this interface check out the
:ref:`scope section <api-scope>` of the API documentation.

If you're not sure what to do next, the :ref:`starting <starting>` section
will point you in the right direction.

Need help? Check out the :doc:`support page <support>`.

Explore the other sections in the left-side index to learn everything you can
do with ChipWhisperer.