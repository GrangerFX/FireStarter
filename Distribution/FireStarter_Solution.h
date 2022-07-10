// Run date: 07/09/22 18:51:20 Pacific Daylight Time
// Run duration = 1.378537 seconds
// Run count = 14
// Run mode = 4
// Run clients = 4
// Run process = 0
// Run units = 1
// Run states = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// Run attempts = 32
// Run seed = 8337
// Solution Generation = 1300

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.000001

// Solution0 precision = 0.000001
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159250f;
    r0 = n *= 0.83330697f;
    n *= -0.19678451f;
    r1 = n *= 1.13601518f;
    n = r0 *= n;
    n *= -0.82021338f;
    n *= -0.40914372f;
    r2 = n += 0.40015563f;
    r3 = n *= -0.85896957f;
    n *= r0;
    n *= -0.12840976f;
    n *= 0.09342382f;
    n *= 1.23209918f;
    n += 1.47562838f;
    r0 = n *= 1.05205286f;
    n = r2 += n;
    n += -0.40704069f;
    n *= 0.62560445f;
    n += 1.01263237f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -0.26222888f;
    n = r2 *= n;
    n *= -0.54444718f;
    n *= r3;
    n += 0.00000026f;
    n *= 0.54900289f;
    n += r2;
    n += r0;
    n *= -1.06794941f;
    return n;
} // Solution0

// Solution1 precision = 0.000001
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09065866f;
    r0 = n *= 1.00661671f;
    n *= 0.23703942f;
    r1 = n *= 0.69971895f;
    n = r0 *= n;
    n *= -0.46492898f;
    n *= -0.85685915f;
    r2 = n += -1.72752547f;
    r3 = n *= -1.23974323f;
    n *= r0;
    n *= -0.29328671f;
    n *= -0.45956695f;
    n *= 0.99552017f;
    n += 0.07012562f;
    r0 = n *= -0.13806559f;
    n = r2 += n;
    n += 0.77653658f;
    n *= -0.07882929f;
    n += 0.79211241f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -1.58940601f;
    n = r2 *= n;
    n *= -0.37664953f;
    n *= r3;
    n += 0.09087022f;
    n *= -1.63284314f;
    n += r2;
    n += r0;
    n *= 0.79616088f;
    return n;
} // Solution1

// Solution2 precision = 0.000001
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61799383f;
    r0 = n *= -1.16566443f;
    n *= 1.54383588f;
    r1 = n *= 3.19671941f;
    n = r0 *= n;
    n *= 0.06730177f;
    n *= -0.41996047f;
    r2 = n += 0.64910263f;
    r3 = n *= 0.00534308f;
    n *= r0;
    n *= 0.57162887f;
    n *= -0.18389866f;
    n *= 0.80542135f;
    n += 0.27432382f;
    r0 = n *= 1.05955672f;
    n = r2 += n;
    n += -0.55747736f;
    n *= 0.01426111f;
    n += 0.38395536f;
    n = r2 *= n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= 0.31753510f;
    n = r2 *= n;
    n *= -0.00326133f;
    n *= r3;
    n += 14.79431057f;
    n *= 0.03283148f;
    n += r2;
    n += r0;
    n *= 1.07798696f;
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
