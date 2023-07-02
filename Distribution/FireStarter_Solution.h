// Run date: 07/02/23 14:15:19 Pacific Daylight Time
// Run duration = 2124.556662 seconds
// Run generation = 162
// Run evolution = 0
// Run result = 0.00000143
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000143
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.23373805f;
    n += -1.74461007f;
    n += 1.01030028f;
    r0 = n *= -1.66043139f;
    r1 = n *= -0.68056440f;
    r2 = n *= -0.04106490f;
    n = r2 += n;
    n = r2 *= n;
    n *= -3.20935726f;
    n *= 1.32314622f;
    r3 = n *= 0.31141779f;
    n *= 1.38416469f;
    n *= r3;
    n += 0.89151305f;
    r3 = n *= -1.74720836f;
    n *= r0;
    r0 = n *= -0.35417363f;
    n *= r0;
    r0 = n += -0.45251065f;
    n = r3 += n;
    r4 = n *= -0.22689210f;
    n *= r3;
    n += -3.26190829f;
    n = r4 *= n;
    n = r0 *= n;
    n *= r2;
    n += 1.46222293f;
    n *= 1.57522774f;
    n *= r1;
    n *= r4;
    n *= r0;
    n += -0.00000002f;
    return n;
} // Solution0

// Solution1 result = 0.00000125
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.53250021f;
    n += 0.55540645f;
    n += 1.09037030f;
    r0 = n *= -0.16484135f;
    r1 = n *= 1.37558842f;
    r2 = n *= 0.17283873f;
    n = r2 += n;
    n = r2 *= n;
    n *= 0.56926984f;
    n *= 1.61078358f;
    r3 = n *= 0.17533998f;
    n *= -4.64747763f;
    n *= r3;
    n += 1.91498446f;
    r3 = n *= -0.53586507f;
    n *= r0;
    r0 = n *= -0.95012718f;
    n *= r0;
    r0 = n += -0.44802690f;
    n = r3 += n;
    r4 = n *= -1.62942672f;
    n *= r3;
    n += 2.69527197f;
    n = r4 *= n;
    n = r0 *= n;
    n *= r2;
    n += -1.62119257f;
    n *= -3.03776193f;
    n *= r1;
    n *= r4;
    n *= r0;
    n += -0.11813176f;
    return n;
} // Solution1

// Solution2 result = 0.00000113
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.33798197f;
    n += 0.10610700f;
    n += 0.77872765f;
    r0 = n *= 1.61088943f;
    r1 = n *= -0.34178239f;
    r2 = n *= -0.27045581f;
    n = r2 += n;
    n = r2 *= n;
    n *= 0.60191000f;
    n *= -0.63678545f;
    r3 = n *= -0.22673972f;
    n *= -6.83670712f;
    n *= r3;
    n += -1.10582244f;
    r3 = n *= 0.13492300f;
    n *= r0;
    r0 = n *= 0.95802331f;
    n *= r0;
    r0 = n += -1.23520267f;
    n = r3 += n;
    r4 = n *= 1.82180393f;
    n *= r3;
    n += -1.98883128f;
    n = r4 *= n;
    n = r0 *= n;
    n *= r2;
    n += -0.20296998f;
    n *= -1.49209619f;
    n *= r1;
    n *= r4;
    n *= r0;
    n += 0.52359885f;
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
