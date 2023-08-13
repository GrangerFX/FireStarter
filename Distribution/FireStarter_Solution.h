// Run date: 08/12/23 19:19:39 Pacific Daylight Time
// Run duration = 776.184749 seconds
// Run generation = 50
// Run evolution = 2
// Run result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 0
// Run units = 8
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.28545487f;
    r0 = n += -1.85613787f;
    r1 = n *= 2.19493198f;
    n *= r1;
    r1 = n *= -0.13584736f;
    r2 = n *= 1.29510307f;
    n += 3.54917002f;
    n *= 0.00463001f;
    n *= 0.87761873f;
    r3 = n += 0.39930338f;
    r4 = n *= 0.48095214f;
    n *= -2.22905040f;
    r5 = n += 0.27169466f;
    r6 = n *= -0.87547576f;
    r7 = n += 2.75798368f;
    n *= 0.02204102f;
    n = r1 *= n;
    n *= r3;
    r3 = n += 2.37664390f;
    n = r3 += n;
    n *= r5;
    n *= r6;
    n *= r4;
    n = r3 *= n;
    n *= r7;
    n += r2;
    n += r1;
    n += 8.94154644f;
    n *= r3;
    n *= r0;
    n += 0.30903366f;
    n += -0.30903366f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.53109348f;
    r0 = n += -1.55956495f;
    r1 = n *= 1.12550259f;
    n *= r1;
    r1 = n *= -0.62373209f;
    r2 = n *= -0.56332415f;
    n += -1.66889822f;
    n *= -0.00249720f;
    n *= 1.19885564f;
    r3 = n += 0.09927657f;
    r4 = n *= -0.52126372f;
    n *= -5.31768799f;
    r5 = n += -2.05405593f;
    r6 = n *= -0.23127806f;
    r7 = n += -0.28810516f;
    n *= 4.26461554f;
    n = r1 *= n;
    n *= r3;
    r3 = n += 0.86369193f;
    n = r3 += n;
    n *= r5;
    n *= r6;
    n *= r4;
    n = r3 *= n;
    n *= r7;
    n += r2;
    n += r1;
    n += -9.42756462f;
    n *= r3;
    n *= r0;
    n += -0.45169351f;
    n += 0.33356172f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.91872907f;
    r0 = n += -0.69926459f;
    r1 = n *= -0.12065746f;
    n *= r1;
    r1 = n *= -6.33615398f;
    r2 = n *= -2.11073947f;
    n += -0.44694248f;
    n *= -6.07257605f;
    n *= -0.00474706f;
    r3 = n += -0.79597139f;
    r4 = n *= -0.56076884f;
    n *= -0.83778405f;
    r5 = n += -0.89368016f;
    r6 = n *= 0.28544995f;
    r7 = n += 0.11891088f;
    n *= 1.95771992f;
    n = r1 *= n;
    n *= r3;
    r3 = n += 0.97269756f;
    n = r3 += n;
    n *= r5;
    n *= r6;
    n *= r4;
    n = r3 *= n;
    n *= r7;
    n += r2;
    n += r1;
    n += -1.06350386f;
    n *= r3;
    n *= r0;
    n += -1.27518201f;
    n += 1.79878068f;
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
