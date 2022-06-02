// Run date: 06/02/22 11:00:52 Pacific Daylight Time
// Run duration = 1.091957 seconds
// Run count = 6
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 5

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

#define SOLUTION_VARIATIONS 1

// Precision = 0.000036

// Solution precision = 0.000036
inline float Solution(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.48882842f;
    r0 = n += 0.34355709f;
    n += 0.53604537f;
    n += -0.39718294f;
    n += -1.04266012f;
    r1 = n *= -0.43871528f;
    n *= -0.98738909f;
    n = r0 += n;
    r2 = n *= 0.16149691f;
    r3 = n += -0.53344208f;
    r4 = n += -0.84573281f;
    n *= 0.28869793f;
    n *= 1.15845227f;
    n *= r2;
    n *= -0.08221500f;
    r2 = n += 0.58314019f;
    n *= 0.50272799f;
    n *= r1;
    n *= r2;
    n *= 0.48274988f;
    n += -0.00109524f;
    n *= r4;
    r4 = n *= 0.98210460f;
    r2 = n += 0.63471323f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -1.12727368f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.40632427f;
    return n;
} // Solution
