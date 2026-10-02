// Run date: 01/13/24 11:54:45 Pacific Standard Time
// Run duration = 23719.694143 seconds
// Run generation = 32
// Run evolution = 6
// Run max result = 0.00000751
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
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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

// Solution0 result = 0.00000244
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -1.36413729f;
    n *= 0.37858388f;
    r1 = n += 1.62244534f;
    r2 = n *= 0.66183317f;
    r3 = n *= -1.81658626f;
    r4 = n *= -1.47634768f;
    n = r2 *= n;
    n *= -0.08165962f;
    r5 = n += 0.99205458f;
    r6 = n += 1.66156459f;
    r7 = n *= -0.24994342f;
    n *= r1;
    n += 3.18644547f;
    r1 = n *= 1.48075402f;
    n += -17.68113518f;
    n *= r0;
    n += r4;
    n *= 0.00000000f;
    n *= r1;
    n += -0.47724774f;
    n = r7 *= n;
    n *= r7;
    n = r6 *= n;
    n += 0.45910209f;
    n *= r2;
    n += -2.02878070f;
    n *= r3;
    n += -0.00000094f;
    n *= 3.00968575f;
    n *= r5;
    n += 0.00000270f;
    n *= r6;
    return n;
} // Solution0

// Solution1 result = 0.00000751
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.11593830f;
    n *= 0.30348614f;
    r1 = n += 0.10868007f;
    r2 = n *= -2.63958359f;
    r3 = n *= -1.86866558f;
    r4 = n *= -1.39740098f;
    n = r2 *= n;
    n *= -0.31019449f;
    r5 = n += 0.19298734f;
    r6 = n += 1.32332242f;
    r7 = n *= -1.22339749f;
    n *= r1;
    n += -3.34788847f;
    r1 = n *= 0.00001707f;
    n += 0.12131550f;
    n *= r0;
    n += r4;
    n *= -6.88707924f;
    n *= r1;
    n += 1.42303705f;
    n = r7 *= n;
    n *= r7;
    n = r6 *= n;
    n += -0.47745600f;
    n *= r2;
    n += -3.76264191f;
    n *= r3;
    n += -0.03535555f;
    n *= -0.82604051f;
    n *= r5;
    n += -0.01661868f;
    n *= r6;
    return n;
} // Solution1

// Solution2 result = 0.00000560
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.32455486f;
    n *= 0.96780956f;
    r1 = n += -0.82844812f;
    r2 = n *= -0.87121177f;
    r3 = n *= -0.66651344f;
    r4 = n *= 0.78971273f;
    n = r2 *= n;
    n *= 0.69090086f;
    r5 = n += 1.16490650f;
    r6 = n += 1.52618611f;
    r7 = n *= 0.45870176f;
    n *= r1;
    n += 4.20657301f;
    r1 = n *= 0.00765365f;
    n += -0.29111582f;
    n *= r0;
    n += r4;
    n *= -1.79399550f;
    n *= r1;
    n += 1.92178106f;
    n = r7 *= n;
    n *= r7;
    n = r6 *= n;
    n += 0.40058723f;
    n *= r2;
    n += 2.64967585f;
    n *= r3;
    n += 0.61790818f;
    n *= -0.11555401f;
    n *= r5;
    n += 0.11602473f;
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
