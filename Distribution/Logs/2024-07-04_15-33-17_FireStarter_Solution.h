// Run date: 07/04/24 15:33:17 Pacific Daylight Time
// Run duration = 1829.958374 seconds
// Run generation = 1002
// Run evolution = 11
// Run max result = 0.00000036
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
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

// Solution0 result = 0.00000036
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.13292897f;
    n *= 0.06247880f;
    n += 1.59027576f;
    r0 = n += -1.73075950f;
    r1 = n *= -5.26546860f;
    r2 = n *= 0.75781214f;
    r3 = n += -0.16818492f;
    n *= r3;
    n = r2 += n;
    r3 = n *= 0.38137537f;
    r4 = n += -1.96567309f;
    r5 = n *= -0.35219467f;
    n = r5 *= n;
    n *= 1.53024507f;
    r6 = n += 1.64488733f;
    n *= r2;
    n += -1.52807057f;
    n = r3 += n;
    n *= r4;
    n *= r3;
    n += r6;
    n *= r5;
    n += -0.03226263f;
    n *= -1.53251171f;
    n *= -2.53989863f;
    n += r1;
    n *= -1.54654300f;
    n *= 0.06743702f;
    n *= -1.82092965f;
    n += -0.21711874f;
    n += 0.61356878f;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.57505476f;
    n *= 0.16731781f;
    n += -0.36509863f;
    r0 = n += -0.28114292f;
    r1 = n *= 2.18919373f;
    r2 = n *= 1.19294631f;
    r3 = n += 0.34857616f;
    n *= r3;
    n = r2 += n;
    r3 = n *= 0.02295817f;
    r4 = n += -0.45040038f;
    r5 = n *= -1.12102187f;
    n = r5 *= n;
    n *= 1.26379907f;
    r6 = n += 0.83997023f;
    n *= r2;
    n += -2.12530422f;
    n = r3 += n;
    n *= r4;
    n *= r3;
    n += r6;
    n *= r5;
    n += 0.61326355f;
    n *= 1.29210389f;
    n *= 1.65878153f;
    n += r1;
    n *= 1.05499470f;
    n *= 1.05467331f;
    n *= -0.90125602f;
    n += -0.15266079f;
    n += 0.81264627f;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.06801283f;
    n *= 1.22232413f;
    n += -1.29360485f;
    r0 = n += -0.38402495f;
    r1 = n *= -1.66962552f;
    r2 = n *= 0.23622784f;
    r3 = n += 0.21663411f;
    n *= r3;
    n = r2 += n;
    r3 = n *= -0.04211975f;
    r4 = n += 0.56382984f;
    r5 = n *= 0.91436732f;
    n = r5 *= n;
    n *= -2.04043722f;
    r6 = n += -1.41763377f;
    n *= r2;
    n += 2.35471845f;
    n = r3 += n;
    n *= r4;
    n *= r3;
    n += r6;
    n *= r5;
    n += -0.37943313f;
    n *= -0.38535777f;
    n *= 6.23997927f;
    n += r1;
    n *= -0.92041934f;
    n *= -1.26285529f;
    n *= 0.43096673f;
    n += -0.42088842f;
    n += 0.95451367f;
    n += r0;
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
