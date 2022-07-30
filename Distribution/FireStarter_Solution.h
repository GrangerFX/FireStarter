// Run date: 07/30/22 14:29:06 Pacific Daylight Time
// Run duration = 1.363758 seconds
// Run count = 6
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
// Run units = 2;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run generations = 5;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Solution Generation = 25

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

// Precision = 0.02300745

// Solution0 precision = 0.02300745
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.27797472f;
    r1 = n += 0.18233351f;
    n *= -0.53243703f;
    r2 = n *= -0.56345862f;
    n *= 0.63583374f;
    n *= 0.25366879f;
    n += r2;
    r2 = n *= -0.95380336f;
    r3 = n *= -0.35863811f;
    r4 = n += -0.89501423f;
    n = r1 *= n;
    n += -0.27750421f;
    n *= r1;
    r1 = n += -0.41471750f;
    n = r4 += n;
    n = r2 *= n;
    n = r1 += n;
    n += r4;
    r4 = n += -0.87717140f;
    n += -0.62659192f;
    r5 = n += -1.02509952f;
    n *= 0.62111211f;
    n += -0.57073927f;
    n *= r0;
    n += r2;
    n = r3 *= n;
    n *= r4;
    n *= 0.76774007f;
    n *= r5;
    n += r3;
    n *= 0.00050561f;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.01797080
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.06367421f;
    r1 = n += 1.54766810f;
    n *= -0.91660368f;
    r2 = n *= 0.50619245f;
    n *= -0.15327729f;
    n *= -0.87051451f;
    n += r2;
    r2 = n *= 0.64258659f;
    r3 = n *= -0.29849815f;
    r4 = n += -0.75395906f;
    n = r1 *= n;
    n += -0.51685953f;
    n *= r1;
    r1 = n += 0.61666691f;
    n = r4 += n;
    n = r2 *= n;
    n = r1 += n;
    n += r4;
    r4 = n += 0.19299559f;
    n += 0.92285210f;
    r5 = n += 1.09668922f;
    n *= 0.78425300f;
    n += 3.87413883f;
    n *= r0;
    n += r2;
    n = r3 *= n;
    n *= r4;
    n *= 0.05843147f;
    n *= r5;
    n += r3;
    n *= 0.01397112f;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.02264077
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.53998691f;
    r1 = n += 0.05146510f;
    n *= 0.96336877f;
    r2 = n *= -0.32759714f;
    n *= 2.40552473f;
    n *= 0.09916853f;
    n += r2;
    r2 = n *= 0.53438586f;
    r3 = n *= 0.79875970f;
    r4 = n += 1.09333885f;
    n = r1 *= n;
    n += 1.05200553f;
    n *= r1;
    r1 = n += -0.85994798f;
    n = r4 += n;
    n = r2 *= n;
    n = r1 += n;
    n += r4;
    r4 = n += -0.19985224f;
    n += -1.90017474f;
    r5 = n += 0.51810825f;
    n *= 0.37345198f;
    n += 0.12553538f;
    n *= r0;
    n += r2;
    n = r3 *= n;
    n *= r4;
    n *= -0.00549455f;
    n *= r5;
    n += r3;
    n *= 0.48280635f;
    n += r1;
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
