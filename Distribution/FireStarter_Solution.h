// Run date: 11/06/23 16:14:17 Pacific Standard Time
// Run duration = 1192.462523 seconds
// Run generation = 38
// Run evolution = 9
// Run result = 0.00000024
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
// Run tests = 1
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

// Solution0 result = 0.00000016
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.47220194f;
    r0 = n += -1.48346615f;
    r1 = n *= -0.28244600f;
    n = r1 *= n;
    r2 = n += -0.35324222f;
    r3 = n += -1.44943821f;
    r4 = n *= 0.17619762f;
    n *= r3;
    n *= r4;
    r4 = n *= -4.89489889f;
    n += 1.37115335f;
    r3 = n += 1.31526399f;
    n = r2 *= n;
    r5 = n += -1.36238992f;
    n *= 1.03623068f;
    n = r1 += n;
    n *= r1;
    n *= r2;
    r2 = n *= 0.32173711f;
    n += r4;
    n = r0 *= n;
    n *= 13.32909775f;
    r4 = n *= -0.00002349f;
    n = r2 *= n;
    n += r3;
    n *= r4;
    n *= 0.16894370f;
    n *= 3.55610037f;
    n += r2;
    n *= r5;
    n += -0.00000014f;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.20602489f;
    r0 = n += -0.63675267f;
    r1 = n *= -0.45508218f;
    n = r1 *= n;
    r2 = n += -0.08438906f;
    r3 = n += -1.95775139f;
    r4 = n *= -1.32057321f;
    n *= r3;
    n *= r4;
    r4 = n *= 0.30317110f;
    n += 1.19353020f;
    r3 = n += -0.01033400f;
    n = r2 *= n;
    r5 = n += -0.22378944f;
    n *= 0.43025583f;
    n = r1 += n;
    n *= r1;
    n *= r2;
    r2 = n *= -1.07574069f;
    n += r4;
    n = r0 *= n;
    n *= 1.20282733f;
    r4 = n *= -0.20355588f;
    n = r2 *= n;
    n += r3;
    n *= r4;
    n *= 3.14009976f;
    n *= 1.29177523f;
    n += r2;
    n *= r5;
    n += -0.11813197f;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.61032474f;
    r0 = n += -1.59782636f;
    r1 = n *= 0.47175902f;
    n = r1 *= n;
    r2 = n += -0.56038946f;
    r3 = n += -11.72716427f;
    r4 = n *= 0.00353499f;
    n *= r3;
    n *= r4;
    r4 = n *= -15.58244038f;
    n += 1.69069564f;
    r3 = n += -0.42241040f;
    n = r2 *= n;
    r5 = n += -0.19860926f;
    n *= -0.91435987f;
    n = r1 += n;
    n *= r1;
    n *= r2;
    r2 = n *= 2.11947608f;
    n += r4;
    n = r0 *= n;
    n *= -0.00002111f;
    r4 = n *= 5.30179691f;
    n = r2 *= n;
    n += r3;
    n *= r4;
    n *= 7.65151596f;
    n *= 0.00057335f;
    n += r2;
    n *= r5;
    n += 0.52359867f;
    n += r0;
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
