#pragma once

#ifndef MIN
#define MIN(a, b) ((a) <= (b) ? (a) : (b))
#endif

#ifndef MAX
#define MAX(a, b) ((a) >= (b) ? (a) : (b))
#endif

// 32 bit prime number generator:
// https://asecuritysite.com/encryption/random3?val=32

// 32 bit cryptographic hash function.
// From Thomas Wang's paper:
// http://www.concentric.net/~Ttwang/tech/inthash.htm
// https://web.archive.org/web/20070108113114/http://www.cris.com:80/~Ttwang/tech/inthash.htm
inline unsigned int Hash32(unsigned int hash)
{
    hash = (hash ^ 61) ^ (hash >> 16);
    hash += hash << 3;
    hash ^= hash >> 4;
    hash *= 0x27d4eb2d; // a prime or an odd constant
    hash ^= hash >> 15;
    return hash;
} // Hash32

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

#define SQUARES_SEED SQUARES_SEED1

// Squares 32 bit random number generator
// From Bernard Widynski's paper
// Squares: A Fast Counter-Based RNG
// https://arxiv.org/pdf/2004.06278v7.pdf
inline unsigned int Squares32(unsigned long long ctr, unsigned long long key = SQUARES_SEED)
{
    unsigned long long x, y, z;
    y = x = ctr * key; z = y + key;
    x = x * x + y; x = (x >> 32) | (x << 32); /* round 1 */
    x = x * x + z; x = (x >> 32) | (x << 32); /* round 2 */
    x = x * x + y; x = (x >> 32) | (x << 32); /* round 3 */
    return (x * x + z) >> 32; /* round 4 */
} // Squares32

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

//#define RANDOMHASH(seed) Hash32((unsigned int)(seed))
//#define RANDOMHASH(seed) Squares32((unsigned long long)(seed))
#define RANDOMHASH(seed) Squares64((unsigned long long)(seed))

#define RANDOM(seed) RANDOMHASH(seed)
#define RANDOM1(seed) Squares64(seed, SQUARES_SEED1)
#define RANDOM2(seed) Squares64(seed, SQUARES_SEED2)
#define RANDOM3(seed) Squares64(seed, SQUARES_SEED3)
#define RANDOM4(seed) Squares64(seed, SQUARES_SEED4)
#define RANDOM5(seed) Squares64(seed, SQUARES_SEED5)
#define RANDOM6(seed) Squares64(seed, SQUARES_SEED6)
#define RANDOM7(seed) Squares64(seed, SQUARES_SEED7)
#define RANDOM8(seed) Squares64(seed, SQUARES_SEED8)
#define RANDOM9(seed) Squares64(seed, SQUARES_SEED9)

#define RANDOMSEED(seed) RANDOMHASH(seed++)
#define RANDOMMOD(seed, m) ((((unsigned int)RANDOMSEED(seed)) * (unsigned long long)(m)) >> 32)
#define RANDOMNUM(seed) (((int)RANDOMSEED(seed)) * 2.328306436E-10f)     // yields a number between 0 and <1
#define RANDOMFACTOR(seed) (((int)RANDOMSEED(seed)) * 4.656612873E-10f)  // yields a number between -1 and 1


// From: Correlated Multi-Jittered Sampling by Andrew Kensler
// https://graphics.pixar.com/library/MultiJitteredSampling/paper.pdf
inline unsigned int CorrelatedPermute(unsigned int i, unsigned int l, unsigned int p)
{
	unsigned int w = l - 1;
	w |= w >> 1;
	w |= w >> 2;
	w |= w >> 4;
	w |= w >> 8;
	w |= w >> 16;
	do {
		i ^= p;
		i *= 0xe170893d;
		i ^= p >> 16;
		i ^= (i & w) >> 4;
		i ^= p >> 8;
		i *= 0x0929eb3f;
		i ^= p >> 23;
		i ^= (i & w) >> 1;
		i *= 1 | p >> 27;
		i *= 0x6935fa69;
		i ^= (i & w) >> 11;
		i *= 0x74dcb303;
		i ^= (i & w) >> 2;
		i *= 0x9e501cc3;
		i ^= (i & w) >> 2;
		i *= 0xc860a3df;
		i &= w;
		i ^= i >> 5;
	} while (i >= l);
	return (i + p) % l;
} // CorrelatedPermute

inline unsigned int CorrelatedRandom(unsigned int i, unsigned int p)
{
	i ^= p;
	i ^= i >> 17;
	i ^= i >> 10;
	i *= 0xb36534e5;
	i ^= i >> 12;
	i ^= i >> 21;
	i *= 0x93fc4795;
	i ^= 0xdf6e307f;
	i ^= i >> 17;
	return i * (1 | (p >> 18));
} // CorrelatedRandom

inline double CorrelatedRandomFloat(unsigned int i, unsigned int p)
{
	return CorrelatedRandom(i, p) * 2.328306436538696e-10;
} // CorrelatedRandomFloat

inline void CorrelatedMultiJitteredSample(unsigned int s, unsigned int p, unsigned int &m, unsigned int &n)
{
	unsigned int N = m * n;
	s = CorrelatedPermute(s, N, p * 0x51633e2d);
	int sx = CorrelatedPermute(s % m, m, p * 0x68bc21eb);
	int sy = CorrelatedPermute(s / m, n, p * 0x02e5be93);
	double jx = CorrelatedRandomFloat(s, p * 0x967a889b);
	double jy = CorrelatedRandomFloat(s, p * 0x368cc8b7);
	double x = (sx + (sy + jx) / n) / m;
	double y = (s + jy) / N;
	m = (unsigned int)floor(x * m);
	n = (unsigned int)floor(x * n);
} // CorrelatedMultiJitteredSample

inline unsigned long long ReverseBits(unsigned long long data, unsigned int bits)
{
	unsigned long long result = 0;
	unsigned int a = 1 << (bits - 1);
	unsigned int b = 1;
	while (a > b) {
		if (data & a)
			result |= b;
		if (data & b)
			result |= a;
		a >>= 1;
		b <<= 1;
	}
	return result;
} // ReverseBits