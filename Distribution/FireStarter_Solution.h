// Run date: 12/30/22 10:25:07 Pacific Standard Time
// Run duration = 378.993436 seconds
// Run count = 12
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 256
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 12

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00004323

// Solution0 precision = 0.00001031
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 1.59623075f;
    n += 1.65239954f;
    n += -3.61789513f;
    r1 = n += -0.54161441f;
    r2 = n *= -0.00001546f;
    r3 = n *= -3.15279341f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= -0.25180545f;
    n = r1 *= n;
    n += 0.40122843f;
    n *= 3.90250921f;
    n += -2.08885288f;
    n *= 0.01935578f;
    n += 1.08404016f;
    r0 = n *= 0.26015863f;
    r2 = n += 0.74871534f;
    r4 = n += -0.01408609f;
    n *= r2;
    r2 = n += 1.26823914f;
    n *= 0.98666674f;
    r5 = n *= -0.78698987f;
    n *= r1;
    n *= 0.75326246f;
    n = r0 *= n;
    n *= r5;
    n += r0;
    n += r4;
    n += r3;
    n *= r2;
    n += -1.34314740f;
    return n;
} // Solution0

// Solution1 precision = 0.00002217
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.14596628f;
    n += 0.47110370f;
    n += 1.91758776f;
    r1 = n += 0.30267113f;
    r2 = n *= -0.52471298f;
    r3 = n *= -0.69621569f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= 0.35392728f;
    n = r1 *= n;
    n += -1.73805761f;
    n *= -5.46202898f;
    n += 1.93888009f;
    n *= -1.71888983f;
    n += 0.52848989f;
    r0 = n *= 0.08142115f;
    r2 = n += 0.87506151f;
    r4 = n += -1.64885592f;
    n *= r2;
    r2 = n += 0.13115428f;
    n *= 2.91193247f;
    r5 = n *= -5.41752434f;
    n *= r1;
    n *= -0.09627728f;
    n = r0 *= n;
    n *= r5;
    n += r0;
    n += r4;
    n += r3;
    n *= r2;
    n += -0.12007496f;
    return n;
} // Solution1

// Solution2 precision = 0.00004323
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.46956137f;
    n += -1.15529740f;
    n += 0.48742911f;
    r1 = n += 0.06044304f;
    r2 = n *= -0.19915886f;
    r3 = n *= -1.00687504f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= 0.36793926f;
    n = r1 *= n;
    n += -0.74281132f;
    n *= 1.46991587f;
    n += -3.04790115f;
    n *= -0.25480860f;
    n += -0.58312631f;
    r0 = n *= 0.58927745f;
    r2 = n += 1.45939636f;
    r4 = n += -1.06925452f;
    n *= r2;
    r2 = n += 1.19707882f;
    n *= 0.98924613f;
    r5 = n *= -1.08065808f;
    n *= r1;
    n *= -3.17790675f;
    n = r0 *= n;
    n *= r5;
    n += r0;
    n += r4;
    n += r3;
    n *= r2;
    n += -0.31677079f;
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
