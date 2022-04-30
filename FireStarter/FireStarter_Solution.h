// Run date: 04/30/22 01:59:01 Pacific Daylight Time
// Run duration = 0.358447 seconds
// Run count = 15
// Run units = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// State Generation = 1400

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 1

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

// Precision = 0.000000

// Solution precision = 0.000000
inline float Solution(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.78195661f;
    r0 = n += -2.35963607f;
    n *= 0.60256130f;
    r1 = n += 0.70438099f;
    n += -0.77744764f;
    n += -0.63131434f;
    n *= r1;
    r1 = n += -0.78764713f;
    r2 = n *= 1.08486736f;
    n += -64.70165253f;
    n += -0.71063823f;
    n *= -7.45410681f;
    n *= -0.10328831f;
    n *= r2;
    n *= -0.00910269f;
    r2 = n += -15.35644913f;
    n *= 0.60587454f;
    r3 = n *= -0.05165809f;
    n *= r2;
    n *= -0.18123226f;
    r2 = n += -0.03550303f;
    n += r3;
    r3 = n *= -0.46357116f;
    r4 = n += 0.33532959f;
    n = r3 += n;
    n += r2;
    n += r4;
    n = r0 *= n;
    n *= r3;
    n *= r1;
    n *= 0.39024127f;
    n += r0;
    return n;
} // Solution
