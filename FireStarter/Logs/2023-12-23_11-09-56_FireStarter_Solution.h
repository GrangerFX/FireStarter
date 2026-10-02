// Run date: 12/23/23 11:09:56 Pacific Standard Time
// Run duration = 320.090811 seconds
// Run generation = 3
// Run evolution = 3
// Run max result = 0.00002847
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
// Run tests = 1
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

// Solution0 result = 0.00000793
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.33775544f;
    r0 = n *= -1.17324138f;
    n *= 0.72555250f;
    r1 = n *= -0.20428309f;
    r2 = n += -0.81989509f;
    r3 = n += 0.74576592f;
    n += r1;
    n *= 0.33089516f;
    n *= 2.70716524f;
    r1 = n *= 0.09959855f;
    n *= r2;
    r2 = n += -1.62610364f;
    n *= 0.32048556f;
    n = r0 *= n;
    n += -0.74638247f;
    n = r2 += n;
    n = r1 *= n;
    n += -1.11601722f;
    r4 = n *= 1.65748644f;
    n *= r0;
    r0 = n += 0.51675195f;
    n += 0.03009640f;
    r5 = n *= -0.38664311f;
    n += r4;
    n *= r5;
    n *= r0;
    n += r2;
    n += r1;
    n *= 1.78469002f;
    n *= -2.25118470f;
    n += r3;
    n *= 0.11474284f;
    return n;
} // Solution0

// Solution1 result = 0.00002000
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.84109557f;
    r0 = n *= 0.22992484f;
    n *= 3.20943809f;
    r1 = n *= 0.14866477f;
    r2 = n += -0.58548266f;
    r3 = n += 0.25055012f;
    n += r1;
    n *= -0.01981635f;
    n *= -3.73403907f;
    r1 = n *= -2.11196876f;
    n *= r2;
    r2 = n += 0.25116378f;
    n *= -2.50758123f;
    n = r0 *= n;
    n += 0.21029587f;
    n = r2 += n;
    n = r1 *= n;
    n += -2.29305339f;
    r4 = n *= 1.37218308f;
    n *= r0;
    r0 = n += 0.58559215f;
    n += -1.59315431f;
    r5 = n *= 1.77972758f;
    n += r4;
    n *= r5;
    n *= r0;
    n += r2;
    n += r1;
    n *= 0.94897920f;
    n *= 0.66196316f;
    n += r3;
    n *= 0.38601610f;
    return n;
} // Solution1

// Solution2 result = 0.00002847
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.21647418f;
    r0 = n *= 0.26026395f;
    n *= 0.42896894f;
    r1 = n *= -1.31500661f;
    r2 = n += 0.81537145f;
    r3 = n += -1.19329107f;
    n += r1;
    n *= -1.07358718f;
    n *= -0.07541101f;
    r1 = n *= -1.87853515f;
    n *= r2;
    r2 = n += 1.24626136f;
    n *= -1.48092473f;
    n = r0 *= n;
    n += 1.04897666f;
    n = r2 += n;
    n = r1 *= n;
    n += 0.81958526f;
    r4 = n *= -2.06399536f;
    n *= r0;
    r0 = n += 0.49413460f;
    n += -1.69988453f;
    r5 = n *= 0.81674325f;
    n += r4;
    n *= r5;
    n *= r0;
    n += r2;
    n += r1;
    n *= 2.11779046f;
    n *= -0.29054245f;
    n += r3;
    n *= -0.44398507f;
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
