#pragma once

// 32 bit prime number generator:
// https://asecuritysite.com/encryption/random3?val=32

// 32 bit cryptographic hash function.
// From Thomas Wang's paper:
// http://www.concentric.net/~Ttwang/tech/inthash.htm
// https://web.archive.org/web/20070108113114/http://www.cris.com:80/~Ttwang/tech/inthash.htm
inline unsigned int Hash(unsigned int hash)
{
    hash = (hash ^ 61) ^ (hash >> 16);
    hash += hash << 3;
    hash ^= hash >> 4;
    hash *= 0x27d4eb2d; // a prime or an odd constant
    hash ^= hash >> 15;
    return hash;
} // Hash

#define RANDOMHASH(seed) Hash((unsigned int)(seed))
#define RANDOMSEED(seed) RANDOMHASH(seed++)
#define RANDOMMOD(seed, m) ((RANDOMSEED(seed) * (unsigned long long)(m)) >> 32)
#define RANDOMBITS(seed, bits) (RANDOMSEED(seed) >> (32 - (bits)))          // create a random number with a specific number of bits
#define RANDOMNUM(seed) (RANDOMSEED(seed) * 2.328306436E-10f)               // yields a number between 0 and <1
#define RANDOMFACTOR(seed) ((int)(RANDOMSEED(seed)) * 4.656612873E-10f)     // yields a number between -1 and 1
#define RANDOMFACTOR2(seed) ((int)(RANDOMSEED(seed)) * 2.328306436E-10f)    // yields a number between -0.5 and 0.5
