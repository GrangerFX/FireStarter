// Run date: 09/24/22 11:51:40 Pacific Daylight Time
// Run duration = 9.066284 seconds
// Run count = 10
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_TEST;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10;
// Run seed = 73;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 9

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

// Precision = 0.00148225

// Solution0 precision = 0.00047520
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.43846592f;
    r0 = n *= -0.98930627f;
    r1 = n *= -0.84758794f;
    n += -0.90737003f;
    n *= 0.88848668f;
    r2 = n += -0.20016024f;
    n = r0 += n;
    r3 = n += 0.63201016f;
    r4 = n *= -1.06753170f;
    n *= r4;
    n *= -1.01603055f;
    r4 = n *= -0.62548250f;
    n = r3 += n;
    r5 = n *= 1.45187390f;
    r6 = n *= -1.76047540f;
    n = r5 *= n;
    n *= 1.17655766f;
    n *= r0;
    n = r3 *= n;
    n += r6;
    n *= r5;
    n = r2 *= n;
    n += r2;
    n *= r3;
    n *= 2.47611642f;
    n *= -9.18506241f;
    n *= -1.60980260f;
    n += r4;
    n += 2.53277063f;
    n *= -0.78649080f;
    n += r1;
    n += 1.20229089f;
    return n;
} // Solution0

// Solution1 precision = 0.00046873
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.27104130f;
    r0 = n *= 0.79037309f;
    r1 = n *= 0.37746707f;
    n += -0.22484545f;
    n *= 1.08802426f;
    r2 = n += 0.44050592f;
    n = r0 += n;
    r3 = n += 4.88261127f;
    r4 = n *= 0.86406958f;
    n *= r4;
    n *= -0.21873848f;
    r4 = n *= 0.77862829f;
    n = r3 += n;
    r5 = n *= -0.63618106f;
    r6 = n *= 1.66114712f;
    n = r5 *= n;
    n *= -0.23608647f;
    n *= r0;
    n = r3 *= n;
    n += r6;
    n *= r5;
    n = r2 *= n;
    n += r2;
    n *= r3;
    n *= -3.39711332f;
    n *= 0.73827755f;
    n *= -1.20864677f;
    n += r4;
    n += 0.33449927f;
    n *= -0.52477711f;
    n += r1;
    n += -0.18269642f;
    return n;
} // Solution1

// Solution2 precision = 0.00148225
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.35038644f;
    r0 = n *= -0.63696384f;
    r1 = n *= 0.11308040f;
    n += 0.80491447f;
    n *= 0.41208568f;
    r2 = n += -0.38138622f;
    n = r0 += n;
    r3 = n += 1.57519591f;
    r4 = n *= -0.32404500f;
    n *= r4;
    n *= -2.10718274f;
    r4 = n *= 1.01837623f;
    n = r3 += n;
    r5 = n *= -1.25085914f;
    r6 = n *= 4.44988489f;
    n = r5 *= n;
    n *= 1.08838975f;
    n *= r0;
    n = r3 *= n;
    n += r6;
    n *= r5;
    n = r2 *= n;
    n += r2;
    n *= r3;
    n *= 2.35761666f;
    n *= -2.58174872f;
    n *= 1.36870015f;
    n += r4;
    n += 0.09693846f;
    n *= -0.02229450f;
    n += r1;
    n += 0.28131470f;
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
