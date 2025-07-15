#include "gost-magma-independant.h"
#include "hal.h"
#include "simpleserial.h"
#include <stdint.h>
#include <stdlib.h>

uint8_t get_mask(uint8_t* m, uint8_t len)
{
    gost_magma_mask(m, len);
    return 0x00;
}

uint8_t get_key(uint8_t* k, uint8_t len)
{
    gost_magma_key(k);
    return 0x00;
}

uint8_t get_pt(uint8_t* pt, uint8_t len)
{
    gost_magma_enc_pretrigger(pt);

    trigger_high();

#ifdef ADD_JITTER
    for (volatile uint8_t k = 0; k < (*pt & 0x0F); k++);
#endif

    gost_magma_enc(pt); /* encrypting the data block */
    trigger_low();

    gost_magma_enc_posttrigger(pt);

    simpleserial_put('r', 16, pt);
    return 0x00;
}

uint8_t reset(uint8_t* x, uint8_t len)
{
    // Reset key here if needed
    return 0x00;
}

static uint16_t num_encryption_rounds = 10;

uint8_t enc_multi_getpt(uint8_t* pt, uint8_t len)
{
    gost_magma_enc_pretrigger(pt);

    for (unsigned int i = 0; i < num_encryption_rounds; i++) {
        trigger_high();
        gost_magma_enc(pt);
        trigger_low();
    }

    gost_magma_enc_posttrigger(pt);
    simpleserial_put('r', 16, pt);
    return 0;
}

uint8_t enc_multi_setnum(uint8_t* t, uint8_t len)
{
    num_encryption_rounds = t[1];
    num_encryption_rounds |= t[0] << 8;
    return 0;
}

#if SS_VER == SS_VER_2_1
uint8_t gost(uint8_t cmd, uint8_t scmd, uint8_t len, uint8_t* buf)
{
    uint8_t req_len = 0;
    uint8_t err = 0;
    uint8_t mask_len = 0;
    if (scmd & 0x04) {
        mask_len = buf[req_len];
        req_len += 1 + mask_len;
        if (req_len > len) {
            return SS_ERR_LEN;
        }
        err = get_mask(buf + req_len - mask_len, mask_len);
        if (err)
            return err;
    }

    if (scmd & 0x02) {
        req_len += 16;
        if (req_len > len) {
            return SS_ERR_LEN;
        }
        err = get_key(buf + req_len - 16, 16);
        if (err)
            return err;
    }
    if (scmd & 0x01) {
        req_len += 16;
        if (req_len > len) {
            return SS_ERR_LEN;
        }
        err = get_pt(buf + req_len - 16, 16);
        if (err)
            return err;
    }

    if (len != req_len) {
        return SS_ERR_LEN;
    }

    return 0x00;
}
#endif

int main(void)
{
    uint8_t tmp[KEY_LENGTH] = { DEFAULT_KEY };

    platform_init();
    init_uart();
    trigger_setup();

    gost_magma_init();
    gost_magma_key(tmp);

    simpleserial_init();
#if SS_VER == SS_VER_2_1
    simpleserial_addcmd(0x01, 16, gost);
#else
    simpleserial_addcmd('k', 16, get_key);
    simpleserial_addcmd('p', 16, get_pt);
    simpleserial_addcmd('x', 0, reset);
    simpleserial_addcmd_flags('m', 18, get_mask, CMD_FLAG_LEN);
    simpleserial_addcmd('s', 2, enc_multi_setnum);
    simpleserial_addcmd('f', 16, enc_multi_getpt);
#endif
    while (1)
        simpleserial_get();
}