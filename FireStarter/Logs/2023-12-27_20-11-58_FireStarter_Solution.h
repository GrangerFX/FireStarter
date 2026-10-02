// Run date: 12/27/23 20:11:58 Pacific Standard Time
// Run duration = 631.448365 seconds
// Run generation = 9
// Run evolution = 8
// Run max result = 0.00000080
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

// Solution0 result = 0.00000042
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159393f;
    r1 = n += 0.00000294f;
    n *= r1;
    n += -2.17525363f;
    n *= 0.08734642f;
    r1 = n *= 1.88535893f;
    r2 = n += 0.02004985f;
    n *= 0.75196058f;
    r3 = n *= -1.28255057f;
    n = r1 += n;
    n *= r3;
    n *= 0.07769872f;
    r3 = n += -1.44744301f;
    r4 = n += -0.80192840f;
    n = r1 *= n;
    n *= 4.07994223f;
    n += 1.53116333f;
    r5 = n *= -0.40976673f;
    r6 = n *= -3.72501302f;
    n = r5 += n;
    n *= -1.86021698f;
    n *= r6;
    n += 4.10132742f;
    n *= r1;
    n += r2;
    n += 0.89438379f;
    n += r4;
    n *= r3;
    n *= r0;
    n *= -0.15675594f;
    n *= r5;
    n += -0.00000163f;
    return n;
} // Solution0

// Solution1 result = 0.00000080
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09066892f;
    r1 = n += 0.00001840f;
    n *= r1;
    n += -4.37555027f;
    n *= -0.16109325f;
    r1 = n *= 0.90140486f;
    r2 = n += -0.24933194f;
    n *= 2.37877035f;
    r3 = n *= -0.41639015f;
    n = r1 += n;
    n *= r3;
    n *= 0.88631916f;
    r3 = n += -0.62968624f;
    r4 = n += 0.07339675f;
    n = r1 *= n;
    n *= -3.08583736f;
    n += 0.05869072f;
    r5 = n *= 1.31058252f;
    r6 = n *= -0.53553689f;
    n = r5 += n;
    n *= 2.58766556f;
    n *= r6;
    n += -2.28883576f;
    n *= r1;
    n += r2;
    n += 9.83755302f;
    n += r4;
    n *= r3;
    n *= r0;
    n *= 0.45066294f;
    n *= r5;
    n += -0.11814390f;
    return n;
} // Solution1

// Solution2 result = 0.00000060
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799431f;
    r1 = n += 0.00000146f;
    n *= r1;
    n += -0.53020442f;
    n *= 0.73901802f;
    r1 = n *= -1.18302405f;
    r2 = n += 0.93360269f;
    n *= 0.57289189f;
    r3 = n *= -1.77046847f;
    n = r1 += n;
    n *= r3;
    n *= 0.09605338f;
    r3 = n += 1.55575454f;
    r4 = n += 2.46337461f;
    n = r1 *= n;
    n *= 0.09664007f;
    n += 0.02242387f;
    r5 = n *= 0.69086164f;
    r6 = n *= -0.30913463f;
    n = r5 += n;
    n *= 6.29489183f;
    n *= r6;
    n += -0.24557918f;
    n *= r1;
    n += r2;
    n += -1.82179415f;
    n += r4;
    n *= r3;
    n *= r0;
    n *= 0.68733817f;
    n *= r5;
    n += 0.52359772f;
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
