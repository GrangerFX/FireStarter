// Run date: 12/24/23 15:55:24 Pacific Standard Time
// Run duration = 16262.117015 seconds
// Run generation = 21
// Run evolution = 13
// Run max result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run states = 64
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n *= 0.72526777f;
    n *= -0.60278153f;
    n += 1.37343526f;
    r0 = n *= 0.92689699f;
    r1 = n *= 0.77415955f;
    r2 = n *= 0.85327023f;
    n *= r0;
    r0 = n += -1.09653831f;
    n *= r1;
    r1 = n *= 0.00001643f;
    n *= 14.07503986f;
    n *= r0;
    n += r2;
    n = r1 += n;
    r2 = n *= -0.33447522f;
    n = r1 *= n;
    r0 = n += 1.44599032f;
    r3 = n *= -1.42619658f;
    n = r1 *= n;
    n += -1.37902248f;
    n += r3;
    n = r0 *= n;
    n *= -1.32085967f;
    n += -1.87708580f;
    n += -2.27420425f;
    r3 = n *= 1.15978062f;
    n *= r0;
    n += r1;
    n += r3;
    n *= r2;
    n += -0.01023937f;
    n += 0.01023943f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n *= 0.75045198f;
    n *= -0.56968588f;
    n += 1.32132423f;
    r0 = n *= -1.60243177f;
    r1 = n *= -0.10771254f;
    r2 = n *= -1.62825000f;
    n *= r0;
    r0 = n += -1.06016123f;
    n *= r1;
    r1 = n *= -0.00002260f;
    n *= 6.37645054f;
    n *= r0;
    n += r2;
    n = r1 += n;
    r2 = n *= -1.49356961f;
    n = r1 *= n;
    r0 = n += 1.42235756f;
    r3 = n *= -0.43346789f;
    n = r1 *= n;
    n += -0.74648625f;
    n += r3;
    n = r0 *= n;
    n *= 3.83380294f;
    n += 1.66013861f;
    n += 0.74620289f;
    r3 = n *= 1.29902697f;
    n *= r0;
    n += r1;
    n += r3;
    n *= r2;
    n += -0.15391187f;
    n += 0.03578014f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n *= -0.80096096f;
    n *= -1.60693324f;
    n += -3.36959553f;
    r0 = n *= -0.44102517f;
    r1 = n *= -0.66066432f;
    r2 = n *= -0.06472953f;
    n *= r0;
    r0 = n += -1.93238401f;
    n *= r1;
    r1 = n *= 0.11666725f;
    n *= -0.57299632f;
    n *= r0;
    n += r2;
    n = r1 += n;
    r2 = n *= -0.43971336f;
    n = r1 *= n;
    r0 = n += 0.10071036f;
    r3 = n *= -0.53165829f;
    n = r1 *= n;
    n += -52.15587234f;
    n += r3;
    n = r0 *= n;
    n *= 0.13277523f;
    n += 0.48409706f;
    n += -1.97415948f;
    r3 = n *= -1.20572698f;
    n *= r0;
    n += r1;
    n += r3;
    n *= r2;
    n += 0.14073083f;
    n += 0.38286790f;
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
