// Run date: 08/28/22 16:59:09 Pacific Daylight Time
// Run duration = 5.918935 seconds
// Run count = 260
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 32;
// Run process = 1;
// Run population = 17408;
// Run iterations = 128;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10000;
// Run seed = 8337;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 0

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

// Precision = 0.00002754

// Solution0 precision = 0.00002697
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159250f;
    r0 = n *= 0.59911233f;
    n *= 0.22181316f;
    r1 = n *= -0.72000343f;
    n = r0 *= n;
    n *= 0.01213576f;
    n *= -1.26202714f;
    r2 = n += -1.26045191f;
    r3 = n *= -1.19010127f;
    n *= r0;
    n *= 0.61540598f;
    n *= 1.19475555f;
    n *= 0.69264412f;
    n += 1.15676022f;
    r0 = n *= -1.09698892f;
    n = r2 += n;
    n += 0.64756954f;
    n *= -0.41425404f;
    n += 0.67389882f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -0.22213160f;
    n = r2 *= n;
    n *= 1.22907913f;
    n *= r3;
    n += 0.00000003f;
    n *= 3.23184800f;
    n += r2;
    n += r0;
    n *= 1.01618230f;
    return n;
} // Solution0

// Solution1 precision = 0.00001693
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09065652f;
    r0 = n *= -0.39594424f;
    n *= -0.29416049f;
    r1 = n *= -0.54860771f;
    n = r0 *= n;
    n *= -0.07065569f;
    n *= 0.19756506f;
    r2 = n += 0.29577073f;
    r3 = n *= 3.20181823f;
    n *= r0;
    n *= -0.75337631f;
    n *= 0.74322939f;
    n *= -0.98843664f;
    n += -0.30628246f;
    r0 = n *= -7.73068857f;
    n = r2 += n;
    n += 1.51067734f;
    n *= -0.04704539f;
    n += -0.44169518f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -0.68661755f;
    n = r2 *= n;
    n *= 0.69401109f;
    n *= r3;
    n += 3.83675814f;
    n *= 0.01929449f;
    n += r2;
    n += r0;
    n *= -1.59574509f;
    return n;
} // Solution1

// Solution2 precision = 0.00002754
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61799741f;
    r0 = n *= 0.90093374f;
    n *= -0.98185533f;
    r1 = n *= 1.13031244f;
    n = r0 *= n;
    n *= -0.23743096f;
    n *= -0.82397169f;
    r2 = n += -0.10766713f;
    r3 = n *= -0.29262844f;
    n *= r0;
    n *= -0.60316461f;
    n *= -0.43681175f;
    n *= -0.09025215f;
    n += 0.77735275f;
    r0 = n *= 1.21989846f;
    n = r2 += n;
    n += -1.47594726f;
    n *= -0.12081256f;
    n += -0.97440153f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -0.24686870f;
    n = r2 *= n;
    n *= 0.97551805f;
    n *= r3;
    n += -0.82218677f;
    n *= 0.63340241f;
    n += r2;
    n += r0;
    n *= -1.00542498f;
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
