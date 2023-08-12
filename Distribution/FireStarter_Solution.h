// Run date: 08/12/23 11:21:30 Pacific Daylight Time
// Run duration = 2435.003762 seconds
// Run generation = 124
// Run evolution = 14
// Run result = 0.00000066
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
// Run seeds = 64
// Run tests = 0
// Run units = 8
// Run processes = 0
// Run population = 278528
// Run iterations = 64
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

// Solution0 result = 0.00000015
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.30698636f;
    r0 = n += -0.96442610f;
    n *= -0.54930818f;
    r1 = n *= -2.13206005f;
    n = r1 *= n;
    r2 = n *= 0.72075057f;
    r3 = n += -0.81401438f;
    n *= 1.30791402f;
    r4 = n *= -1.14151287f;
    n += r1;
    r1 = n *= -1.00107372f;
    n *= -0.60542971f;
    n = r1 *= n;
    n *= 1.88653851f;
    r5 = n *= 2.00931430f;
    n *= 0.00020911f;
    n *= 4.13765144f;
    n *= -1.00396717f;
    n *= 1.90468860f;
    n *= r3;
    r3 = n += -1.19363415f;
    n = r0 *= n;
    n *= r1;
    n = r3 *= n;
    n *= r0;
    n += r2;
    n += -1.96064317f;
    n += r4;
    n *= r3;
    n *= r5;
    n += 0.05034259f;
    n += -0.05034259f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.28324556f;
    r0 = n += 0.87541533f;
    n *= -1.47567534f;
    r1 = n *= -1.18424082f;
    n = r1 *= n;
    r2 = n *= 1.72329926f;
    r3 = n += -1.65491664f;
    n *= -0.28107294f;
    r4 = n *= 2.11514616f;
    n += r1;
    r1 = n *= -0.32625178f;
    n *= 1.66132438f;
    n = r1 *= n;
    n *= 1.59863317f;
    r5 = n *= 3.43164134f;
    n *= -0.00073734f;
    n *= 2.88711023f;
    n *= -0.34252140f;
    n *= 4.69958830f;
    n *= r3;
    r3 = n += -3.04959440f;
    n = r0 *= n;
    n *= r1;
    n = r3 *= n;
    n *= r0;
    n += r2;
    n += 1.60504341f;
    n += r4;
    n *= r3;
    n *= r5;
    n += -0.21820518f;
    n += 0.10007342f;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.49834931f;
    r0 = n += -1.30467534f;
    n *= 0.51967061f;
    r1 = n *= 1.22940016f;
    n = r1 *= n;
    r2 = n *= -0.70405996f;
    r3 = n += 0.76114023f;
    n *= -1.85082936f;
    r4 = n *= -0.95617795f;
    n += r1;
    r1 = n *= 0.84353310f;
    n *= -0.41036579f;
    n = r1 *= n;
    n *= 1.71256506f;
    r5 = n *= -3.74868798f;
    n *= -0.00017246f;
    n *= 1.27840459f;
    n *= -0.87170571f;
    n *= 5.24308777f;
    n *= r3;
    r3 = n += 0.89687103f;
    n = r0 *= n;
    n *= r1;
    n = r3 *= n;
    n *= r0;
    n += r2;
    n += 0.02934004f;
    n += r4;
    n *= r3;
    n *= r5;
    n += 0.58329916f;
    n += -0.05970037f;
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
