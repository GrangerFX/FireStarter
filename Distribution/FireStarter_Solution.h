// Run date: 11/10/23 12:50:16 Pacific Standard Time
// Run duration = 3885.758576 seconds
// Run generation = 0
// Run evolution = 124
// Run result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run optimizations = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= 0.05763588f;
    r2 = n *= 0.03671508f;
    r3 = n += 93790.29687500f;
    n *= -0.08915664f;
    r4 = n *= 0.13863112f;
    n *= 0.05378596f;
    n *= r1;
    n *= r0;
    n *= -0.02406193f;
    n += -0.85342306f;
    n *= -0.03272605f;
    n *= 0.14211948f;
    r0 = n *= -4.57742548f;
    r1 = n += -0.43649560f;
    n = r1 *= n;
    r5 = n += 0.06886782f;
    n = r0 *= n;
    n += r4;
    n *= r1;
    n += 14.17557049f;
    n = r0 *= n;
    n *= 0.14129223f;
    n += 0.25546950f;
    n *= r5;
    n *= r3;
    n *= -0.22460723f;
    n *= r2;
    r2 = n *= 0.08687538f;
    n += r2;
    n *= r0;
    n += -0.00000004f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065938f;
    r1 = n *= 1.48202038f;
    r2 = n *= 0.03866071f;
    r3 = n += -185922.32812500f;
    n *= -0.00185151f;
    r4 = n *= 0.28725880f;
    n *= 0.00081954f;
    n *= r1;
    n *= r0;
    n *= 1.31102264f;
    n += -3.86422300f;
    n *= 0.10607377f;
    n *= 0.24694613f;
    r0 = n *= -0.34472656f;
    r1 = n += 0.01583880f;
    n = r1 *= n;
    r5 = n += 0.02446732f;
    n = r0 *= n;
    n += r4;
    n *= r1;
    n += -0.01290658f;
    n = r0 *= n;
    n *= -15.50852585f;
    n += 45.00841141f;
    n *= r5;
    n *= r3;
    n *= 1.73425233f;
    n *= r2;
    r2 = n *= 0.10730806f;
    n += r2;
    n *= r0;
    n += -0.11813273f;
    return n;
} // Solution1

// Solution2 result = 0.00000008
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= 0.04270399f;
    r2 = n *= 0.04360174f;
    r3 = n += -29623.26953125f;
    n *= -1.24173999f;
    r4 = n *= 0.17784290f;
    n *= 0.07564211f;
    n *= r1;
    n *= r0;
    n *= 0.27864552f;
    n += -29.34248734f;
    n *= 0.01573209f;
    n *= 0.06893622f;
    r0 = n *= 0.32443416f;
    r1 = n += -0.26273644f;
    n = r1 *= n;
    r5 = n += 0.10120797f;
    n = r0 *= n;
    n += r4;
    n *= r1;
    n += -0.53871524f;
    n = r0 *= n;
    n *= -0.14208631f;
    n += 0.34562504f;
    n *= r5;
    n *= r3;
    n *= 0.05898413f;
    n *= r2;
    r2 = n *= -2.09839702f;
    n += r2;
    n *= r0;
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
