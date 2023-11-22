#pragma once

#ifndef MIN
#define MIN(a, b) ((a) <= (b) ? (a) : (b))
#endif

#ifndef MAX
#define MAX(a, b) ((a) >= (b) ? (a) : (b))
#endif

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

#define RANDOMHASH(seed) Squares64((unsigned long long)(seed))
#define RANDOM(seed) RANDOMHASH(seed)

#if 1
// New way: Prefer the high 32 bits for mod and float random.
#define RANDOMSEED(seed)   ((unsigned int)(RANDOM(seed++) >> 32))
#else
// Old way: Prefer the low 32 bits for mod and float random.
#define RANDOMSEED(seed)   (unsigned int)RANDOM(seed++)
#endif
#define RANDOMMOD(seed, m) ((RANDOMSEED(seed) * (unsigned long long)(m)) >> 32)
#define RANDOMNUM(seed)    (RANDOMSEED(seed) * 2.328306436E-10f)         // yields a number between 0 and <1
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