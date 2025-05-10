// Run date: 05/10/25 08:48:59 Pacific Daylight Time
// Run duration = 5.598978 seconds
// Run test = 0
// Run generation = 4
// Run evolution = 0
// Run precision  = 0.00382207
// Run max result = 0.00648044
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 65536
// Run generations = 0
// Run passes = 384
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3
#define SOLUTION_VARIATION 0

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * SOLUTION_PI)

inline float SolutionTarget(float n, unsigned int variation = 0)
{
    switch (variation & 3) {
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

inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.57430029f;
    r0 = n += 0.00416763f;
    r1 = n *= -0.31402269f;
    r2 = n *= -0.00203518f;
    r3 = n += -2.21691060f;
    r4 = n *= 0.87756073f;
    r5 = n *= 0.81910992f;
    r6 = n *= -0.60293394f;
    n *= r4;
    n = r6 *= n;
    n = r6 *= n;
    n *= r0;
    n *= 0.54927510f;
    n += 1.52717638f;
    r0 = n += -2.88635159f;
    n *= 0.37202588f;
    n = r3 += n;
    n *= r1;
    n *= r0;
    n += -1.47447693f;
    n *= 2.08119631f;
    n *= r5;
    n *= r3;
    n *= -1.99630439f;
    n *= -0.39279962f;
    n += -0.23401359f;
    n *= r6;
    n *= -2.42539763f;
    n *= -16.55235672f;
    n += -32.82467270f;
    n *= r2;
    n *= -1.71414101f;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.66290116f;
    r0 = n += -0.52367514f;
    r1 = n *= -0.68923545f;
    r2 = n *= 0.33936930f;
    r3 = n += -2.43195677f;
    r4 = n *= 0.09992687f;
    r5 = n *= -2.49779320f;
    r6 = n *= 2.77742577f;
    n *= r4;
    n = r6 *= n;
    n = r6 *= n;
    n *= r0;
    n *= 2.37112117f;
    n += -0.21496955f;
    r0 = n += 1.28505027f;
    n *= -4.46911097f;
    n = r3 += n;
    n *= r1;
    n *= r0;
    n += 0.94719458f;
    n *= 1.11707520f;
    n *= r5;
    n *= r3;
    n *= -8.45283413f;
    n *= 0.45233595f;
    n += 17.38586807f;
    n *= r6;
    n *= 2.28676915f;
    n *= 4.29513979f;
    n += 5.78115463f;
    n *= r2;
    n *= 0.12613094f;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -1.75702059f;
    r0 = n += -0.93681985f;
    r1 = n *= -0.07235966f;
    r2 = n *= -0.64526498f;
    r3 = n += 1.53653741f;
    r4 = n *= 0.55586529f;
    r5 = n *= 1.62753904f;
    r6 = n *= -1.17892337f;
    n *= r4;
    n = r6 *= n;
    n = r6 *= n;
    n *= r0;
    n *= -0.18438987f;
    n += -2.06577277f;
    r0 = n += -1.25609088f;
    n *= 1.20337462f;
    n = r3 += n;
    n *= r1;
    n *= r0;
    n += -0.93092543f;
    n *= 3.14208221f;
    n *= r5;
    n *= r3;
    n *= -0.94088590f;
    n *= -1.65916169f;
    n += -9.37886047f;
    n *= r6;
    n *= 0.99828482f;
    n *= -0.24295583f;
    n += -2.68107104f;
    n *= r2;
    n *= -4.14575148f;
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
