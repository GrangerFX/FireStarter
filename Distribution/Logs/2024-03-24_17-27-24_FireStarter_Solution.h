// Run date: 03/24/24 17:27:24 Pacific Daylight Time
// Run duration = 1621.915992 seconds
// Run generation = 164
// Run evolution = 10
// Run max result = 0.00000018
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
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.84516996f;
    n *= -0.56385845f;
    n += -0.42852452f;
    r0 = n += 1.72338188f;
    r1 = n *= 0.07591370f;
    n *= r0;
    r0 = n *= 2.16667128f;
    r2 = n += -0.07851315f;
    n *= -0.00125903f;
    r3 = n += 0.00131556f;
    r4 = n += -0.07910144f;
    n += r0;
    r0 = n += 1.30300045f;
    n *= r3;
    r3 = n += -0.57544553f;
    n = r3 += n;
    n += -2.82971358f;
    n *= r2;
    n = r0 += n;
    n *= -0.12659386f;
    n += -1.52861452f;
    r2 = n += 0.55236858f;
    n = r3 *= n;
    n = r2 += n;
    n = r4 *= n;
    n *= r2;
    n *= r1;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 364311.31250000f;
    n += -0.00000005f;
    return n;
} // Solution0

// Solution1 result = 0.00000018
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 3.26786184f;
    n *= 0.46824878f;
    n += -5.08817863f;
    r0 = n += 2.11080909f;
    r1 = n *= -0.65152746f;
    n *= r0;
    r0 = n *= -1.18112254f;
    r2 = n += -1.27645576f;
    n *= -0.00214511f;
    r3 = n += 0.00363363f;
    r4 = n += -0.28397933f;
    n += r0;
    r0 = n += 0.66704214f;
    n *= r3;
    r3 = n += -0.25236428f;
    n = r3 += n;
    n += -1.09388077f;
    n *= r2;
    n = r0 += n;
    n *= -0.25974447f;
    n += -0.17754848f;
    r2 = n += -0.56277162f;
    n = r3 *= n;
    n = r2 += n;
    n = r4 *= n;
    n *= r2;
    n *= r1;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= -87.63348389f;
    n += -0.11813197f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.36926216f;
    n *= -1.97861433f;
    n += 2.68536067f;
    r0 = n += 3.22526670f;
    r1 = n *= -0.18293113f;
    n *= r0;
    r0 = n *= -0.36570066f;
    r2 = n += -3.10018754f;
    n *= 0.00007560f;
    r3 = n += -0.00226482f;
    r4 = n += -0.02095766f;
    n += r0;
    r0 = n += 3.85551715f;
    n *= r3;
    r3 = n += -0.34899676f;
    n = r3 += n;
    n += 3.58452940f;
    n *= r2;
    n = r0 += n;
    n *= 0.01665321f;
    n += -0.98062158f;
    r2 = n += 0.15793484f;
    n = r3 *= n;
    n = r2 += n;
    n = r4 *= n;
    n *= r2;
    n *= r1;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= -90437.10156250f;
    n += 0.52359873f;
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
