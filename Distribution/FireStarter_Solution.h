// Run date: 03/25/23 12:52:03 Pacific Daylight Time
// Run duration = 5711.029031 seconds
// Run count = 29
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 2
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run seed = 1
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 29

#define SOLUTION_VARIATIONS 3

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

// Precision = 0.00028789

// Solution0 precision = 0.00008035
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.24389364f;
    n = r0 += n;
    n *= 1.53380775f;
    n += -2.38665056f;
    n *= 0.46437690f;
    r1 = n += -1.07463586f;
    n = r0 *= n;
    r2 = n += 1.35494947f;
    n *= 0.00362551f;
    r3 = n += 1.85920203f;
    r4 = n *= 1.21456945f;
    n += -1.39006388f;
    n *= -4.71403885f;
    r5 = n += 2.92228842f;
    n *= r4;
    n += 3.09866214f;
    n = r0 *= n;
    n += r5;
    n = r0 *= n;
    n += -1.46944571f;
    n *= r2;
    n += -4.12508011f;
    r2 = n *= -0.53021735f;
    n += r1;
    n *= 1.17984152f;
    n += 1.28770030f;
    n *= -0.84752327f;
    n += r2;
    n *= r0;
    n += 0.05777362f;
    n *= r3;
    n += -0.10776308f;
    return n;
} // Solution0

// Solution1 precision = 0.00025210
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.35508302f;
    n = r0 += n;
    n *= 1.44765627f;
    n += -0.48847038f;
    n *= -0.11755389f;
    r1 = n += 1.23960710f;
    n = r0 *= n;
    r2 = n += -1.73136127f;
    n *= 1.39092720f;
    r3 = n += -0.40379786f;
    r4 = n *= 0.04238679f;
    n += 2.75903773f;
    n *= -0.15420458f;
    r5 = n += -0.78710407f;
    n *= r4;
    n += -0.44563675f;
    n = r0 *= n;
    n += r5;
    n = r0 *= n;
    n += 3.08818936f;
    n *= r2;
    n += -6.40475130f;
    r2 = n *= -2.38290501f;
    n += r1;
    n *= -1.38779378f;
    n += -0.04442749f;
    n *= 0.71612161f;
    n += r2;
    n *= r0;
    n += -0.33994427f;
    n *= r3;
    n += -0.10341863f;
    return n;
} // Solution1

// Solution2 precision = 0.00028789
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.10191447f;
    n = r0 += n;
    n *= -0.35443705f;
    n += 2.42633200f;
    n *= -0.10997212f;
    r1 = n += 1.74458134f;
    n = r0 *= n;
    r2 = n += 0.40954331f;
    n *= 1.08528137f;
    r3 = n += 1.22236502f;
    r4 = n *= -0.35857710f;
    n += -2.26168084f;
    n *= -0.15407200f;
    r5 = n += -1.49038589f;
    n *= r4;
    n += 0.38404703f;
    n = r0 *= n;
    n += r5;
    n = r0 *= n;
    n += 0.46188813f;
    n *= r2;
    n += -0.43081799f;
    r2 = n *= 1.44680095f;
    n += r1;
    n *= -0.65899217f;
    n += -0.64046836f;
    n *= -1.87533510f;
    n += r2;
    n *= r0;
    n += -0.63742125f;
    n *= r3;
    n += 1.06276166f;
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
