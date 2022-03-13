#include <math.h>

// Run date: 03/13/22 13:44:19 Pacific Daylight Time
// Run duration = 2.125042 seconds
// Run count = 12
// Run units = 1
// Run population = 17408
// Run iterations = 4096
// Run generations = 100
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define PROGRAM_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

inline float Target(float n, unsigned int variation)
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
} // Target

// Precision = 0.000039

// Solution0 precision = 0.000039
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.65297097f;
    r1 = n += 0.42267370f;
    n *= 0.80510461f;
    n += 3.61842823f;
    r2 = n *= 0.63190025f;
    n += -0.16749994f;
    r3 = n *= -0.32718578f;
    n += r0;
    n *= -0.22363755f;
    r0 = n += 0.59270936f;
    n *= -0.60957038f;
    n += -0.75321347f;
    n *= r1;
    n += 1.02931821f;
    n = r3 *= n;
    n = r3 += n;
    r1 = n *= -1.15959632f;
    n += r2;
    r2 = n *= 0.26134732f;
    r4 = n += 0.69868743f;
    n *= r1;
    n += 1.23414254f;
    n *= -0.28674096f;
    n += 1.15393925f;
    n *= r0;
    n += r4;
    n *= r3;
    n += 0.89616901f;
    n *= 0.60165441f;
    n += 0.28985247f;
    n *= r2;
    n += 0.05471424f;
    return n;
} // Solution0

// Solution1 precision = 0.000013
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 1.61247194f;
    r1 = n += -2.67799950f;
    n *= -0.09083397f;
    n += -0.81660944f;
    r2 = n *= 0.64618182f;
    n += -0.08750509f;
    r3 = n *= -0.46387696f;
    n += r0;
    n *= -0.08564033f;
    r0 = n += 0.59240657f;
    n *= -0.36369523f;
    n += -0.43767089f;
    n *= r1;
    n += -0.18154164f;
    n = r3 *= n;
    n = r3 += n;
    r1 = n *= -0.76511228f;
    n += r2;
    r2 = n *= 0.92130560f;
    r4 = n += -0.61141884f;
    n *= r1;
    n += -0.26237959f;
    n *= 0.11434112f;
    n += -0.47510958f;
    n *= r0;
    n += r4;
    n *= r3;
    n += 1.13654721f;
    n *= -1.38999796f;
    n += -1.01917100f;
    n *= r2;
    n += -0.01719266f;
    return n;
} // Solution1

// Solution2 precision = 0.000031
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.70931518f;
    r1 = n += 1.66607869f;
    n *= 0.62395525f;
    n += -1.51329386f;
    r2 = n *= 0.36870211f;
    n += -0.46603528f;
    r3 = n *= 0.96221936f;
    n += r0;
    n *= 0.43863547f;
    r0 = n += -0.24816610f;
    n *= 0.14116608f;
    n += 0.62398416f;
    n *= r1;
    n += -0.14790687f;
    n = r3 *= n;
    n = r3 += n;
    r1 = n *= -0.46994698f;
    n += r2;
    r2 = n *= 0.79014450f;
    r4 = n += 2.95229506f;
    n *= r1;
    n += 0.46701914f;
    n *= -0.81326902f;
    n += -0.23533626f;
    n *= r0;
    n += r4;
    n *= r3;
    n += -0.19567336f;
    n *= 0.98083287f;
    n += -0.36704364f;
    n *= r2;
    n += 0.93440491f;
    return n;
} // Solution2
