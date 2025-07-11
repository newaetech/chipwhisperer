#include "gost-magma-independant.h"
#include "gost-magma.h"
#include "hal.h"

uint8_t magma_key[MAGMA_KEY_LENGTH];

void gost_magma_init(void) {
    ;
}

void gost_magma_key(uint8_t* key) {
    memcpy(magma_key, key, MAGMA_KEY_LENGTH);
    GOST_MAGMA_SetKey(key);
}

void gost_magma_enc(uint8_t* block) {
    GOST_MAGMA_Encrypt(block);
}

void gost_magma_enc_pretrigger(uint8_t* block) {
    ;
}

void gost_magma_enc_posttrigger(uint8_t* block) {
    ;
}

void gost_magma_mask(uint8_t* m, uint8_t len) {
}