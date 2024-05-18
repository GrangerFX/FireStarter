// Run date: 05/13/24 09:29:22 Pacific Daylight Time
// Run duration = 340.715971 seconds
// Run generation = 177
// Run evolution = 7
// Run max result = 0.00000060
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
// Run evolveSeed = 1
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

// Run scale = 0.200000f
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

// Solution0 result = 0.00000054
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.56571543f;
    n *= -0.28293014f;
    r0 = n *= -1.10719883f;
    n *= -1.25276220f;
    r1 = n += 0.78262269f;
    n += 0.52714485f;
    n *= 0.47574374f;
    r2 = n *= 1.67786336f;
    n *= r1;
    n *= -1.51692092f;
    r1 = n *= 0.90984309f;
    r3 = n += 1.05374277f;
    r4 = n *= 0.05174576f;
    r5 = n += 1.79812098f;
    r6 = n *= 2.64734769f;
    n *= -1.13045144f;
    n = r6 += n;
    n *= r3;
    n += -9.40336704f;
    n *= -0.87893337f;
    n *= r4;
    n += 0.42339775f;
    n = r5 += n;
    n *= r5;
    n = r1 *= n;
    n += 4.79754877f;
    r5 = n *= -0.16256993f;
    n *= r1;
    n += r2;
    n += r0;
    n += r5;
    n += r6;
    return n;
} // Solution0

// Solution1 result = 0.00000060
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.12393832f;
    n *= 0.94910711f;
    r0 = n *= 1.51737309f;
    n *= 2.53115416f;
    r1 = n += -2.52369475f;
    n += 0.67773503f;
    n *= 0.40781444f;
    r2 = n *= -2.05427766f;
    n *= r1;
    n *= -0.41842249f;
    r1 = n *= -0.32654440f;
    r3 = n += 0.48855206f;
    r4 = n *= 0.06138740f;
    r5 = n += 1.11305594f;
    r6 = n *= 5.61214733f;
    n *= -1.04080057f;
    n = r6 += n;
    n *= r3;
    n += -2.05422950f;
    n *= -4.25977325f;
    n *= r4;
    n += 0.40973392f;
    n = r5 += n;
    n *= r5;
    n = r1 *= n;
    n += 0.48703405f;
    r5 = n *= -3.21418738f;
    n *= r1;
    n += r2;
    n += r0;
    n += r5;
    n += r6;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.91309118f;
    n *= -0.34102947f;
    r0 = n *= 1.63660169f;
    n *= -0.50704938f;
    r1 = n += 0.93176359f;
    n += 0.16597329f;
    n *= -0.79204345f;
    r2 = n *= -1.51281178f;
    n *= r1;
    n *= 0.21986695f;
    r1 = n *= -2.41267967f;
    r3 = n += 0.50846916f;
    r4 = n *= 0.05471481f;
    r5 = n += 1.08740497f;
    r6 = n *= -0.10306662f;
    n *= 3.88140345f;
    n = r6 += n;
    n *= r3;
    n += -4.64239788f;
    n *= -3.00385809f;
    n *= r4;
    n += 1.05063236f;
    n = r5 += n;
    n *= r5;
    n = r1 *= n;
    n += 2.08691239f;
    r5 = n *= -0.80544674f;
    n *= r1;
    n += r2;
    n += r0;
    n += r5;
    n += r6;
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
