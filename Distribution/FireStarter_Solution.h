// Run date: 11/22/23 09:28:24 Pacific Standard Time
// Run duration = 4839.762781 seconds
// Run generation = 91
// Run evolution = 16
// Run result = 0.00000054
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

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

// Solution0 result = 0.00000054
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.32741073f;
    n += -1.02859116f;
    r1 = n *= -1.45373011f;
    r2 = n *= 0.18977469f;
    n += 0.28376922f;
    n = r0 *= n;
    r3 = n += 2.59733367f;
    r4 = n *= -0.45380688f;
    n *= r4;
    n *= 1.65731549f;
    r4 = n *= 0.38567927f;
    n *= r0;
    r0 = n *= -0.37504107f;
    r5 = n *= 2.30040359f;
    n *= -0.00146053f;
    r6 = n *= -4.58381367f;
    r7 = n += 0.63468450f;
    n += 0.34645066f;
    n *= -2.44403124f;
    n = r7 += n;
    n += r0;
    n *= r3;
    n = r2 *= n;
    n *= -3.59669065f;
    n *= r6;
    n += r1;
    n = r4 *= n;
    n *= r4;
    n += r7;
    n += r5;
    n *= r2;
    n += -0.00000004f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.38715750f;
    n += -1.19657171f;
    r1 = n *= -0.32364121f;
    r2 = n *= -0.51378709f;
    n += -0.19896933f;
    n = r0 *= n;
    r3 = n += -2.84009862f;
    r4 = n *= 0.39728481f;
    n *= r4;
    n *= -3.71748710f;
    r4 = n *= 0.68058157f;
    n *= r0;
    r0 = n *= -0.12543367f;
    r5 = n *= 0.00042157f;
    n *= 2.23159266f;
    r6 = n *= -8.99821949f;
    r7 = n += -0.64979643f;
    n += -1.25647998f;
    n *= 0.86670583f;
    n = r7 += n;
    n += r0;
    n *= r3;
    n = r2 *= n;
    n *= 1.18057549f;
    n *= r6;
    n += r1;
    n = r4 *= n;
    n *= r4;
    n += r7;
    n += r5;
    n *= r2;
    n += -0.11813193f;
    return n;
} // Solution1

// Solution2 result = 0.00000037
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.36479199f;
    n += -0.95502311f;
    r1 = n *= 0.72685492f;
    r2 = n *= 0.22829212f;
    n += -0.15847188f;
    n = r0 *= n;
    r3 = n += -2.69580173f;
    r4 = n *= -0.37406471f;
    n *= r4;
    n *= -1.80313337f;
    r4 = n *= 1.23314321f;
    n *= r0;
    r0 = n *= -1.97284937f;
    r5 = n *= 0.69734937f;
    n *= 0.00031461f;
    r6 = n *= -1.74293876f;
    r7 = n += -0.85808659f;
    n += 1.10717225f;
    n *= -3.66770029f;
    n = r7 += n;
    n += r0;
    n *= r3;
    n = r2 *= n;
    n *= 2.61052275f;
    n *= r6;
    n += r1;
    n = r4 *= n;
    n *= r4;
    n += r7;
    n += r5;
    n *= r2;
    n += 0.52359867f;
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
