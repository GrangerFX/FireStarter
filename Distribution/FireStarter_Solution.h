// Run date: 04/16/23 15:32:06 Pacific Daylight Time
// Run duration = 814.338802 seconds
// Run generation = 322
// Run result = 0.00000077
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
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

// Solution0 result = 0.00000077
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159250f;
    r1 = n *= 0.03260063f;
    r2 = n *= 0.95197994f;
    n = r0 += n;
    r3 = n *= 1.60873568f;
    n *= r2;
    r2 = n += -2.63101816f;
    r4 = n *= -3.13025999f;
    r5 = n *= 0.00132232f;
    n = r3 *= n;
    r6 = n *= 2.59370685f;
    n *= r6;
    r6 = n += -0.91416955f;
    r7 = n += -0.77771378f;
    n *= r0;
    n = r3 *= n;
    n *= r5;
    n *= 4.34670973f;
    r5 = n *= -6.42889357f;
    n *= r5;
    n += r2;
    n *= r4;
    n *= r6;
    n = r7 *= n;
    n *= r3;
    r3 = n *= 1.74101043f;
    n += 1.29999983f;
    n += 1.53967988f;
    n += r3;
    n += r7;
    n *= r1;
    n += 0.00000003f;
    return n;
} // Solution0

// Solution1 result = 0.00000077
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065866f;
    r1 = n *= -0.38668883f;
    r2 = n *= 0.63468111f;
    n = r0 += n;
    r3 = n *= -0.17534500f;
    n *= r2;
    r2 = n += -1.97242677f;
    r4 = n *= 0.12854876f;
    r5 = n *= 0.29069346f;
    n = r3 *= n;
    r6 = n *= -5.24481916f;
    n *= r6;
    r6 = n += -1.60287118f;
    r7 = n += -1.70570028f;
    n *= r0;
    n = r3 *= n;
    n *= r5;
    n *= 0.38165170f;
    r5 = n *= 3.56005716f;
    n *= r5;
    n += r2;
    n *= r4;
    n *= r6;
    n = r7 *= n;
    n *= r3;
    r3 = n *= 1.70711708f;
    n += 2.09651566f;
    n += -1.90405941f;
    n += r3;
    n += r7;
    n *= r1;
    n += -0.11813194f;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799359f;
    r1 = n *= 0.25337324f;
    r2 = n *= -0.13890639f;
    n = r0 += n;
    r3 = n *= -0.15032122f;
    n *= r2;
    r2 = n += -1.56128669f;
    r4 = n *= -1.36520791f;
    r5 = n *= 0.21445425f;
    n = r3 *= n;
    r6 = n *= 2.27508950f;
    n *= r6;
    r6 = n += -1.68636513f;
    r7 = n += 0.93658209f;
    n *= r0;
    n = r3 *= n;
    n *= r5;
    n *= -0.00003736f;
    r5 = n *= 4.84071875f;
    n *= r5;
    n += r2;
    n *= r4;
    n *= r6;
    n = r7 *= n;
    n *= r3;
    r3 = n *= -2.29126930f;
    n += 0.58187705f;
    n += -0.32085529f;
    n += r3;
    n += r7;
    n *= r1;
    n += 0.52359879f;
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
