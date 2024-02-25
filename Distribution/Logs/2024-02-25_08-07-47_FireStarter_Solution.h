// Run date: 02/25/24 08:07:47 Pacific Standard Time
// Run duration = 1020.397596 seconds
// Run generation = 42
// Run evolution = 6
// Run max result = 0.00001658
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
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 128
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

// Solution0 result = 0.00000044
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.57079625f;
    n *= -0.76500750f;
    n = r0 *= n;
    r1 = n += 1.42457986f;
    r2 = n *= -1.79489863f;
    n *= -1.02618194f;
    n += 0.69846743f;
    n = r2 += n;
    n *= -0.38201752f;
    r3 = n *= 3.88034415f;
    n *= -0.40140364f;
    r4 = n *= 0.45384017f;
    n *= 0.68608862f;
    r5 = n += 1.34082961f;
    n += -2.00759268f;
    n += 2.64146805f;
    n = r5 *= n;
    n *= r2;
    r2 = n *= 0.26002797f;
    n += 0.69615513f;
    r6 = n *= 0.00875195f;
    n *= r3;
    n += -2.69060373f;
    n = r5 *= n;
    n *= r1;
    n += -4.40987778f;
    n += r4;
    n *= r2;
    n *= r5;
    n += r0;
    n += 0.19398308f;
    n *= r6;
    return n;
} // Solution0

// Solution1 result = 0.00001407
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 2.00231671f;
    n *= -0.08782335f;
    n = r0 *= n;
    r1 = n += 1.48115480f;
    r2 = n *= 2.02062297f;
    n *= -1.44012940f;
    n += -0.72378820f;
    n = r2 += n;
    n *= -0.02443924f;
    r3 = n *= -2.24054933f;
    n *= -0.02223126f;
    r4 = n *= -0.59369940f;
    n *= 40.09819412f;
    r5 = n += -1.69593596f;
    n += 0.25177163f;
    n += 1.07150459f;
    n = r5 *= n;
    n *= r2;
    r2 = n *= 0.62976420f;
    n += -1.16385150f;
    r6 = n *= -0.30837315f;
    n *= r3;
    n += -2.91077113f;
    n = r5 *= n;
    n *= r1;
    n += 2.38920999f;
    n += r4;
    n *= r2;
    n *= r5;
    n += r0;
    n += 1.90766752f;
    n *= r6;
    return n;
} // Solution1

// Solution2 result = 0.00001658
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 1.39738739f;
    n *= -1.40334582f;
    n = r0 *= n;
    r1 = n += -1.49047458f;
    r2 = n *= 0.00768065f;
    n *= -0.40043953f;
    n += 0.11582360f;
    n = r2 += n;
    n *= 0.86666548f;
    r3 = n *= 1.57588172f;
    n *= 0.91523772f;
    r4 = n *= -13.20335197f;
    n *= 0.29015088f;
    r5 = n += -1.65808451f;
    n += -0.08085744f;
    n += -1.96569288f;
    n = r5 *= n;
    n *= r2;
    r2 = n *= -0.53777844f;
    n += 0.45745587f;
    r6 = n *= -0.05311770f;
    n *= r3;
    n += -0.15466270f;
    n = r5 *= n;
    n *= r1;
    n += -379.44223022f;
    n += r4;
    n *= r2;
    n *= r5;
    n += r0;
    n += 5.84043741f;
    n *= r6;
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
