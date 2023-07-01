// Run date: 07/01/23 11:38:40 Pacific Daylight Time
// Run duration = 1556.599996 seconds
// Run generation = 175
// Run evolution = 0
// Run result = 0.00011688
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

// Solution0 result = 0.00001138
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.34216359f;
    r1 = n *= -0.02403119f;
    n *= 3.13004875f;
    n *= 0.40777883f;
    r2 = n *= 1.49857152f;
    n *= -2.09602094f;
    n *= -5.26650810f;
    n *= -0.00002212f;
    r3 = n *= -1.14497232f;
    n = r3 += n;
    n += 0.63962775f;
    r4 = n *= -2.36167645f;
    n = r0 += n;
    n *= r1;
    n = r4 *= n;
    r1 = n += -0.61314738f;
    n += r2;
    n = r4 += n;
    n += r1;
    n = r3 += n;
    n *= r0;
    n += -0.57776344f;
    n = r3 *= n;
    r0 = n *= -1.32075977f;
    r1 = n *= 0.26670879f;
    n *= r0;
    n += r4;
    n *= r3;
    n *= 0.67255402f;
    n += r1;
    n *= 2.00727391f;
    n += -0.00031366f;
    return n;
} // Solution0

// Solution1 result = 0.00000608
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.28518593f;
    r1 = n *= -0.04089602f;
    n *= -0.49627110f;
    n *= -2.57340980f;
    r2 = n *= 1.21257484f;
    n *= 0.08857644f;
    n *= -0.00006563f;
    n *= 8.11774445f;
    r3 = n *= 12.50585842f;
    n = r3 += n;
    n += 1.01239884f;
    r4 = n *= -1.16225803f;
    n = r0 += n;
    n *= r1;
    n = r4 *= n;
    r1 = n += -0.71887296f;
    n += r2;
    n = r4 += n;
    n += r1;
    n = r3 += n;
    n *= r0;
    n += -0.45174739f;
    n = r3 *= n;
    r0 = n *= -0.87580109f;
    r1 = n *= -2.06537771f;
    n *= r0;
    n += r4;
    n *= r3;
    n *= 0.21999435f;
    n += r1;
    n *= -1.00356638f;
    n += -0.11921535f;
    return n;
} // Solution1

// Solution2 result = 0.00011688
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.23175941f;
    r1 = n *= -0.19873257f;
    n *= 0.07988646f;
    n *= -2.66456723f;
    r2 = n *= -2.38027406f;
    n *= 0.00082557f;
    n *= 4.08352375f;
    n *= -0.04460319f;
    r3 = n *= 29.65877151f;
    n = r3 += n;
    n += -0.95906979f;
    r4 = n *= 0.92261016f;
    n = r0 += n;
    n *= r1;
    n = r4 *= n;
    r1 = n += -0.95368946f;
    n += r2;
    n = r4 += n;
    n += r1;
    n = r3 += n;
    n *= r0;
    n += -0.56853276f;
    n = r3 *= n;
    r0 = n *= 0.74635214f;
    r1 = n *= 0.42632547f;
    n *= r0;
    n += r4;
    n *= r3;
    n *= 3.03637600f;
    n += r1;
    n *= 0.34276608f;
    n += 0.51855171f;
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
