// Run date: 03/26/23 15:37:24 Pacific Daylight Time
// Run duration = 3707.441811 seconds
// Run generation = 89
// Run result = 0.00123882
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 32

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

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

// Solution0 result = 0.00028074
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14142847f;
    r1 = n *= 0.20672426f;
    r2 = n *= 1.58675778f;
    r3 = n *= -0.39974481f;
    r4 = n *= 0.29172158f;
    n = r0 *= n;
    n *= 1.01915669f;
    n *= -0.31316787f;
    n *= -1.57700980f;
    r5 = n += 3.84730148f;
    n = r0 *= n;
    n *= r4;
    n *= -3.59178329f;
    n *= 0.93386960f;
    n = r0 += n;
    n += 1.38877964f;
    n *= r2;
    n += -65.82026672f;
    n *= r1;
    n *= 0.67667115f;
    r1 = n *= -0.11448960f;
    n = r0 += n;
    n *= -0.12426311f;
    n *= 1.06068552f;
    n += -0.94833195f;
    n = r0 *= n;
    n *= -1.10961831f;
    n *= r3;
    n *= r5;
    n *= -0.17909476f;
    n *= r1;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00041366
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.98341346f;
    r1 = n *= -0.10827657f;
    r2 = n *= -1.19579601f;
    r3 = n *= 0.53737384f;
    r4 = n *= -2.43265653f;
    n = r0 *= n;
    n *= 0.26767126f;
    n *= 0.77920628f;
    n *= 0.16141039f;
    r5 = n += 0.42985010f;
    n = r0 *= n;
    n *= r4;
    n *= 3.66519618f;
    n *= 2.99992085f;
    n = r0 += n;
    n += -3.10581398f;
    n *= r2;
    n += 49.05102539f;
    n *= r1;
    n *= -1.66150904f;
    r1 = n *= -0.21414945f;
    n = r0 += n;
    n *= 0.00042987f;
    n *= -4.14839745f;
    n += 0.58016402f;
    n = r0 *= n;
    n *= 1.51692533f;
    n *= r3;
    n *= r5;
    n *= 0.46171272f;
    n *= r1;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00123882
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.00083643f;
    r1 = n *= -0.69546700f;
    r2 = n *= -0.07930144f;
    r3 = n *= -0.74749422f;
    r4 = n *= 0.07806654f;
    n = r0 *= n;
    n *= -1.17231107f;
    n *= -1.82573664f;
    n *= -2.60964465f;
    r5 = n += -0.74009365f;
    n = r0 *= n;
    n *= r4;
    n *= -2.23095107f;
    n *= 0.91795880f;
    n = r0 += n;
    n += 1.03258502f;
    n *= r2;
    n += -0.46199223f;
    n *= r1;
    n *= 1.81043041f;
    r1 = n *= 2.19731688f;
    n = r0 += n;
    n *= 0.35165605f;
    n *= 0.41547051f;
    n += 1.07548177f;
    n = r0 *= n;
    n *= -3.22177911f;
    n *= r3;
    n *= r5;
    n *= 1.72950423f;
    n *= r1;
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
