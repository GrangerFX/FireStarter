// Run date: 08/13/23 07:53:17 Pacific Daylight Time
// Run duration = 848.503158 seconds
// Run generation = 57
// Run evolution = 13
// Run result = 0.00000006
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
// Run units = 1
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.01015222f;
    n += -0.03189414f;
    r0 = n *= -0.41613024f;
    n *= 70352.85156250f;
    r1 = n *= 0.36472508f;
    n *= r0;
    r0 = n += -1.37342691f;
    n *= -2.14197612f;
    r2 = n *= -0.00684451f;
    n *= 4.40532255f;
    n = r0 += n;
    n += -2.05548763f;
    n *= 0.04422690f;
    r3 = n += -0.91814518f;
    n += -4.16867924f;
    n *= -0.33072597f;
    n *= r2;
    n *= 0.29605597f;
    n *= -1.72612143f;
    r2 = n += 0.44753453f;
    r4 = n *= -0.44455427f;
    n = r2 *= n;
    n += r3;
    n *= r4;
    n *= r0;
    n *= 0.55989188f;
    n += -0.31831592f;
    n *= r2;
    n *= 0.46086118f;
    n *= r1;
    n *= 0.40254661f;
    n += 0.00000004f;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.10420135f;
    n += -0.32205081f;
    r0 = n *= 0.19017306f;
    n *= -2429.71411133f;
    r1 = n *= -0.42913359f;
    n *= r0;
    r0 = n += -1.60494220f;
    n *= -0.01252362f;
    r2 = n *= -0.43967840f;
    n *= 4.69430876f;
    n = r0 += n;
    n += 1.76570141f;
    n *= 0.00418558f;
    r3 = n += 0.08355991f;
    n += -0.89473152f;
    n *= 1.38714135f;
    n *= r2;
    n *= -3.25561070f;
    n *= -1.48347795f;
    r2 = n += 1.43047285f;
    r4 = n *= -0.23761940f;
    n = r2 *= n;
    n += r3;
    n *= r4;
    n *= r0;
    n *= 0.47560516f;
    n += -0.24742271f;
    n *= r2;
    n *= 0.73772573f;
    n *= r1;
    n *= -0.37838793f;
    n += -0.11813176f;
    return n;
} // Solution1

// Solution2 result = 0.00000006
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.04009279f;
    n += -0.10496268f;
    r0 = n *= -0.47230077f;
    n *= 0.03396680f;
    r1 = n *= -127216.33593750f;
    n *= r0;
    r0 = n += 8.48776245f;
    n *= -0.12709144f;
    r2 = n *= -0.29444358f;
    n *= -3.81382728f;
    n = r0 += n;
    n += -4.66199064f;
    n *= -0.00321630f;
    r3 = n += -1.33699131f;
    n += 0.55631852f;
    n *= -5.41624737f;
    n *= r2;
    n *= -0.23755476f;
    n *= -0.24225533f;
    r2 = n += 0.46819937f;
    r4 = n *= -0.37229061f;
    n = r2 *= n;
    n += r3;
    n *= r4;
    n *= r0;
    n *= -0.14462417f;
    n += 0.02367224f;
    n *= r2;
    n *= -1.59754968f;
    n *= r1;
    n *= 0.23899034f;
    n += 0.52359879f;
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
