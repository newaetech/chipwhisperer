# Hey Emacs, this is a -*- makefile -*-
#----------------------------------------------------------------------------
#
# Makefile for ChipWhisperer SimpleSerial-AES Program
#
#----------------------------------------------------------------------------
# On command line:
#
# make all = Make software.
#
# make clean = Clean out built project files.
#
# make coff = Convert ELF to AVR COFF.
#
# make extcoff = Convert ELF to AVR Extended COFF.
#
# make program = Download the hex file to the device, using avrdude.
#                Please customize the avrdude settings below first!
#
# make debug = Start either simulavr or avarice as specified for debugging,
#              with avr-gdb or avr-insight as the front end for debugging.
#
# make filename.s = Just compile filename.c into the assembler code only.
#
# make filename.i = Create a preprocessed source file for use in submitting
#                   bug reports to the GCC project.
#
# To rebuild project do "make clean" then "make all".
#----------------------------------------------------------------------------

# Target file name (without extension).
# This is the name of the compiled .hex file.
TARGET = loopback

# List C source files here.
# Header files (.h) are automatically pulled in.
SRC += simpleserial-base.c

# -----------------------------------------------------------------------------

ifeq ($(CRYPTO_OPTIONS),)
CRYPTO_OPTIONS = AES128C
endif

CRYPTO_TARGET=NONE

PLATFORM=CWHUSKY

SS_VER=SS_VER_2_1

#Add simpleserial project to build

FIRMWAREPATH = ../../../firmware/mcu
include $(FIRMWAREPATH)/simpleserial/Makefile.simpleserial
include $(FIRMWAREPATH)/Makefile.inc

