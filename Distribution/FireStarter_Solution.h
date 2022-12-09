// Run date: 12/09/22 10:10:35 Pacific Standard Time
// Run duration = 122.105435 seconds
// Run count = 109
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 109

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

// Precision = 0.00001097

// Solution0 precision = 0.00000376
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.74131668f;
    r1 = n += -1.39855361f;
    r2 = n *= -1.29307747f;
    r3 = n += -0.01818016f;
    r4 = n *= -1.31811678f;
    r5 = n += -0.58286339f;
    n *= -0.04124248f;
    n += 0.07567881f;
    n *= r0;
    r0 = n += 0.29529196f;
    n += 4.64612913f;
    r6 = n *= 1.08926260f;
    n += 2.33570933f;
    n = r2 *= n;
    n += r3;
    n *= r1;
    n *= 0.06974863f;
    n *= 0.08455534f;
    n += -1.88868690f;
    n += 5.14199018f;
    n = r6 += n;
    n *= -0.08066970f;
    r1 = n *= -0.70843953f;
    n *= -1.06674743f;
    n *= r1;
    n *= r2;
    n *= r6;
    n *= r0;
    n += r4;
    n += r5;
    n += 0.51112020f;
    n *= -0.07231086f;
    return n;
} // Solution0

// Solution1 precision = 0.00000393
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.45503831f;
    r1 = n += -0.63502699f;
    r2 = n *= 0.27230182f;
    r3 = n += 0.10721011f;
    r4 = n *= 0.42467147f;
    r5 = n += 1.02576530f;
    n *= 0.84531188f;
    n += -0.96797591f;
    n *= r0;
    r0 = n += -2.54258871f;
    n += 0.08215795f;
    r6 = n *= -2.86267519f;
    n += -0.67560619f;
    n = r2 *= n;
    n += r3;
    n *= r1;
    n *= -0.00074479f;
    n *= 21.41511726f;
    n += -13.37734604f;
    n += 37.19884872f;
    n = r6 += n;
    n *= -0.38824284f;
    r1 = n *= -0.17432293f;
    n *= -0.05030718f;
    n *= r1;
    n *= r2;
    n *= r6;
    n *= r0;
    n += r4;
    n += r5;
    n += 2.24212646f;
    n *= -0.03497578f;
    return n;
} // Solution1

// Solution2 precision = 0.00001097
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.45682463f;
    r1 = n += -2.16240025f;
    r2 = n *= -0.53451675f;
    r3 = n += -0.01607548f;
    r4 = n *= -0.91747940f;
    r5 = n += -0.58342409f;
    n *= -1.00861573f;
    n += 0.49376905f;
    n *= r0;
    r0 = n += 0.47086084f;
    n += -0.51722151f;
    r6 = n *= -0.09642682f;
    n += -1.36047125f;
    n = r2 *= n;
    n += r3;
    n *= r1;
    n *= -92.64366150f;
    n *= -0.00012624f;
    n += 2.16479278f;
    n += -4.54244471f;
    n = r6 += n;
    n *= 3.28383231f;
    r1 = n *= 0.14353593f;
    n *= 1.51642430f;
    n *= r1;
    n *= r2;
    n *= r6;
    n *= r0;
    n += r4;
    n += r5;
    n += 7.25879049f;
    n *= 0.07790905f;
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
