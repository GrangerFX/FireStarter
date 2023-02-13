// Run date: 02/12/23 19:28:35 Pacific Standard Time
// Run duration = 13.936174 seconds
// Run count = 511
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 128
// Run seed = 1
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 511

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

// Precision = 0.00000334

// Solution0 precision = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.64228141f;
    r0 = n += -1.49931121f;
    r1 = n *= -0.53323013f;
    n *= 0.39289662f;
    n = r1 *= n;
    r2 = n *= 1.75983429f;
    r3 = n += -1.57548511f;
    n *= 0.51115489f;
    n += -0.73885888f;
    n *= -1.23470974f;
    n += r1;
    n *= r3;
    n = r2 += n;
    r3 = n *= 3.37344313f;
    n += 6.84753704f;
    n += -6.75633764f;
    n *= 0.00085989f;
    n += 0.80382216f;
    r1 = n += 0.07416782f;
    r4 = n += -1.21448994f;
    n = r4 *= n;
    n *= r4;
    n *= r3;
    n += -0.44403645f;
    n *= r2;
    n += r1;
    n *= 0.31083310f;
    n *= r0;
    n *= 2.02942801f;
    n += 0.66206074f;
    n *= -0.60160017f;
    n += 0.39829585f;
    return n;
} // Solution0

// Solution1 precision = 0.00000191
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.06930375f;
    r0 = n += -1.02135623f;
    r1 = n *= 0.12185246f;
    n *= -10.25579548f;
    n = r1 *= n;
    r2 = n *= 0.70951515f;
    r3 = n += 0.51175213f;
    n *= -1.98784614f;
    n += -0.78785676f;
    n *= 0.72347260f;
    n += r1;
    n *= r3;
    n = r2 += n;
    r3 = n *= -5.61592674f;
    n += -8.01957798f;
    n += 1167.82714844f;
    n *= 0.16097802f;
    n += 124.02674103f;
    r1 = n += -62.99057770f;
    r4 = n += -229.56562805f;
    n = r4 *= n;
    n *= r4;
    n *= r3;
    n += -0.15247422f;
    n *= r2;
    n += r1;
    n *= -0.03812860f;
    n *= r0;
    n *= -0.12771285f;
    n += -6.00253344f;
    n *= 0.00072480f;
    n += -0.11378347f;
    return n;
} // Solution1

// Solution2 precision = 0.00000334
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.83347678f;
    r0 = n += -0.78451705f;
    r1 = n *= -0.16795006f;
    n *= 0.18212031f;
    n = r1 *= n;
    r2 = n *= 0.06942000f;
    r3 = n += -0.00122346f;
    n *= 0.19074054f;
    n += -0.01064708f;
    n *= 56865.87890625f;
    n += r1;
    n *= r3;
    n = r2 += n;
    r3 = n *= 0.48074508f;
    n += 0.76376784f;
    n += 0.38638860f;
    n *= 0.07640053f;
    n += -0.09005658f;
    r1 = n += 0.66544813f;
    r4 = n += 0.48288113f;
    n = r4 *= n;
    n *= r4;
    n *= r3;
    n += 2.23501110f;
    n *= r2;
    n += r1;
    n *= -2.00642848f;
    n *= r0;
    n *= -0.25717092f;
    n += -0.44481561f;
    n *= -0.66686440f;
    n += 0.22696701f;
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
