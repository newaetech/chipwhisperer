#include "gost-magma.h"

// Стандартные S-блоки ГОСТ 28147-89
static const uint8_t SBOX[8][16] = {
    {12, 4, 6, 2, 10, 5, 11, 9, 14, 8, 13, 7, 0, 3, 15, 1},
    {6, 8, 2, 3, 9, 10, 5, 12, 1, 14, 4, 7, 11, 13, 0, 15},
    {11, 3, 5, 8, 2, 15, 10, 13, 14, 1, 7, 4, 12, 9, 6, 0},
    {12, 8, 2, 1, 13, 4, 15, 6, 7, 0, 10, 5, 3, 14, 9, 11},
    {7, 15, 5, 10, 8, 1, 6, 13, 0, 9, 3, 14, 11, 4, 2, 12},
    {4, 10, 9, 2, 13, 8, 0, 14, 6, 11, 1, 12, 7, 15, 5, 3},
    {7, 13, 10, 1, 0, 8, 9, 15, 14, 4, 6, 12, 11, 2, 5, 3},
    {13, 8, 14, 12, 7, 3, 9, 10, 1, 2, 0, 11, 6, 4, 5, 15}
};

// Быстрое преобразование F
static inline uint32_t magma_F(uint32_t data, uint32_t key) {
    uint32_t x = data + key;
    uint32_t result = 0;

    // Применение S-блоков
    for (int i = 0; i < 8; i++) {
        uint8_t nibble = (x >> (4 * i)) & 0xF;
        result |= (uint32_t)SBOX[i][nibble] << (4 * i);
    }

    // Циклический сдвиг на 11 бит влево
    return (result << 11) | (result >> (32 - 11));
}

void GOST_MAGMA_SetKey(magma_ctx_t* ctx, const uint8_t* key) {
    // Первые 8 ключей из исходного ключа
    for (int i = 0; i < 8; i++) {
        ctx->round_keys[i] = ((uint32_t)key[4 * i] << 24) |
            ((uint32_t)key[4 * i + 1] << 16) |
            ((uint32_t)key[4 * i + 2] << 8) |
            (uint32_t)key[4 * i + 3];
    }

    // Повторяем ключи 3 раза (24 раунда)
    for (int i = 8; i < 24; i++) {
        ctx->round_keys[i] = ctx->round_keys[i % 8];
    }

    // Обратный порядок для последних 8 раундов
    for (int i = 0; i < 8; i++) {
        ctx->round_keys[24 + i] = ctx->round_keys[7 - i];
    }
}

void GOST_MAGMA_Encrypt(const magma_ctx_t* ctx, uint8_t* block) {
    uint32_t left, right, temp;

    // Разделение блока на две части
    left = ((uint32_t)block[0] << 24) | ((uint32_t)block[1] << 16) |
        ((uint32_t)block[2] << 8) | block[3];
    right = ((uint32_t)block[4] << 24) | ((uint32_t)block[5] << 16) |
        ((uint32_t)block[6] << 8) | block[7];

    // 31 раунд преобразований
    for (int i = 0; i < 31; i++) {
        temp = left;
        left = right ^ magma_F(left, ctx->round_keys[i]);
        right = temp;
    }

    // Финальный раунд (без перестановки)
    right ^= magma_F(left, ctx->round_keys[31]);

    // Сборка результата
    block[0] = (left >> 24) & 0xFF;
    block[1] = (left >> 16) & 0xFF;
    block[2] = (left >> 8) & 0xFF;
    block[3] = left & 0xFF;
    block[4] = (right >> 24) & 0xFF;
    block[5] = (right >> 16) & 0xFF;
    block[6] = (right >> 8) & 0xFF;
    block[7] = right & 0xFF;
}

void GOST_MAGMA_Decrypt(const magma_ctx_t* ctx, uint8_t* block) {
    uint32_t left, right, temp;

    // Разделение блока
    left = ((uint32_t)block[0] << 24) | ((uint32_t)block[1] << 16) |
        ((uint32_t)block[2] << 8) | block[3];
    right = ((uint32_t)block[4] << 24) | ((uint32_t)block[5] << 16) |
        ((uint32_t)block[6] << 8) | block[7];

    // Обратные раунды
    for (int i = 0; i < 31; i++) {
        temp = left;
        left = right ^ magma_F(left, ctx->round_keys[31 - i]);
        right = temp;
    }

    // Финальный раунд
    right ^= magma_F(left, ctx->round_keys[0]);

    // Сборка результата
    block[0] = (left >> 24) & 0xFF;
    block[1] = (left >> 16) & 0xFF;
    block[2] = (left >> 8) & 0xFF;
    block[3] = left & 0xFF;
    block[4] = (right >> 24) & 0xFF;
    block[5] = (right >> 16) & 0xFF;
    block[6] = (right >> 8) & 0xFF;
    block[7] = right & 0xFF;
}

void GOST_MAGMA_ECB_Encrypt(magma_ctx_t* ctx, const uint8_t* in, uint8_t* out, size_t len) {
    for (size_t i = 0; i < len; i += MAGMA_BLOCK_SIZE) {
        memcpy(out + i, in + i, MAGMA_BLOCK_SIZE);
        GOST_MAGMA_Encrypt(ctx, out + i);
    }
}

void GOST_MAGMA_ECB_Decrypt(magma_ctx_t* ctx, const uint8_t* in, uint8_t* out, size_t len) {
    for (size_t i = 0; i < len; i += MAGMA_BLOCK_SIZE) {
        memcpy(out + i, in + i, MAGMA_BLOCK_SIZE);
        GOST_MAGMA_Decrypt(ctx, out + i);
    }
}