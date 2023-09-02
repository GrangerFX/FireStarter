// Run date: 09/02/23 14:03:29 Pacific Daylight Time
// Run duration = 3644.471764 seconds
// Run generation = 49
// Run evolution = 17
// Run result = 0.00000358
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 4
// Run units = 2
// Run processes = 2
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

// Solution0 result = 0.00000358
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.76770449f;
    r0 = n += -1.22276843f;
    r1 = n *= 0.05690077f;
    n *= -1.21678221f;
    r2 = n += 0.07537812f;
    r3 = n *= 1.98085642f;
    r4 = n *= -0.47444388f;
    r5 = n += -0.93315452f;
    n = r4 += n;
    r6 = n *= 1.18481791f;
    n *= -0.67913908f;
    r7 = n += -1.78627741f;
    n *= r7;
    n = r6 *= n;
    n = r0 *= n;
    n *= -0.64344895f;
    n = r4 *= n;
    n += r1;
    n += 0.17724502f;
    n += -0.66166449f;
    r1 = n *= 0.05757987f;
    n += r2;
    n *= 1.41012669f;
    n *= r0;
    n += r6;
    n *= r4;
    n *= r5;
    n += -18.78451920f;
    n += r1;
    n += r3;
    n += 18.91562271f;
    n += -0.10198194f;
    return n;
} // Solution0

// Solution1 result = 0.00000182
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.69249523f;
    r0 = n += -1.51313257f;
    r1 = n *= 0.70836359f;
    n *= -0.14225671f;
    r2 = n += -0.04494323f;
    r3 = n *= 0.17121772f;
    r4 = n *= -3.16137290f;
    r5 = n += 0.94636548f;
    n = r4 += n;
    r6 = n *= -0.75575995f;
    n *= 1.33726156f;
    r7 = n += 2.09971118f;
    n *= r7;
    n = r6 *= n;
    n = r0 *= n;
    n *= -0.71520042f;
    n = r4 *= n;
    n += r1;
    n += -2.23045802f;
    n += 2.73397708f;
    r1 = n *= -0.38412800f;
    n += r2;
    n *= 0.27078712f;
    n *= r0;
    n += r6;
    n *= r4;
    n *= r5;
    n += 16.58724976f;
    n += r1;
    n += r3;
    n += -14.87604427f;
    n += -1.75450814f;
    return n;
} // Solution1

// Solution2 result = 0.00000310
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.62665641f;
    r0 = n += -0.78182566f;
    r1 = n *= -0.28008384f;
    n *= -3.22262621f;
    r2 = n += -1.41181755f;
    r3 = n *= -0.12249722f;
    r4 = n *= -0.77616882f;
    r5 = n += -0.90087485f;
    n = r4 += n;
    r6 = n *= 0.82920623f;
    n *= -1.02606106f;
    r7 = n += -2.01539898f;
    n *= r7;
    n = r6 *= n;
    n = r0 *= n;
    n *= -1.23218334f;
    n = r4 *= n;
    n += r1;
    n += -3.83155298f;
    n += 2.29142427f;
    r1 = n *= -0.38563147f;
    n += r2;
    n *= -0.08058026f;
    n *= r0;
    n += r6;
    n *= r4;
    n *= r5;
    n += 5.68432999f;
    n += r1;
    n += r3;
    n += -1.78304684f;
    n += -3.93768263f;
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
