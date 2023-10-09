// Run date: 10/09/23 11:36:56 Pacific Daylight Time
// Run duration = 1001.305908 seconds
// Run generation = 64
// Run evolution = 19
// Run result = 0.00002682
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

// Solution0 result = 0.00001863
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -1.04522645f;
    r1 = n *= 1.86077261f;
    r2 = n *= -0.00000001f;
    r3 = n *= -4.13414621f;
    r4 = n += 0.47481909f;
    n = r1 += n;
    r5 = n += 2.53150558f;
    n += -0.02855753f;
    n += r5;
    r5 = n *= 0.04921881f;
    n = r4 *= n;
    n *= 25.59890175f;
    n = r2 *= n;
    n += r2;
    n += 5.63535500f;
    n = r1 += n;
    n += r5;
    n *= 3.08087945f;
    n *= r4;
    n += -2.75943565f;
    n += r0;
    r0 = n *= -0.03179723f;
    r4 = n += 1.33894372f;
    n = r3 += n;
    n = r3 *= n;
    n += -0.24684295f;
    n *= r1;
    n *= r4;
    n *= r3;
    n *= -0.05919702f;
    n *= r0;
    n *= -6.23683405f;
    return n;
} // Solution0

// Solution1 result = 0.00002682
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.43754920f;
    r1 = n *= 0.31883913f;
    r2 = n *= 0.00183260f;
    r3 = n *= -9.49510384f;
    r4 = n += -0.06241854f;
    n = r1 += n;
    r5 = n += 0.58797735f;
    n += 0.12867337f;
    n += r5;
    r5 = n *= 3.05731392f;
    n = r4 *= n;
    n *= 4.87119436f;
    n = r2 *= n;
    n += r2;
    n += -3.56304979f;
    n = r1 += n;
    n += r5;
    n *= 0.93151867f;
    n *= r4;
    n += 1.13877702f;
    n += r0;
    r0 = n *= -0.28045541f;
    r4 = n += -1.11814916f;
    n = r3 += n;
    n = r3 *= n;
    n += -2.25419950f;
    n *= r1;
    n *= r4;
    n *= r3;
    n *= -2.23186612f;
    n *= r0;
    n *= -0.59800911f;
    return n;
} // Solution1

// Solution2 result = 0.00002217
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.46662945f;
    r1 = n *= -1.48535192f;
    r2 = n *= 0.44115758f;
    r3 = n *= -0.90985018f;
    r4 = n += -1.38887274f;
    n = r1 += n;
    r5 = n += -0.34518582f;
    n += -25.16711426f;
    n += r5;
    r5 = n *= -0.03615602f;
    n = r4 *= n;
    n *= -0.28084648f;
    n = r2 *= n;
    n += r2;
    n += 1.38887763f;
    n = r1 += n;
    n += r5;
    n *= -0.09102218f;
    n *= r4;
    n += -1.46529782f;
    n += r0;
    r0 = n *= -1.05876124f;
    r4 = n += 0.58433324f;
    n = r3 += n;
    n = r3 *= n;
    n += -4.62857056f;
    n *= r1;
    n *= r4;
    n *= r3;
    n *= -1.42729890f;
    n *= r0;
    n *= -0.20205040f;
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
