// Run date: 12/18/22 13:43:30 Pacific Standard Time
// Run duration = 69.412279 seconds
// Run count = 9
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 10;
// Run processes = 16;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 9

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

// Precision = 0.00014040

// Solution0 precision = 0.00008476
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.42987275f;
    r0 = n *= 0.42757517f;
    r1 = n *= 0.75223011f;
    r2 = n += -0.26801845f;
    r3 = n += -0.03835765f;
    r4 = n *= -1.26985979f;
    n = r1 += n;
    n += -4.30364323f;
    n *= r2;
    n *= 0.51441807f;
    n *= 2.39960194f;
    n *= r1;
    n = r0 *= n;
    n += r4;
    r4 = n += 0.31326535f;
    r1 = n *= -1.10861862f;
    n += -0.23646303f;
    n += r0;
    n *= r3;
    n *= 2.64040732f;
    r3 = n += -1.02358770f;
    r0 = n += -0.61341554f;
    r2 = n += -1.55652356f;
    r5 = n *= 0.37674516f;
    n = r1 += n;
    n *= r3;
    n += 0.41874465f;
    n += r4;
    n += r2;
    n *= r5;
    n += r0;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 0.00008869
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.92376411f;
    r0 = n *= 0.42024505f;
    r1 = n *= 0.93426400f;
    r2 = n += 1.57741356f;
    r3 = n += 0.44920215f;
    r4 = n *= 0.38061294f;
    n = r1 += n;
    n += -7.18429518f;
    n *= r2;
    n *= 0.02650864f;
    n *= 0.15760879f;
    n *= r1;
    n = r0 *= n;
    n += r4;
    r4 = n += -0.64952844f;
    r1 = n *= -0.97072148f;
    n += 0.16193394f;
    n += r0;
    n *= r3;
    n *= -1.06937671f;
    r3 = n += -1.10690272f;
    r0 = n += -0.25379688f;
    r2 = n += -0.28290769f;
    r5 = n *= 0.84036928f;
    n = r1 += n;
    n *= r3;
    n += -0.90762866f;
    n += r4;
    n += r2;
    n *= r5;
    n += r0;
    n *= r1;
    return n;
} // Solution1

// Solution2 precision = 0.00014040
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.28429654f;
    r0 = n *= 0.91556710f;
    r1 = n *= 0.36634442f;
    r2 = n += 0.55912703f;
    r3 = n += -0.28450227f;
    r4 = n *= -1.21263731f;
    n = r1 += n;
    n += 0.84922951f;
    n *= r2;
    n *= 11.03686810f;
    n *= -0.30314475f;
    n *= r1;
    n = r0 *= n;
    n += r4;
    r4 = n += -1.53408659f;
    r1 = n *= 0.88311648f;
    n += -0.10012938f;
    n += r0;
    n *= r3;
    n *= -1.50974941f;
    r3 = n += -0.43162417f;
    r0 = n += 0.03547421f;
    r2 = n += 0.33810648f;
    r5 = n *= 2.47170019f;
    n = r1 += n;
    n *= r3;
    n += -0.58296245f;
    n += r4;
    n += r2;
    n *= r5;
    n += r0;
    n *= r1;
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
