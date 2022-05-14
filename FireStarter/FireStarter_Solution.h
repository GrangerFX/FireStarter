// Run date: 05/14/22 16:54:59 Pacific Daylight Time
// Run duration = 2.059920 seconds
// Run count = 3
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// State Generation = 2

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

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

// Precision = 0.617801

// Solution0 precision = 0.601122
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.08637724f;
    n += 0.32215384f;
    r1 = n += 0.83522868f;
    r2 = n *= 0.83390480f;
    n += -0.19157659f;
    r3 = n *= -0.24405923f;
    n *= -1.21146393f;
    n += r0;
    n *= 0.74626392f;
    r0 = n += 0.49302030f;
    r4 = n += 0.12319059f;
    n += r4;
    r4 = n += -0.58063030f;
    n = r2 *= n;
    n += -0.44714698f;
    n += r3;
    r3 = n += 0.20995718f;
    n += r2;
    n = r4 += n;
    n += -0.62361616f;
    n += 0.45232028f;
    n *= 0.59275365f;
    n *= -1.36704910f;
    r2 = n += 0.26891592f;
    n *= r0;
    n = r1 += n;
    n += -1.07511270f;
    n += 1.13657570f;
    n += r1;
    n += r2;
    n += r4;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.572579
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.09674159f;
    n += -0.61435580f;
    r1 = n += 0.58718687f;
    r2 = n *= -0.64365292f;
    n += -0.64277536f;
    r3 = n *= -0.84467340f;
    n *= -1.56320357f;
    n += r0;
    n *= -0.25430331f;
    r0 = n += 0.32518372f;
    r4 = n += 0.73182976f;
    n += r4;
    r4 = n += -0.26641542f;
    n = r2 *= n;
    n += -0.91226488f;
    n += r3;
    r3 = n += 0.58901846f;
    n += r2;
    n = r4 += n;
    n += 1.23947883f;
    n += 1.20772600f;
    n *= 0.25924525f;
    n *= 0.38590720f;
    r2 = n += 0.50492525f;
    n *= r0;
    n = r1 += n;
    n += 1.13338482f;
    n += 0.10606506f;
    n += r1;
    n += r2;
    n += r4;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.617801
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.14421466f;
    n += 0.60081619f;
    r1 = n += -0.37580320f;
    r2 = n *= 0.92544073f;
    n += -1.35725045f;
    r3 = n *= -0.32266313f;
    n *= 0.20133370f;
    n += r0;
    n *= -0.90531468f;
    r0 = n += 0.19822815f;
    r4 = n += 0.56755865f;
    n += r4;
    r4 = n += -0.93059665f;
    n = r2 *= n;
    n += -0.03961262f;
    n += r3;
    r3 = n += 0.17011946f;
    n += r2;
    n = r4 += n;
    n += -0.33024332f;
    n += -0.47970805f;
    n *= -0.89670032f;
    n *= 1.30709934f;
    r2 = n += 0.57472801f;
    n *= r0;
    n = r1 += n;
    n += 0.08633223f;
    n += -0.92403394f;
    n += r1;
    n += r2;
    n += r4;
    n *= r3;
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
