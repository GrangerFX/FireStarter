// Run date: 04/30/23 17:12:13 Pacific Daylight Time
// Run duration = 1560.220093 seconds
// Run generation = 343
// Run result = 0.00000083
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 27
// Run opcodes = 2

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

// Solution0 result = 0.00000016
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= -1.59687757f;
    r2 = n *= 0.05549699f;
    n = r2 *= n;
    n += -1.27657473f;
    n = r2 *= n;
    n += 0.69289064f;
    r3 = n *= -1.66681576f;
    n *= -1.66609132f;
    n *= r2;
    r2 = n += 0.33599469f;
    n *= r3;
    n = r2 += n;
    n *= r1;
    r1 = n *= 2.18572211f;
    r3 = n *= -1.24952233f;
    r4 = n *= 2.18412185f;
    n *= 1.34591424f;
    r5 = n *= -0.08138493f;
    n *= 2.84505320f;
    n = r5 *= n;
    n *= r0;
    n *= 3.70570898f;
    n *= r5;
    n *= r3;
    n += 0.13298130f;
    n *= r2;
    n *= r1;
    n *= 3.31849933f;
    n += 0.00000001f;
    n = r4 += n;
    n += r4;
    return n;
} // Solution0

// Solution1 result = 0.00000072
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065914f;
    r1 = n *= 0.19414274f;
    r2 = n *= -0.28729630f;
    n = r2 *= n;
    n += -0.32392752f;
    n = r2 *= n;
    n += 0.42114124f;
    r3 = n *= 1.41922748f;
    n *= 32.53039551f;
    n *= r2;
    r2 = n += 0.36175570f;
    n *= r3;
    n = r2 += n;
    n *= r1;
    r1 = n *= 0.03914054f;
    r3 = n *= 0.16689818f;
    r4 = n *= 4.55639839f;
    n *= -6.93306160f;
    r5 = n *= -9.46483135f;
    n *= 3.95219469f;
    n = r5 *= n;
    n *= r0;
    n *= -8.11021423f;
    n *= r5;
    n *= r3;
    n += -93.03564453f;
    n *= r2;
    n *= r1;
    n *= 2.34301972f;
    n += -0.05906600f;
    n = r4 += n;
    n += r4;
    return n;
} // Solution1

// Solution2 result = 0.00000083
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799383f;
    r1 = n *= 0.78217822f;
    r2 = n *= 0.21778257f;
    n = r2 *= n;
    n += -2.49133086f;
    n = r2 *= n;
    n += 1.91180027f;
    r3 = n *= 1.50622439f;
    n *= -1.86182070f;
    n *= r2;
    r2 = n += -1.49637640f;
    n *= r3;
    n = r2 += n;
    n *= r1;
    r1 = n *= -0.42143309f;
    r3 = n *= -0.56934601f;
    r4 = n *= 0.45744097f;
    n *= 20.94919586f;
    r5 = n *= 0.00206648f;
    n *= 20.35397148f;
    n = r5 *= n;
    n *= r0;
    n *= 39.05601501f;
    n *= r5;
    n *= r3;
    n += 0.43828663f;
    n *= r2;
    n *= r1;
    n *= 0.00032987f;
    n += 0.26179934f;
    n = r4 += n;
    n += r4;
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
