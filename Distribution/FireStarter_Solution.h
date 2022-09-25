// Run date: 09/24/22 17:06:26 Pacific Daylight Time
// Run duration = 0.233735 seconds
// Run count = 6007
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
// Run seed = 6070;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 6006

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

// Precision = 0.00005662

// Solution0 precision = 0.00003514
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.96067452f;
    r0 = n += 3.01806378f;
    r1 = n *= -0.08956382f;
    n *= -0.88297844f;
    n *= r0;
    n *= -1.52431321f;
    r0 = n += 0.62692887f;
    n += 0.98758084f;
    r2 = n *= 1.04882431f;
    n += -1.03581321f;
    r3 = n *= -0.95348793f;
    n *= -0.09083117f;
    n *= 1.30523503f;
    n += -0.60403746f;
    n += 0.42839628f;
    n *= 3.75566554f;
    r4 = n += 0.00372077f;
    r5 = n += 2.83966470f;
    r6 = n += 1.81709969f;
    n += 0.19808756f;
    r7 = n *= -0.36319575f;
    n += -6.89926338f;
    n *= 0.16149880f;
    n += r5;
    n *= r4;
    n = r2 += n;
    n += r6;
    n *= r1;
    n *= r7;
    n *= r2;
    n += r3;
    n += r0;
    return n;
} // Solution0

// Solution1 precision = 0.00002205
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.55117148f;
    r0 = n += 1.70347691f;
    r1 = n *= 0.48396349f;
    n *= -2.46136546f;
    n *= r0;
    n *= -0.59519178f;
    r0 = n += -3.92305064f;
    n += -0.48343086f;
    r2 = n *= -1.10895169f;
    n += -0.66715372f;
    r3 = n *= 0.90176576f;
    n *= -0.48416361f;
    n *= 3.71077991f;
    n += 0.73216581f;
    n += 3.14923763f;
    n *= -0.10546247f;
    r4 = n += -1.38972068f;
    r5 = n += 0.57118422f;
    r6 = n += 0.33782920f;
    n += 2.76298952f;
    r7 = n *= 0.07353984f;
    n += 1.29980767f;
    n *= 0.43459338f;
    n += r5;
    n *= r4;
    n = r2 += n;
    n += r6;
    n *= r1;
    n *= r7;
    n *= r2;
    n += r3;
    n += r0;
    return n;
} // Solution1

// Solution2 precision = 0.00005662
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.46931446f;
    r0 = n += -1.22867823f;
    r1 = n *= -0.80866969f;
    n *= 0.52092469f;
    n *= r0;
    n *= -1.08817732f;
    r0 = n += -0.70011896f;
    n += -0.02842202f;
    r2 = n *= -0.83895373f;
    n += 0.41552821f;
    r3 = n *= 1.19185150f;
    n *= -9.12923813f;
    n *= 0.30449346f;
    n += 1.19575155f;
    n += 0.64222723f;
    n *= -0.17949133f;
    r4 = n += -0.36532491f;
    r5 = n += 2.86502528f;
    r6 = n += 1.77066922f;
    n += -2.25169969f;
    r7 = n *= 0.42055085f;
    n += -3.51399469f;
    n *= 0.74114525f;
    n += r5;
    n *= r4;
    n = r2 += n;
    n += r6;
    n *= r1;
    n *= r7;
    n *= r2;
    n += r3;
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
