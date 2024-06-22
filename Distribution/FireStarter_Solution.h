// Run date: 06/22/24 11:25:29 Pacific Daylight Time
// Run duration = 713.243213 seconds
// Run generation = 255
// Run evolution = 13
// Run max result = 0.00000072
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

// Solution0 result = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.86258078f;
    n += -1.27901292f;
    r0 = n *= -1.02474070f;
    r1 = n *= 0.85696697f;
    n += -1.55114281f;
    n += 1.55113947f;
    n *= r1;
    n += -1.83655274f;
    r1 = n *= -0.11326589f;
    r2 = n *= 0.01937286f;
    r3 = n += -1.31097829f;
    r4 = n += 1.66045856f;
    n = r1 += n;
    r5 = n += 3.81564999f;
    n *= -0.01780947f;
    n *= -3.72269511f;
    n = r5 *= n;
    n += 4.31860542f;
    n += 4.21480799f;
    n *= -8.72721291f;
    n *= -0.10712112f;
    n *= r2;
    r2 = n += 1.58123720f;
    n *= r1;
    n *= r2;
    n += r3;
    n += 2.00973392f;
    n *= r0;
    n *= r5;
    n *= r4;
    n += 0.99183065f;
    n += -0.99183172f;
    return n;
} // Solution0

// Solution1 result = 0.00000072
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.00131798f;
    n += -0.08935212f;
    r0 = n *= 0.80768323f;
    r1 = n *= 1.79916513f;
    n += -1.43894649f;
    n += 1.43900514f;
    n *= r1;
    n += -6.64701843f;
    r1 = n *= 0.05080104f;
    r2 = n *= -0.00049763f;
    r3 = n += 0.96024013f;
    r4 = n += -1.48827553f;
    n = r1 += n;
    r5 = n += -1.87425625f;
    n *= -0.35713312f;
    n *= 0.15986569f;
    n = r5 *= n;
    n += -8.25341988f;
    n += 3.45731521f;
    n *= 9.28069115f;
    n *= 3.29694271f;
    n *= r2;
    r2 = n += -1.25135207f;
    n *= r1;
    n *= r2;
    n += r3;
    n += -5.56636858f;
    n *= r0;
    n *= r5;
    n *= r4;
    n += 0.47041354f;
    n += -0.58855855f;
    return n;
} // Solution1

// Solution2 result = 0.00000072
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.49233162f;
    n += -1.12566578f;
    r0 = n *= 1.44539607f;
    r1 = n *= -0.14392912f;
    n += -0.08552341f;
    n += 0.08552053f;
    n *= r1;
    n += -0.23478770f;
    r1 = n *= -1.35558784f;
    r2 = n *= 0.04664400f;
    r3 = n += 0.21867645f;
    r4 = n += -0.04058065f;
    n = r1 += n;
    r5 = n += 2.49485421f;
    n *= 0.41725051f;
    n *= -0.23865569f;
    n = r5 *= n;
    n += -2.91665840f;
    n += -3.52596641f;
    n *= -2.56883121f;
    n *= 1.11008060f;
    n *= r2;
    r2 = n += 3.11253333f;
    n *= r1;
    n *= r2;
    n += r3;
    n += -2.23977113f;
    n *= r0;
    n *= r5;
    n *= r4;
    n += -0.64743108f;
    n += 1.17102563f;
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
