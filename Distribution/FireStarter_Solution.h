// Run date: 08/13/23 08:55:22 Pacific Daylight Time
// Run duration = 997.870833 seconds
// Run generation = 67
// Run evolution = 7
// Run result = 0.00000048
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

// Solution0 result = 0.00000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.66323888f;
    n += -0.64992410f;
    n += 0.35958171f;
    r0 = n += -2.18801141f;
    r1 = n *= 0.83342296f;
    n *= 0.42989796f;
    n = r1 *= n;
    r2 = n += -0.43083599f;
    r3 = n *= 0.00324012f;
    n *= 2.31300163f;
    r4 = n += -0.18059376f;
    n += -5.23786211f;
    n *= 0.23400946f;
    r5 = n *= -1.72463977f;
    n *= -0.15942857f;
    n += r3;
    n *= r4;
    n *= r2;
    n *= 1.20271933f;
    r2 = n += -1.69354522f;
    r4 = n *= 0.29501247f;
    n = r1 += n;
    n += r1;
    n *= r4;
    n += 0.07077876f;
    n = r5 += n;
    n *= 0.78752106f;
    n *= r2;
    n += r5;
    n *= r0;
    n += 0.94934851f;
    n += -0.94934851f;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.01145959f;
    n += -1.73547554f;
    n += -0.02758994f;
    r0 = n += -0.31613365f;
    r1 = n *= -0.47589228f;
    n *= -0.36807495f;
    n = r1 *= n;
    r2 = n += 0.63485885f;
    r3 = n *= -0.08910467f;
    n *= 1.65196800f;
    r4 = n += -1.41928160f;
    n += 1.47601974f;
    n *= 1.77375174f;
    r5 = n *= -4.41774368f;
    n *= 0.07293984f;
    n += r3;
    n *= r4;
    n *= r2;
    n *= -3.34507561f;
    r2 = n += -1.96577251f;
    r4 = n *= -0.57404804f;
    n = r1 += n;
    n += r1;
    n *= r4;
    n += 4.26862383f;
    n = r5 += n;
    n *= 0.55213392f;
    n *= r2;
    n += r5;
    n *= r0;
    n += 0.03576890f;
    n += -0.15390092f;
    return n;
} // Solution1

// Solution2 result = 0.00000048
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.62753069f;
    n += 2.21278930f;
    n += -1.91343665f;
    r0 = n += -1.28981578f;
    r1 = n *= -0.85996777f;
    n *= 0.09848461f;
    n = r1 *= n;
    r2 = n += -0.42529047f;
    r3 = n *= 0.02442894f;
    n *= 5.91454363f;
    r4 = n += -0.66875064f;
    n += -0.95127225f;
    n *= 0.45983544f;
    r5 = n *= 3.17482591f;
    n *= -0.40866262f;
    n += r3;
    n *= r4;
    n *= r2;
    n *= -0.69070375f;
    r2 = n += -1.50149369f;
    r4 = n *= 0.76624733f;
    n = r1 += n;
    n += r1;
    n *= r4;
    n += 0.48094967f;
    n = r5 += n;
    n *= 0.97799593f;
    n *= r2;
    n += r5;
    n *= r0;
    n += -0.68333811f;
    n += 1.20693696f;
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
