// Run date: 05/24/25 13:03:40 Pacific Daylight Time
// Run duration = 2653.951636 seconds
// Run test = 0
// Run generation = 3402
// Run evolution = 0
// Run precision  = 0.00001974
// Run max result = 0.00001359
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 65536
// Run generations = 0
// Run passes = 384
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3
#define SOLUTION_VARIATION 0

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * SOLUTION_PI)

inline float SolutionTarget(float n, unsigned int variation = 0)
{
    switch (variation & 3) {
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

inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= 0.13327606f;
    n = r1 *= n;
    r2 = n *= 5.92471170f;
    n += -18.07031059f;
    r3 = n += 2.27605700f;
    n *= 0.01361029f;
    n += -0.94078159f;
    n *= r3;
    r3 = n *= -0.01901347f;
    n *= -5.32716846f;
    n *= r1;
    n *= 0.27747875f;
    r1 = n += -0.29688489f;
    n += 0.84417522f;
    n += -1.66843653f;
    n += -5.48665857f;
    n *= -0.14646421f;
    n *= -0.74386042f;
    n += -0.80543381f;
    n *= -2.01844168f;
    r4 = n *= -0.51222312f;
    n = r1 *= n;
    n *= -0.46206632f;
    r5 = n *= 4.63650942f;
    n += r3;
    n += r2;
    n *= r1;
    n *= r5;
    n *= r0;
    n *= r4;
    n += -0.00000012f;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065938f;
    r1 = n *= -0.09652698f;
    n = r1 *= n;
    r2 = n *= 1.16486311f;
    n += -1.73051941f;
    r3 = n += -1.17675591f;
    n *= 1.97888744f;
    n += 1.87258935f;
    n *= r3;
    r3 = n *= -1.39970732f;
    n *= -1.09542239f;
    n *= r1;
    n *= -1.11704266f;
    r1 = n += 3.56515598f;
    n += 9.33065414f;
    n += 2.73772717f;
    n += -5.62322140f;
    n *= 3.98158455f;
    n *= 0.00016430f;
    n += 0.17265452f;
    n *= -0.99460208f;
    r4 = n *= 0.85091543f;
    n = r1 *= n;
    n *= -0.91204196f;
    r5 = n *= 1.82666838f;
    n += r3;
    n += r2;
    n *= r1;
    n *= r5;
    n *= r0;
    n *= r4;
    n += -0.11813244f;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= 0.22047734f;
    n = r1 *= n;
    r2 = n *= -1.24037361f;
    n += 2.20179534f;
    r3 = n += 8.00898838f;
    n *= 0.13191195f;
    n += -4.41432428f;
    n *= r3;
    r3 = n *= 0.00635870f;
    n *= 3.41673684f;
    n *= r1;
    n *= -2.52442932f;
    r1 = n += -3.05662203f;
    n += 0.46309537f;
    n += -1.26983416f;
    n += 2.91379023f;
    n *= 0.05272184f;
    n *= -5.72374010f;
    n += 2.25532484f;
    n *= 0.28698221f;
    r4 = n *= 1.59160900f;
    n = r1 *= n;
    n *= 1.15383887f;
    r5 = n *= -0.14706084f;
    n += r3;
    n += r2;
    n *= r1;
    n *= r5;
    n *= r0;
    n *= r4;
    n += 0.52359939f;
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
