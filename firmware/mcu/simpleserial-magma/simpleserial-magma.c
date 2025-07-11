#include "gost-magma-independant.h"
#include "hal.h"
#include "simpleserial.h"
#include <stdint.h>
#include <stdlib.h>

// Контекст алгоритма MAGMA
static magma_ctx_t magma_ctx;
static uint16_t num_encryption_rounds = 32;  // Стандартное число раундов для MAGMA

uint8_t get_mask(uint8_t* m, uint8_t len) {
    // Реализация маскировки данных (защита от атак по побочным каналам)
    for (uint8_t i = 0; i < len; i++) {
        m[i] ^= 0x55;  // Простая XOR маскировка
    }
    return 0x00;
}

uint8_t get_key(uint8_t* k, uint8_t len) {
    if (len != MAGMA_KEY_SIZE) return SS_ERR_LEN;

    // Установка ключа в контекст
    GOST_MAGMA_SetKey(&magma_ctx, k);

    // Дополнительная защита ключа в памяти
    volatile uint8_t* vk = k;
    for (uint8_t i = 0; i < len; i++) {
        vk[i] = 0;
    }

    return 0x00;
}

uint8_t get_pt(uint8_t* pt, uint8_t len) {
    if (len != MAGMA_BLOCK_SIZE) return SS_ERR_LEN;

    // Претриггерные операции
    gost_magma_enc_pretrigger(pt);
    trigger_high();

    // Добавление джиттера для защиты от атак по времени
#ifdef ADD_JITTER
    for (volatile uint8_t k = 0; k < (*pt & 0x0F); k++);
#endif

    // Основное шифрование
    GOST_MAGMA_Encrypt(&magma_ctx, pt);

    // Посттриггерные операции
    trigger_low();
    gost_magma_enc_posttrigger(pt);

    // Отправка результата
    simpleserial_put('r', MAGMA_BLOCK_SIZE, pt);
    return 0x00;
}

uint8_t reset(uint8_t* x, uint8_t len) {
    // Сброс состояния (очистка контекста)
    memset(&magma_ctx, 0, sizeof(magma_ctx));
    num_encryption_rounds = 32;
    return 0x00;
}

uint8_t enc_multi_getpt(uint8_t* pt, uint8_t len) {
    if (len != MAGMA_BLOCK_SIZE) return SS_ERR_LEN;

    gost_magma_enc_pretrigger(pt);

    for (uint16_t i = 0; i < num_encryption_rounds; i++) {
        trigger_high();
        GOST_MAGMA_Encrypt(&magma_ctx, pt);
        trigger_low();

        // Добавление переменной задержки
#ifdef ADD_JITTER
        for (volatile uint8_t k = 0; k < (*pt & 0x03); k++);
#endif
    }

    gost_magma_enc_posttrigger(pt);
    simpleserial_put('r', MAGMA_BLOCK_SIZE, pt);
    return 0;
}

uint8_t enc_multi_setnum(uint8_t* t, uint8_t len) {
    if (len != 2) return SS_ERR_LEN;

    // Установка числа раундов с защитой от переполнения
    num_encryption_rounds = (t[0] << 8) | t[1];
    if (num_encryption_rounds > 1000 || num_encryption_rounds == 0) {
        num_encryption_rounds = 32;
    }

    return 0;
}

#if SS_VER == SS_VER_2_1
uint8_t magma(uint8_t cmd, uint8_t scmd, uint8_t len, uint8_t* buf) {
    uint8_t req_len = 0;
    uint8_t err = 0;
    uint8_t mask_len = 0;

    if (scmd & 0x04) {
        mask_len = buf[req_len];
        req_len += 1 + mask_len;
        if (req_len > len) return SS_ERR_LEN;
        err = get_mask(buf + req_len - mask_len, mask_len);
        if (err) return err;
    }

    if (scmd & 0x02) {
        req_len += MAGMA_KEY_SIZE;
        if (req_len > len) return SS_ERR_LEN;
        err = get_key(buf + req_len - MAGMA_KEY_SIZE, MAGMA_KEY_SIZE);
        if (err) return err;
    }

    if (scmd & 0x01) {
        req_len += MAGMA_BLOCK_SIZE;
        if (req_len > len) return SS_ERR_LEN;
        err = get_pt(buf + req_len - MAGMA_BLOCK_SIZE, MAGMA_BLOCK_SIZE);
        if (err) return err;
    }

    if (len != req_len) return SS_ERR_LEN;
    return 0x00;
}
#endif

int main(void) {
    // Инициализация с тестовым ключом по умолчанию
    uint8_t tmp[MAGMA_KEY_SIZE] = { DEFAULT_MAGMA_KEY };

    platform_init();
    init_uart();
    trigger_setup();

    // Инициализация контекста MAGMA
    GOST_MAGMA_SetKey(&magma_ctx, tmp);

    // Очистка временного ключа
    memset(tmp, 0, MAGMA_KEY_SIZE);

    simpleserial_init();

#if SS_VER == SS_VER_2_1
    simpleserial_addcmd(0x01, MAGMA_KEY_SIZE, magma);
#else
    simpleserial_addcmd('k', MAGMA_KEY_SIZE, get_key);
    simpleserial_addcmd('p', MAGMA_BLOCK_SIZE, get_pt);
    simpleserial_addcmd('x', 0, reset);
    simpleserial_addcmd_flags('m', 18, get_mask, CMD_FLAG_LEN);
    simpleserial_addcmd('s', 2, enc_multi_setnum);
    simpleserial_addcmd('f', MAGMA_BLOCK_SIZE, enc_multi_getpt);
#endif

    while (1) {
        simpleserial_get();
    }
}