// Run date: 07/04/22 18:12:12 Pacific Daylight Time
// Run duration = 1.605371 seconds
// Run count = 8
// Run mode = 4
// Run clients = 4
// Run process = 0
// Run units = 1
// Run states = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// Run seed = 8337
// Solution Generation = 700

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

// Precision = 0.000003

// Solution0 precision = 0.000000
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.14159250f;
    r0 = n *= 0.71914482f;
    n *= -0.83296287f;
    r1 = n *= -1.06659341f;
    n = r0 *= n;
    n *= 0.04859378f;
    n *= -0.56307435f;
    r2 = n += 0.76225221f;
    r3 = n *= 0.70558482f;
    n *= r0;
    n *= 0.79019070f;
    r0 = n += -0.54734159f;
    n *= -0.00772498f;
    n += 0.84319770f;
    r4 = n *= 1.24977207f;
    n = r2 += n;
    n += 1.15793490f;
    n *= -0.27260485f;
    n += 0.48929116f;
    n = r2 *= n;
    n = r1 *= n;
    n = r4 *= n;
    n += r1;
    n *= r0;
    n = r2 *= n;
    n *= 3.10122514f;
    n *= r3;
    n += 6.52347708f;
    n *= 0.00000000f;
    n += r2;
    n += r4;
    n *= 1.54574931f;
    return n;
} // Solution0

// Solution1 precision = 0.000001
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.09065866f;
    r0 = n *= -0.85653651f;
    n *= 0.45090705f;
    r1 = n *= -0.76022387f;
    n = r0 *= n;
    n *= -0.51531434f;
    n *= 0.42364159f;
    r2 = n += -1.37431967f;
    r3 = n *= -0.00682499f;
    n *= r0;
    n *= -1.34322798f;
    r0 = n += -1.19790649f;
    n *= -0.41616452f;
    n += -0.53367859f;
    r4 = n *= 0.69894159f;
    n = r2 += n;
    n += -0.31769684f;
    n *= 0.37628949f;
    n += -0.67674166f;
    n = r2 *= n;
    n = r1 *= n;
    n = r4 *= n;
    n += r1;
    n *= r0;
    n = r2 *= n;
    n *= -0.17954841f;
    n *= r3;
    n += 0.19449809f;
    n *= -0.65660888f;
    n += r2;
    n += r4;
    n *= 0.92500573f;
    return n;
} // Solution1

// Solution2 precision = 0.000003
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.61799383f;
    r0 = n *= -0.43950152f;
    n *= -0.17044678f;
    r1 = n *= -1.68714976f;
    n = r0 *= n;
    n *= 0.62434721f;
    n *= -0.53235626f;
    r2 = n += 0.96445388f;
    r3 = n *= 0.56311756f;
    n *= r0;
    n *= 1.28628647f;
    r0 = n += -0.17587169f;
    n *= 2.03761935f;
    n += -0.18927760f;
    r4 = n *= -0.02691619f;
    n = r2 += n;
    n += -0.40032056f;
    n *= 1.26167524f;
    n += 3.09268665f;
    n = r2 *= n;
    n = r1 *= n;
    n = r4 *= n;
    n += r1;
    n *= r0;
    n = r2 *= n;
    n *= 1.47969604f;
    n *= r3;
    n += -0.30899969f;
    n *= 0.91964090f;
    n += r2;
    n += r4;
    n *= -1.84256196f;
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
