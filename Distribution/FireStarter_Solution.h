// Run date: 07/08/23 14:47:55 Pacific Daylight Time
// Run duration = 422.802200 seconds
// Run generation = 65
// Run evolution = 0
// Run result = 0.00000405
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
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

// Solution0 result = 0.00000143
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.09620853f;
    r0 = n += 0.30224800f;
    n *= 1.39364517f;
    r1 = n += -0.00000001f;
    n += -13.63015747f;
    n *= -1.08991551f;
    n += -16.26958084f;
    n *= -0.00014077f;
    n += -1.64925814f;
    n += -1.06344581f;
    n *= -0.00996900f;
    n *= -0.00118712f;
    n += -1.75973809f;
    r2 = n *= 0.60281450f;
    n *= r0;
    r0 = n *= -1.07359099f;
    r3 = n *= -1.34781468f;
    n *= r3;
    r3 = n += -0.16640078f;
    r4 = n += -1.63221765f;
    n = r2 *= n;
    n = r4 *= n;
    n += -0.10064810f;
    n *= r2;
    n = r3 *= n;
    n *= 0.01174190f;
    n += 1.48669791f;
    n *= r4;
    n *= r0;
    n *= -1.36901140f;
    n *= r3;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000095
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.12193689f;
    r0 = n += 0.37686536f;
    n *= 0.20579460f;
    r1 = n += -0.11813255f;
    n += 0.12380958f;
    n *= -7.22794437f;
    n += 2.78358769f;
    n *= -0.14906354f;
    n += -4.10263157f;
    n += 364338.65625000f;
    n *= 0.17566252f;
    n *= 0.09157139f;
    n += -0.05057940f;
    r2 = n *= -0.00185506f;
    n *= r0;
    r0 = n *= -0.15060672f;
    r3 = n *= 0.26211378f;
    n *= r3;
    r3 = n += -0.05525563f;
    r4 = n += -0.63481390f;
    n = r2 *= n;
    n = r4 *= n;
    n += -0.53805375f;
    n *= r2;
    n = r3 *= n;
    n *= 0.10736270f;
    n += 0.09373181f;
    n *= r4;
    n *= r0;
    n *= -1.26109517f;
    n *= r3;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000405
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.07465098f;
    r0 = n += -0.19543578f;
    n *= -2.57117820f;
    r1 = n += 0.52359891f;
    n += -0.05399139f;
    n *= -5.55314159f;
    n += 7.68197966f;
    n *= 0.00424933f;
    n += -6.75619030f;
    n += 118216.32031250f;
    n *= 0.02289888f;
    n *= 0.30185786f;
    n += -2.57550240f;
    r2 = n *= 0.07910974f;
    n *= r0;
    r0 = n *= 0.06308133f;
    r3 = n *= -0.15948446f;
    n *= r3;
    r3 = n += -0.00856158f;
    r4 = n += -0.33292666f;
    n = r2 *= n;
    n = r4 *= n;
    n += 0.98808777f;
    n *= r2;
    n = r3 *= n;
    n *= -0.29955888f;
    n += -2.31863427f;
    n *= r4;
    n *= r0;
    n *= 0.07906464f;
    n *= r3;
    n += r1;
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
