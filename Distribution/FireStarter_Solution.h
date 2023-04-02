// Run date: 04/02/23 13:52:46 Pacific Daylight Time
// Run duration = 2566.701108 seconds
// Run generation = 92
// Run result = 0.00026427
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
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

// Solution0 result = 0.00001603
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.09494163f;
    n = r0 += n;
    n += -0.59653729f;
    n *= -0.62792528f;
    n *= -0.80191863f;
    n = r0 *= n;
    n *= -1.16272378f;
    n *= 1.55307186f;
    r1 = n *= 1.18134785f;
    n *= 0.05103278f;
    n += 0.56160986f;
    r2 = n *= -1.21304941f;
    r3 = n *= -1.42598689f;
    r4 = n *= 2.26413274f;
    n = r2 *= n;
    r5 = n += -0.71062893f;
    n *= r0;
    n *= r2;
    n = r5 += n;
    n *= 0.50919759f;
    n += 1.51753628f;
    n += -0.97047806f;
    n = r1 *= n;
    n *= 1.20464694f;
    n *= 0.37558159f;
    n *= -0.01220786f;
    n += 3.01325130f;
    n *= r1;
    n *= r5;
    n *= r3;
    n *= r4;
    n += 0.00000661f;
    return n;
} // Solution0

// Solution1 result = 0.00014168
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.12504804f;
    n = r0 += n;
    n += 0.99484509f;
    n *= 0.23626314f;
    n *= -0.62610829f;
    n = r0 *= n;
    n *= 0.78985864f;
    n *= 2.49391341f;
    r1 = n *= -1.62337136f;
    n *= 0.15833628f;
    n += -1.38791716f;
    r2 = n *= -0.87994814f;
    r3 = n *= 0.79248375f;
    r4 = n *= 1.93822300f;
    n = r2 *= n;
    r5 = n += 2.46981359f;
    n *= r0;
    n *= r2;
    n = r5 += n;
    n *= 0.62335730f;
    n += -1.38475907f;
    n += -0.75360507f;
    n = r1 *= n;
    n *= -0.23057991f;
    n *= -1.49939764f;
    n *= -0.03547693f;
    n += 0.76023710f;
    n *= r1;
    n *= r5;
    n *= r3;
    n *= r4;
    n += 0.85241586f;
    return n;
} // Solution1

// Solution2 result = 0.00026427
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.26457834f;
    n = r0 += n;
    n += 1.46075916f;
    n *= 0.15975738f;
    n *= 0.19387089f;
    n = r0 *= n;
    n *= 0.59682000f;
    n *= 1.33801627f;
    r1 = n *= 1.97615802f;
    n *= -0.45222715f;
    n += 1.68495619f;
    r2 = n *= 1.37924194f;
    r3 = n *= 1.55933738f;
    r4 = n *= -0.56256711f;
    n = r2 *= n;
    r5 = n += 1.60788751f;
    n *= r0;
    n *= r2;
    n = r5 += n;
    n *= 0.29646987f;
    n += 1.76866210f;
    n += -1.52976775f;
    n = r1 *= n;
    n *= 0.10822261f;
    n *= -3.60230017f;
    n *= -0.15232755f;
    n += -2.32108736f;
    n *= r1;
    n *= r5;
    n *= r3;
    n *= r4;
    n += 0.00026427f;
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
