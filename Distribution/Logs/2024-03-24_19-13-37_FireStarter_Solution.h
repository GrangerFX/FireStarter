// Run date: 03/24/24 19:13:37 Pacific Daylight Time
// Run duration = 1538.808572 seconds
// Run generation = 917
// Run evolution = 18
// Run max result = 0.00000036
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

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

// Solution0 result = 0.00000027
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    n *= 0.20106645f;
    r1 = n *= -1.16248655f;
    r2 = n *= 1.15604699f;
    n *= r1;
    n += -2.36318374f;
    r1 = n += 1.73644042f;
    r3 = n *= 0.86443818f;
    r4 = n += 0.41455022f;
    n *= -1.03763735f;
    n = r1 += n;
    r5 = n *= 1.33546591f;
    r6 = n *= 1.96579933f;
    n += -0.11870615f;
    n *= r1;
    n *= -2.01013637f;
    n += 0.85502154f;
    r1 = n += -0.72356766f;
    n *= -54.33729935f;
    n += 7.23120689f;
    n *= 0.00000000f;
    n += r0;
    n *= 0.61522526f;
    n *= r1;
    n = r6 *= n;
    n = r4 *= n;
    n *= r5;
    n += r6;
    n *= r3;
    n += r4;
    n += r2;
    n += 0.00000007f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09066153f;
    n *= -0.44991219f;
    r1 = n *= 1.20712876f;
    r2 = n *= 1.09056044f;
    n *= r1;
    n += -0.62260216f;
    r1 = n += -0.50008416f;
    r3 = n *= -1.53785789f;
    r4 = n += 1.68913591f;
    n *= 0.68647075f;
    n = r1 += n;
    r5 = n *= 0.05417352f;
    r6 = n *= 0.69914693f;
    n += 2.39663601f;
    n *= r1;
    n *= 1.80000234f;
    n += 3.39365411f;
    r1 = n += -3.17161655f;
    n *= -6.75177336f;
    n += 118.98548126f;
    n *= 0.00000009f;
    n += r0;
    n *= -0.35430232f;
    n *= r1;
    n = r6 *= n;
    n = r4 *= n;
    n *= r5;
    n += r6;
    n *= r3;
    n += r4;
    n += r2;
    n += -0.11813112f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799359f;
    n *= -4.88743067f;
    r1 = n *= 0.12605597f;
    r2 = n *= -0.23969603f;
    n *= r1;
    n += 1.44923699f;
    r1 = n += -1.19049788f;
    r3 = n *= 0.42684478f;
    r4 = n += 0.27490228f;
    n *= -3.21224046f;
    n = r1 += n;
    r5 = n *= -0.49209300f;
    r6 = n *= -1.03102243f;
    n += -0.23640868f;
    n *= r1;
    n *= -1.89518464f;
    n += 2.94729328f;
    r1 = n += -3.27289677f;
    n *= -2.24121571f;
    n += 11.89842606f;
    n *= -0.00000002f;
    n += r0;
    n *= -2.65422416f;
    n *= r1;
    n = r6 *= n;
    n = r4 *= n;
    n *= r5;
    n += r6;
    n *= r3;
    n += r4;
    n += r2;
    n += 0.52359849f;
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
