// Run date: 07/31/23 22:29:59 Pacific Daylight Time
// Run duration = 1031.802940 seconds
// Run generation = 45
// Run evolution = 0
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
// Run seeds = 64
// Run tests = 0
// Run units = 1
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= 0.40736800f;
    r2 = n *= 0.05614872f;
    n = r2 *= n;
    r3 = n *= -3.91663742f;
    n *= -0.92510557f;
    r4 = n += -0.01367983f;
    n *= 269867.71875000f;
    n *= 0.00000508f;
    r5 = n += -1.73825705f;
    r6 = n *= 0.39515603f;
    r7 = n += 0.91204244f;
    n *= r6;
    n *= r7;
    n *= r4;
    n += r5;
    n *= r3;
    r3 = n += -0.69223428f;
    r5 = n += 0.06404034f;
    n = r1 *= n;
    n *= r1;
    n += r3;
    n += r2;
    n = r5 *= n;
    n *= -1.33520722f;
    r2 = n += 0.01280063f;
    n += -1.30899429f;
    n += r2;
    n *= r5;
    n += 0.06307081f;
    n *= r0;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065843f;
    r1 = n *= -0.26566079f;
    r2 = n *= -0.01226845f;
    n = r2 *= n;
    r3 = n *= -0.65150827f;
    n *= -0.59915560f;
    r4 = n += -0.00317010f;
    n *= 120041.77343750f;
    n *= 1.69492829f;
    r5 = n += -3.95911956f;
    r6 = n *= 0.02002865f;
    r7 = n += -4.13835669f;
    n *= r6;
    n *= r7;
    n *= r4;
    n += r5;
    n *= r3;
    r3 = n += -0.67994410f;
    r5 = n += -0.27805737f;
    n = r1 *= n;
    n *= r1;
    n += r3;
    n += r2;
    n = r5 *= n;
    n *= -0.35094783f;
    r2 = n += 0.00724502f;
    n += -0.85380417f;
    n += r2;
    n *= r5;
    n += -0.25546306f;
    n *= r0;
    n += -0.11813167f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799359f;
    r1 = n *= 0.18401834f;
    r2 = n *= 0.01639119f;
    n = r2 *= n;
    r3 = n *= -0.32111382f;
    n *= -4.86255550f;
    r4 = n += -0.00671382f;
    n *= -0.00570363f;
    n *= 2.73027754f;
    r5 = n += 1.53424346f;
    r6 = n *= 0.20923159f;
    r7 = n += 1391.17175293f;
    n *= r6;
    n *= r7;
    n *= r4;
    n += r5;
    n *= r3;
    r3 = n += -0.30332780f;
    r5 = n += -1.12426853f;
    n = r1 *= n;
    n *= r1;
    n += r3;
    n += r2;
    n = r5 *= n;
    n *= -0.49595684f;
    r2 = n += -0.38581619f;
    n += -0.77669150f;
    n += r2;
    n *= r5;
    n += -0.14353172f;
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
