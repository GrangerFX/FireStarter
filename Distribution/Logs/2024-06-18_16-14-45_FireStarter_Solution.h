// Run date: 06/18/24 16:14:45 Pacific Daylight Time
// Run duration = 630.011323 seconds
// Run generation = 44
// Run evolution = 2
// Run max result = 0.00002637
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

// Solution0 result = 0.00002637
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.48636734f;
    r0 = n *= 0.58531165f;
    r1 = n += -0.68790585f;
    r2 = n += 1.29433060f;
    r3 = n += -1.48523223f;
    n *= -4.52098370f;
    n += 2.90973806f;
    n *= -0.03147970f;
    n = r3 += n;
    n *= -0.32716054f;
    n *= 2.68844390f;
    r4 = n += 1.60825551f;
    n *= r2;
    n *= -0.08876427f;
    r2 = n *= 0.20255761f;
    r5 = n *= -1.75256217f;
    n *= -2.19933152f;
    n *= 3.31391406f;
    r6 = n += -2.73600197f;
    n += -4.90161371f;
    n *= r2;
    n += r4;
    n = r0 += n;
    n *= r0;
    n *= r5;
    n *= -2.32934761f;
    n *= r6;
    n *= -3.84293771f;
    n += -4.64688492f;
    n *= r3;
    n += r1;
    n *= 0.06204447f;
    return n;
} // Solution0

// Solution1 result = 0.00001931
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.59994984f;
    r0 = n *= -0.13009472f;
    r1 = n += -1.93664277f;
    r2 = n += 0.98127192f;
    r3 = n += 0.68328983f;
    n *= -1.53133714f;
    n += -0.50379974f;
    n *= -1.09322202f;
    n = r3 += n;
    n *= -1.24243486f;
    n *= 0.29987115f;
    r4 = n += -0.88629240f;
    n *= r2;
    n *= 1.66184425f;
    r2 = n *= 0.18637411f;
    r5 = n *= -1.92400432f;
    n *= 1.42288971f;
    n *= -3.06585193f;
    r6 = n += 3.35239792f;
    n += 4.30155420f;
    n *= r2;
    n += r4;
    n = r0 += n;
    n *= r0;
    n *= r5;
    n *= 3.69128919f;
    n *= r6;
    n *= -2.24083567f;
    n += -1.10338962f;
    n *= r3;
    n += r1;
    n *= 0.06377972f;
    return n;
} // Solution1

// Solution2 result = 0.00002626
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.10108356f;
    r0 = n *= -0.63592839f;
    r1 = n += 1.47717202f;
    r2 = n += -1.14236581f;
    r3 = n += 0.27787566f;
    n *= 0.10536687f;
    n += 1.36483741f;
    n *= 0.78199041f;
    n = r3 += n;
    n *= 1.35618722f;
    n *= -0.68185282f;
    r4 = n += -1.27136362f;
    n *= r2;
    n *= 0.10235630f;
    r2 = n *= 0.12649325f;
    r5 = n *= -2.13675761f;
    n *= 12.12588882f;
    n *= 1.53192091f;
    r6 = n += -7.32799768f;
    n += -8.97175884f;
    n *= r2;
    n += r4;
    n = r0 += n;
    n *= r0;
    n *= r5;
    n *= 0.90650767f;
    n *= r6;
    n *= -0.08409683f;
    n += -0.97161740f;
    n *= r3;
    n += r1;
    n *= -4.33144045f;
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
