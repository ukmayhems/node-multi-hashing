// Bmw512 Hashing

#include "bmw512.h"
#include <stdlib.h>
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include "sha3/sph_bmw.h"

void bmw512_hash(const char* input, char* output, uint32_t len)

{
        char outhash[64];

        sph_bmw512_context ctx_bmw;

        sph_bmw512_init(&ctx_bmw);
        sph_bmw512(&ctx_bmw, input, 80);
        sph_bmw512_close(&ctx_bmw, outhash);

        memcpy(output, outhash, 32);
}
