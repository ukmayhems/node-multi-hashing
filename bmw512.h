// Bmw512 hash

#ifndef BMW512_H
#define BMW512_H

#ifdef __cplusplus
extern "C" {
#endif

 #include <stdint.h>

 void bmw512_hash(const char* input, char* output, uint32_t len);

 #ifdef __cplusplus
}
#endif

#endif
