#pragma once

// Some keys for Squares
#define SQUARES_SEED0 0xfbe3c695413b867f
#define SQUARES_SEED1 0x85493e21f23649a5
#define SQUARES_SEED2 0x1659c2f3245a7913
#define SQUARES_SEED3 0xad68b9f54f2d85eb
#define SQUARES_SEED4 0xfb618e598e31c459
#define SQUARES_SEED5 0xcf1d894a9b24d3c5
#define SQUARES_SEED6 0x53481b7dcb58e243
#define SQUARES_SEED7 0x597a326dc738e19f
#define SQUARES_SEED8 0x7658a391f85c321d
#define SQUARES_SEED9 0xcd64f372173e2f69
#define SQUARES_SEED10 0x8a31de2767324ed5
#define SQUARES_SEED11 0x47bf52ca94267d53
#define SQUARES_SEED12 0xb5736d4981276baf

#define SEED0(seed) ((unsigned long long)(seed) * SQUARES_SEED0)
#define SEED1(seed) ((unsigned long long)(seed) * SQUARES_SEED1)
#define SEED2(seed) ((unsigned long long)(seed) * SQUARES_SEED2)
#define SEED3(seed) ((unsigned long long)(seed) * SQUARES_SEED3)
#define SEED4(seed) ((unsigned long long)(seed) * SQUARES_SEED4)
#define SEED5(seed) ((unsigned long long)(seed) * SQUARES_SEED5)
#define SEED6(seed) ((unsigned long long)(seed) * SQUARES_SEED6)
#define SEED7(seed) ((unsigned long long)(seed) * SQUARES_SEED7)
#define SEED8(seed) ((unsigned long long)(seed) * SQUARES_SEED8)
#define SEED9(seed) ((unsigned long long)(seed) * SQUARES_SEED9)
#define SEED10(seed) ((unsigned long long)(seed) * SQUARES_SEED10)
#define SEED11(seed) ((unsigned long long)(seed) * SQUARES_SEED11)
#define SEED12(seed) ((unsigned long long)(seed) * SQUARES_SEED12)

#define SQUARES_SEED SQUARES_SEED0

// Squares 64 bit random number generator
// From Bernard Widynski's paper
// Squares: A Fast Counter-Based RNG
// https://arxiv.org/pdf/2004.06278v7.pdf
inline unsigned long long Squares64(unsigned long long ctr, unsigned long long key = SQUARES_SEED)
{
    unsigned long long t, x, y, z;
    y = x = ctr * key; z = y + key;
    x = x * x + y; x = (x >> 32) | (x << 32); /* round 1 */
    x = x * x + z; x = (x >> 32) | (x << 32); /* round 2 */
    x = x * x + y; x = (x >> 32) | (x << 32); /* round 3 */
    t = x = x * x + z; x = (x >> 32) | (x << 32); /* round 4 */
    return t ^ ((x * x + y) >> 32); /* round 5 */
} // Squares64

#define RANDOM(seed)       ((unsigned int)(Squares64(seed) >> 32))
#define RANDOMSEED(seed)   RANDOM(seed++)
#define RANDOMMOD(seed, m) ((RANDOMSEED(seed) * (unsigned long long)(m)) >> 32)
#define RANDOMNUM(seed)    (RANDOMSEED(seed) * 2.328306436E-10f)         // yields a number between 0 and <1
#define RANDOMFACTOR(seed) (((int)RANDOMSEED(seed)) * 4.656612873E-10f)  // yields a number between -1 and 1
