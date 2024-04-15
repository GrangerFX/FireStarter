// Run date: 04/15/24 09:45:40 Pacific Daylight Time
// Run duration = 271.594280 seconds
// Run generation = 91
// Run evolution = 4
// Run max result = 0.00000036
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
// Run evolveSeed = 1
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

// Solution0 result = 0.00000036
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.86236626f;
    n *= 1.66478837f;
    n += 2.32490396f;
    n += 0.45300224f;
    r1 = n += 1.73234403f;
    r2 = n *= 1.15627062f;
    r3 = n *= 0.08291133f;
    n *= 0.29595137f;
    n *= r1;
    n *= -1.76961792f;
    r1 = n *= -0.57638907f;
    n += -0.54783821f;
    r4 = n *= 0.05224853f;
    r5 = n += -0.51607847f;
    n = r4 *= n;
    n *= 2.15010190f;
    n += 1.78545475f;
    n = r5 *= n;
    n *= r4;
    n *= 0.04102419f;
    n *= -0.15816821f;
    n *= -4.96247292f;
    n = r5 += n;
    n *= r5;
    n = r1 *= n;
    n += -1.71292353f;
    n *= r2;
    n *= r1;
    n += r3;
    n += -0.23301168f;
    n += 2.94221520f;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.56125933f;
    n *= 1.51090133f;
    n += 0.54665977f;
    n += 2.49585080f;
    r1 = n += -0.42160904f;
    r2 = n *= 4.46721792f;
    r3 = n *= 0.14221436f;
    n *= 0.03326077f;
    n *= r1;
    n *= -3.26613569f;
    r1 = n *= 0.95229560f;
    n += 0.40075716f;
    r4 = n *= 0.04007691f;
    r5 = n += 1.09888065f;
    n = r4 *= n;
    n *= 1.54845703f;
    n += 0.68451327f;
    n = r5 *= n;
    n *= r4;
    n *= -0.73275083f;
    n *= -0.08270651f;
    n *= 0.24337856f;
    n = r5 += n;
    n *= r5;
    n = r1 *= n;
    n += 1.07555950f;
    n *= r2;
    n *= r1;
    n += r3;
    n += 0.83431482f;
    n += 0.78221434f;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000030
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.43952197f;
    n *= 1.68593872f;
    n += 0.65915126f;
    n += -0.36943132f;
    r1 = n += 1.65023196f;
    r2 = n *= 2.04353952f;
    r3 = n *= 0.37012962f;
    n *= 1.85389793f;
    n *= r1;
    n *= 2.13802743f;
    r1 = n *= -0.14389555f;
    n += 1.86246979f;
    r4 = n *= 0.01448606f;
    r5 = n += 1.07425880f;
    n = r4 *= n;
    n *= -1.23562098f;
    n += -0.54384911f;
    n = r5 *= n;
    n *= r4;
    n *= 0.01187471f;
    n *= -0.00781867f;
    n *= 0.87181795f;
    n = r5 += n;
    n *= r5;
    n = r1 *= n;
    n += 1.96428823f;
    n *= r2;
    n *= r1;
    n += r3;
    n += 1.24105179f;
    n += 0.43321279f;
    n += r0;
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
