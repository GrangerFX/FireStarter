// Run date: 09/26/22 14:57:33 Pacific Daylight Time
// Run duration = 0.261586 seconds
// Run count = 9216
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 2;
// Run processes = 6;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10000;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 9216

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

// Precision = 0.00006098

// Solution0 precision = 0.00006098
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.47858167f;
    n *= 0.27542064f;
    r0 = n += 0.53038007f;
    r1 = n += -0.00972883f;
    n *= -4.03791475f;
    n = r0 *= n;
    r2 = n *= 0.09742119f;
    n += 2.04984593f;
    n += 15.64965439f;
    n = r0 += n;
    n = r2 *= n;
    n = r0 += n;
    n += 48.99381256f;
    r3 = n *= 0.72908354f;
    n += 7.74535322f;
    n *= -2.03477812f;
    n += 36.03274918f;
    r4 = n *= -0.20350125f;
    n = r0 *= n;
    n = r2 *= n;
    n += -664.66674805f;
    n *= -0.34769544f;
    n = r2 += n;
    n = r2 += n;
    n *= 2.37744880f;
    n += r1;
    n += r2;
    n += r4;
    n += r0;
    n *= -0.09400702f;
    n += r3;
    n *= -0.00791796f;
    return n;
} // Solution0

// Solution1 precision = 0.00003445
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -4.11977243f;
    n *= -0.85848552f;
    r0 = n += -0.35524622f;
    r1 = n += 1.94074416f;
    n *= -0.92460716f;
    n = r0 *= n;
    r2 = n *= 0.03017599f;
    n += -43.40844727f;
    n += 83.15985107f;
    n = r0 += n;
    n = r2 *= n;
    n = r0 += n;
    n += -91.42940521f;
    r3 = n *= -0.04267476f;
    n += 2.33696961f;
    n *= 0.02101858f;
    n += -0.19883002f;
    r4 = n *= 0.27979299f;
    n = r0 *= n;
    n = r2 *= n;
    n += -8.32564926f;
    n *= -0.03867177f;
    n = r2 += n;
    n = r2 += n;
    n *= -0.15247214f;
    n += r1;
    n += r2;
    n += r4;
    n += r0;
    n *= -0.47897425f;
    n += r3;
    n *= -0.48588014f;
    return n;
} // Solution1

// Solution2 precision = 0.00005853
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.61435509f;
    n *= 0.53310591f;
    r0 = n += -1.43401968f;
    r1 = n += -0.66389787f;
    n *= 0.65064985f;
    n = r0 *= n;
    r2 = n *= -0.50786477f;
    n += -4.15020227f;
    n += -0.25473928f;
    n = r0 += n;
    n = r2 *= n;
    n = r0 += n;
    n += 4.12303782f;
    r3 = n *= -0.42544484f;
    n += 0.70732623f;
    n *= 0.02624316f;
    n += 0.21417499f;
    r4 = n *= -0.55069363f;
    n = r0 *= n;
    n = r2 *= n;
    n += 3.00476313f;
    n *= 0.01812077f;
    n = r2 += n;
    n = r2 += n;
    n *= 1.76414371f;
    n += r1;
    n += r2;
    n += r4;
    n += r0;
    n *= -0.43886936f;
    n += r3;
    n *= -0.85473543f;
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
