// Run date: 09/18/22 12:17:11 Pacific Daylight Time
// Run duration = 3.475954 seconds
// Run count = 0
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

// Precision = 0.00002366

// Solution0 precision = 0.00002003
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14158583f;
    r0 = n *= 0.81405371f;
    n *= 0.76603639f;
    r1 = n *= 1.24259436f;
    n = r0 *= n;
    n *= -0.52553833f;
    n *= -0.36117899f;
    r2 = n += -0.76706380f;
    r3 = n *= 0.15097868f;
    n *= r0;
    n *= -0.01315233f;
    n *= 3.38324594f;
    n *= 0.60822326f;
    n += 0.89648438f;
    r0 = n *= -0.46804881f;
    n = r2 += n;
    n += -0.66224974f;
    n *= -0.43709826f;
    n += 1.10448551f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= 0.14446291f;
    n = r2 *= n;
    n *= 0.11842391f;
    n *= r3;
    n += -0.00001068f;
    n *= -0.68979639f;
    n += r2;
    n += r0;
    n *= -0.92953855f;
    return n;
} // Solution0

// Solution1 precision = 0.00000346
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09065747f;
    r0 = n *= -0.55015594f;
    n *= -1.73920894f;
    r1 = n *= 0.12293278f;
    n = r0 *= n;
    n *= -0.20468765f;
    n *= 3.48599982f;
    r2 = n += -1.09751415f;
    r3 = n *= 1.85487342f;
    n *= r0;
    n *= 6.28121805f;
    n *= -0.01669272f;
    n *= 1.05066907f;
    n += -0.48777083f;
    r0 = n *= 0.48235488f;
    n = r2 += n;
    n += -2.62737250f;
    n *= -0.29903340f;
    n += 1.02802622f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -0.95706695f;
    n = r2 *= n;
    n *= 1.02777672f;
    n *= r3;
    n += 0.24276589f;
    n *= -0.95995378f;
    n += r2;
    n += r0;
    n *= 0.50690407f;
    return n;
} // Solution1

// Solution2 precision = 0.00002366
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61800528f;
    r0 = n *= 0.57837731f;
    n *= -0.14340374f;
    r1 = n *= -5.75671005f;
    n = r0 *= n;
    n *= 0.76180309f;
    n *= -0.82934904f;
    r2 = n += 0.47942573f;
    r3 = n *= 1.01969016f;
    n *= r0;
    n *= 0.70131183f;
    n *= -0.29721072f;
    n *= 0.14965014f;
    n += 0.83691770f;
    r0 = n *= 0.45672479f;
    n = r2 += n;
    n += -0.68619651f;
    n *= 0.07251569f;
    n += 0.80017889f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= 0.18473585f;
    n = r2 *= n;
    n *= -0.49290571f;
    n *= r3;
    n += -0.58584458f;
    n *= 0.16558696f;
    n += r2;
    n += r0;
    n *= -5.39753819f;
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
