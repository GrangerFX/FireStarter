// Run date: 05/08/22 16:05:17 Pacific Daylight Time
// Run duration = 1.775809 seconds
// Run count = 22
// Run units = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// State Generation = 210000

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

// Precision = 0.000002

// Solution0 precision = 0.000000
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.30548656f;
    r0 = n += 0.95971435f;
    r1 = n *= 0.55794430f;
    r2 = n *= -0.98796207f;
    n *= r1;
    n += 0.65705746f;
    r1 = n += -0.37378401f;
    r3 = n += 0.33658060f;
    r4 = n += 1.13925481f;
    n += r3;
    n += 0.41855666f;
    r3 = n *= 1.63185000f;
    n *= -1.32264316f;
    n = r2 *= n;
    r5 = n *= -0.23143210f;
    n *= 0.17178869f;
    n = r0 *= n;
    n *= -0.11530787f;
    n *= 1.06617165f;
    n += r0;
    r0 = n += 0.03611574f;
    n *= -0.00362112f;
    n += -0.31611857f;
    n += -2.95942187f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= 0.42082191f;
    n *= r4;
    n *= r1;
    n += 0.00000002f;
    return n;
} // Solution0

// Solution1 precision = 0.000001
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.17992847f;
    r0 = n += 0.55609745f;
    r1 = n *= -1.31078517f;
    r2 = n *= -0.32351470f;
    n *= r1;
    n += 0.37102208f;
    r1 = n += 0.54487991f;
    r3 = n += -0.52916116f;
    r4 = n += 1.47118175f;
    n += r3;
    n += -1.31889486f;
    r3 = n *= -1.05901384f;
    n *= -0.66194880f;
    n = r2 *= n;
    r5 = n *= 3.24759889f;
    n *= -0.50759703f;
    n = r0 *= n;
    n *= 0.77711296f;
    n *= -0.74598372f;
    n += r0;
    r0 = n += 1.80244637f;
    n *= 0.07726710f;
    n += 1.49591732f;
    n += 0.24826078f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= -1.10732222f;
    n *= r4;
    n *= r1;
    n += -0.11813163f;
    return n;
} // Solution1

// Solution2 precision = 0.000002
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.26437128f;
    r0 = n += -0.69212234f;
    r1 = n *= -0.42720023f;
    r2 = n *= -1.36618054f;
    n *= r1;
    n += 1.15491211f;
    r1 = n += 0.02813078f;
    r3 = n += -0.06360587f;
    r4 = n += 0.94827348f;
    n += r3;
    n += -1.31645310f;
    r3 = n *= -0.65512609f;
    n *= -1.46148896f;
    n = r2 *= n;
    r5 = n *= -0.87686974f;
    n *= 1.53739142f;
    n = r0 *= n;
    n *= -0.00000062f;
    n *= -0.84071755f;
    n += r0;
    r0 = n += -0.18934990f;
    n *= -0.11467578f;
    n += 0.03974773f;
    n += -1.90958309f;
    n *= r5;
    n *= r0;
    n += r2;
    n *= r3;
    n *= 1.74131310f;
    n *= r4;
    n *= r1;
    n += 0.52359873f;
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
