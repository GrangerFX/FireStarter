// Run date: 10/07/23 12:34:18 Pacific Daylight Time
// Run duration = 1073.213563 seconds
// Run generation = 34
// Run evolution = 11
// Run result = 0.00000012
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
// Run tests = 2
// Run units = 4
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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

    n *= -0.67240900f;
    r0 = n += 1.70332682f;
    n += 0.40910834f;
    r1 = n *= -0.58335054f;
    r2 = n *= -0.75559920f;
    n *= r1;
    r1 = n *= -0.41007465f;
    n *= -0.15531822f;
    r3 = n += 2.03826880f;
    n += 0.64824414f;
    n *= 1.55701053f;
    n *= r1;
    r1 = n += -1.69123459f;
    r4 = n += 1.12116361f;
    n += r4;
    n *= 7.56280422f;
    n *= r3;
    n *= -0.00555884f;
    r3 = n += 1.42078006f;
    r4 = n *= -0.91663307f;
    n += -2.41359854f;
    n *= -2.89264965f;
    n *= r4;
    n += 2.68942738f;
    n *= r1;
    n *= r3;
    n *= r2;
    n += r0;
    n += 0.40295440f;
    n *= -1.23754787f;
    n *= -0.07854691f;
    n += 0.00059823f;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.21009775f;
    r0 = n += 0.26026529f;
    n += 0.38907507f;
    r1 = n *= 1.12824953f;
    r2 = n *= -2.95062852f;
    n *= r1;
    r1 = n *= 0.38224903f;
    n *= -0.06670421f;
    r3 = n += -1.47602642f;
    n += 0.02189640f;
    n *= 0.43209803f;
    n *= r1;
    r1 = n += -0.35375625f;
    r4 = n += 0.23367454f;
    n += r4;
    n *= 9.58368206f;
    n *= r3;
    n *= -0.00521180f;
    r3 = n += -0.26190662f;
    r4 = n *= 2.21538973f;
    n += -2.64094186f;
    n *= -3.42793775f;
    n *= r4;
    n += 0.01246181f;
    n *= r1;
    n *= r3;
    n *= r2;
    n += r0;
    n += -0.22130699f;
    n *= -1.14649940f;
    n *= -1.39411378f;
    n += 0.85747284f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.30972892f;
    r0 = n += -1.89638352f;
    n += 1.08551514f;
    r1 = n *= -0.31794408f;
    r2 = n *= 2.79435825f;
    n *= r1;
    r1 = n *= -1.22489405f;
    n *= 0.28633922f;
    r3 = n += 1.85234749f;
    n += 0.42938665f;
    n *= -2.79778671f;
    n *= r1;
    r1 = n += -1.61578286f;
    r4 = n += 0.92746252f;
    n += r4;
    n *= 0.40216389f;
    n *= r3;
    n *= 0.08130990f;
    r3 = n += -0.77080530f;
    r4 = n *= -1.95280075f;
    n += 2.41360164f;
    n *= 0.80336529f;
    n *= r4;
    n += -1.74637210f;
    n *= r1;
    n *= r3;
    n *= r2;
    n += r0;
    n += 0.46473035f;
    n *= 1.17178690f;
    n *= 0.77273822f;
    n += 1.08570969f;
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
