// Run date: 11/09/23 20:58:52 Pacific Standard Time
// Run duration = 54505.037231 seconds
// Run generation = 86
// Run evolution = 13
// Run result = 0.00000400
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
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
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

// Solution0 result = 0.00000080
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.31961477f;
    n += 0.41156340f;
    r0 = n += -1.30019331f;
    n *= 1.01351011f;
    n += -1.06776810f;
    r1 = n *= 0.48978376f;
    r2 = n *= 1.10676074f;
    r3 = n *= -2.00435400f;
    r4 = n *= 0.05638926f;
    n *= r2;
    n = r4 += n;
    r2 = n += 0.32521436f;
    r5 = n += 0.12680402f;
    n *= -6.22820330f;
    n = r0 *= n;
    n *= 2.02886057f;
    n += -1.04751408f;
    n += 0.52093238f;
    r6 = n += 0.86984611f;
    n *= r4;
    n = r0 += n;
    n += r1;
    n = r3 += n;
    n *= -0.57641363f;
    n *= r3;
    n *= r2;
    n *= r0;
    n += 0.35421184f;
    n = r6 += n;
    n += r6;
    n *= 0.52898008f;
    n *= r5;
    return n;
} // Solution0

// Solution1 result = 0.00000095
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 1.52046955f;
    n += -5.92400408f;
    r0 = n += 1.64016914f;
    n *= 0.36889243f;
    n += -1.74109066f;
    r1 = n *= -0.43481797f;
    r2 = n *= -0.74206370f;
    r3 = n *= 0.00588469f;
    r4 = n *= -7.08330345f;
    n *= r2;
    n = r4 += n;
    r2 = n += 0.25982067f;
    r5 = n += 0.01597672f;
    n *= -3.53120542f;
    n = r0 *= n;
    n *= 6.02461481f;
    n += 1.82125640f;
    n += 1.60091889f;
    r6 = n += -2.21551466f;
    n *= r4;
    n = r0 += n;
    n += r1;
    n = r3 += n;
    n *= -0.60405540f;
    n *= r3;
    n *= r2;
    n *= r0;
    n += 0.31833878f;
    n = r6 += n;
    n += r6;
    n *= 0.20639493f;
    n *= r5;
    return n;
} // Solution1

// Solution2 result = 0.00000400
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 2.99918890f;
    n += -0.19093499f;
    r0 = n += -5.01267862f;
    n *= 0.29828981f;
    n += -3.55345345f;
    r1 = n *= -0.42704651f;
    r2 = n *= -0.45130932f;
    r3 = n *= -0.58859271f;
    r4 = n *= 0.39115855f;
    n *= r2;
    n = r4 += n;
    r2 = n += 1.06972170f;
    r5 = n += -0.73755145f;
    n *= -0.86081904f;
    n = r0 *= n;
    n *= 1.01101780f;
    n += -3.35629058f;
    n += 4.25881290f;
    r6 = n += 0.13219039f;
    n *= r4;
    n = r0 += n;
    n += r1;
    n = r3 += n;
    n *= -0.10081071f;
    n *= r3;
    n *= r2;
    n *= r0;
    n += 0.43441841f;
    n = r6 += n;
    n += r6;
    n *= 1.10353351f;
    n *= r5;
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
