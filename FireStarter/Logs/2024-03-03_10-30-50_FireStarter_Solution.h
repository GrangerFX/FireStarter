// Run date: 03/03/24 10:30:50 Pacific Standard Time
// Run duration = 4214.046936 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00057865
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
// Run tests = 8
// Run streams = 4
// Run units = 4
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

// Solution0 result = 0.00049365
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 4.21745586f;
    r1 = n += 4.22265911f;
    r2 = n *= -0.07891883f;
    r3 = n += 1.69380856f;
    n *= r0;
    r0 = n *= -0.15319204f;
    r4 = n += 0.88515735f;
    n += 2.54829144f;
    n *= -2.23106837f;
    r5 = n *= 0.34889516f;
    n = r0 *= n;
    n = r0 *= n;
    n *= r5;
    n = r3 *= n;
    n *= 0.01082219f;
    r5 = n *= 7.84952927f;
    r6 = n *= 2.14113212f;
    n = r0 += n;
    n = r2 *= n;
    n *= r1;
    n += -4.60524225f;
    n *= r5;
    n *= -2.07662821f;
    n *= 1.70287538f;
    n *= r4;
    n += r3;
    n *= 0.98298317f;
    n += r0;
    n *= r2;
    n += -5.41165590f;
    n *= r6;
    n *= -0.48685935f;
    return n;
} // Solution0

// Solution1 result = 0.00027633
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 1.69514406f;
    r1 = n += 2.72201443f;
    r2 = n *= 0.00574484f;
    r3 = n += -0.39019081f;
    n *= r0;
    r0 = n *= 0.55742282f;
    r4 = n += 0.33208752f;
    n += 2.16466594f;
    n *= 0.60442036f;
    r5 = n *= -1.38172436f;
    n = r0 *= n;
    n = r0 *= n;
    n *= r5;
    n = r3 *= n;
    n *= -1.60122395f;
    r5 = n *= -1.46247542f;
    r6 = n *= 0.05709243f;
    n = r0 += n;
    n = r2 *= n;
    n *= r1;
    n += 0.07570939f;
    n *= r5;
    n *= 2.54930401f;
    n *= -0.11186016f;
    n *= r4;
    n += r3;
    n *= 1103.62084961f;
    n += r0;
    n *= r2;
    n += -58.82139587f;
    n *= r6;
    n *= -0.45350334f;
    return n;
} // Solution1

// Solution2 result = 0.00057865
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 3.54406333f;
    r1 = n += -3.65539217f;
    r2 = n *= -0.10406223f;
    r3 = n += 1.89353669f;
    n *= r0;
    r0 = n *= 0.06063017f;
    r4 = n += -0.70371777f;
    n += -1.25068176f;
    n *= -0.46638542f;
    r5 = n *= 2.27565885f;
    n = r0 *= n;
    n = r0 *= n;
    n *= r5;
    n = r3 *= n;
    n *= 1.59788370f;
    r5 = n *= 1.29651821f;
    r6 = n *= -0.25376987f;
    n = r0 += n;
    n = r2 *= n;
    n *= r1;
    n += 0.74313289f;
    n *= r5;
    n *= -0.92241979f;
    n *= -8.24257851f;
    n *= r4;
    n += r3;
    n *= -298.38586426f;
    n += r0;
    n *= r2;
    n += 3.43454599f;
    n *= r6;
    n *= -0.05918176f;
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
