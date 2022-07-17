// Run date: 07/17/22 12:14:05 Pacific Daylight Time
// Run duration = 0.791144 seconds
// Run count = 4
// Run mode = 2
// Run units = 1
// Run process = 0
// Run states = 1
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Run attempts = 32
// Run seed = 0
// Solution Generation = 3

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

// Precision = 0.00022721

// Solution0 precision = 0.00014186
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.70145315f;
    n += -3.88700509f;
    n *= -0.18091078f;
    n += 0.70299619f;
    n *= -0.78087413f;
    r1 = n *= -0.46370122f;
    r2 = n *= -0.74603027f;
    n *= 0.95246923f;
    r3 = n += 0.55132973f;
    n = r1 *= n;
    n = r2 += n;
    r4 = n += 1.51334572f;
    n += r3;
    r3 = n += -0.50035149f;
    n *= r2;
    n = r3 *= n;
    r2 = n += -0.00746178f;
    n = r2 += n;
    r5 = n += -0.47034252f;
    n += 0.79059172f;
    n += r0;
    r0 = n += -0.93811536f;
    n *= r0;
    n *= r5;
    r5 = n += 1.19110620f;
    n += r3;
    n = r1 *= n;
    n += r4;
    n += r1;
    n *= r5;
    n *= -1.15633094f;
    n *= r2;
    return n;
} // Solution0

// Solution1 precision = 0.00013971
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.67453575f;
    n += 1.00634193f;
    n *= 0.91032851f;
    n += -3.59967422f;
    n *= 0.24499078f;
    r1 = n *= 0.69692820f;
    r2 = n *= -0.67740059f;
    n *= -0.21640076f;
    r3 = n += 0.44541031f;
    n = r1 *= n;
    n = r2 += n;
    r4 = n += 0.57807547f;
    n += r3;
    r3 = n += 0.65558988f;
    n *= r2;
    n = r3 *= n;
    r2 = n += 0.20757344f;
    n = r2 += n;
    r5 = n += 0.00918377f;
    n += 0.40146354f;
    n += r0;
    r0 = n += -0.23275490f;
    n *= r0;
    n *= r5;
    r5 = n += -0.16645260f;
    n += r3;
    n = r1 *= n;
    n += r4;
    n += r1;
    n *= r5;
    n *= -1.04085231f;
    n *= r2;
    return n;
} // Solution1

// Solution2 precision = 0.00022721
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.52496254f;
    n += 0.43787000f;
    n *= -0.38365912f;
    n += 1.20938718f;
    n *= -1.07784748f;
    r1 = n *= -0.20758486f;
    r2 = n *= -1.71022367f;
    n *= -0.79964846f;
    r3 = n += -0.42495683f;
    n = r1 *= n;
    n = r2 += n;
    r4 = n += -0.08895928f;
    n += r3;
    r3 = n += -0.28430507f;
    n *= r2;
    n = r3 *= n;
    r2 = n += -0.66583836f;
    n = r2 += n;
    r5 = n += 0.94731742f;
    n += 0.69889945f;
    n += r0;
    r0 = n += 1.20773435f;
    n *= r0;
    n *= r5;
    r5 = n += 0.74429965f;
    n += r3;
    n = r1 *= n;
    n += r4;
    n += r1;
    n *= r5;
    n *= -1.31061888f;
    n *= r2;
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
