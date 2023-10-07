// Run date: 10/07/23 08:35:14 Pacific Daylight Time
// Run duration = 3468.727786 seconds
// Run generation = 1
// Run evolution = 1
// Run result = 0.00014579
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
// Run tests = 8
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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

// Solution0 result = 0.00014579
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.16210786f;
    r0 = n *= 0.75473458f;
    n += -1.08876085f;
    r1 = n *= 1.39550459f;
    n += 1.34390390f;
    r2 = n += -1.20504439f;
    r3 = n += 2.44348979f;
    n = r2 *= n;
    n += r1;
    n = r2 *= n;
    n += -0.37926531f;
    n += 1.56626630f;
    r1 = n += 5.41077375f;
    n += -9.71466255f;
    r4 = n *= -1.24561632f;
    r5 = n += -1.97668338f;
    n += 0.96448052f;
    n += -0.95127779f;
    n *= -0.02047598f;
    n += 0.66432273f;
    n = r0 += n;
    n *= r3;
    n *= 1.62495005f;
    n *= r5;
    n += r2;
    n *= 0.27242762f;
    n += 0.01208993f;
    n *= -1.63127828f;
    n *= r4;
    n *= r1;
    n += r0;
    n *= 0.08914190f;
    return n;
} // Solution0

// Solution1 result = 0.00009012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 1.52543211f;
    r0 = n *= 0.88067204f;
    n += 1.94728374f;
    r1 = n *= -0.21906257f;
    n += 1.20715749f;
    r2 = n += -1.75220871f;
    r3 = n += 4.36535645f;
    n = r2 *= n;
    n += r1;
    n = r2 *= n;
    n += -1.65151370f;
    n += 1.51669395f;
    r1 = n += -3.58029032f;
    n += -27.25333023f;
    r4 = n *= -0.01376544f;
    r5 = n += 1.04740906f;
    n += -0.08113424f;
    n += 8.21681881f;
    n *= 0.00592576f;
    n += 2.81820226f;
    n = r0 += n;
    n *= r3;
    n *= 0.15824065f;
    n *= r5;
    n += r2;
    n *= -0.30601686f;
    n += -2.91524911f;
    n *= 0.52066594f;
    n *= r4;
    n *= r1;
    n += r0;
    n *= -0.15528573f;
    return n;
} // Solution1

// Solution2 result = 0.00007272
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -1.69447136f;
    r0 = n *= -0.40861043f;
    n += -4.79890060f;
    r1 = n *= 0.32634950f;
    n += 0.67684144f;
    r2 = n += 1.14119482f;
    r3 = n += -2.64563227f;
    n = r2 *= n;
    n += r1;
    n = r2 *= n;
    n += -2.04829931f;
    n += 5.64518309f;
    r1 = n += -1.57568741f;
    n += -3.26152563f;
    r4 = n *= -0.84174305f;
    r5 = n += 1.24253130f;
    n += 4.83140373f;
    n += -2.18809557f;
    n *= 0.10675350f;
    n += -0.64830774f;
    n = r0 += n;
    n *= r3;
    n *= 0.11364636f;
    n *= r5;
    n += r2;
    n *= 0.99059355f;
    n += -4.08400440f;
    n *= 0.46593466f;
    n *= r4;
    n *= r1;
    n += r0;
    n *= 0.28866780f;
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
