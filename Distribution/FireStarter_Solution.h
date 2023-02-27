// Run date: 02/26/23 18:19:09 Pacific Standard Time
// Run duration = 2622.626034 seconds
// Run count = 9
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 99
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 9

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

// Precision = 0.00036663

// Solution0 precision = 0.00020999
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.45283392f;
    r1 = n += 1.69960046f;
    r2 = n *= 1.15689063f;
    n += -0.46223304f;
    r3 = n += -1.50392151f;
    r4 = n += 3.26716328f;
    n *= 0.17227961f;
    r5 = n *= -0.10889693f;
    n *= r4;
    r4 = n += 0.47003502f;
    n = r3 *= n;
    r6 = n += 1.34575438f;
    r7 = n += 0.22819811f;
    n += r4;
    n = r6 *= n;
    n += -6.94574213f;
    n = r5 *= n;
    n *= 2.74788928f;
    n += -0.86274910f;
    n *= r2;
    n *= r5;
    n *= -0.70484620f;
    n += 0.80766541f;
    n *= r0;
    n += -1.86612904f;
    n *= r6;
    n += -0.43395200f;
    n *= r1;
    n += 0.59562123f;
    n += -0.64136869f;
    n += r7;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.00031018
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.37082618f;
    r1 = n += -1.71098447f;
    r2 = n *= -0.71505368f;
    n += -0.70885837f;
    r3 = n += -0.90687448f;
    r4 = n += 1.72344816f;
    n *= -0.18597075f;
    r5 = n *= 0.84961581f;
    n *= r4;
    r4 = n += 0.89367169f;
    n = r3 *= n;
    r6 = n += 1.61933374f;
    r7 = n += 0.11653031f;
    n += r4;
    n = r6 *= n;
    n += -3.38093257f;
    n = r5 *= n;
    n *= -0.14213093f;
    n += -2.73280382f;
    n *= r2;
    n *= r5;
    n *= 0.04440020f;
    n += 0.89937443f;
    n *= r0;
    n += 1.01594806f;
    n *= r6;
    n += 0.38659739f;
    n *= r1;
    n += 1.12816489f;
    n += -0.44959673f;
    n += r7;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.00036663
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.42407870f;
    r1 = n += -1.58098519f;
    r2 = n *= 0.93592101f;
    n += 2.02831602f;
    r3 = n += -0.54874331f;
    r4 = n += -1.90278935f;
    n *= 2.19707417f;
    r5 = n *= 0.02703401f;
    n *= r4;
    r4 = n += -0.60326725f;
    n = r3 *= n;
    r6 = n += 1.63690710f;
    r7 = n += -0.01565516f;
    n += r4;
    n = r6 *= n;
    n += -0.50829321f;
    n = r5 *= n;
    n *= -3.15599060f;
    n += -0.67557216f;
    n *= r2;
    n *= r5;
    n *= 2.70001602f;
    n += 2.93672466f;
    n *= r0;
    n += 3.31280041f;
    n *= r6;
    n += -0.25236598f;
    n *= r1;
    n += -0.43635216f;
    n += -0.05078951f;
    n += r7;
    n *= r3;
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
