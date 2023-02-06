// Run date: 02/06/23 00:26:46 Pacific Standard Time
// Run duration = 38.864249 seconds
// Run count = 586
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
// Run seed = 56
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 586

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

// Precision = 0.00004388

// Solution0 precision = 0.00000310
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.66602492f;
    r0 = n += -3.80589080f;
    r1 = n += -1.49204195f;
    r2 = n *= 0.16779263f;
    r3 = n += 0.50003433f;
    n *= r1;
    r1 = n *= -1.43028831f;
    n += -0.28019863f;
    n += 0.37947389f;
    n += r1;
    r1 = n *= -0.14709154f;
    n *= -0.68216282f;
    r4 = n += 1.70568943f;
    n = r1 *= n;
    n += -1.11886084f;
    n *= r0;
    n *= r4;
    n += 0.36364117f;
    n = r3 += n;
    r4 = n += -1.30462945f;
    n += r4;
    n += 0.30146757f;
    n += 1.14738667f;
    r4 = n *= 0.20180136f;
    n *= r1;
    n += -1.89303386f;
    n *= -1.72159719f;
    n += r3;
    n *= -0.38708580f;
    n *= -0.15895984f;
    n += r4;
    n += r2;
    return n;
} // Solution0

// Solution1 precision = 0.00000095
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.19033062f;
    r0 = n += -1.89959991f;
    r1 = n += 1.83649623f;
    r2 = n *= -0.05947185f;
    r3 = n += 0.21854445f;
    n *= r1;
    r1 = n *= -0.02382973f;
    n += -0.00520134f;
    n += -0.08634357f;
    n += r1;
    r1 = n *= 0.29717633f;
    n *= -2841.35424805f;
    r4 = n += 0.07060908f;
    n = r1 *= n;
    n += 0.66434962f;
    n *= r0;
    n *= r4;
    n += -2.65591335f;
    n = r3 += n;
    r4 = n += -0.44334111f;
    n += r4;
    n += 4.59424400f;
    n += 2.60934424f;
    r4 = n *= 0.00917823f;
    n *= r1;
    n += 1.70821285f;
    n *= 2.37170172f;
    n += r3;
    n *= -0.05236749f;
    n *= 0.25714758f;
    n += r4;
    n += r2;
    return n;
} // Solution1

// Solution2 precision = 0.00004388
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.66556728f;
    r0 = n += -0.94203508f;
    r1 = n += -0.13809316f;
    r2 = n *= -0.54729819f;
    r3 = n += -0.13710944f;
    n *= r1;
    r1 = n *= 0.06417491f;
    n += -0.81558305f;
    n += 1.06904256f;
    n += r1;
    r1 = n *= 0.78623515f;
    n *= -1.19410920f;
    r4 = n += -2.65242434f;
    n = r1 *= n;
    n += 0.08377815f;
    n *= r0;
    n *= r4;
    n += -0.92630517f;
    n = r3 += n;
    r4 = n += -1.54369140f;
    n += r4;
    n += 0.14101654f;
    n += 4.73130798f;
    r4 = n *= -0.11918765f;
    n *= r1;
    n += -0.52281868f;
    n *= 1.90882874f;
    n += r3;
    n *= -1.05127454f;
    n *= 0.20609127f;
    n += r4;
    n += r2;
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
