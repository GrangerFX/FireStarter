// Run date: 09/10/23 15:32:58 Pacific Daylight Time
// Run duration = 12377.049902 seconds
// Run generation = 215
// Run evolution = 37
// Run result = 0.00001001
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
// Run tests = 16
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

// Solution0 result = 0.00001001
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.54870731f;
    n += 1.40733802f;
    n *= 1.34196389f;
    r0 = n *= 0.36525044f;
    r1 = n += -0.26734340f;
    n *= -0.60506469f;
    r2 = n *= -0.58697820f;
    n *= r1;
    r1 = n += -0.06338768f;
    n *= 0.20964830f;
    r3 = n *= -31.47599030f;
    n *= -0.96274817f;
    n = r3 += n;
    r4 = n += 0.39010471f;
    r5 = n *= -2.29906106f;
    n = r2 += n;
    r6 = n *= 0.10279468f;
    n += 0.72475255f;
    n += r4;
    n += r3;
    n *= r5;
    n *= r2;
    n = r6 *= n;
    r2 = n += -0.95097405f;
    n += -65.35051727f;
    n *= r6;
    r6 = n *= 2.06116080f;
    n *= r0;
    n += r6;
    n *= r2;
    n += -0.00042204f;
    n *= r1;
    return n;
} // Solution0

// Solution1 result = 0.00000542
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 42.22191620f;
    n += 31.02681351f;
    n *= 0.05782693f;
    r0 = n *= -0.10714315f;
    r1 = n += 1.45544529f;
    n *= 0.10338910f;
    r2 = n *= 1.02013266f;
    n *= r1;
    r1 = n += -0.40097249f;
    n *= 1.72772145f;
    r3 = n *= 1.51571643f;
    n *= 1.46738017f;
    n = r3 += n;
    r4 = n += 0.74638075f;
    r5 = n *= -0.07055620f;
    n = r2 += n;
    r6 = n *= 3.66551423f;
    n += -7.60799265f;
    n += r4;
    n += r3;
    n *= r5;
    n *= r2;
    n = r6 *= n;
    r2 = n += -7.94054937f;
    n += -25.17836952f;
    n *= r6;
    r6 = n *= 0.29518881f;
    n *= r0;
    n += r6;
    n *= r2;
    n += 0.30340466f;
    n *= r1;
    return n;
} // Solution1

// Solution2 result = 0.00000429
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -4.24933958f;
    n += 10.77921009f;
    n *= 0.09166145f;
    r0 = n *= 1.33084309f;
    r1 = n += -0.48661777f;
    n *= -0.00771964f;
    r2 = n *= 5.71561909f;
    n *= r1;
    r1 = n += 0.03027195f;
    n *= 1.03858519f;
    r3 = n *= -0.17666247f;
    n *= -5.84085131f;
    n = r3 += n;
    r4 = n += 1.75231004f;
    r5 = n *= 0.58699012f;
    n = r2 += n;
    r6 = n *= 0.68819761f;
    n += 3.73711634f;
    n += r4;
    n += r3;
    n *= r5;
    n *= r2;
    n = r6 *= n;
    r2 = n += -2.00244546f;
    n += 0.60858238f;
    n *= r6;
    r6 = n *= 0.57725811f;
    n *= r0;
    n += r6;
    n *= r2;
    n += -1.41328728f;
    n *= r1;
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
