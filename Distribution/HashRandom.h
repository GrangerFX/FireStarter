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

// Squares 32 and 64 bit random number generator
// From Bernard Widynski's paper
// Squares: A Fast Counter-Based RNG
// https://arxiv.org/pdf/2004.06278v7.pdf
inline unsigned int Squares32(unsigned long long ctr, unsigned long long key = 0x1659c2f3245a7913)
{
    unsigned long long x, y, z;
    y = x = ctr * key; z = y + key;
    x = x * x + y; x = (x >> 32) | (x << 32); /* round 1 */
    x = x * x + z; x = (x >> 32) | (x << 32); /* round 2 */
    x = x * x + y; x = (x >> 32) | (x << 32); /* round 3 */
    return (x * x + z) >> 32; /* round 4 */
} // Squares32

inline unsigned long long Squares64(unsigned long long ctr, unsigned long long key = 0xfbe3c695413b867f)
{
    unsigned long long t, x, y, z;
    y = x = ctr * key; z = y + key;
    x = x * x + y; x = (x >> 32) | (x << 32); /* round 1 */
    x = x * x + z; x = (x >> 32) | (x << 32); /* round 2 */
    x = x * x + y; x = (x >> 32) | (x << 32); /* round 3 */
    t = x = x * x + z; x = (x >> 32) | (x << 32); /* round 4 */
    return t ^ ((x * x + y) >> 32); /* round 5 */
} // Squares64

/* Some keys
0x85493e21f23649a5,
0x1659c2f3245a7913,
0xfbe3c695413b867f,
0xad68b9f54f2d85eb,
0xfb618e598e31c459,
0xcf1d894a9b24d3c5,
0x53481b7dcb58e243,
0x597a326dc738e19f,
0x7658a391f85c321d,
0xcd64f372173e2f69,
0x8a31de2767324ed5,
0x47bf52ca94267d53,
0xb5736d4981276baf,
*/

#if 0
#if 0
#define RANDOMHASH(seed) Squares32((unsigned long long)(seed))
#else
#define RANDOMHASH(seed) Hash((unsigned int)(seed))
#endif
#define RANDOM(seed) RANDOMHASH(seed)
#define RANDOMSEED(seed) RANDOMHASH(seed++)
#if 1
#define RANDOMMOD(seed, m) ((RANDOMSEED(seed) * (unsigned long long)(m)) >> 32)
#else
#define RANDOMMOD(seed, m) ((RANDOMSEED(seed) % (unsigned int)(m)))
#endif
#define RANDOMBITS(seed, bits) (RANDOMSEED(seed) >> (32 - (bits)))          // create a random number with a specific number of bits
#define RANDOMNUM(seed) (RANDOMSEED(seed) * 2.328306436E-10f)               // yields a number between 0 and <1
#define RANDOMFACTOR(seed) ((int)(RANDOMSEED(seed)) * 4.656612873E-10f)     // yields a number between -1 and 1
#define RANDOMFACTOR2(seed) ((int)(RANDOMSEED(seed)) * 2.328306436E-10f)    // yields a number between -0.5 and 0.5
#endif

#define RANDOMHASH64(seed) Squares64((unsigned long long)(seed))
#define RANDOM64(seed) RANDOMHASH64(seed)
#define RANDOMSEED64(seed) RANDOMHASH64(seed++)
#if 1
#define RANDOMMOD64(seed, m) (((unsigned int)(RANDOMSEED64(seed)) * (unsigned long long)(m)) >> 32)
#else
#define RANDOMMOD64(seed, m) ((RANDOMSEED64(seed) % (unsigned long long)(m)))
#endif
#define RANDOMBITS64(seed, bits) (RANDOMSEED64(seed) >> (64 - (bits)))          // create a random number with a specific number of bits
#define RANDOMNUM64(seed) (RANDOMSEED64(seed) * 2.328306436E-10f)               // yields a number between 0 and <1
#define RANDOMFACTOR64(seed) ((int)(RANDOMSEED64(seed)) * 4.656612873E-10f)     // yields a number between -1 and 1
#define RANDOMFACTOR264(seed) ((int)(RANDOMSEED64(seed)) * 2.328306436E-10f)    // yields a number between -0.5 and 0.5
