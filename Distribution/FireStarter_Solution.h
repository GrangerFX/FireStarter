// Run date: 11/12/23 09:22:31 Pacific Standard Time
// Run duration = 47300.153287 seconds
// Run generation = 267
// Run evolution = 15
// Run result = 0.00000477
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 16
// Run seeds = 64
// Run units = 1
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * 3.14159265f)

inline float SolutionTarget(float n, unsigned int variation)
{
    switch (variation) {
    default:
    case 0:
        return sinf(n);
    case 1:
        return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
    case 2:
        return sinf(n * 1.2f) + n * 0.2f;
    case 3:
        return fabsf(fmodf(fabsf(n - SOLUTION_PI * 0.5f), SOLUTION_PI * 2.0f) - SOLUTION_PI) - SOLUTION_PI * 0.5f;
    }
} // SolutionTarget

// Solution0 result = 0.00000462
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.37817073f;
    n *= -0.21122870f;
    n += -9.61847878f;
    r0 = n += 10.22979259f;
    n *= 0.33556509f;
    r1 = n += -0.34851879f;
    n = r1 += n;
    n *= -0.29879224f;
    n *= -0.02521541f;
    r2 = n *= -0.02612915f;
    n *= -41.48315430f;
    r3 = n *= -42.03280258f;
    n = r1 *= n;
    r4 = n += 2.59744835f;
    n += 1.86666882f;
    n += 1.21038985f;
    n += r2;
    n += r3;
    r3 = n += -2.99186373f;
    r2 = n += 0.03176531f;
    n = r0 *= n;
    n *= r4;
    n *= r1;
    n = r0 += n;
    n *= -0.77093840f;
    n = r3 += n;
    n += -1.41394210f;
    n *= -0.27766064f;
    n *= r2;
    n *= r0;
    n += -0.00396623f;
    n *= r3;
    return n;
} // Solution0

// Solution1 result = 0.00000477
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.42486501f;
    n *= -0.39267796f;
    n += -0.09136071f;
    r0 = n += 1.07296824f;
    n *= 0.30692238f;
    r1 = n += -0.54416448f;
    n = r1 += n;
    n *= -0.04329916f;
    n *= -0.09298623f;
    r2 = n *= 0.00861521f;
    n *= -34.55022049f;
    r3 = n *= 38.06642532f;
    n = r1 *= n;
    r4 = n += 4.83570242f;
    n += 3.74257898f;
    n += -4.72519970f;
    n += r2;
    n += r3;
    r3 = n += -1.20948017f;
    r2 = n += -1.75891411f;
    n = r0 *= n;
    n *= r4;
    n *= r1;
    n = r0 += n;
    n *= -1.20475996f;
    n = r3 += n;
    n += -1.82049918f;
    n *= -1.40814745f;
    n *= r2;
    n *= r0;
    n += -0.47065249f;
    n *= r3;
    return n;
} // Solution1

// Solution2 result = 0.00000191
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.61948943f;
    n *= -0.81783319f;
    n += 0.53929991f;
    r0 = n += 1.72389114f;
    n *= 0.12645563f;
    r1 = n += -0.44133914f;
    n = r1 += n;
    n *= 0.07594234f;
    n *= 0.03208836f;
    r2 = n *= -0.12593769f;
    n *= -24.64426613f;
    r3 = n *= 27.63687515f;
    n = r1 *= n;
    r4 = n += -2.65410805f;
    n += -2.98374033f;
    n += 1.47417045f;
    n += r2;
    n += r3;
    r3 = n += 2.54290104f;
    r2 = n += -0.15263785f;
    n = r0 *= n;
    n *= r4;
    n *= r1;
    n = r0 += n;
    n *= -0.21308331f;
    n = r3 += n;
    n += 0.80119902f;
    n *= -0.58436579f;
    n *= r2;
    n *= r0;
    n += -0.76566267f;
    n *= r3;
    return n;
} // Solution2

inline float Solution(float n, unsigned int variation)
{
    switch (variation) {
    case 0:
        return Solution0(n);
    case 1:
        return Solution1(n);
    case 2:
        return Solution2(n);
    }
    return 0.0f;
} // Solution
