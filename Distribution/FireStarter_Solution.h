// Run date: 09/09/23 09:37:14 Pacific Daylight Time
// Run duration = 3211.094797 seconds
// Run generation = 5
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
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run generations = 500
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
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n += 0.00000006f;
    n = r1 *= n;
    r2 = n *= -0.00460798f;
    n *= 3.71714044f;
    r3 = n += -1.35064518f;
    n *= 0.53666610f;
    n += r1;
    n *= 0.23946546f;
    r1 = n += -1.98316193f;
    n *= -1.99487209f;
    n += -0.24647185f;
    n += -2.78887844f;
    n += 0.34699512f;
    r4 = n *= 0.01650622f;
    r5 = n *= 1.98676085f;
    r6 = n *= -9.99182701f;
    n += 6.02987385f;
    n *= r6;
    n *= -0.00000029f;
    n += r3;
    n *= 0.28562263f;
    n *= r4;
    n += r5;
    r5 = n += 0.78253013f;
    n = r5 *= n;
    n *= r5;
    n *= r1;
    n += r2;
    n *= r0;
    n += -1.49758136f;
    n += 1.49758136f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09066343f;
    r1 = n += 0.00000826f;
    n = r1 *= n;
    r2 = n *= -0.05081629f;
    n *= 2.47202826f;
    r3 = n += 0.49044192f;
    n *= -0.79898590f;
    n += r1;
    n *= 0.25914982f;
    r1 = n += -2.15882254f;
    n *= -1.81041849f;
    n += 1.31571877f;
    n += -1.80025756f;
    n += -2.12364960f;
    r4 = n *= -1.37225580f;
    r5 = n *= -0.00842304f;
    r6 = n *= 0.92551231f;
    n += 0.05758694f;
    n *= r6;
    n *= -9.77172279f;
    n += r3;
    n *= -0.00068449f;
    n *= r4;
    n += r5;
    r5 = n += 0.81740355f;
    n = r5 *= n;
    n *= r5;
    n *= r1;
    n += r2;
    n *= r0;
    n += -0.91300768f;
    n += 0.79487044f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799383f;
    r1 = n += 0.00000022f;
    n = r1 *= n;
    r2 = n *= -0.00005381f;
    n *= 0.57393396f;
    r3 = n += 0.00008836f;
    n *= -2.04640579f;
    n += r1;
    n *= 0.15949975f;
    r1 = n += -0.79451376f;
    n *= 1.03154349f;
    n += -0.69560146f;
    n += -0.50021470f;
    n += 0.70922565f;
    r4 = n *= -0.07117989f;
    r5 = n *= 1.85472035f;
    r6 = n *= 2.03177762f;
    n += 7.51147842f;
    n *= r6;
    n *= -0.44420880f;
    n += r3;
    n *= -0.04756333f;
    n *= r4;
    n += r5;
    r5 = n += 0.88132936f;
    n = r5 *= n;
    n *= r5;
    n *= r1;
    n += r2;
    n *= r0;
    n += 0.58406699f;
    n += -0.06046840f;
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
