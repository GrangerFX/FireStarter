// Run date: 06/02/24 21:56:29 Pacific Daylight Time
// Run duration = 13359.479645 seconds
// Run generation = 117
// Run evolution = 6
// Run max result = 0.00000031
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 3
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
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

// Solution0 result = 0.00000015
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159250f;
    r0 = n *= 0.39757830f;
    r1 = n *= -0.06976901f;
    n *= 0.67008102f;
    r2 = n *= 2.38117146f;
    r3 = n *= -1.49549627f;
    n *= r0;
    r0 = n += -2.32767606f;
    r4 = n += 1.40846610f;
    r5 = n *= 0.43213311f;
    n = r1 *= n;
    n *= 1.58584511f;
    n *= r3;
    n *= -0.15601359f;
    n += 3.26462483f;
    n *= r5;
    n *= r4;
    n += -0.60566872f;
    n *= 0.56891358f;
    r4 = n *= 0.40680143f;
    n += 0.98203152f;
    r5 = n += 2.39172721f;
    n *= r0;
    n = r5 += n;
    n *= r5;
    n *= r4;
    n *= 1.39292836f;
    n *= 2.78325415f;
    n *= r2;
    r2 = n += 0.00000004f;
    n += r1;
    n += r2;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065843f;
    r0 = n *= 0.73190671f;
    r1 = n *= 0.07599092f;
    n *= -0.16309145f;
    r2 = n *= 0.56751943f;
    r3 = n *= 1.24926138f;
    n *= r0;
    r0 = n += -0.88339514f;
    r4 = n += 1.23348606f;
    r5 = n *= -0.39310408f;
    n = r1 *= n;
    n *= -3.16637683f;
    n *= r3;
    n *= -0.00351934f;
    n += 5.77765799f;
    n *= r5;
    n *= r4;
    n += -0.07518969f;
    n *= 3.46686101f;
    r4 = n *= 2.47857809f;
    n += -5.14189005f;
    r5 = n += -5.75627565f;
    n *= r0;
    n = r5 += n;
    n *= r5;
    n *= r4;
    n *= 2.82218242f;
    n *= -4.68586254f;
    n *= r2;
    r2 = n += -0.05906584f;
    n += r1;
    n += r2;
    return n;
} // Solution1

// Solution2 result = 0.00000031
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799359f;
    r0 = n *= -0.68783933f;
    r1 = n *= -1.34652460f;
    n *= -0.81481707f;
    r2 = n *= -0.25537044f;
    r3 = n *= 0.77039766f;
    n *= r0;
    r0 = n += 1.02000773f;
    r4 = n += 2.72812057f;
    r5 = n *= 0.23864941f;
    n = r1 *= n;
    n *= -0.00058419f;
    n *= r3;
    n *= 3.80167007f;
    n += 6.94201708f;
    n *= r5;
    n *= r4;
    n += 0.66036147f;
    n *= 0.05320558f;
    r4 = n *= -1.07574713f;
    n += -2.09801650f;
    r5 = n += -5.77851439f;
    n *= r0;
    n = r5 += n;
    n *= r5;
    n *= r4;
    n *= -2.88429141f;
    n *= -0.00344142f;
    n *= r2;
    r2 = n += 0.26179940f;
    n += r1;
    n += r2;
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
