// Run date: 04/13/24 10:47:26 Pacific Daylight Time
// Run duration = 506.637514 seconds
// Run generation = 96
// Run evolution = 3
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    r1 = n *= -0.14141653f;
    n *= 0.89660299f;
    n *= r0;
    r0 = n += 0.69838399f;
    r2 = n *= 0.62991464f;
    n *= 0.11926651f;
    r3 = n += 6.54491234f;
    n *= -0.08201180f;
    r4 = n *= -17.71414566f;
    n *= 0.00429609f;
    n *= r3;
    r3 = n *= 0.04560103f;
    n *= 0.41304964f;
    n *= r4;
    n *= r0;
    n *= 3.55732942f;
    n += 1.81470382f;
    r0 = n *= 3.70814967f;
    n = r2 *= n;
    n *= r0;
    n += 14.20876408f;
    n = r1 *= n;
    n *= -2.81524014f;
    n *= r3;
    n = r1 += n;
    n *= r2;
    n *= 0.08460195f;
    n += r1;
    n += -0.22871561f;
    n += 0.22871564f;
    n *= 0.15670866f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065843f;
    r1 = n *= 1.00847626f;
    n *= 0.36924303f;
    n *= r0;
    r0 = n += -2.53550673f;
    r2 = n *= -0.00914781f;
    n *= 1.58146489f;
    r3 = n += 1.82604027f;
    n *= 0.30355257f;
    r4 = n *= 0.97193229f;
    n *= -2.24789476f;
    n *= r3;
    r3 = n *= -0.00745736f;
    n *= 13.46290779f;
    n *= r4;
    n *= r0;
    n *= 1.97475600f;
    n += -3.59366274f;
    r0 = n *= 1.06651592f;
    n = r2 *= n;
    n *= r0;
    n += 0.35637325f;
    n = r1 *= n;
    n *= -4.12731600f;
    n *= r3;
    n = r1 += n;
    n *= r2;
    n *= -0.03262300f;
    n += r1;
    n += -0.77632087f;
    n += 0.85995841f;
    n *= -1.41242540f;
    return n;
} // Solution1

// Solution2 result = 0.00000060
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799359f;
    r1 = n *= 0.72402591f;
    n *= 0.52223414f;
    n *= r0;
    r0 = n += -0.24315906f;
    r2 = n *= 0.38790008f;
    n *= 0.02073666f;
    r3 = n += -1.19944859f;
    n *= -0.38115117f;
    r4 = n *= 1.85051739f;
    n *= -0.03626737f;
    n *= r3;
    r3 = n *= 4.69217491f;
    n *= 0.15144940f;
    n *= r4;
    n *= r0;
    n *= -1.21399689f;
    n += 0.69057482f;
    r0 = n *= -1.46629155f;
    n = r2 *= n;
    n *= r0;
    n += -1.99991202f;
    n = r1 *= n;
    n *= -1.77880645f;
    n *= r3;
    n = r1 += n;
    n *= r2;
    n *= 1.65349543f;
    n += r1;
    n += 0.19117986f;
    n += 0.44693443f;
    n *= 0.82054055f;
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
