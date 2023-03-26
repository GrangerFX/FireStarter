// Run date: 03/26/23 12:29:21 Pacific Daylight Time
// Run duration = 3350.758432 seconds
// Run generation = 0
// Run result = 0.00000331
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 32

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run tests = 11000
// Run units = 8
// Run processes = 16
// Run iterations = 256
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 10962
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

// Solution0 result = 0.00000331
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= 0.48289761f;
    n = r1 *= n;
    n *= 0.22950481f;
    n *= -0.95733953f;
    n *= 2.87287498f;
    r2 = n *= -5.92409611f;
    r3 = n *= 0.76012725f;
    n *= 0.58894664f;
    r4 = n += -3.30866718f;
    r5 = n *= -0.00583765f;
    n *= r4;
    n *= 0.30720183f;
    n *= -6.79576159f;
    r4 = n += 11.50434875f;
    n = r3 += n;
    n *= r5;
    n += r4;
    r4 = n *= 0.25558624f;
    n *= -0.71663314f;
    n *= r2;
    n = r3 += n;
    n *= r4;
    n *= 0.12176733f;
    n += r1;
    n *= r3;
    n *= -0.93284225f;
    n *= 0.03527232f;
    n *= 1.54410756f;
    n *= 0.39364052f;
    n *= r0;
    n += -0.00000002f;
    return n;
} // Solution0

// Solution1 result = 0.00000119
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065890f;
    r1 = n *= -0.03474510f;
    n = r1 *= n;
    n *= -5.00186157f;
    n *= -2.77652240f;
    n *= -1.63665044f;
    r2 = n *= 5.70475578f;
    r3 = n *= 1.17083025f;
    n *= 2.33655143f;
    r4 = n += 3.21694279f;
    r5 = n *= 0.00231024f;
    n *= r4;
    n *= 0.66692728f;
    n *= -0.68663251f;
    r4 = n += -1.16482341f;
    n = r3 += n;
    n *= r5;
    n += r4;
    r4 = n *= -1.59131145f;
    n *= -0.82648021f;
    n *= r2;
    n = r3 += n;
    n *= r4;
    n *= 3.93746328f;
    n += r1;
    n *= r3;
    n *= -0.20112363f;
    n *= -1.17222881f;
    n *= -0.70010501f;
    n *= 0.64952862f;
    n *= r0;
    n += -0.11813198f;
    return n;
} // Solution1

// Solution2 result = 0.00000209
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799312f;
    r1 = n *= -0.22598036f;
    n = r1 *= n;
    n *= 1.55971754f;
    n *= 2.83935785f;
    n *= 1.24415588f;
    r2 = n *= 0.22034487f;
    r3 = n *= 0.34763163f;
    n *= -1.33698404f;
    r4 = n += 0.35340843f;
    r5 = n *= 0.10938999f;
    n *= r4;
    n *= 1.69905198f;
    n *= 0.88454032f;
    r4 = n += 0.99828720f;
    n = r3 += n;
    n *= r5;
    n += r4;
    r4 = n *= -2.20465231f;
    n *= 1.58468270f;
    n *= r2;
    n = r3 += n;
    n *= r4;
    n *= -0.16306762f;
    n += r1;
    n *= r3;
    n *= -0.40594798f;
    n *= -1.83969378f;
    n *= 1.98376381f;
    n *= -1.70930338f;
    n *= r0;
    n += 0.52359831f;
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
