#pragma once
#include "CUDADefines.h"

GPU_FUNCTION unsigned int Hash(unsigned int hash)
{
    hash = (hash ^ 61) ^ (hash >> 16);
    hash += hash << 3;
    hash ^= hash >> 4;
    hash *= 0x27d4eb2d; // a prime or an odd constant
    hash ^= hash >> 15;
    return hash;
} // Hash

#define RANDOMHASH(seed) Hash(seed)
#define RANDOMSEED(seed) RANDOMHASH(seed++)
#define RANDOMBITS(seed, bits) (RANDOMSEED(seed) >> (32 - (bits)))          // create a random number with a specific number of bits
#define RANDOMNUM(seed) (RANDOMSEED(seed) * 2.328306436E-10f)               // yields a number between 0 and <1
#define RANDOMFACTOR(seed) ((int)(RANDOMSEED(seed)) * 4.656612873E-10f)     // yields a number between -1 and 1
#define RANDOMFACTOR2(seed) ((int)(RANDOMSEED(seed)) * 2.328306436E-10f)    // yields a number between -0.5 and 0.5

// Intel fast random number generator. When speed is more important than quality.
#define FASTRANDOM(seed) (seed = 214013 * seed + 2531011)                       // fast random 32 bit unsigned int
#define FASTRANDOMBITS(seed, bits) (FASTRANDOM(seed) >> (32 - (bits)))          // create a random number with a specific number of bits
#define FASTRANDOMNUM(seed) (FASTRANDOM(seed) * 2.328306436E-10f)               // yields a number between 0 and <1
#define FASTRANDOMFACTOR(seed) ((int)(FASTRANDOM(seed)) * 4.656612873E-10f)     // yields a number between -1 and 1
#define FASTRANDOMFACTOR2(seed) ((int)(FASTRANDOM(seed)) * 2.328306436E-10f)    // yields a number between -0.5 and 0.5
