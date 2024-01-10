// Run date: 01/09/24 11:53:51 Pacific Standard Time
// Run duration = 3920.090334 seconds
// Run generation = 18
// Run evolution = 13
// Run max result = 0.00000030
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 4
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.16847952f;
    r0 = n += -0.52929401f;
    n *= 0.98830664f;
    r1 = n *= 2.00839543f;
    n = r1 *= n;
    r2 = n += -0.86999851f;
    n *= -3.95494485f;
    n *= 4.54753637f;
    r3 = n += -1.30227721f;
    n *= -1.00006950f;
    n = r3 += n;
    n += -0.05819986f;
    n *= -1.18910456f;
    r4 = n *= -2.94002295f;
    n *= r2;
    r2 = n += 0.86268938f;
    n += 1.58966064f;
    n += r3;
    r3 = n *= -0.56050861f;
    n = r3 *= n;
    n += 0.03532326f;
    n *= 0.89500403f;
    n += r4;
    n *= r0;
    r0 = n *= -0.70352989f;
    n *= r2;
    n *= -1.11104786f;
    n *= r1;
    n += r0;
    n *= r3;
    n += 0.00000003f;
    n *= 2.18903708f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.53482932f;
    r0 = n += 1.65297496f;
    n *= -1.29127562f;
    r1 = n *= 0.81060076f;
    n = r1 *= n;
    r2 = n += -1.81437004f;
    n *= -2.71473908f;
    n *= 0.45070896f;
    r3 = n += -0.29661903f;
    n *= -1.23091125f;
    n = r3 += n;
    n += 8.66616917f;
    n *= 2.31205678f;
    r4 = n *= -0.00000820f;
    n *= r2;
    r2 = n += -0.11067159f;
    n += -1.73150456f;
    n += r3;
    r3 = n *= 0.27754197f;
    n = r3 *= n;
    n += 2.68716407f;
    n *= -1.30020463f;
    n += r4;
    n *= r0;
    r0 = n *= -1.47925222f;
    n *= r2;
    n *= 0.66323066f;
    n *= r1;
    n += r0;
    n *= r3;
    n += -0.13740294f;
    n *= 0.85974813f;
    return n;
} // Solution1

// Solution2 result = 0.00000030
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.40676558f;
    r0 = n += -1.06490970f;
    n *= -0.82002676f;
    r1 = n *= 1.77679467f;
    n = r1 *= n;
    r2 = n += -2.78382516f;
    n *= -0.89424342f;
    n *= -1.76909268f;
    r3 = n += -2.23148012f;
    n *= -1.00289071f;
    n = r3 += n;
    n += 0.23481467f;
    n *= -1.82305765f;
    r4 = n *= -0.42040306f;
    n *= r2;
    r2 = n += -2.03202486f;
    n += -0.11238771f;
    n += r3;
    r3 = n *= 0.15855032f;
    n = r3 *= n;
    n += 2.52976918f;
    n *= -3.33417058f;
    n += r4;
    n *= r0;
    r0 = n *= 2.79801321f;
    n *= r2;
    n *= 0.25655174f;
    n *= r1;
    n += r0;
    n *= r3;
    n += 0.94165039f;
    n *= 0.55604351f;
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
