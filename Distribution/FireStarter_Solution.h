// Run date: 11/18/23 15:54:29 Pacific Standard Time
// Run duration = 26539.564695 seconds
// Run generation = 19
// Run evolution = 6
// Run result = 0.00000155
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
// Run optimizations = 500
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

// Solution0 result = 0.00000068
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.35929659f;
    r1 = n += -1.21932638f;
    r2 = n += -1.56296670f;
    r3 = n *= 1.45076048f;
    n *= -0.24774192f;
    n *= r0;
    n = r2 += n;
    n += 1.24339664f;
    r0 = n *= -0.01055353f;
    r4 = n += -0.67673123f;
    r5 = n *= 0.54055816f;
    n += -0.00553430f;
    n *= 2.34434390f;
    n *= r5;
    r5 = n *= -1.48415780f;
    n += -0.75782084f;
    n = r5 *= n;
    r6 = n *= -2.21793199f;
    n += r4;
    n *= -1.53547680f;
    r4 = n += -1.91473448f;
    n += r2;
    n *= r5;
    n *= r4;
    n *= -4.96091700f;
    n *= -0.04284699f;
    n += r0;
    n += 0.82865101f;
    n *= r6;
    n *= r3;
    n += -1.56296301f;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000095
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.28191042f;
    r1 = n += -0.08744590f;
    r2 = n += -1.72130024f;
    r3 = n *= -0.67019892f;
    n *= 0.82493132f;
    n *= r0;
    n = r2 += n;
    n += 2.13588548f;
    r0 = n *= -0.01143403f;
    r4 = n += -1.95400643f;
    r5 = n *= -0.55301237f;
    n += -0.05020595f;
    n *= -0.55523854f;
    n *= r5;
    r5 = n *= 1.23727238f;
    n += -0.35816690f;
    n = r5 *= n;
    r6 = n *= 2.72126746f;
    n += r4;
    n *= 3.17057538f;
    r4 = n += 1.05240631f;
    n += r2;
    n *= r5;
    n *= r4;
    n *= 0.03374999f;
    n *= 1.22698033f;
    n += r0;
    n += 1.07359755f;
    n *= r6;
    n *= r3;
    n += -1.83943069f;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000155
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.38339436f;
    r1 = n += -0.30058998f;
    r2 = n += -1.93400538f;
    r3 = n *= -0.13118094f;
    n *= 3.41135716f;
    n *= r0;
    n = r2 += n;
    n += 1.09534025f;
    r0 = n *= 0.01555102f;
    r4 = n += 1.47109056f;
    r5 = n *= 2.38448071f;
    n += -1.06793690f;
    n *= 0.76426506f;
    n *= r5;
    r5 = n *= 0.29911718f;
    n += 0.30438161f;
    n = r5 *= n;
    r6 = n *= 1.17000961f;
    n += r4;
    n *= 0.80743694f;
    r4 = n += -3.65701652f;
    n += r2;
    n *= r5;
    n *= r4;
    n *= 0.43082780f;
    n *= 0.12510084f;
    n += r0;
    n += 1.82548726f;
    n *= r6;
    n *= r3;
    n += -1.41040146f;
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
