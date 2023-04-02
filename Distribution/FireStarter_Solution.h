// Run date: 04/01/23 15:41:42 Pacific Daylight Time
// Run duration = 2488.993743 seconds
// Run generation = 144
// Run result = 0.00021517
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 1
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
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

// Solution0 result = 0.00019258
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.56597370f;
    r1 = n *= 0.47299567f;
    n *= 0.44076854f;
    n += 0.94373935f;
    n *= -0.41053349f;
    r2 = n *= -0.40651476f;
    n *= -1.74264657f;
    n *= -0.38019204f;
    n *= 1.56670988f;
    n = r0 *= n;
    n *= -1.91649747f;
    r3 = n += 2.01864219f;
    r4 = n *= -1.13328159f;
    n *= r1;
    r1 = n += -1.11622608f;
    n *= r4;
    r4 = n *= 0.35819605f;
    n *= -0.74399388f;
    r5 = n *= 1.77978289f;
    r6 = n *= 0.44388762f;
    n += r0;
    n *= r3;
    n *= -1.55076587f;
    n += r6;
    n *= r1;
    n *= 0.28135309f;
    n += r5;
    n += r2;
    n *= r4;
    n += 1.00468516f;
    n += 0.28835881f;
    n *= 0.77162671f;
    return n;
} // Solution0

// Solution1 result = 0.00021517
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.25662401f;
    r1 = n *= -0.24201950f;
    n *= -3.84450459f;
    n += -4.33283615f;
    n *= 0.66818154f;
    r2 = n *= 1.38300240f;
    n *= 0.12145042f;
    n *= -1.98332572f;
    n *= -0.96512276f;
    n = r0 *= n;
    n *= -1.19460964f;
    r3 = n += 3.51205087f;
    r4 = n *= -1.34701383f;
    n *= r1;
    r1 = n += -1.00434434f;
    n *= r4;
    r4 = n *= -0.37300771f;
    n *= 1.25476480f;
    r5 = n *= 2.23953700f;
    r6 = n *= 0.96612883f;
    n += r0;
    n *= r3;
    n *= -0.79586977f;
    n += r6;
    n *= r1;
    n *= -1.54653132f;
    n += r5;
    n += r2;
    n *= r4;
    n += 1.68840873f;
    n += -2.52168584f;
    n *= -0.09807928f;
    return n;
} // Solution1

// Solution2 result = 0.00017918
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.71389335f;
    r1 = n *= 0.55269295f;
    n *= -1.07622850f;
    n += -2.50017309f;
    n *= 1.45692289f;
    r2 = n *= -0.43437696f;
    n *= 0.27406862f;
    n *= -0.91282851f;
    n *= -0.66563410f;
    n = r0 *= n;
    n *= 0.41625029f;
    r3 = n += -0.65726018f;
    r4 = n *= -1.56838799f;
    n *= r1;
    r1 = n += 0.36415258f;
    n *= r4;
    r4 = n *= 1.44222331f;
    n *= 1.73021650f;
    r5 = n *= 0.56990349f;
    r6 = n *= -0.13546100f;
    n += r0;
    n *= r3;
    n *= -1.28743172f;
    n += r6;
    n *= r1;
    n *= -2.20124507f;
    n += r5;
    n += r2;
    n *= r4;
    n += 0.07489790f;
    n += -1.27866578f;
    n *= -0.83182257f;
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
