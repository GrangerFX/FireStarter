// Run date: 02/24/23 20:49:10 Pacific Standard Time
// Run duration = 5979.672344 seconds
// Run count = 32
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 10016
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 32

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

// Precision = 0.00021336

// Solution0 precision = 0.00013182
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += 0.13939741f;
    r0 = n *= -0.39184484f;
    r1 = n += 1.49926805f;
    r2 = n *= -1.70854807f;
    n += 1.73545396f;
    n = r0 += n;
    n += -0.36694470f;
    n = r1 += n;
    r3 = n *= -1.77989316f;
    n = r2 += n;
    n = r0 += n;
    n *= -0.12828840f;
    n *= r1;
    n += -0.67862791f;
    n *= -0.80073470f;
    n *= -0.21992855f;
    r1 = n *= -0.26980305f;
    n *= r2;
    n += -1.38004994f;
    n *= -4.06164742f;
    n += -5.64884281f;
    r2 = n *= 2.68271279f;
    n += r1;
    n *= 0.12494446f;
    n *= 3.57169533f;
    n *= -0.45269263f;
    n *= r0;
    r0 = n += -0.71117252f;
    n += -4.76983786f;
    n *= r0;
    n *= r2;
    n += r3;
    return n;
} // Solution0

// Solution1 precision = 0.00020659
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -0.19883968f;
    r0 = n *= 0.33928737f;
    r1 = n += -1.33969581f;
    r2 = n *= -0.51205224f;
    n += -1.70327342f;
    n = r0 += n;
    n += 0.78197861f;
    n = r1 += n;
    r3 = n *= -0.47430906f;
    n = r2 += n;
    n = r0 += n;
    n *= 0.20946340f;
    n *= r1;
    n += 1.51089954f;
    n *= 1.93165529f;
    n *= -0.54400545f;
    r1 = n *= -1.84882402f;
    n *= r2;
    n += -0.02585204f;
    n *= 1.70786583f;
    n += -1.57972062f;
    r2 = n *= 0.81418622f;
    n += r1;
    n *= -0.61079615f;
    n *= -3.63035512f;
    n *= -0.02909915f;
    n *= r0;
    r0 = n += 0.21278146f;
    n += 1.63537633f;
    n *= r0;
    n *= r2;
    n += r3;
    return n;
} // Solution1

// Solution2 precision = 0.00021336
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += 1.93321335f;
    r0 = n *= -0.34789014f;
    r1 = n += 1.44527268f;
    r2 = n *= -1.16861701f;
    n += -0.85046476f;
    n = r0 += n;
    n += 2.19533300f;
    n = r1 += n;
    r3 = n *= -1.42251658f;
    n = r2 += n;
    n = r0 += n;
    n *= -0.27402544f;
    n *= r1;
    n += -1.41202629f;
    n *= 1.74458504f;
    n *= -0.66812891f;
    r1 = n *= -0.91183108f;
    n *= r2;
    n += -1.22832346f;
    n *= -0.33203283f;
    n += -0.72877645f;
    r2 = n *= -1.14302886f;
    n += r1;
    n *= -0.40716666f;
    n *= -0.72042966f;
    n *= -0.45186147f;
    n *= r0;
    r0 = n += -0.23925920f;
    n += -3.84708333f;
    n *= r0;
    n *= r2;
    n += r3;
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
