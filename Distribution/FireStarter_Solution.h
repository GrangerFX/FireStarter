// Run date: 08/26/22 10:09:45 Pacific Daylight Time
// Run duration = 0.643315 seconds
// Run count = 114
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_CODE;
// Run units = 1;
// Run process = 0;
// Run population = 17408;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 1;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 114

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

// Precision = 0.00894946

// Solution0 precision = 0.00859690
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.41702434f;
    r0 = n += 0.38315862f;
    r1 = n += 0.38236171f;
    n *= 0.80203271f;
    r2 = n *= 0.61301583f;
    n = r1 *= n;
    r3 = n *= 0.19587091f;
    r4 = n += 0.07707640f;
    r5 = n *= 3.24616170f;
    n *= r5;
    r5 = n *= 0.14471243f;
    n *= -0.12254683f;
    n += r2;
    n = r4 += n;
    n = r4 += n;
    n *= -2.03602648f;
    n *= -3.06988525f;
    n *= -0.40018111f;
    n = r3 *= n;
    n *= -0.33004206f;
    n *= 1.80717325f;
    n = r5 += n;
    n *= r3;
    r3 = n += -0.71511579f;
    n += r3;
    n += r1;
    n = r0 *= n;
    n += r0;
    n += r5;
    n *= r4;
    n += -1.08719194f;
    n += 1.87630963f;
    return n;
} // Solution0

// Solution1 precision = 0.00863194
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.34081951f;
    r0 = n += -0.49597561f;
    r1 = n += -0.66091204f;
    n *= 0.40447184f;
    r2 = n *= 0.60217494f;
    n = r1 *= n;
    r3 = n *= -1.07981443f;
    r4 = n += 0.37487364f;
    r5 = n *= 1.30984330f;
    n *= r5;
    r5 = n *= -1.07086861f;
    n *= -0.33950451f;
    n += r2;
    n = r4 += n;
    n = r4 += n;
    n *= 0.42735168f;
    n *= 0.60369033f;
    n *= 0.56837821f;
    n = r3 *= n;
    n *= -6.08462000f;
    n *= 0.73335123f;
    n = r5 += n;
    n *= r3;
    r3 = n += -0.59684497f;
    n += r3;
    n += r1;
    n = r0 *= n;
    n += r0;
    n += r5;
    n *= r4;
    n += 0.57012367f;
    n += 0.67219102f;
    return n;
} // Solution1

// Solution2 precision = 0.00894946
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.50668693f;
    r0 = n += 0.50484443f;
    r1 = n += 0.53406358f;
    n *= 0.89538932f;
    r2 = n *= -0.51970011f;
    n = r1 *= n;
    r3 = n *= 0.52247792f;
    r4 = n += 0.04093210f;
    r5 = n *= 0.60841012f;
    n *= r5;
    r5 = n *= 0.67179292f;
    n *= 0.66827816f;
    n += r2;
    n = r4 += n;
    n = r4 += n;
    n *= -0.59593213f;
    n *= -0.22126514f;
    n *= -3.17088509f;
    n = r3 *= n;
    n *= -2.20721436f;
    n *= 0.14721824f;
    n = r5 += n;
    n *= r3;
    r3 = n += 0.63301128f;
    n += r3;
    n += r1;
    n = r0 *= n;
    n += r0;
    n += r5;
    n *= r4;
    n += 0.55832589f;
    n += 0.58486658f;
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
