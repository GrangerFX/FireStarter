// Run date: 03/07/24 08:48:09 Pacific Standard Time
// Run duration = 3473.662559 seconds
// Run generation = 302
// Run evolution = 15
// Run max result = 0.00000054
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
// Run evolveSeed = 3
// Run optimizeSeed = 0
// Run tests = 0
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.68973511f;
    n += -0.08576552f;
    r0 = n += 2.25263238f;
    r1 = n *= 0.30488515f;
    n = r0 *= n;
    r2 = n += -0.50046903f;
    n *= 15.16233635f;
    n += -6.01137447f;
    n += 3.47413921f;
    r3 = n *= 0.02187007f;
    r4 = n *= 0.22580105f;
    n = r4 *= n;
    n *= 5.38785744f;
    n *= -1.21666563f;
    n += 7.26684618f;
    n += -21.61160851f;
    n = r4 *= n;
    n += r2;
    n = r0 += n;
    n += 1.46563351f;
    n += -14.14546204f;
    n += r4;
    r4 = n *= 0.25154886f;
    n += r3;
    r3 = n *= -0.13706985f;
    n += r4;
    r4 = n += -0.02095280f;
    n += r0;
    n *= r4;
    n *= r3;
    n *= r1;
    n += -0.00000004f;
    return n;
} // Solution0

// Solution1 result = 0.00000054
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.93756068f;
    n += -1.59516168f;
    r0 = n += -1.30251884f;
    r1 = n *= 0.04450095f;
    n = r0 *= n;
    r2 = n += -0.36940902f;
    n *= -0.73921847f;
    n += 1.27198684f;
    n += 0.86246502f;
    r3 = n *= 1.06063008f;
    r4 = n *= -0.09775772f;
    n = r4 *= n;
    n *= 38.43716812f;
    n *= -12.73259735f;
    n += -1.12514091f;
    n += -38.07564926f;
    n = r4 *= n;
    n += r2;
    n = r0 += n;
    n += 9.07403183f;
    n += -1.18444633f;
    n += r4;
    r4 = n *= -0.08024632f;
    n += r3;
    r3 = n *= -1.33181345f;
    n += r4;
    r4 = n += 2.17826033f;
    n += r0;
    n *= r4;
    n *= r3;
    n *= r1;
    n += -0.11813214f;
    return n;
} // Solution1

// Solution2 result = 0.00000048
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.23733209f;
    n += -1.25598252f;
    r0 = n += 0.63464862f;
    r1 = n *= -0.62946308f;
    n = r0 *= n;
    r2 = n += 0.05749163f;
    n *= -0.24763900f;
    n += -0.88790053f;
    n += 0.43464658f;
    r3 = n *= -1.99731362f;
    r4 = n *= 1.82584572f;
    n = r4 *= n;
    n *= -0.92472392f;
    n *= -1.59926319f;
    n += -0.20166959f;
    n += -2.70575094f;
    n = r4 *= n;
    n += r2;
    n = r0 += n;
    n += -4.79335451f;
    n += 1.81268930f;
    n += r4;
    r4 = n *= 0.00212894f;
    n += r3;
    r3 = n *= -1.89434206f;
    n += r4;
    r4 = n += 0.40857512f;
    n += r0;
    n *= r4;
    n *= r3;
    n *= r1;
    n += 0.52359873f;
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
