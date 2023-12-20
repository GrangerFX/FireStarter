// Run date: 12/19/23 21:52:35 Pacific Standard Time
// Run duration = 3228.203823 seconds
// Run generation = 30
// Run evolution = 12
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.28379408f;
    r0 = n += -0.89156538f;
    r1 = n *= -0.38610727f;
    r2 = n *= -0.02353871f;
    r3 = n *= -2.37888551f;
    n = r1 += n;
    n *= r0;
    n *= -1.22666144f;
    n += 0.05732226f;
    n += -0.35580271f;
    r0 = n *= 6.42317343f;
    r4 = n += 0.33204103f;
    n += 0.91535270f;
    n *= -0.96961445f;
    n = r4 += n;
    n *= 2.16899133f;
    n *= r4;
    r4 = n += -0.44965240f;
    n += 2.30442595f;
    n *= 0.06850687f;
    n = r4 *= n;
    n *= 20.42094421f;
    n *= r3;
    n *= r4;
    n *= r0;
    n *= -19.26704216f;
    n += r1;
    n += -0.07828445f;
    n += 0.07828443f;
    n += r2;
    n *= -1.63769317f;
    n *= -0.80754977f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.25446901f;
    r0 = n += 0.78647679f;
    r1 = n *= 1.25031757f;
    r2 = n *= -2.35323596f;
    r3 = n *= -0.21049257f;
    n = r1 += n;
    n *= r0;
    n *= -1.73071384f;
    n += 0.71684700f;
    n += 0.86263043f;
    r0 = n *= 4.13620949f;
    r4 = n += -1.57125330f;
    n += -1.89538479f;
    n *= -0.98775452f;
    n = r4 += n;
    n *= 0.34049341f;
    n *= r4;
    r4 = n += -0.26785481f;
    n += 0.40110999f;
    n *= -0.02963727f;
    n = r4 *= n;
    n *= -14.66485977f;
    n *= r3;
    n *= r4;
    n *= r0;
    n *= 16.32242584f;
    n += r1;
    n += 0.36009368f;
    n += -0.28446424f;
    n += r2;
    n *= 0.67705041f;
    n *= -2.30703783f;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.64660203f;
    r0 = n += 1.69280005f;
    r1 = n *= 0.58940619f;
    r2 = n *= -0.47989026f;
    r3 = n *= 1.04449296f;
    n = r1 += n;
    n *= r0;
    n *= -0.85251713f;
    n += 0.09114291f;
    n += 0.47095159f;
    r0 = n *= 1.79956913f;
    r4 = n += -0.47867692f;
    n += 0.90770835f;
    n *= -1.08481574f;
    n = r4 += n;
    n *= -0.54680091f;
    n *= r4;
    r4 = n += -1.47331095f;
    n += 1.54669595f;
    n *= -0.42659748f;
    n = r4 *= n;
    n *= 1.24723232f;
    n *= r3;
    n *= r4;
    n *= r0;
    n *= 3.37531328f;
    n += r1;
    n += -0.05790854f;
    n += -0.02219357f;
    n += r2;
    n *= 3.51952457f;
    n *= -1.85725164f;
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
