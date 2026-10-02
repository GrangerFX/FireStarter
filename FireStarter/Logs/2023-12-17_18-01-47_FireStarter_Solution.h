// Run date: 12/17/23 18:01:47 Pacific Standard Time
// Run duration = 219.171767 seconds
// Run generation = 1
// Run evolution = 1
// Run max result = 0.00006342
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

// Solution0 result = 0.00001520
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.45890111f;
    r0 = n += 1.44166875f;
    n *= 0.03602218f;
    n *= -0.01842756f;
    r1 = n *= 0.03523206f;
    n += -1.76733196f;
    n = r0 *= n;
    n *= r0;
    n *= 0.20078228f;
    n += -1.30346584f;
    r0 = n *= -0.77116132f;
    r2 = n += 5.01289368f;
    r3 = n += -0.95058411f;
    n *= 0.35357913f;
    n *= 0.50911856f;
    r4 = n *= -1.64720511f;
    n = r2 *= n;
    n *= r3;
    r3 = n += -586.91925049f;
    n *= 0.68961239f;
    r5 = n *= 1.93495238f;
    n += r3;
    n *= r1;
    n *= r5;
    n *= r0;
    n *= r4;
    n *= r2;
    n += -0.00359598f;
    n *= -0.27351385f;
    n *= -0.26374799f;
    n *= -0.86712611f;
    n *= 0.08745299f;
    return n;
} // Solution0

// Solution1 result = 0.00006342
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.19300708f;
    r0 = n += 1.60645998f;
    n *= -0.75199288f;
    n *= 0.00295120f;
    r1 = n *= -1.78867233f;
    n += -0.53317851f;
    n = r0 *= n;
    n *= r0;
    n *= -1.42128968f;
    n += 1.87210381f;
    r0 = n *= 0.22898924f;
    r2 = n += 0.47399101f;
    r3 = n += 0.08035651f;
    n *= 2.40832615f;
    n *= 5.40659952f;
    r4 = n *= 0.34893438f;
    n = r2 *= n;
    n *= r3;
    r3 = n += -2.41673326f;
    n *= -3.52746582f;
    r5 = n *= -4.06403112f;
    n += r3;
    n *= r1;
    n *= r5;
    n *= r0;
    n *= r4;
    n *= r2;
    n += -0.04054011f;
    n *= -1.90063453f;
    n *= 0.67482209f;
    n *= -0.33883449f;
    n *= 1.92055857f;
    return n;
} // Solution1

// Solution2 result = 0.00005585
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.83140606f;
    r0 = n += 2.17665124f;
    n *= -0.00126962f;
    n *= 0.30777666f;
    r1 = n *= -0.13771304f;
    n += -2.95950389f;
    n = r0 *= n;
    n *= r0;
    n *= -0.06240422f;
    n += 1.88274634f;
    r0 = n *= 0.03382469f;
    r2 = n += 0.68442351f;
    r3 = n += 1.72287965f;
    n *= -1.83288145f;
    n *= 2.36230946f;
    r4 = n *= 3.83456326f;
    n = r2 *= n;
    n *= r3;
    r3 = n += 6.24006748f;
    n *= 2.15438771f;
    r5 = n *= -0.18870725f;
    n += r3;
    n *= r1;
    n *= r5;
    n *= r0;
    n *= r4;
    n *= r2;
    n += -2.19552326f;
    n *= -0.53253680f;
    n *= -0.77349132f;
    n *= -0.94248641f;
    n *= 0.61427838f;
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
