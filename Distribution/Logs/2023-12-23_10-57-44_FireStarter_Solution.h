// Run date: 12/23/23 10:57:44 Pacific Standard Time
// Run duration = 517.634338 seconds
// Run generation = 6
// Run evolution = 4
// Run max result = 0.00002468
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

// Solution0 result = 0.00000626
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.09786284f;
    r1 = n *= -0.55788660f;
    n *= 2.19173384f;
    n += r0;
    r0 = n += -0.32376608f;
    r2 = n += -0.06237784f;
    n += 1.52948618f;
    n *= -2.84182596f;
    n *= 2.02645946f;
    r3 = n *= -0.01326657f;
    n *= r0;
    r0 = n += -0.98945242f;
    n *= 1.19689608f;
    n = r1 *= n;
    n += -0.45829758f;
    n = r0 += n;
    n = r3 *= n;
    n += 0.71668655f;
    r4 = n *= -1.36315286f;
    n *= r1;
    r1 = n += 3.16953158f;
    n += -2.16147447f;
    r5 = n *= 0.82062739f;
    n += r4;
    n *= r5;
    n *= r1;
    n += r0;
    n += r3;
    n *= -1.14863551f;
    n *= -1.25844109f;
    n += r2;
    n *= -0.34142730f;
    return n;
} // Solution0

// Solution1 result = 0.00000823
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.74290210f;
    r1 = n *= -0.38950181f;
    n *= 1.81770861f;
    n += r0;
    r0 = n += -0.58847851f;
    r2 = n += -1.37039721f;
    n += 0.45212394f;
    n *= -0.36937240f;
    n *= 0.11176787f;
    r3 = n *= 1.65481460f;
    n *= r0;
    r0 = n += 0.39376390f;
    n *= -0.93812639f;
    n = r1 *= n;
    n += -0.31773525f;
    n = r0 += n;
    n = r3 *= n;
    n += 1.49758124f;
    r4 = n *= 1.72373593f;
    n *= r1;
    r1 = n += 0.54802388f;
    n += -1.41395962f;
    r5 = n *= -1.74417436f;
    n += r4;
    n *= r5;
    n *= r1;
    n += r0;
    n += r3;
    n *= 1.57273996f;
    n *= 1.62675977f;
    n += r2;
    n *= 0.17881760f;
    return n;
} // Solution1

// Solution2 result = 0.00002468
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.56118608f;
    r1 = n *= -1.20024884f;
    n *= 1.00073647f;
    n += r0;
    r0 = n += 0.84434468f;
    r2 = n += -1.72712731f;
    n += 0.73279196f;
    n *= 0.11800928f;
    n *= 0.35778481f;
    r3 = n *= -4.02919722f;
    n *= r0;
    r0 = n += 1.35874951f;
    n *= 0.52795368f;
    n = r1 *= n;
    n += 0.97655994f;
    n = r0 += n;
    n = r3 *= n;
    n += 1.23707545f;
    r4 = n *= -1.58844316f;
    n *= r1;
    r1 = n += 0.11866996f;
    n += -0.13496345f;
    r5 = n *= 0.33316800f;
    n += r4;
    n *= r5;
    n *= r1;
    n += r0;
    n += r3;
    n *= -0.12610777f;
    n *= 3.98756886f;
    n += r2;
    n *= -0.60356015f;
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
