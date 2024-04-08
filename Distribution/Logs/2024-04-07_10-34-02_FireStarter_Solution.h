// Run date: 04/07/24 10:34:02 Pacific Daylight Time
// Run duration = 17782.740418 seconds
// Run generation = 1283
// Run evolution = 13
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
// Run evolveSeed = 0
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.14159250f;
    r0 = n *= 0.54634988f;
    n *= 6.31631041f;
    r1 = n *= -0.00100019f;
    n = r1 *= n;
    n *= -1.85468793f;
    r2 = n += 0.66111940f;
    r3 = n *= 2.08904362f;
    n *= r0;
    r0 = n *= 1.47767961f;
    r4 = n *= -0.06081259f;
    n *= r0;
    r0 = n += 1.09375083f;
    r5 = n += -0.34805143f;
    r6 = n += -0.23845944f;
    n *= -19.92140388f;
    n *= -20.11647224f;
    n *= r2;
    n *= 14.30288315f;
    n += 44701.31640625f;
    n *= r6;
    n += 3.76050949f;
    n *= r1;
    n *= -0.01804753f;
    n += r3;
    n = r0 += n;
    n *= r4;
    n *= r5;
    n *= -2.56707072f;
    n *= r0;
    n += -0.00000005f;
    n *= -1.25784111f;
    return n;
} // Solution0

// Solution1 result = 0.00000060
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.09065890f;
    r0 = n *= -0.56872785f;
    n *= 0.46771213f;
    r1 = n *= 0.08699147f;
    n = r1 *= n;
    n *= 2.13451576f;
    r2 = n += -0.56660020f;
    r3 = n *= -0.84433681f;
    n *= r0;
    r0 = n *= 0.98201489f;
    r4 = n *= -0.68162578f;
    n *= r0;
    r0 = n += 0.68077117f;
    r5 = n += 1.46586978f;
    r6 = n += -1.80492187f;
    n *= -0.36028323f;
    n *= 10992.27246094f;
    n *= r2;
    n *= 5.31281996f;
    n += 8.85379314f;
    n *= r6;
    n += -11.37246323f;
    n *= r1;
    n *= -0.00011830f;
    n += r3;
    n = r0 += n;
    n *= r4;
    n *= r5;
    n *= 1.77318752f;
    n *= r0;
    n += 0.10003346f;
    n *= -1.18092442f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.61799383f;
    r0 = n *= -1.43038177f;
    n *= -0.04294192f;
    r1 = n *= 0.10469339f;
    n = r1 *= n;
    n *= -49.78366470f;
    r2 = n += 0.42358953f;
    r3 = n *= -0.85410523f;
    n *= r0;
    r0 = n *= -0.50388855f;
    r4 = n *= -1.17320240f;
    n *= r0;
    r0 = n += 2.51277590f;
    r5 = n += -2.13426709f;
    r6 = n += 0.43061259f;
    n *= -0.00001049f;
    n *= -64724.17968750f;
    n *= r2;
    n *= 14.24231529f;
    n += -0.10104770f;
    n *= r6;
    n += -5.83945513f;
    n *= r1;
    n *= -1.25604200f;
    n += r3;
    n = r0 += n;
    n *= r4;
    n *= r5;
    n *= -0.69432211f;
    n *= r0;
    n += 0.19477211f;
    n *= 2.68826365f;
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
