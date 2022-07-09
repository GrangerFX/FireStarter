// Run date: 07/09/22 11:37:27 Pacific Daylight Time
// Run duration = 0.871998 seconds
// Run count = 7
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
// Solution Generation = 600

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

// Precision = 0.000006

// Solution0 precision = 0.000001
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159274f;
    r0 = n *= 1.03116012f;
    n *= 1.78295147f;
    r1 = n *= -1.40476513f;
    n = r0 *= n;
    n *= 0.35173297f;
    n *= -0.03502668f;
    r2 = n += -0.31928483f;
    r3 = n *= -0.70003033f;
    n *= r0;
    n *= 1.03127241f;
    n *= -1.26218987f;
    n *= -1.64272547f;
    n += 1.37946606f;
    n *= -0.00291253f;
    n = r2 += n;
    n += -0.36151937f;
    n *= 0.19634877f;
    n += -1.13886797f;
    n = r2 *= n;
    n = r1 *= n;
    r0 = n *= 1.40251243f;
    n += r1;
    n *= 0.96734345f;
    n = r2 *= n;
    n *= 2.91637874f;
    n *= r3;
    n += 6.57224751f;
    n *= -0.00000000f;
    n += r2;
    n += r0;
    n *= 0.39866194f;
    return n;
} // Solution0

// Solution1 precision = 0.000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09065819f;
    r0 = n *= -1.01761520f;
    n *= 0.92575645f;
    r1 = n *= 0.40012890f;
    n = r0 *= n;
    n *= -0.55648381f;
    n *= -0.43693489f;
    r2 = n += -0.72879207f;
    r3 = n *= 0.01923228f;
    n *= r0;
    n *= 1.93842494f;
    n *= -0.99136007f;
    n *= 0.89287114f;
    n += -1.58161461f;
    n *= 0.77797180f;
    n = r2 += n;
    n += -0.00831051f;
    n *= 0.04239079f;
    n += -1.30142558f;
    n = r2 *= n;
    n = r1 *= n;
    r0 = n *= 0.01856188f;
    n += r1;
    n *= 1.07987356f;
    n = r2 *= n;
    n *= 3.62984276f;
    n *= r3;
    n += 1.02393758f;
    n *= -0.32744789f;
    n += r2;
    n += r0;
    n *= 0.35233113f;
    return n;
} // Solution1

// Solution2 precision = 0.000001
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61799383f;
    r0 = n *= -1.02376544f;
    n *= -1.82789075f;
    r1 = n *= -0.66387630f;
    n = r0 *= n;
    n *= 0.23199558f;
    n *= -0.85932136f;
    r2 = n += 1.51218879f;
    r3 = n *= 0.14090438f;
    n *= r0;
    n *= -0.25665402f;
    n *= -0.42157179f;
    n *= 0.87835735f;
    n += 0.51399624f;
    n *= -0.46469262f;
    n = r2 += n;
    n += -0.36719558f;
    n *= -0.04615367f;
    n += -1.00887012f;
    n = r2 *= n;
    n = r1 *= n;
    r0 = n *= 0.54362071f;
    n += r1;
    n *= -0.10674678f;
    n = r2 *= n;
    n *= 0.15114298f;
    n *= r3;
    n += -0.46837327f;
    n *= 1.43868649f;
    n += r2;
    n += r0;
    n *= -0.77703464f;
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
