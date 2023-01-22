// Run date: 01/22/23 10:06:40 Pacific Standard Time
// Run duration = 15.883189 seconds
// Run count = 13
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_TEST
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 13

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * 3.14159265f)

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
        return fabsf(fmodf(fabsf(n - SOLUTION_PI * 0.5f), SOLUTION_PI * 2.0f) - SOLUTION_PI) - SOLUTION_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_VARIATIONS 3

// Precision = 0.00035344

// Solution0 precision = 0.00001875
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.63841963f;
    n *= 0.39696929f;
    n += 0.70820838f;
    n += 0.78281158f;
    r0 = n += -1.91735005f;
    n *= r0;
    r0 = n += -0.63267082f;
    n += 0.21853918f;
    r1 = n *= 0.81438303f;
    r2 = n *= 0.16754739f;
    r3 = n += -1.81022024f;
    n *= r3;
    r3 = n += 0.33035013f;
    r4 = n *= -0.62557328f;
    r5 = n += 1.56387234f;
    n += -0.83009744f;
    n += -1.74187100f;
    n *= r1;
    n += -1.36803162f;
    n += -0.51002955f;
    n *= 0.00091617f;
    n *= r2;
    n = r3 *= n;
    n += r3;
    n = r4 += n;
    n *= r4;
    n *= 1.53503513f;
    n *= r0;
    n *= -0.26446259f;
    n *= r5;
    n += 0.35558239f;
    n *= 1.17973566f;
    return n;
} // Solution0

// Solution1 precision = 0.00016809
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.73281491f;
    n *= 0.10149424f;
    n += -0.00829879f;
    n += 0.21911076f;
    r0 = n += -1.34662104f;
    n *= r0;
    r0 = n += -0.98238343f;
    n += -1.67557132f;
    r1 = n *= 0.84890246f;
    r2 = n *= -0.89763713f;
    r3 = n += -0.97768897f;
    n *= r3;
    r3 = n += -0.73051900f;
    r4 = n *= 0.60657430f;
    r5 = n += 1.83362710f;
    n += -0.31563991f;
    n += -2.24746823f;
    n *= r1;
    n += 6.85545588f;
    n += 0.22729020f;
    n *= -0.72532225f;
    n *= r2;
    n = r3 *= n;
    n += r3;
    n = r4 += n;
    n *= r4;
    n *= -0.46327108f;
    n *= r0;
    n *= 0.46963611f;
    n *= r5;
    n += 1.08773410f;
    n *= -0.17680101f;
    return n;
} // Solution1

// Solution2 precision = 0.00035344
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.63950461f;
    n *= -0.27361268f;
    n += 0.11046956f;
    n += -0.66616774f;
    r0 = n += 0.00488351f;
    n *= r0;
    r0 = n += -3.43482542f;
    n += -0.24320327f;
    r1 = n *= 0.03059312f;
    r2 = n *= -3.11212206f;
    r3 = n += 0.93015373f;
    n *= r3;
    r3 = n += 0.42907897f;
    r4 = n *= -1.73735297f;
    r5 = n += 1.44180477f;
    n += 1.09859931f;
    n += -50.98068619f;
    n *= r1;
    n += 6.40014648f;
    n += 1.03169608f;
    n *= 0.24042955f;
    n *= r2;
    n = r3 *= n;
    n += r3;
    n = r4 += n;
    n *= r4;
    n *= -0.47379294f;
    n *= r0;
    n *= -0.35190940f;
    n *= r5;
    n += -0.67442423f;
    n *= -1.89167774f;
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
