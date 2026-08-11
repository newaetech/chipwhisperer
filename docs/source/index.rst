************
Introduction
************

Welcome for the documentation for ChipWhisperer's sca101 branch, made specifically 
for our SCA101 course, available at https://learn.chipwhisperer.io/courses/sca101. This documentation has been slimmed down
for this course, so if you're not doing the course, we recommend that you switch to the develop branch.

Some of the content has moved from where it was before. If you can't find the
page that you're looking for, use the **Search** feature on the left. 

If you're new to ChipWhisperer, the SCA101 course is a great way to get started!

The :ref:`installation <install>` sections have everything you need to know to
install ChipWhisperer. We also have installation videos available at https://www.youtube.com/@NewaeTech

To connect and setup your ChipWhisperer Husky:

.. code:: python

    >>> import chipwhisperer as cw
    >>> scope = cw.scope()
    >>> scope
        cwhusky Device
        sn             = 50203120314136503230393139303030
        fpga_buildtime = 12/11/2024, 12:33
        fw_version = 
            major = 1
            minor = 7
            debug = 0

    scope.default_setup()
    ...


You now have access to an object-oriented interface to configure the attached
hardware. To see what is possible with this interface check out the
:ref:`scope section <api-scope>` of the API documentation.

Need help? Check out the :doc:`support page <support>`.

Explore the other sections in the left-side index to learn everything you can
do with ChipWhisperer.