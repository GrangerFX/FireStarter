// Run date: 02/20/23 18:59:24 Pacific Standard Time
// Run duration = 170.094714 seconds
// Run count = 13
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 200
// Run precision = 0
// Run attempts = 64
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 13

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

// Precision = 0.00011854

// Solution0 precision = 0.00011843
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.45324719f;
    n += -2.18735361f;
    r1 = n *= 0.71552730f;
    r2 = n *= -0.00387597f;
    n *= -5.77981043f;
    n += -1.97253633f;
    n += 2.10356951f;
    r3 = n *= 0.57264006f;
    r4 = n += 0.92022377f;
    n *= r1;
    r1 = n += -3.05721378f;
    r5 = n *= 0.78306895f;
    n *= -0.01853389f;
    r6 = n += -0.38968569f;
    n *= r0;
    n = r1 *= n;
    r0 = n *= -0.47256529f;
    n = r0 += n;
    n *= r1;
    n += 1.48579597f;
    n += 0.34478700f;
    n *= -1.36443174f;
    n = r2 += n;
    n *= r5;
    n *= r3;
    n *= r4;
    n *= r0;
    n += r2;
    n += r6;
    n += -0.60797995f;
    n += -2.35188508f;
    n *= -0.17198719f;
    return n;
} // Solution0

// Solution1 precision = 0.00009871
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.03281724f;
    n += -3.17679119f;
    r1 = n *= 0.07127190f;
    r2 = n *= 1.06978464f;
    n *= -1.47528648f;
    n += 0.00480840f;
    n += -0.04979054f;
    r3 = n *= -0.99538666f;
    r4 = n += 1.28845835f;
    n *= r1;
    r1 = n += -1.24696445f;
    r5 = n *= -0.10767870f;
    n *= 1.84070444f;
    r6 = n += 1.62204564f;
    n *= r0;
    n = r1 *= n;
    r0 = n *= 0.55348247f;
    n = r0 += n;
    n *= r1;
    n += -1.84541309f;
    n += -2.99042869f;
    n *= -0.08029889f;
    n = r2 += n;
    n *= r5;
    n *= r3;
    n *= r4;
    n *= r0;
    n += r2;
    n += r6;
    n += -1.50943649f;
    n += 1.70045006f;
    n *= 0.55732393f;
    return n;
} // Solution1

// Solution2 precision = 0.00011854
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.50122952f;
    n += -2.31623125f;
    r1 = n *= 0.16368419f;
    r2 = n *= -1.29587579f;
    n *= 1.14526057f;
    n += 1.10112536f;
    n += -1.60162044f;
    r3 = n *= -0.27775285f;
    r4 = n += 0.48578551f;
    n *= r1;
    r1 = n += -1.44919050f;
    r5 = n *= -0.53679311f;
    n *= -0.59751469f;
    r6 = n += -0.07426972f;
    n *= r0;
    n = r1 *= n;
    r0 = n *= -1.94037426f;
    n = r0 += n;
    n *= r1;
    n += 0.49974912f;
    n += 0.83246630f;
    n *= 0.40379703f;
    n = r2 += n;
    n *= r5;
    n *= r3;
    n *= r4;
    n *= r0;
    n += r2;
    n += r6;
    n += 3.03290844f;
    n += -0.59385967f;
    n *= 0.44348982f;
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
