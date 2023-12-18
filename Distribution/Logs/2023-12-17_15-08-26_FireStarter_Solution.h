// Run date: 12/17/23 15:08:26 Pacific Standard Time
// Run duration = 892.992382 seconds
// Run generation = 18
// Run evolution = 5
// Run max result = 0.00000017
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

// Solution0 result = 0.00000017
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= 0.62362373f;
    n += -1.95917177f;
    n *= 0.80338651f;
    n *= 2.30494571f;
    r1 = n *= -2.45657778f;
    r2 = n *= 0.25103223f;
    r3 = n *= 0.65253443f;
    n = r3 *= n;
    n *= -0.12795764f;
    n += 1.22415447f;
    r4 = n += 1.67892253f;
    r5 = n += -1.07907915f;
    n *= -2.27249360f;
    n *= 0.18585616f;
    n *= -2.63138509f;
    r6 = n *= 0.14372069f;
    n *= 2.87404895f;
    r7 = n *= 0.06162423f;
    r8 = n += -1.71758282f;
    n += r3;
    n = r7 *= n;
    n += r8;
    n *= r1;
    n *= r7;
    n *= r4;
    n *= r6;
    n *= r5;
    n += -2.10805273f;
    n *= 0.92937511f;
    n += r0;
    n += r2;
    n *= 1.42632341f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= -0.54902387f;
    n += 1.69684529f;
    n *= -0.48151597f;
    n *= -1.38759279f;
    r1 = n *= -0.73361069f;
    r2 = n *= -1.10425627f;
    r3 = n *= 1.76769805f;
    n = r3 *= n;
    n *= -0.14507133f;
    n += 0.75910205f;
    r4 = n += 3.44074869f;
    r5 = n += 1.22560549f;
    n *= -1.10732114f;
    n *= -0.78581607f;
    n *= -1.80858827f;
    r6 = n *= 0.08933632f;
    n *= 0.12254938f;
    r7 = n *= -0.89684260f;
    r8 = n += -1.62377310f;
    n += r3;
    n = r7 *= n;
    n += r8;
    n *= r1;
    n *= r7;
    n *= r4;
    n *= r6;
    n *= r5;
    n += 1.86647058f;
    n *= 0.81327099f;
    n += r0;
    n += r2;
    n *= 0.66032666f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n *= -0.74658853f;
    n += 1.95456409f;
    n *= 1.96128082f;
    n *= -0.44561890f;
    r1 = n *= 3.95196366f;
    r2 = n *= 0.27962980f;
    r3 = n *= -0.26606420f;
    n = r3 *= n;
    n *= -1.38899970f;
    n += -0.12608823f;
    r4 = n += 0.39207205f;
    r5 = n += 2.36261654f;
    n *= 0.40218481f;
    n *= -0.42338118f;
    n *= 6.62698698f;
    r6 = n *= -0.30837378f;
    n *= 1.13503504f;
    r7 = n *= 0.87370211f;
    r8 = n += -1.83580196f;
    n += r3;
    n = r7 *= n;
    n += r8;
    n *= r1;
    n *= r7;
    n *= r4;
    n *= r6;
    n *= r5;
    n += 3.78377891f;
    n *= 0.38798693f;
    n += r0;
    n += r2;
    n *= -1.07624018f;
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
