************
Introduction
************

Welcome to the **new and improved** home of the documentation for the ChipWhisperer
software, Previously, documentation was spread across different sites; now
everything is right here on one site [#]_. We hope this will make our documentation
easier to navigate, and answers to your questions easier to find.

Some of the content has moved from where it was before. If you can't find the
page that you're looking for, use the **Search** feature on the left. You can also
navigate back in time to older versions of this site using ReadTheDocs's
versioning feature (see the small icon at the bottom right).

If you're new to ChipWhisperer, or haven't been following the project recently,
you may want to check out this :ref:`overview <getting_started>` to learn a little
about the project and its recent changes.

The :ref:`installation <install>` sections have everything you need to know to
install ChipWhisperer.

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

.. [#] One exception: since the Husky FPGA code lives in a `separate repository
   <https://github.com/newaetech/chipwhisperer-husky-fpga>`_, its documentation is at https://chipwhisperer-husky-fpga.readthedocs.io.

