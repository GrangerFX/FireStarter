// Run date: 12/29/22 20:18:02 Pacific Standard Time
// Run duration = 327.946156 seconds
// Run count = 53
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 256
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run evolve = FIRESTARTER_EVOLVE_BEST
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 53

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

// Precision = 0.00004047

// Solution0 precision = 0.00000244
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 1.72282779f;
    n += -1.06209111f;
    n += -4.40590715f;
    r1 = n += 2.76153970f;
    r2 = n *= 0.00001359f;
    r3 = n *= -2.46620917f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= -1.04159820f;
    n = r1 *= n;
    n += -2.21960258f;
    n *= 3.69526243f;
    n += 7.49128151f;
    n *= 0.00330361f;
    n += 2.46524429f;
    r0 = n *= 0.36594507f;
    r2 = n += 0.91071278f;
    r4 = n += -1.19866335f;
    n *= r2;
    r2 = n += 1.48803163f;
    n *= 0.52993965f;
    r5 = n *= -0.96805394f;
    n *= r1;
    n *= 0.13770866f;
    n = r0 *= n;
    n *= r5;
    n += r0;
    n += r4;
    n += r3;
    n *= r2;
    n += -0.59429771f;
    return n;
} // Solution0

// Solution1 precision = 0.00001991
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.14624278f;
    n += 2.53434205f;
    n += 2.62042403f;
    r1 = n += -2.45966387f;
    r2 = n *= -0.48999414f;
    r3 = n *= -0.67543590f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= 0.33662346f;
    n = r1 *= n;
    n += -1.87798202f;
    n *= -5.98222160f;
    n += 1.46530831f;
    n *= -1.67658615f;
    n += 1.77953863f;
    r0 = n *= 0.08049530f;
    r2 = n += 0.86136448f;
    r4 = n += -1.61307478f;
    n *= r2;
    r2 = n += 0.09545305f;
    n *= 0.99228472f;
    r5 = n *= -13.67231560f;
    n *= r1;
    n *= -0.12880439f;
    n = r0 *= n;
    n *= r5;
    n += r0;
    n += r4;
    n += r3;
    n *= r2;
    n += -0.12655433f;
    return n;
} // Solution1

// Solution2 precision = 0.00004047
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.46994862f;
    n += -1.16165888f;
    n += 0.49830458f;
    r1 = n += 0.05535165f;
    r2 = n *= -0.19924849f;
    r3 = n *= -1.00636649f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= 0.36387020f;
    n = r1 *= n;
    n += -0.71699858f;
    n *= 1.52935064f;
    n += -3.09046197f;
    n *= -0.25663370f;
    n += -0.58603895f;
    r0 = n *= 0.56650800f;
    r2 = n += 1.45986128f;
    r4 = n += -1.05775285f;
    n *= r2;
    r2 = n += 1.17471433f;
    n *= 1.00965309f;
    r5 = n *= -1.07685328f;
    n *= r1;
    n *= -3.10078311f;
    n = r0 *= n;
    n *= r5;
    n += r0;
    n += r4;
    n += r3;
    n *= r2;
    n += -0.33911780f;
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
