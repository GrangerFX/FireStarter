// Run date: 01/28/24 09:04:32 Pacific Standard Time
// Run duration = 6836.311679 seconds
// Run generation = 67
// Run evolution = 13
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
// Run tests = 1
// Run streams = 4
// Run units = 4
// Run states = 64
// Run generations = 0
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

// Solution0 result = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -3.14159274f;
    r0 = n *= -0.58756828f;
    r1 = n *= -0.57635015f;
    n *= -10.45963860f;
    n *= 0.00000042f;
    n = r1 += n;
    r2 = n *= -0.69147211f;
    r3 = n *= -0.40129942f;
    n *= r0;
    n *= -1.39512157f;
    r0 = n += -0.76024967f;
    r4 = n *= -2.54576635f;
    n *= -0.35073990f;
    n += -0.19015646f;
    n += 2.78058004f;
    n += -37.98299408f;
    r5 = n *= 0.02245071f;
    r6 = n += 0.59609723f;
    n *= r0;
    r0 = n += 1.02167928f;
    r7 = n *= -1.76641881f;
    n = r1 *= n;
    n = r5 *= n;
    n *= r3;
    n += r6;
    n *= r7;
    n += r0;
    n *= r2;
    n += r1;
    n += r5;
    n *= r4;
    n += -0.00000005f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -3.09065890f;
    r0 = n *= -0.52032864f;
    r1 = n *= 0.08054666f;
    n *= -7.33621979f;
    n *= 0.00000846f;
    n = r1 += n;
    r2 = n *= 0.88003284f;
    r3 = n *= -1.06210232f;
    n *= r0;
    n *= -1.48623776f;
    r0 = n += -1.94661725f;
    r4 = n *= 1.21857142f;
    n *= 2.64640665f;
    n += 0.72902715f;
    n += 1.99736059f;
    n += -1.27470660f;
    r5 = n *= 1.11691046f;
    r6 = n += 1.72248101f;
    n *= r0;
    r0 = n += -0.80074394f;
    r7 = n *= 0.34469444f;
    n = r1 *= n;
    n = r5 *= n;
    n *= r3;
    n += r6;
    n *= r7;
    n += r0;
    n *= r2;
    n += r1;
    n += r5;
    n *= r4;
    n += -0.11813191f;
    return n;
} // Solution1

// Solution2 result = 0.00000028
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -2.61799383f;
    r0 = n *= -0.81248289f;
    r1 = n *= 0.86562830f;
    n *= 0.00000036f;
    n *= -5.93252945f;
    n = r1 += n;
    r2 = n *= -0.30388081f;
    r3 = n *= -0.63741416f;
    n *= r0;
    n *= 0.39774299f;
    r0 = n += -0.21938102f;
    r4 = n *= -0.78631526f;
    n *= -0.84663934f;
    n += -1.09398282f;
    n += -2.82033682f;
    n += 1.99151731f;
    r5 = n *= -0.40411523f;
    r6 = n += 0.22410546f;
    n *= r0;
    r0 = n += -3.06041431f;
    r7 = n *= -1.45265400f;
    n = r1 *= n;
    n = r5 *= n;
    n *= r3;
    n += r6;
    n *= r7;
    n += r0;
    n *= r2;
    n += r1;
    n += r5;
    n *= r4;
    n += 0.52359873f;
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
