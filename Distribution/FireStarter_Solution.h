// Run date: 12/27/22 14:52:17 Pacific Standard Time
// Run duration = 9.069566 seconds
// Run count = 16
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
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 16

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

// Precision = 0.00004208

// Solution0 precision = 0.00003928
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.43675303f;
    r1 = n *= -1.16423547f;
    r2 = n *= 0.55835587f;
    r3 = n += 2.42356563f;
    r4 = n *= 0.15463643f;
    n *= 0.11354937f;
    r5 = n += -1.86075866f;
    n += r1;
    r1 = n += 0.32733274f;
    n = r3 *= n;
    n *= 0.00437779f;
    n += -1.13690758f;
    r6 = n += 0.11773100f;
    n *= r4;
    r4 = n += 0.30046436f;
    n *= r6;
    r6 = n += -0.37517324f;
    n *= r4;
    n *= 2.66649914f;
    n *= r5;
    n += r6;
    n += r1;
    r1 = n += 0.23335536f;
    n = r0 += n;
    r6 = n *= -0.05761538f;
    n += r1;
    n += r3;
    n = r6 *= n;
    n *= r2;
    n += r6;
    n *= r0;
    n += 0.16576482f;
    return n;
} // Solution0

// Solution1 precision = 0.00004208
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.45159841f;
    r1 = n *= -1.10639155f;
    r2 = n *= -0.04880334f;
    r3 = n += -0.04710902f;
    r4 = n *= -1.03218925f;
    n *= 2.40484738f;
    r5 = n += -0.34571517f;
    n += r1;
    r1 = n += -2.08973622f;
    n = r3 *= n;
    n *= -0.06688285f;
    n += 0.92732936f;
    r6 = n += -1.60159492f;
    n *= r4;
    r4 = n += -0.60057485f;
    n *= r6;
    r6 = n += 1.17197335f;
    n *= r4;
    n *= 2.73215938f;
    n *= r5;
    n += r6;
    n += r1;
    r1 = n += 0.62624919f;
    n = r0 += n;
    r6 = n *= 2.31609702f;
    n += r1;
    n += r3;
    n = r6 *= n;
    n *= r2;
    n += r6;
    n *= r0;
    n += -0.12720515f;
    return n;
} // Solution1

// Solution2 precision = 0.00001407
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.34977579f;
    r1 = n *= -0.71565008f;
    r2 = n *= -0.72716266f;
    r3 = n += -2.30563450f;
    r4 = n *= -0.14428085f;
    n *= 2.12365270f;
    r5 = n += 0.91095692f;
    n += r1;
    r1 = n += -0.94439757f;
    n = r3 *= n;
    n *= -0.02342943f;
    n += -0.70266920f;
    r6 = n += -1.67584503f;
    n *= r4;
    r4 = n += 0.37670222f;
    n *= r6;
    r6 = n += 0.44917879f;
    n *= r4;
    n *= 0.39218327f;
    n *= r5;
    n += r6;
    n += r1;
    r1 = n += 0.00626345f;
    n = r0 += n;
    r6 = n *= -0.25683716f;
    n += r1;
    n += r3;
    n = r6 *= n;
    n *= r2;
    n += r6;
    n *= r0;
    n += 0.57711840f;
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
