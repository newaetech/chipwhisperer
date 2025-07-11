TARGET = simpleserial-magma

SRC += simpleserial-magma.c
SRC += ../../crypto/magma/gost-magma.c 
SRC += ../../crypto/magma/gost-magma-independant.c

EXTRA_OPTS = NO_EXTRA_OPTS
CFLAGS += -D$(EXTRA_OPTS)

# Crypto target
CRYPTO_TARGET = MAGMA
${info Building for platform ${PLATFORM} with CRYPTO_TARGET=$(CRYPTO_TARGET)}

# Platform-specific includes
ifeq ($(PLATFORM),CW303)
  CDEFS += -DHWCRYPTO=1
  CFLAGS += -I../../hal/xmega
endif

# Include common rules
include ../simpleserial/Makefile.simpleserial
FIRMWAREPATH = ../..
include $(FIRMWAREPATH)/Makefile.inc