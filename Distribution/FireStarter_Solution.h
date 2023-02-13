// Run date: 02/12/23 21:20:26 Pacific Standard Time
// Run duration = 43.145861 seconds
// Run count = 454
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 128
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 454

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00010765

// Solution0 precision = 0.00000662
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.45794892f;
    n += -0.55651134f;
    r1 = n *= 0.14382342f;
    r2 = n *= 1.64862990f;
    n *= -0.59823287f;
    n = r1 += n;
    n = r0 += n;
    n *= -0.63597053f;
    r3 = n += 1.67490542f;
    n *= 0.53951740f;
    r4 = n += 0.76446122f;
    r5 = n *= 1.74264634f;
    n *= -1.16752505f;
    r6 = n += -0.33393443f;
    n *= r0;
    n *= r1;
    r1 = n *= -0.34795371f;
    n *= 19.00047493f;
    n *= r4;
    n += 10.58561611f;
    n += -1.00441194f;
    n *= r1;
    n = r2 += n;
    n *= r5;
    r5 = n += 1.90937757f;
    n *= r3;
    n *= r5;
    n += r2;
    n += r6;
    n += -0.53830838f;
    n += 2.05826807f;
    n *= 0.28338912f;
    return n;
} // Solution0

// Solution1 precision = 0.00000262
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.32493651f;
    n += 0.93640202f;
    r1 = n *= 0.40251142f;
    r2 = n *= 0.55096573f;
    n *= -1.81618953f;
    n = r1 += n;
    n = r0 += n;
    n *= 0.52274203f;
    r3 = n += -0.93920958f;
    n *= 1.22897232f;
    r4 = n += -1.69788468f;
    r5 = n *= -1.34461725f;
    n *= 0.46386895f;
    r6 = n += -0.35506845f;
    n *= r0;
    n *= r1;
    r1 = n *= 2.33266950f;
    n *= -21.45226479f;
    n *= r4;
    n += 1.01293850f;
    n += -14.77209377f;
    n *= r1;
    n = r2 += n;
    n *= r5;
    r5 = n += 2.66700053f;
    n *= r3;
    n *= r5;
    n += r2;
    n += r6;
    n += -0.28865111f;
    n += 0.15884140f;
    n *= -0.12644428f;
    return n;
} // Solution1

// Solution2 precision = 0.00010765
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.39573681f;
    n += 1.33561444f;
    r1 = n *= -0.41671151f;
    r2 = n *= -0.75547123f;
    n *= 1.32568729f;
    n = r1 += n;
    n = r0 += n;
    n *= -0.41812271f;
    r3 = n += 0.81099856f;
    n *= 0.51829553f;
    r4 = n += 0.90782970f;
    r5 = n *= 1.87728679f;
    n *= -1.07243812f;
    r6 = n += 0.82661593f;
    n *= r0;
    n *= r1;
    r1 = n *= 2.52593231f;
    n *= 43.87936783f;
    n *= r4;
    n += -1.57817805f;
    n += -13.38229465f;
    n *= r1;
    n = r2 += n;
    n *= r5;
    r5 = n += 0.19658452f;
    n *= r3;
    n *= r5;
    n += r2;
    n += r6;
    n += -0.38106725f;
    n += 1.27008688f;
    n *= 0.74622631f;
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
