// Run date: 06/12/22 13:34:01 Pacific Daylight Time
// Run duration = 2.740446 seconds
// Run count = 2
// Run units = 1
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 1

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

// Precision = 0.000409

// Solution0 precision = 0.000409
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.70216125f;
    r0 = n *= 0.30578312f;
    n += -1.05376124f;
    n = r0 += n;
    r1 = n += -0.43797141f;
    r2 = n *= 0.07846846f;
    n = r2 += n;
    r3 = n += -0.10777428f;
    r4 = n += 0.80936033f;
    n += 1.40503561f;
    r5 = n += -0.63447821f;
    n += 1.23536575f;
    r6 = n *= -0.57958859f;
    n = r5 *= n;
    n = r0 += n;
    n *= r4;
    n = r2 *= n;
    n += 0.38618517f;
    r4 = n += -0.76201427f;
    n += r6;
    n *= r2;
    n *= r3;
    n += r5;
    n = r1 *= n;
    n += 2.04005957f;
    n *= -0.45810625f;
    n += -0.20061032f;
    n *= -0.38213977f;
    n += 0.57296282f;
    n *= r4;
    n *= r1;
    n *= r0;
    return n;
} // Solution0

// Solution1 precision = 0.000099
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.07503062f;
    r0 = n *= -0.19396178f;
    n += 0.50590140f;
    n = r0 += n;
    r1 = n += 0.68041444f;
    r2 = n *= -0.10579945f;
    n = r2 += n;
    r3 = n += -0.74436003f;
    r4 = n += 0.00302077f;
    n += -0.14925501f;
    r5 = n += -0.43862671f;
    n += -0.68162704f;
    r6 = n *= -1.05395365f;
    n = r5 *= n;
    n = r0 += n;
    n *= r4;
    n = r2 *= n;
    n += 0.64978641f;
    r4 = n += 0.58991975f;
    n += r6;
    n *= r2;
    n *= r3;
    n += r5;
    n = r1 *= n;
    n += -0.87138784f;
    n *= 0.67545313f;
    n += 0.02318018f;
    n *= -0.07853192f;
    n += 0.18681879f;
    n *= r4;
    n *= r1;
    n *= r0;
    return n;
} // Solution1

// Solution2 precision = 0.000259
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 2.50056887f;
    r0 = n *= -0.08974583f;
    n += 0.01980028f;
    n = r0 += n;
    r1 = n += 1.00261867f;
    r2 = n *= -0.46917590f;
    n = r2 += n;
    r3 = n += -0.68673903f;
    r4 = n += 0.97110790f;
    n += -0.07227641f;
    r5 = n += -0.62504715f;
    n += 1.45990300f;
    r6 = n *= 0.91486466f;
    n = r5 *= n;
    n = r0 += n;
    n *= r4;
    n = r2 *= n;
    n += 1.56992173f;
    r4 = n += 1.11773264f;
    n += r6;
    n *= r2;
    n *= r3;
    n += r5;
    n = r1 *= n;
    n += 0.74213940f;
    n *= -0.33232856f;
    n += -0.43240499f;
    n *= -0.07120447f;
    n += 2.66411448f;
    n *= r4;
    n *= r1;
    n *= r0;
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
