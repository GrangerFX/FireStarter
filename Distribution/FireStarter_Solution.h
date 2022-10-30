// Run date: 10/30/22 11:27:25 Pacific Daylight Time
// Run duration = 73.662612 seconds
// Run count = 647
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 2;
// Run processes = 6;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 10000;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 647

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

// Precision = 0.00004601

// Solution0 precision = 0.00002071
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14255357f;
    r1 = n += -0.07893838f;
    n += -0.30763441f;
    n += 0.46799570f;
    n = r1 *= n;
    n *= 0.14655115f;
    r2 = n += -0.60674900f;
    n *= -6.86660099f;
    n += r1;
    r1 = n += 0.57488656f;
    r3 = n += -4.44436359f;
    n = r2 *= n;
    n *= -0.00540998f;
    r4 = n += 0.33672306f;
    n = r1 *= n;
    n += -0.03599166f;
    n += -1.27217889f;
    n *= 4.70153046f;
    r5 = n *= -0.47523162f;
    n = r4 *= n;
    n += r2;
    n *= r4;
    n *= r3;
    n *= -13.76608467f;
    n = r0 *= n;
    n *= r1;
    n *= -1.67730582f;
    n += 0.01005038f;
    n *= r5;
    n += -2.50500345f;
    n += 2.51061201f;
    n += r0;
    return n;
} // Solution0

// Solution1 precision = 0.00003341
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.07722282f;
    r1 = n += -1.70414138f;
    n += 2.77513957f;
    n += 0.59812832f;
    n = r1 *= n;
    n *= -0.00029125f;
    r2 = n += -0.87840146f;
    n *= 0.52034527f;
    n += r1;
    r1 = n += -35.22908783f;
    r3 = n += 2.63703203f;
    n = r2 *= n;
    n *= 0.00034034f;
    r4 = n += -0.20043623f;
    n = r1 *= n;
    n += -0.89733475f;
    n += -2.18360972f;
    n *= -0.01913159f;
    r5 = n *= 0.20056127f;
    n = r4 *= n;
    n += r2;
    n *= r4;
    n *= r3;
    n *= 0.24744034f;
    n = r0 *= n;
    n *= r1;
    n *= -2.33658290f;
    n += -1.01118290f;
    n *= r5;
    n += 3.78431177f;
    n += -3.90403795f;
    n += r0;
    return n;
} // Solution1

// Solution2 precision = 0.00004601
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61964393f;
    r1 = n += -0.21484515f;
    n += 0.50305796f;
    n += -0.06945211f;
    n = r1 *= n;
    n *= 0.20695426f;
    r2 = n += -0.46646452f;
    n *= -4.73010874f;
    n += r1;
    r1 = n += -2.45706511f;
    r3 = n += -1.19889557f;
    n = r2 *= n;
    n *= 0.33374527f;
    r4 = n += 1.81586957f;
    n = r1 *= n;
    n += -5.33939791f;
    n += 36.94051361f;
    n *= 0.20718808f;
    r5 = n *= 0.07334669f;
    n = r4 *= n;
    n += r2;
    n *= r4;
    n *= r3;
    n *= 0.39850965f;
    n = r0 *= n;
    n *= r1;
    n *= -0.32760853f;
    n += 0.30601245f;
    n *= r5;
    n += 0.50603473f;
    n += -0.12869239f;
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
