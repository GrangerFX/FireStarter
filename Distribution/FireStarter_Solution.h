// Run date: 07/10/22 11:29:52 Pacific Daylight Time
// Run duration = 1.869880 seconds
// Run count = 39
// Run mode = 4
// Run clients = 4
// Run process = 0
// Run units = 1
// Run states = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// Run attempts = 32
// Run seed = 0
// Solution Generation = 3800

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

// Precision = 0.00000089

// Solution0 precision = 0.00000048
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159274f;
    r0 = n *= -0.51061583f;
    n *= 1.13701272f;
    r1 = n *= -0.97097522f;
    n = r0 *= n;
    r2 = n += 0.83793420f;
    n *= 0.03420678f;
    r3 = n += 1.14495254f;
    n = r2 *= n;
    n *= r0;
    n *= -0.00206075f;
    r0 = n *= 1.36374819f;
    n *= -0.54879093f;
    n += -0.18755308f;
    n *= r0;
    n = r3 += n;
    n = r2 += n;
    n *= -0.62526065f;
    n += -0.67315733f;
    n = r3 *= n;
    n = r1 *= n;
    r0 = n *= -0.64781559f;
    n += r1;
    n *= 0.52745539f;
    n = r3 *= n;
    n *= -3.47453403f;
    n *= r2;
    n += -0.55650651f;
    n *= 0.00000007f;
    n += r3;
    n += r0;
    n *= -0.68672615f;
    return n;
} // Solution0

// Solution1 precision = 0.00000083
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09065843f;
    r0 = n *= 0.50978500f;
    n *= -0.68326259f;
    r1 = n *= -0.51778954f;
    n = r0 *= n;
    r2 = n += -0.30680472f;
    n *= -0.12680480f;
    r3 = n += 1.61852860f;
    n = r2 *= n;
    n *= r0;
    n *= 0.24036655f;
    r0 = n *= -0.11909113f;
    n *= -0.89174163f;
    n += -0.08705204f;
    n *= r0;
    n = r3 += n;
    n = r2 += n;
    n *= -0.24962817f;
    n += 1.02480173f;
    n = r3 *= n;
    n = r1 *= n;
    r0 = n *= -0.02872642f;
    n += r1;
    n *= -1.00671005f;
    n = r3 *= n;
    n *= 0.01570063f;
    n *= r2;
    n += 11.25135803f;
    n *= -0.00257878f;
    n += r3;
    n += r0;
    n *= 4.07143545f;
    return n;
} // Solution1

// Solution2 precision = 0.00000089
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61799383f;
    r0 = n *= 0.94927913f;
    n *= 0.97072744f;
    r1 = n *= -0.33518848f;
    n = r0 *= n;
    r2 = n += 0.55215698f;
    n *= -0.02874959f;
    r3 = n += -1.00990212f;
    n = r2 *= n;
    n *= r0;
    n *= 0.00025368f;
    r0 = n *= -1.83989811f;
    n *= -7.36421061f;
    n += -0.85665125f;
    n *= r0;
    n = r3 += n;
    n = r2 += n;
    n *= 1.71180403f;
    n += 0.15420085f;
    n = r3 *= n;
    n = r1 *= n;
    r0 = n *= 1.39701343f;
    n += r1;
    n *= 0.09184864f;
    n = r3 *= n;
    n *= -0.06110736f;
    n *= r2;
    n += 1.21709502f;
    n *= 0.70713329f;
    n += r3;
    n += r0;
    n *= 0.60837710f;
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
