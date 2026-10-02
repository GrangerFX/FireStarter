// Run date: 12/25/23 18:42:02 Pacific Standard Time
// Run duration = 1654.134373 seconds
// Run generation = 52
// Run evolution = 14
// Run max result = 0.00000029
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
// Run tests = 1
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
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n *= 0.64125907f;
    n = r1 *= n;
    n += -4.05851126f;
    r2 = n *= 0.32613507f;
    r3 = n += 1.45111477f;
    n += -0.39082319f;
    r4 = n *= -1.02131891f;
    n = r3 += n;
    n = r3 *= n;
    n += 0.02090936f;
    r5 = n *= -2.78430843f;
    n = r5 *= n;
    n *= r3;
    n = r2 *= n;
    n *= r5;
    r5 = n *= -1.94906580f;
    r3 = n += 12.06447601f;
    n += 6.94398451f;
    n *= 0.47225153f;
    r6 = n += -1.52394664f;
    n *= r5;
    n *= -0.03114243f;
    n *= r4;
    n += r1;
    n *= -1.19319832f;
    n += r6;
    n += r3;
    n *= r0;
    n *= r2;
    n += -0.01166296f;
    n += 0.01166297f;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065866f;
    r1 = n *= 0.16713893f;
    n = r1 *= n;
    n += -1.15862334f;
    r2 = n *= -1.49327195f;
    r3 = n += -1.69309151f;
    n += 0.23499765f;
    r4 = n *= -1.29072249f;
    n = r3 += n;
    n = r3 *= n;
    n += 1.36964512f;
    r5 = n *= 0.56166703f;
    n = r5 *= n;
    n *= r3;
    n = r2 *= n;
    n *= r5;
    r5 = n *= -0.05114798f;
    r3 = n += -1.28102863f;
    n += -3.44530821f;
    n *= 1.94678700f;
    r6 = n += 1.00819683f;
    n *= r5;
    n *= 2.23498440f;
    n *= r4;
    n += r1;
    n *= -0.38098386f;
    n += r6;
    n += r3;
    n *= r0;
    n *= r2;
    n += 0.11301782f;
    n += -0.23114966f;
    return n;
} // Solution1

// Solution2 result = 0.00000029
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799359f;
    r1 = n *= -0.45318729f;
    n = r1 *= n;
    n += -1.02345312f;
    r2 = n *= -1.80470097f;
    r3 = n += -0.08020873f;
    n += 1.21433210f;
    r4 = n *= -1.03812146f;
    n = r3 += n;
    n = r3 *= n;
    n += 0.06885058f;
    r5 = n *= 0.10674866f;
    n = r5 *= n;
    n *= r3;
    n = r2 *= n;
    n *= r5;
    r5 = n *= 0.00373765f;
    r3 = n += -0.63552105f;
    n += -2.18307233f;
    n *= 1.14157128f;
    r6 = n += -4.16684198f;
    n *= r5;
    n *= -10.28675365f;
    n *= r4;
    n += r1;
    n *= 0.97196102f;
    n += r6;
    n += r3;
    n *= r0;
    n *= r2;
    n += 0.89872408f;
    n += -0.37512538f;
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
