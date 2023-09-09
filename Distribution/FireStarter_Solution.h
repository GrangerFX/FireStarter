// Run date: 09/09/23 12:05:44 Pacific Daylight Time
// Run duration = 2403.228404 seconds
// Run generation = 0
// Run evolution = 0
// Run result = 0.00000525
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run evolveSeed = 2742
// Run optimizeSeed = 0
// Run seeds = 11000
// Run tests = 1
// Run units = 8
// Run processes = 16
// Run population = 278528
// Run iterations = 256
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000148
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159250f;
    r1 = n *= -0.14060357f;
    n *= 1.59665823f;
    n *= r1;
    n *= -1.15658104f;
    r1 = n += 0.36031315f;
    r2 = n += 1.39350200f;
    n += -1.65891755f;
    n *= -4.00843716f;
    r3 = n *= 0.00876605f;
    n += -0.19689621f;
    n *= -0.96728706f;
    n = r2 *= n;
    r4 = n *= -0.67252469f;
    n = r4 += n;
    n = r2 += n;
    r5 = n += -1.18998134f;
    n = r5 *= n;
    n = r3 += n;
    n *= r0;
    n *= r4;
    n *= r1;
    n *= 1.30558538f;
    n *= 0.91103798f;
    n *= 2.25340867f;
    r1 = n *= -3.62870979f;
    n *= r3;
    n *= 0.48587430f;
    n += r1;
    n *= r5;
    n *= r2;
    n += -0.00000009f;
    return n;
} // Solution0

// Solution1 result = 0.00000525
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065771f;
    r1 = n *= 0.07407878f;
    n *= 0.82800770f;
    n *= r1;
    n *= 5.40630865f;
    r1 = n += -3.07865453f;
    r2 = n += 0.56368244f;
    n += 2.31941724f;
    n *= 0.04173096f;
    r3 = n *= -0.90714729f;
    n += 0.01631676f;
    n *= 1.01387179f;
    n = r2 *= n;
    r4 = n *= -0.89978081f;
    n = r4 += n;
    n = r2 += n;
    r5 = n += 3.19652152f;
    n = r5 *= n;
    n = r3 += n;
    n *= r0;
    n *= r4;
    n *= r1;
    n *= 0.69789904f;
    n *= 0.05734874f;
    n *= -0.50098127f;
    r1 = n *= -0.84336013f;
    n *= r3;
    n *= 3.33911538f;
    n += r1;
    n *= r5;
    n *= r2;
    n += -0.11813114f;
    return n;
} // Solution1

// Solution2 result = 0.00000215
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799455f;
    r1 = n *= -0.33286199f;
    n *= 0.14744081f;
    n *= r1;
    n *= 1.27569985f;
    r1 = n += -0.10385004f;
    r2 = n += -1.18241823f;
    n += 1.11509299f;
    n *= -3.53457499f;
    r3 = n *= 0.14247911f;
    n += 0.43704802f;
    n *= 0.55074060f;
    n = r2 *= n;
    r4 = n *= -0.63911498f;
    n = r4 += n;
    n = r2 += n;
    r5 = n += 1.94985688f;
    n = r5 *= n;
    n = r3 += n;
    n *= r0;
    n *= r4;
    n *= r1;
    n *= 3.68055487f;
    n *= -0.11311864f;
    n *= -1.99605370f;
    r1 = n *= 1.86116862f;
    n *= r3;
    n *= 1.40163493f;
    n += r1;
    n *= r5;
    n *= r2;
    n += 0.52360004f;
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
