// Run date: 11/05/22 12:50:55 Pacific Daylight Time
// Run duration = 155.895267 seconds
// Run count = 33
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 8;
// Run processes = 8;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 33

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

// Precision = 0.00017691

// Solution0 precision = 0.00014821
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.03691435f;
    r0 = n *= 0.57531726f;
    n += -0.28340510f;
    n += -0.58988941f;
    r1 = n += 0.88134849f;
    n *= r1;
    n += -0.45844197f;
    r1 = n += -3.85357094f;
    r2 = n *= 0.01516343f;
    n *= -3.91719604f;
    r3 = n += -0.04544411f;
    n *= r3;
    n += 3.45990109f;
    n = r2 *= n;
    r3 = n += -0.27096596f;
    n += 0.70464385f;
    r4 = n += 2.50314856f;
    n *= r2;
    r2 = n *= 3.64071751f;
    n += r2;
    n *= 0.00776998f;
    n += r0;
    n *= -1.00697374f;
    n = r3 *= n;
    r0 = n += -0.09355383f;
    n *= r0;
    n *= r4;
    n += r1;
    n *= 0.80397570f;
    n *= r3;
    n += -0.25962237f;
    n += 0.30318624f;
    return n;
} // Solution0

// Solution1 precision = 0.00011802
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.25830746f;
    r0 = n *= 0.29831177f;
    n += 0.27524439f;
    n += 0.57474846f;
    r1 = n += -0.85303468f;
    n *= r1;
    n += -1.52504241f;
    r1 = n += -0.92725021f;
    r2 = n *= -0.23246710f;
    n *= 0.26661047f;
    r3 = n += -0.90339184f;
    n *= r3;
    n += 0.84805489f;
    n = r2 *= n;
    r3 = n += 0.81660503f;
    n += -0.48917156f;
    r4 = n += 0.01040937f;
    n *= r2;
    r2 = n *= 0.01948936f;
    n += r2;
    n *= 0.79041874f;
    n += r0;
    n *= 0.73096412f;
    n = r3 *= n;
    r0 = n += 0.09097572f;
    n *= r0;
    n *= r4;
    n += r1;
    n *= 1.27018714f;
    n *= r3;
    n += -0.35442871f;
    n += 0.15645128f;
    return n;
} // Solution1

// Solution2 precision = 0.00017691
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.57359529f;
    r0 = n *= 0.44243598f;
    n += -0.30047709f;
    n += 0.44526285f;
    r1 = n += -0.16018043f;
    n *= r1;
    n += -1.52408814f;
    r1 = n += -0.35529515f;
    r2 = n *= 0.13043754f;
    n *= 0.01611571f;
    r3 = n += 0.24691412f;
    n *= r3;
    n += -0.75292391f;
    n = r2 *= n;
    r3 = n += 0.31929904f;
    n += 2.34708357f;
    r4 = n += 1.28973758f;
    n *= r2;
    r2 = n *= 3.23674488f;
    n += r2;
    n *= -0.00101964f;
    n += r0;
    n *= -1.19480622f;
    n = r3 *= n;
    r0 = n += 0.01876786f;
    n *= r0;
    n *= r4;
    n += r1;
    n *= -2.05564952f;
    n *= r3;
    n += -0.17609014f;
    n += 0.73364508f;
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
