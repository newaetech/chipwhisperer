#ifndef GOST_MAGMA_H
#define GOST_MAGMA_H

#include <stdint.h>
#include <stddef.h>

// Константы алгоритма
#define MAGMA_BLOCK_SIZE 8   // 64-битный блок (8 байт)
#define MAGMA_KEY_SIZE 32    // 256-битный ключ (32 байта)
#define MAGMA_ROUNDS 32      // 32 раунда шифрования

// Структура контекста
typedef struct {
    uint32_t round_keys[MAGMA_ROUNDS];  // Раундовые ключи
} magma_ctx_t;

// Основные функции
void GOST_MAGMA_SetKey(magma_ctx_t* ctx, const uint8_t* key);
void GOST_MAGMA_Encrypt(const magma_ctx_t* ctx, uint8_t* block);
void GOST_MAGMA_Decrypt(const magma_ctx_t* ctx, uint8_t* block);

// Режимы работы
void GOST_MAGMA_ECB_Encrypt(magma_ctx_t* ctx, const uint8_t* in, uint8_t* out, size_t len);
void GOST_MAGMA_ECB_Decrypt(magma_ctx_t* ctx, const uint8_t* in, uint8_t* out, size_t len);

// Совместимость с интерфейсом Кузнечика
#define GOST_ECB_indp_setkey(ctx, key) GOST_MAGMA_SetKey((ctx), (key))
#define GOST_ECB_indp_crypto(ctx, block) GOST_MAGMA_Encrypt((ctx), (block))

#endif // GOST_MAGMA_H