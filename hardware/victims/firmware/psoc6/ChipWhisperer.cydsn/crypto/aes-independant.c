/*
    This file is part of the AESExplorer Example Targets
    Copyright (C) 2012 Colin O'Flynn <coflynn@newae.com>

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "aes-independant.h"

#include "mbedtls/aes.h"

mbedtls_aes_context ctx;

void aes_indep_init(void)
{
	mbedtls_aes_init(&ctx);
}

void aes_indep_key(uint8_t * key)
{
	mbedtls_aes_setkey_enc(&ctx, key, 128);
}

void aes_indep_enc(uint8_t * pt)
{
	mbedtls_aes_crypt_ecb(&ctx, MBEDTLS_AES_ENCRYPT, pt, pt); /* encrypting the data block */
}
