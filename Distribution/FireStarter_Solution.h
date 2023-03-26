// Run date: 03/26/23 15:31:41 Pacific Daylight Time
// Run duration = 10.742045 seconds
// Run generation = 50
// Run result = 0.00000072
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 32

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 0
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

// Solution0 result = 0.00000048
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= 0.44380054f;
    n = r1 *= n;
    n *= -2.01165819f;
    n *= 0.42962465f;
    n *= -1.32964242f;
    r2 = n *= 0.95086241f;
    r3 = n *= -0.06593668f;
    n *= 4.71672869f;
    r4 = n += 0.34434274f;
    r5 = n *= 0.07700435f;
    n *= r4;
    n *= 6.62229729f;
    n *= -0.15706743f;
    r4 = n += -6.25709295f;
    n = r3 += n;
    n *= r5;
    n += r4;
    r4 = n *= -0.34600869f;
    n *= 1.42657053f;
    n *= r2;
    n = r3 += n;
    n *= r4;
    n *= -0.26332611f;
    n += r1;
    n *= r3;
    n *= 0.10735938f;
    n *= 0.49833837f;
    n *= 1.35905659f;
    n *= 0.59752840f;
    n *= r0;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000072
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    r1 = n *= -0.03503569f;
    n = r1 *= n;
    n *= 0.87438482f;
    n *= 0.12367368f;
    n *= -0.15284181f;
    r2 = n *= 108174.37500000f;
    r3 = n *= -0.16475478f;
    n *= 0.95797843f;
    r4 = n += -2.56962442f;
    r5 = n *= -0.02172581f;
    n *= r4;
    n *= -0.30692536f;
    n *= 4.79304934f;
    r4 = n += 57.70737457f;
    n = r3 += n;
    n *= r5;
    n += r4;
    r4 = n *= -0.07436672f;
    n *= -0.32852408f;
    n *= r2;
    n = r3 += n;
    n *= r4;
    n *= -0.21064322f;
    n += r1;
    n *= r3;
    n *= 0.04014898f;
    n *= 0.11691143f;
    n *= 0.20659913f;
    n *= -0.35299203f;
    n *= r0;
    n += -0.11813188f;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799383f;
    r1 = n *= -0.27998745f;
    n = r1 *= n;
    n *= 0.53897256f;
    n *= 1.84263098f;
    n *= -1.86060417f;
    r2 = n *= -1.09815061f;
    r3 = n *= 0.61031318f;
    n *= -6.38587570f;
    r4 = n += 3.77058101f;
    r5 = n *= -0.01612971f;
    n *= r4;
    n *= -0.81588119f;
    n *= -0.76124895f;
    r4 = n += -2.12377954f;
    n = r3 += n;
    n *= r5;
    n += r4;
    r4 = n *= -0.02192529f;
    n *= 2.80273700f;
    n *= r2;
    n = r3 += n;
    n *= r4;
    n *= 5.47585487f;
    n += r1;
    n *= r3;
    n *= 0.00267277f;
    n *= -21372.53906250f;
    n *= -0.06251845f;
    n *= -0.21336691f;
    n *= r0;
    n += 0.52359885f;
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
