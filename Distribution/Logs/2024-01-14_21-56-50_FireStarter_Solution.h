// Run date: 01/14/24 21:56:50 Pacific Standard Time
// Run duration = 7464.539886 seconds
// Run generation = 61
// Run evolution = 18
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
// Run tests = 4
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

// Solution0 result = 0.00000010
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.80876923f;
    r0 = n += -0.33282346f;
    r1 = n *= -0.91059738f;
    r2 = n *= -0.09204255f;
    n = r2 += n;
    r3 = n *= -3.08473611f;
    r4 = n *= -0.62546539f;
    n *= r2;
    n *= 6.31975937f;
    r2 = n += -0.79577947f;
    n *= 0.70540184f;
    n += -1.44874763f;
    r5 = n *= -0.95263922f;
    n *= 1.54369867f;
    n = r2 += n;
    r6 = n *= -0.01611936f;
    n *= r5;
    n = r6 *= n;
    n += r2;
    r2 = n *= 1.31361187f;
    n = r4 *= n;
    n *= 27.07233238f;
    n += r0;
    n *= r6;
    n += r4;
    n = r3 += n;
    n *= r1;
    n += r2;
    n += 0.36178640f;
    n *= r3;
    n += 0.00000001f;
    n *= -0.67623925f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.09831667f;
    r0 = n += -0.99234176f;
    r1 = n *= 0.31239787f;
    r2 = n *= 0.77138638f;
    n = r2 += n;
    r3 = n *= -1.11419702f;
    r4 = n *= -1.41378880f;
    n *= r2;
    n *= -0.32389379f;
    r2 = n += 0.19171821f;
    n *= 3.56554461f;
    n += -149.68341064f;
    r5 = n *= 0.00013817f;
    n *= 0.84459245f;
    n = r2 += n;
    r6 = n *= -0.60884690f;
    n *= r5;
    n = r6 *= n;
    n += r2;
    r2 = n *= -0.14119081f;
    n = r4 *= n;
    n *= -0.56533432f;
    n += r0;
    n *= r6;
    n += r4;
    n = r3 += n;
    n *= r1;
    n += r2;
    n += 1.82717419f;
    n *= r3;
    n += -0.10761263f;
    n *= 1.09774935f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.26633739f;
    r0 = n += 0.64834362f;
    r1 = n *= 0.59930474f;
    r2 = n *= 1.13051581f;
    n = r2 += n;
    r3 = n *= 0.27734935f;
    r4 = n *= -0.25532347f;
    n *= r2;
    n *= -0.27108604f;
    r2 = n += -0.37707588f;
    n *= -1.72859514f;
    n += -0.18841605f;
    r5 = n *= 1.51292396f;
    n *= 0.37452173f;
    n = r2 += n;
    r6 = n *= -3.04693604f;
    n *= r5;
    n = r6 *= n;
    n += r2;
    r2 = n *= -6.51381922f;
    n = r4 *= n;
    n *= 0.68000889f;
    n += r0;
    n *= r6;
    n += r4;
    n = r3 += n;
    n *= r1;
    n += r2;
    n += -1.58899367f;
    n *= r3;
    n += 0.32367972f;
    n *= 1.61764455f;
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
