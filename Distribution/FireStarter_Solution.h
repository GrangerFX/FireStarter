// Run date: 07/16/23 11:23:11 Pacific Daylight Time
// Run duration = 1696.380004 seconds
// Run generation = 9
// Run evolution = 0
// Run result = 0.00000036
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

// Solution0 result = 0.00000036
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.35943836f;
    n += 1.12920892f;
    r0 = n *= -1.22687757f;
    r1 = n *= 0.18535024f;
    n = r0 *= n;
    r2 = n *= 2.51031184f;
    n *= 0.59322077f;
    r3 = n *= -0.00957150f;
    n *= -0.64659381f;
    n *= r0;
    n *= 6.98697090f;
    r0 = n += 1.86467481f;
    r4 = n *= -0.90941536f;
    n *= -3.12668562f;
    n += 2.76486373f;
    n *= 1.30511093f;
    n *= -1.76388407f;
    n *= r3;
    n += 1.00531268f;
    r3 = n += -1.61931372f;
    n *= -0.67811620f;
    r5 = n += -1.64052117f;
    n += r4;
    n += r2;
    r2 = n += -0.08617034f;
    n = r3 *= n;
    n *= r3;
    n += r5;
    n *= r1;
    n *= r2;
    n *= r0;
    n += -0.00000007f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.28063500f;
    n += 0.86734706f;
    r0 = n *= -0.03656854f;
    r1 = n *= -0.21953756f;
    n = r0 *= n;
    r2 = n *= 38383.61718750f;
    n *= -0.17280953f;
    r3 = n *= 0.01590137f;
    n *= -3.29099751f;
    n *= r0;
    n *= 8.32945824f;
    r0 = n += 0.04595644f;
    r4 = n *= -1.27366543f;
    n *= 28.95756912f;
    n += 0.15202463f;
    n *= 0.25088790f;
    n *= 6.01206064f;
    n *= r3;
    n += 0.16998325f;
    r3 = n += -0.02252771f;
    n *= -0.88475794f;
    r5 = n += 0.28066847f;
    n += r4;
    n += r2;
    r2 = n += 78.64204407f;
    n = r3 *= n;
    n *= r3;
    n += r5;
    n *= r1;
    n *= r2;
    n *= r0;
    n += -0.11813192f;
    return n;
} // Solution1

// Solution2 result = 0.00000013
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.03161344f;
    n += -0.08276378f;
    r0 = n *= 0.21141694f;
    r1 = n *= -5285.54931641f;
    n = r0 *= n;
    r2 = n *= -0.06169002f;
    n *= -1.39189291f;
    r3 = n *= -1.80047059f;
    n *= -0.05703502f;
    n *= r0;
    n *= -0.09140868f;
    r0 = n += -0.37523830f;
    r4 = n *= 0.37838870f;
    n *= -8.81670189f;
    n += 10.13658714f;
    n *= 0.09706817f;
    n *= 4.76669359f;
    n *= r3;
    n += -2.28229022f;
    r3 = n += 0.07810757f;
    n *= -0.05242781f;
    r5 = n += -0.15306552f;
    n += r4;
    n += r2;
    r2 = n += -0.08029565f;
    n = r3 *= n;
    n *= r3;
    n += r5;
    n *= r1;
    n *= r2;
    n *= r0;
    n += 0.52359879f;
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
