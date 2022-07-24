// Run date: 07/24/22 16:33:07 Pacific Daylight Time
// Run duration = 3.704284 seconds
// Run count = 5
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;
// Run variations = 3;
// Run samples = 15;

// Run sampleMin = 0.000000f;
// Run sampleMax = 6.283185f;
// Run evolveFactor = 0.100000f;
// Run evolveStartFactor = 4.000000f;
// Run evolveStartResult = 10.000000f;
// Run evolveCandidates = 16;

// Run mode = FIRESTARTER_CODE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run generations = 10;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_INDIVIDUAL;
// Run attempts = 32;
// Run seed = 0;
// Solution Generation = 40

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

// Precision = 0.02327454

// Solution0 precision = 0.02148004
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.13531481f;
    n += -0.68087465f;
    r1 = n += -0.37379649f;
    n *= -0.53083253f;
    n += -0.05602400f;
    r2 = n *= 0.45053446f;
    r3 = n += 1.12591326f;
    r4 = n += -0.38287389f;
    r5 = n += 0.91124815f;
    n *= -0.21369292f;
    r6 = n *= 0.46377426f;
    n += r1;
    n *= 0.00146712f;
    n += -0.06809026f;
    n = r3 *= n;
    n *= 0.76162863f;
    r1 = n *= 0.36631492f;
    n *= r1;
    n += -0.29940704f;
    n += -1.13021922f;
    n += r6;
    n = r2 += n;
    n *= r2;
    n = r0 += n;
    n += -1.05361605f;
    n *= r5;
    n *= 1.92943835f;
    n *= r0;
    n *= r4;
    n *= r3;
    n += 0.73916537f;
    n *= -0.92186636f;
    return n;
} // Solution0

// Solution1 precision = 0.02310812
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.90541959f;
    n += 1.93355668f;
    r1 = n += 0.40918076f;
    n *= 0.27726614f;
    n += -1.11912405f;
    r2 = n *= -0.30776781f;
    r3 = n += 0.47663105f;
    r4 = n += 0.22605345f;
    r5 = n += 0.38427660f;
    n *= -0.38002020f;
    r6 = n *= 2.52129960f;
    n += r1;
    n *= -0.34807241f;
    n += -0.39325270f;
    n = r3 *= n;
    n *= -2.64495611f;
    r1 = n *= 0.30058682f;
    n *= r1;
    n += -0.07552841f;
    n += 1.46979976f;
    n += r6;
    n = r2 += n;
    n *= r2;
    n = r0 += n;
    n += -0.95891696f;
    n *= r5;
    n *= 0.13561949f;
    n *= r0;
    n *= r4;
    n *= r3;
    n += 0.25925586f;
    n *= 4.47775459f;
    return n;
} // Solution1

// Solution2 precision = 0.02327454
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.14241534f;
    n += -0.73025060f;
    r1 = n += -2.67013597f;
    n *= 0.25916493f;
    n += -0.41350102f;
    r2 = n *= -0.89738077f;
    r3 = n += 0.76087707f;
    r4 = n += -0.85675579f;
    r5 = n += 0.78136259f;
    n *= -0.14554884f;
    r6 = n *= 2.42159677f;
    n += r1;
    n *= -0.58900207f;
    n += -0.70228362f;
    n = r3 *= n;
    n *= -0.00931302f;
    r1 = n *= 7.09883499f;
    n *= r1;
    n += 1.46835852f;
    n += -1.00708449f;
    n += r6;
    n = r2 += n;
    n *= r2;
    n = r0 += n;
    n += -1.10193825f;
    n *= r5;
    n *= 0.41255787f;
    n *= r0;
    n *= r4;
    n *= r3;
    n += 0.39747238f;
    n *= 0.87950838f;
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
