# Target Adapter Boards

We make a lot of target boards! They are all listed in this target section.
To make it easier to switch between different targets, to simplify the
design of new target boards, and to minimize their cost, *most* of the
targets we make[^1] require the use of a target *adapter* board. The target
adapter boards contains components that would otherwise be required on every
single target board.

We currently have two target adapter boards:
1. [CW308](CW308%20UFO)
2. [CW313](CW313)

![](Images/CW308T_Wiki.jpg)
![](Images/cw313_render.jpg)

The CW308 came first. All of the UFO targets listed [here](UFO%20Targets)
which are prefixed with "CW308" can be used directly with the CW308.

The CW313 was released as the same time as Husky and is intended as an
easier-to-use replacement (for most use cases). It uses an edge connector which makes it
much easier to swap targets. The UFO targets listed in the [UFO
Targets](UFO%20Targets) section of this site that are prefixed with "CW312"
can be used directly with the CW313. 

There is no typo here: "CW31**2**" targets with a "CW31**3**" target
adapter. This is because we intend to make a **CW312** target adapter board
which will have the same edge connector, but more features, to fully replace
the CW308. When the CW312 target adapter board becomes available, all the
targets you are using today with the CW313 target adapter will be directly
compatible with the CW312 adapter board.

## Compatibility

What about compatibility between the CW308-style targets and the CW312-style
targets? Don't worry: we've thought about that. With our [CW308 to CW312
adapter](CW308_CW312_adapter) (included with every Husky kit), you can use
your CW308-style targets with the CW313. You will have to do some soldering
(if you don't want your target permanently soldered to the CW312 form
factor, you can instead solder headers onto the adapter board, so that the
target itself can be manually removed).

This is possible because both the CW308 and CW313 use the same [20-pin
connector](../Capture/20-pin-connector). This means that you can use the
CW308 directly with Husky, or use the CW313 directly with CW-Lite or CW-Pro.

We don't provide an adapter for going the other way (CW312-style to
CW308-style), but [a customer has made one and open-sourced its design files](https://forum.newae.com/t/abductor-a-cw312-to-cw308-ufo-adapter-board/6514).


[^1]: The exceptions are our larger FPGA target boards: [CW305](CW305%20Artix%20FPGA), [CW310](CW310%20Bergen%20Board), [CW340](CW340%20Luna%20Board).

