// Run date: 07/04/22 21:43:21 Pacific Daylight Time
// Run duration = 4.983478 seconds
// Run count = 17
// Run mode = 2
// Run clients = 4
// Run process = 0
// Run units = 1
// Run states = 4
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Run seed = 8337
// Solution Generation = 16

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

// Precision = 0.000003

// Solution0 precision = 0.000001
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159274f;
    r0 = n *= -0.92807347f;
    n *= 0.84481198f;
    r1 = n *= -1.45782840f;
    n = r0 *= n;
    n *= -0.45234713f;
    n *= 0.14027646f;
    r2 = n += -0.65685153f;
    r3 = n *= -0.60230112f;
    n = r0 *= n;
    n *= -0.66759992f;
    n *= -0.87090582f;
    n += 0.54388726f;
    n += r0;
    n *= -0.01210056f;
    n = r2 += n;
    n += 0.63798434f;
    n *= -0.17228536f;
    n += 1.55100608f;
    n = r2 *= n;
    n = r1 *= n;
    r0 = n *= 1.20974195f;
    n += r1;
    n *= -0.35335979f;
    n = r2 *= n;
    n *= 0.40253732f;
    n *= r3;
    n += -0.00000004f;
    n *= -0.34793329f;
    n += r2;
    n += r0;
    n *= 0.43019447f;
    return n;
} // Solution0

// Solution1 precision = 0.000003
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09065890f;
    r0 = n *= 0.55235416f;
    n *= -0.65838337f;
    r1 = n *= 0.65861470f;
    n = r0 *= n;
    n *= 0.54447389f;
    n *= -0.21631451f;
    r2 = n += -1.26602435f;
    r3 = n *= -0.32614234f;
    n = r0 *= n;
    n *= -0.59791857f;
    n *= -1.30026174f;
    n += 1.16049302f;
    n += r0;
    n *= -1.32465756f;
    n = r2 += n;
    n += 0.33645111f;
    n *= 1.01049268f;
    n += -0.09760020f;
    n = r2 *= n;
    n = r1 *= n;
    r0 = n *= -1.01514328f;
    n += r1;
    n *= 0.23117554f;
    n = r2 *= n;
    n *= -0.31268471f;
    n *= r3;
    n += -0.49263337f;
    n *= -0.39500523f;
    n += r2;
    n += r0;
    n *= -0.60707158f;
    return n;
} // Solution1

// Solution2 precision = 0.000003
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61799407f;
    r0 = n *= 0.80563253f;
    n *= -0.46432039f;
    r1 = n *= 1.00937402f;
    n = r0 *= n;
    n *= 0.70483387f;
    n *= 0.95186645f;
    r2 = n += 1.13008726f;
    r3 = n *= -0.03282126f;
    n = r0 *= n;
    n *= 0.08441079f;
    n *= -0.40167668f;
    n += 0.12848938f;
    n += r0;
    n *= -0.84443241f;
    n = r2 += n;
    n += 0.64685023f;
    n *= -0.15802109f;
    n += -2.73308206f;
    n = r2 *= n;
    n = r1 *= n;
    r0 = n *= 0.47327027f;
    n += r1;
    n *= -0.04275473f;
    n = r2 *= n;
    n *= -1.13453126f;
    n *= r3;
    n += -0.38718259f;
    n *= 1.05463338f;
    n += r2;
    n += r0;
    n *= -1.28227556f;
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
