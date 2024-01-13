// Run date: 01/12/24 17:28:15 Pacific Standard Time
// Run duration = 26045.722455 seconds
// Run generation = 115
// Run evolution = 21
// Run max result = 0.00000045
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.44690913f;
    n += -2.76535463f;
    n *= 1.21585000f;
    n *= -0.00128436f;
    n *= 1.35758519f;
    n *= 1285.51489258f;
    n += -0.19259857f;
    r0 = n *= 0.21184617f;
    r1 = n *= -1.19459689f;
    n = r0 += n;
    n = r0 *= n;
    r2 = n += -0.35995951f;
    n += -0.43535495f;
    r3 = n += -1.74070156f;
    r4 = n *= 0.20656645f;
    n = r2 *= n;
    n += -0.01644420f;
    n *= -2.91177273f;
    n = r0 += n;
    r5 = n += -1.81345296f;
    n += r5;
    n *= 0.33502591f;
    n *= r2;
    n += r0;
    n += r3;
    n = r1 *= n;
    r3 = n *= 0.11904972f;
    n *= r3;
    n += r4;
    n *= -0.83125961f;
    n *= r1;
    n += 0.00000003f;
    return n;
} // Solution0

// Solution1 result = 0.00000045
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.92310983f;
    n += -1.32387090f;
    n *= -0.18440695f;
    n *= 3.58507299f;
    n *= -0.75371295f;
    n *= 2.68754315f;
    n += -1.12983084f;
    r0 = n *= 0.98894680f;
    r1 = n *= -1.12761092f;
    n = r0 += n;
    n = r0 *= n;
    r2 = n += 1.09870732f;
    n += -1.55205619f;
    r3 = n += -2.77922606f;
    r4 = n *= 0.44578797f;
    n = r2 *= n;
    n += -15.23227024f;
    n *= 0.00010242f;
    n = r0 += n;
    r5 = n += -0.53717452f;
    n += r5;
    n *= 0.08711553f;
    n *= r2;
    n += r0;
    n += r3;
    n = r1 *= n;
    r3 = n *= 0.07587773f;
    n *= r3;
    n += r4;
    n *= 0.16565415f;
    n *= r1;
    n += -0.11813184f;
    return n;
} // Solution1

// Solution2 result = 0.00000025
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.97571081f;
    n += 1.18084061f;
    n *= -0.00932048f;
    n *= -2719.15673828f;
    n *= -0.66760933f;
    n *= 0.03195311f;
    n += 2.58130860f;
    r0 = n *= 0.46104607f;
    r1 = n *= -1.52226508f;
    n = r0 += n;
    n = r0 *= n;
    r2 = n += -0.19009912f;
    n += -1.84559488f;
    r3 = n += 1.16976917f;
    r4 = n *= 1.49779570f;
    n = r2 *= n;
    n += 2.16928220f;
    n *= -0.44478408f;
    n = r0 += n;
    r5 = n += -2.35156107f;
    n += r5;
    n *= 0.05204998f;
    n *= r2;
    n += r0;
    n += r3;
    n = r1 *= n;
    r3 = n *= -0.72605407f;
    n *= r3;
    n += r4;
    n *= -1.00178480f;
    n *= r1;
    n += 0.52359879f;
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
