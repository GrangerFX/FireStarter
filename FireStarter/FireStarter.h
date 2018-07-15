#pragma once

#ifdef __CUDACC__
#define GPU_FUNCTION __device__
#else
#include <math.h>
#define GPU_FUNCTION static inline
#endif

#ifdef OPENCL
#define GPU_DATA global
#else
#define GPU_DATA
#endif

// 32 bit cryptographic hash function.
// From Thomas Wang's paper:
// http://www.concentric.net/~Ttwang/tech/inthash.htm
GPU_FUNCTION unsigned int Hash(unsigned int hash)
{
    hash = (hash ^ 61) ^ (hash >> 16);
    hash += hash << 3;
    hash ^= hash >> 4;
    hash *= 0x27d4eb2d; // a prime or an odd constant
    hash ^= hash >> 15;
    return hash;
} // Hash

#if 1
#define RANDOMSEED(seed) Hash(seed++)
#else
#define RANDOMSEED(seed) ((seed) = (unsigned int)((int)(seed) * 1103515245 + 12345))	// pick a new random seed
#endif
#define RANDOMBITS(seed, bits) (RANDOMSEED(seed) >> (32 - (bits)))          // create a random number with a specific number of bits
#define RANDOMNUM(seed) (RANDOMSEED(seed) * 2.328306436E-10f)               // yields a number between 0 and <1
#define RANDOMFACTOR(seed) ((int)(RANDOMSEED(seed)) * 4.656612873E-10f)     // yields a number between -1 and 1
#define RANDOMFACTOR2(seed) ((int)(RANDOMSEED(seed)) * 2.328306436E-10f)    // yields a number between -0.5 and 0.5
