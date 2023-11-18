// Run date: 11/18/23 09:41:16 Pacific Standard Time
// Run duration = 2514.522248 seconds
// Run generation = 48
// Run evolution = 4
// Run result = 0.00000051
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
// Run tests = 1
// Run seeds = 64
// Run units = 1
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= 0.38046956f;
    n *= -2.62833118f;
    n += r0;
    n *= 1.18580520f;
    n = r1 += n;
    n *= 3.94336009f;
    r0 = n *= -1.85999382f;
    n *= -0.17189322f;
    n = r1 *= n;
    n += -0.70829374f;
    r2 = n *= -0.98359108f;
    n = r1 += n;
    r3 = n += -1.88142025f;
    n = r3 += n;
    r4 = n += 1.68207240f;
    r5 = n += -0.35754365f;
    n += r1;
    r1 = n *= 0.21793835f;
    n *= r5;
    n = r3 *= n;
    n *= 5.03922796f;
    n += -0.96416944f;
    n = r4 += n;
    n *= r3;
    n *= r2;
    n *= 0.11114307f;
    n *= -1.63899207f;
    n += r1;
    n *= r0;
    n *= r4;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    r1 = n *= -0.00000014f;
    n *= 8.43666458f;
    n += r0;
    n *= 0.99300510f;
    n = r1 += n;
    n *= 0.11063743f;
    r0 = n *= -0.61234146f;
    n *= 1.04124320f;
    n = r1 *= n;
    n += 0.30769154f;
    r2 = n *= -1.03486121f;
    n = r1 += n;
    r3 = n += 0.18451826f;
    n = r3 += n;
    r4 = n += -0.49848780f;
    r5 = n += -1.31154907f;
    n += r1;
    r1 = n *= -1.11536467f;
    n *= r5;
    n = r3 *= n;
    n *= 1.56095922f;
    n += 2.32975340f;
    n = r4 += n;
    n *= r3;
    n *= r2;
    n *= 0.20708969f;
    n *= -4.03200006f;
    n += r1;
    n *= r0;
    n *= r4;
    n += -0.11813185f;
    return n;
} // Solution1

// Solution2 result = 0.00000051
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= 2.93604612f;
    n *= 4.70721912f;
    n += r0;
    n *= -0.21243966f;
    n = r1 += n;
    n *= 0.67056745f;
    r0 = n *= -0.84612137f;
    n *= -2.92149401f;
    n = r1 *= n;
    n += -0.39394709f;
    r2 = n *= -1.39046872f;
    n = r1 += n;
    r3 = n += 1.12952185f;
    n = r3 += n;
    r4 = n += 0.81110072f;
    r5 = n += -0.83114147f;
    n += r1;
    r1 = n *= 0.01660893f;
    n *= r5;
    n = r3 *= n;
    n *= 0.61953747f;
    n += 0.95666575f;
    n = r4 += n;
    n *= r3;
    n *= r2;
    n *= 0.41535440f;
    n *= -1.70050120f;
    n += r1;
    n *= r0;
    n *= r4;
    n += 0.52359885f;
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
