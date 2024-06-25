// Run date: 06/25/24 16:39:32 Pacific Daylight Time
// Run duration = 510.365139 seconds
// Run generation = 274
// Run evolution = 10
// Run max result = 0.00000066
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= 0.42794281f;
    n *= r0;
    r0 = n += -0.95214498f;
    n *= -0.03146092f;
    r2 = n += 1.30377412f;
    n = r2 *= n;
    n *= -0.49556169f;
    r3 = n *= 1.21089828f;
    r4 = n *= 0.64847487f;
    n *= -0.97554308f;
    r5 = n += 1.27801323f;
    n *= r3;
    n += 0.48961908f;
    n *= r0;
    n *= 0.40439957f;
    n += r2;
    n = r5 *= n;
    r2 = n += -8.58031368f;
    n *= r2;
    n += 6.95940113f;
    n *= -0.00000706f;
    r2 = n *= -8.93701553f;
    n *= 3.99933958f;
    n *= r2;
    n = r4 += n;
    n += r4;
    n *= r1;
    n *= r5;
    n *= -0.23496149f;
    n *= -1.53682828f;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    r1 = n *= -0.03686418f;
    n *= r0;
    r0 = n += 1.31083715f;
    n *= 0.92006654f;
    r2 = n += -0.30749753f;
    n = r2 *= n;
    n *= 0.73688567f;
    r3 = n *= -0.28283674f;
    r4 = n *= -1.38838208f;
    n *= 0.64078653f;
    r5 = n += 2.05195880f;
    n *= r3;
    n += -4.85850430f;
    n *= r0;
    n *= 1.36963356f;
    n += r2;
    n = r5 *= n;
    r2 = n += 15.17257595f;
    n *= r2;
    n += -5.18931913f;
    n *= -0.31910327f;
    r2 = n *= -0.00111863f;
    n *= -2.08745527f;
    n *= r2;
    n = r4 += n;
    n += r4;
    n *= r1;
    n *= r5;
    n *= 2.73864102f;
    n *= -1.23439157f;
    n += -0.11813187f;
    return n;
} // Solution1

// Solution2 result = 0.00000066
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= -0.61941504f;
    n *= r0;
    r0 = n += 4.53247356f;
    n *= 0.01868476f;
    r2 = n += 0.58995610f;
    n = r2 *= n;
    n *= 1.86097980f;
    r3 = n *= 0.25722772f;
    r4 = n *= 0.97850323f;
    n *= -1.92377388f;
    r5 = n += -1.33350241f;
    n *= r3;
    n += 0.02356633f;
    n *= r0;
    n *= 0.93389803f;
    n += r2;
    n = r5 *= n;
    r2 = n += -2.36652350f;
    n *= r2;
    n += 4.37991333f;
    n *= 0.00195889f;
    r2 = n *= -0.28082928f;
    n *= -2.64601994f;
    n *= r2;
    n = r4 += n;
    n += r4;
    n *= r1;
    n *= r5;
    n *= -4.43857670f;
    n *= -0.46458241f;
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
