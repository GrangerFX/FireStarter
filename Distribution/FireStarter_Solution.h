// Run date: 07/31/23 11:09:28 Pacific Daylight Time
// Run duration = 354.291926 seconds
// Run generation = 38
// Run evolution = 0
// Run result = 0.00000054
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
// Run processes = 8
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

// Solution0 result = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= 0.05719378f;
    r2 = n *= 2.19420576f;
    n *= r2;
    n += -0.83248502f;
    r2 = n *= 0.15327337f;
    r3 = n += -0.69158012f;
    n += 1.28801751f;
    n += r3;
    n *= 0.42257136f;
    r3 = n *= 1.86412966f;
    r4 = n *= 0.97375011f;
    n = r3 *= n;
    n *= 2.30734205f;
    n += r4;
    n *= 168.14575195f;
    n *= 0.64060712f;
    r4 = n *= -0.02473203f;
    r5 = n += -2.57401514f;
    n *= -2.52788329f;
    n *= r1;
    n = r0 += n;
    n *= r3;
    n = r5 *= n;
    n *= r0;
    n += r2;
    n += 2.05079579f;
    n += r4;
    n *= r5;
    n += -0.06322716f;
    r5 = n += 0.06322719f;
    n += r5;
    return n;
} // Solution0

// Solution1 result = 0.00000054
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    r1 = n *= 0.05084704f;
    r2 = n *= 1.07745516f;
    n *= r2;
    n += -0.60787165f;
    r2 = n *= -1.63680029f;
    r3 = n += -0.19286442f;
    n += -0.84419066f;
    n += r3;
    n *= -1.15297365f;
    r3 = n *= -0.25666440f;
    r4 = n *= -1.00957537f;
    n = r3 *= n;
    n *= -1.87358046f;
    n += r4;
    n *= 0.21787336f;
    n *= -9.59864140f;
    r4 = n *= 4.70905399f;
    r5 = n += -4.52934599f;
    n *= -1.32584882f;
    n *= r1;
    n = r0 += n;
    n *= r3;
    n = r5 *= n;
    n *= r0;
    n += r2;
    n += -5.02145720f;
    n += r4;
    n *= r5;
    n += -0.36125752f;
    r5 = n += 0.30219159f;
    n += r5;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799383f;
    r1 = n *= -0.20655166f;
    r2 = n *= 0.66950065f;
    n *= r2;
    n += -0.23481759f;
    r2 = n *= 1.42400455f;
    r3 = n += -1.13852477f;
    n += -0.08216379f;
    n += r3;
    n *= 0.63581693f;
    r3 = n *= -0.48233804f;
    r4 = n *= -0.10558170f;
    n = r3 *= n;
    n *= 3.33330154f;
    n += r4;
    n *= 0.54980713f;
    n *= 0.99461782f;
    r4 = n *= 1.45133340f;
    r5 = n += -1.84628272f;
    n *= 0.95128173f;
    n *= r1;
    n = r0 += n;
    n *= r3;
    n = r5 *= n;
    n *= r0;
    n += r2;
    n += -1.12655830f;
    n += r4;
    n *= r5;
    n += 0.66685015f;
    r5 = n += -0.40505081f;
    n += r5;
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
