// Run date: 07/09/22 17:34:37 Pacific Daylight Time
// Run duration = 1.823574 seconds
// Run count = 18
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
// Run seed = 8337
// Solution Generation = 1700

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

// Solution0 precision = 0.000000
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159274f;
    r0 = n *= -1.31537533f;
    n *= -0.47445226f;
    r1 = n *= 0.54939556f;
    n = r0 *= n;
    n *= -0.37470064f;
    n *= 0.87293398f;
    r2 = n += -1.10234094f;
    r3 = n *= -0.04180645f;
    n = r0 *= n;
    n *= 0.98929656f;
    n *= -0.38189578f;
    n += 0.72506189f;
    n += r0;
    n *= -0.46161309f;
    n = r2 += n;
    n += 0.76596242f;
    n *= 0.11408095f;
    n += -1.41978526f;
    n = r2 *= n;
    n = r1 *= n;
    r0 = n *= -0.58764964f;
    n += r1;
    n *= -0.45363089f;
    n = r2 *= n;
    n *= 2.70544505f;
    n *= r3;
    n += -0.74709797f;
    n *= -0.00000001f;
    n += r2;
    n += r0;
    n *= 1.37022746f;
    return n;
} // Solution0

// Solution1 precision = 0.000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09065843f;
    r0 = n *= -0.39642382f;
    n *= -2.20396399f;
    r1 = n *= -1.34166145f;
    n = r0 *= n;
    n *= -0.50056100f;
    n *= 0.43398100f;
    r2 = n += 0.82606369f;
    r3 = n *= -0.01844337f;
    n = r0 *= n;
    n *= -0.00731105f;
    n *= -4.59157467f;
    n += 1.16338217f;
    n += r0;
    n *= 1.11688244f;
    n = r2 += n;
    n += 0.83880705f;
    n *= 0.04072386f;
    n += 1.31851351f;
    n = r2 *= n;
    n = r1 *= n;
    r0 = n *= -0.00482925f;
    n += r1;
    n *= -0.18985969f;
    n = r2 *= n;
    n *= 1.43372607f;
    n *= r3;
    n += -0.29332280f;
    n *= -0.77802771f;
    n += r2;
    n += r0;
    n *= -0.51763815f;
    return n;
} // Solution1

// Solution2 precision = 0.000001
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61799383f;
    r0 = n *= -1.61101937f;
    n *= 0.98164773f;
    r1 = n *= 0.41135663f;
    n = r0 *= n;
    n *= -0.20456868f;
    n *= -0.86872941f;
    r2 = n += -1.07370102f;
    r3 = n *= 0.01520699f;
    n = r0 *= n;
    n *= -0.48954859f;
    n *= -0.00000875f;
    n += -0.28189754f;
    n += r0;
    n *= -0.49603137f;
    n = r2 += n;
    n += -0.59434015f;
    n *= -0.04972136f;
    n += 0.75487393f;
    n = r2 *= n;
    n = r1 *= n;
    r0 = n *= 1.29263663f;
    n += r1;
    n *= -0.29514757f;
    n = r2 *= n;
    n *= -1.92520392f;
    n *= r3;
    n += -0.34163025f;
    n *= 1.42438769f;
    n += r2;
    n += r0;
    n *= -1.07600451f;
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
