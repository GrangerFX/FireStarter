// Run date: 07/13/23 16:53:08 Pacific Daylight Time
// Run duration = 743.305333 seconds
// Run generation = 79
// Run evolution = 0
// Run result = 0.00000054
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= 0.38170409f;
    r2 = n *= 0.82582670f;
    n *= r2;
    n *= 3.98759747f;
    r2 = n += -2.25806403f;
    n += r2;
    n *= -0.03302260f;
    r2 = n += 2.61437106f;
    n *= -0.05078558f;
    n += 1.27025366f;
    r3 = n *= 1.40515232f;
    r4 = n *= -0.28485137f;
    n *= 1.64090836f;
    n *= -0.12509501f;
    n *= 2.96811318f;
    n += r2;
    r2 = n *= -0.55884510f;
    r5 = n += 0.83754528f;
    n *= r2;
    n *= r1;
    n = r0 += n;
    n *= r4;
    n = r5 *= n;
    n *= r0;
    n *= -0.15477556f;
    n += 1.02153885f;
    n *= -1.01650083f;
    n *= r5;
    n *= r3;
    n += -0.30398908f;
    n += 0.30398908f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065843f;
    r1 = n *= 0.04675088f;
    r2 = n *= -3.54303670f;
    n *= r2;
    n *= -2.86545205f;
    r2 = n += 0.95277089f;
    n += r2;
    n *= -0.17470644f;
    r2 = n += -1.30467534f;
    n *= 0.25664821f;
    n += 2.71608305f;
    r3 = n *= -1.40249872f;
    r4 = n *= 0.02353170f;
    n *= 0.01457354f;
    n *= 0.36328295f;
    n *= -0.00017792f;
    n += r2;
    r2 = n *= -1.49039364f;
    r5 = n += -0.18076117f;
    n *= r2;
    n *= r1;
    n = r0 += n;
    n *= r4;
    n = r5 *= n;
    n *= r0;
    n *= 0.55873466f;
    n += 1.65746903f;
    n *= -0.95697957f;
    n *= r5;
    n *= r3;
    n += -0.19056366f;
    n += 0.07243194f;
    return n;
} // Solution1

// Solution2 result = 0.00000054
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= 0.15295970f;
    r2 = n *= -0.01074428f;
    n *= r2;
    n *= 261260.18750000f;
    r2 = n += 1.06846321f;
    n += r2;
    n *= 0.11829725f;
    r2 = n += -1.62179077f;
    n *= 0.26149544f;
    n += -2.61938024f;
    r3 = n *= -1.11475849f;
    r4 = n *= -0.16716494f;
    n *= 2.84666061f;
    n *= -0.01431784f;
    n *= -1.14223719f;
    n += r2;
    r2 = n *= -0.08472042f;
    r5 = n += 0.75249428f;
    n *= r2;
    n *= r1;
    n = r0 += n;
    n *= r4;
    n = r5 *= n;
    n *= r0;
    n *= -0.49808198f;
    n += -1.03313673f;
    n *= -0.59434336f;
    n *= r5;
    n *= r3;
    n += 0.06815431f;
    n += 0.45544448f;
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
