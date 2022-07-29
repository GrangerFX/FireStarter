// Run date: 07/27/22 21:23:56 Pacific Daylight Time
// Run duration = 2.314205 seconds
// Run count = 2
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
// Run population = 69632;
// Run iterations = 256;
// Run generations = 10;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Solution Generation = 10

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

// Precision = 0.16733989

// Solution0 precision = 0.16733989
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.01985447f;
    n += 0.97553718f;
    r0 = n += 0.38258892f;
    r1 = n *= -0.93045342f;
    r2 = n += -0.01613825f;
    r3 = n *= 0.93426579f;
    r4 = n *= -0.19490752f;
    r5 = n *= -0.91136271f;
    n = r4 += n;
    n += 1.03199506f;
    r6 = n += -0.29097980f;
    n += r5;
    r5 = n += 0.34519836f;
    n *= r5;
    n = r2 *= n;
    n += 0.89088589f;
    r5 = n *= -0.80148804f;
    n = r4 += n;
    n *= r0;
    n = r4 += n;
    r0 = n += -0.03610314f;
    n += r1;
    n *= -0.96958673f;
    n += r3;
    n += 0.63325214f;
    n *= r6;
    n = r0 += n;
    n *= r4;
    n += r0;
    n += r2;
    n += 0.04264126f;
    n += r5;
    return n;
} // Solution0

// Solution1 precision = 0.12880898
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.22475225f;
    n += -0.56218386f;
    r0 = n += -0.40125498f;
    r1 = n *= -0.57008302f;
    r2 = n += 0.87839264f;
    r3 = n *= 0.55353373f;
    r4 = n *= 0.25553662f;
    r5 = n *= -0.00476200f;
    n = r4 += n;
    n += -0.98394209f;
    r6 = n += 0.39345318f;
    n += r5;
    r5 = n += 1.22026372f;
    n *= r5;
    n = r2 *= n;
    n += 0.20240961f;
    r5 = n *= 0.90479916f;
    n = r4 += n;
    n *= r0;
    n = r4 += n;
    r0 = n += 0.10252058f;
    n += r1;
    n *= 0.11715314f;
    n += r3;
    n += -0.22954759f;
    n *= r6;
    n = r0 += n;
    n *= r4;
    n += r0;
    n += r2;
    n += -1.04442716f;
    n += r5;
    return n;
} // Solution1

// Solution2 precision = 0.11488207
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.19734970f;
    n += -0.43480283f;
    r0 = n += -0.80013829f;
    r1 = n *= 0.15350376f;
    r2 = n += -0.27446437f;
    r3 = n *= 0.99948853f;
    r4 = n *= -1.09797978f;
    r5 = n *= 0.37114236f;
    n = r4 += n;
    n += -0.71079785f;
    r6 = n += -0.04513217f;
    n += r5;
    r5 = n += 0.50991452f;
    n *= r5;
    n = r2 *= n;
    n += -0.36643979f;
    r5 = n *= 0.76313424f;
    n = r4 += n;
    n *= r0;
    n = r4 += n;
    r0 = n += 0.69807762f;
    n += r1;
    n *= 0.45368996f;
    n += r3;
    n += -0.98564833f;
    n *= r6;
    n = r0 += n;
    n *= r4;
    n += r0;
    n += r2;
    n += 0.23257521f;
    n += r5;
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
