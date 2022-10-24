// Run date: 10/24/22 09:48:40 Pacific Daylight Time
// Run duration = 0.013211 seconds
// Run count = 66
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
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 66

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

// Precision = 0.00000107

// Solution0 precision = 0.00000021
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.76593876f;
    r0 = n += -0.37565404f;
    n += 0.00000026f;
    r1 = n *= 0.26612282f;
    n = r1 *= n;
    r2 = n *= -0.47872698f;
    n += r2;
    r2 = n += 0.23087294f;
    r3 = n *= -57.86773682f;
    n += -0.15785155f;
    n += r3;
    r3 = n *= -0.01147213f;
    r4 = n += 0.71118826f;
    n = r1 += n;
    r5 = n += 0.30499768f;
    n *= -3.40176988f;
    n *= r1;
    n *= 1.72728181f;
    n += r2;
    n *= r5;
    r5 = n *= 0.02201618f;
    n += -1.51516950f;
    n *= r4;
    n += -8.30382633f;
    n *= r3;
    n += -1.09945953f;
    n *= -0.32917061f;
    n = r5 *= n;
    n += r5;
    n += -0.37780437f;
    n *= r0;
    n += -0.00000015f;
    return n;
} // Solution0

// Solution1 precision = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.84141397f;
    r0 = n += -2.24924469f;
    n += 0.00000017f;
    r1 = n *= -0.24227586f;
    n = r1 *= n;
    r2 = n *= -13.02450466f;
    n += r2;
    r2 = n += 5.50256538f;
    r3 = n *= 0.00460424f;
    n += 1.67978013f;
    n += r3;
    r3 = n *= -1.40421391f;
    r4 = n += -0.82480627f;
    n = r1 += n;
    r5 = n += -2.91945124f;
    n *= 0.02752538f;
    n *= r1;
    n *= 11.12930584f;
    n += r2;
    n *= r5;
    r5 = n *= -0.00257800f;
    n += 2.74109387f;
    n *= r4;
    n += 2.42821646f;
    n *= r3;
    n += -1.47944283f;
    n *= -0.10576473f;
    n = r5 *= n;
    n += r5;
    n += -0.48111635f;
    n *= r0;
    n += -0.11813188f;
    return n;
} // Solution1

// Solution2 precision = 0.00000107
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.03671408f;
    r0 = n += -0.58127975f;
    n += 0.00000032f;
    r1 = n *= 0.41011384f;
    n = r1 *= n;
    r2 = n *= 0.22183324f;
    n += r2;
    r2 = n += -0.29624572f;
    r3 = n *= -1.87920284f;
    n += 0.33184442f;
    n += r3;
    r3 = n *= 0.95723575f;
    r4 = n += 6.07285357f;
    n = r1 += n;
    r5 = n += -3.77337337f;
    n *= 0.02061291f;
    n *= r1;
    n *= 12.20878887f;
    n += r2;
    n *= r5;
    r5 = n *= 0.00517833f;
    n += 0.96320260f;
    n *= r4;
    n += 3.25766802f;
    n *= r3;
    n += 0.93283439f;
    n *= -0.25308600f;
    n = r5 *= n;
    n += r5;
    n += 0.06486457f;
    n *= r0;
    n += 0.52359855f;
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
