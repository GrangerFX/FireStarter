// Run date: 03/03/24 17:42:02 Pacific Standard Time
// Run duration = 5439.122537 seconds
// Run generation = 517
// Run evolution = 26
// Run max result = 0.00000019
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
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 0
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159250f;
    r1 = n *= -0.95379955f;
    n *= -0.21497782f;
    n *= r1;
    n += -1.72803974f;
    r1 = n += 1.80382454f;
    n += 0.42667365f;
    n *= 0.00274978f;
    n *= -11.44853973f;
    r2 = n += -1.42284739f;
    r3 = n *= -0.73576570f;
    n = r1 += n;
    n += 6.70450258f;
    r4 = n *= 0.00717949f;
    n *= -2.96822214f;
    n = r2 += n;
    n *= r2;
    n += 1.14781702f;
    r2 = n *= -0.68885916f;
    n *= r2;
    n += -1.59303474f;
    n = r3 += n;
    n *= r1;
    n *= -0.12196007f;
    r1 = n += 0.23866634f;
    n += -0.81927925f;
    n = r3 *= n;
    n += r1;
    n += r3;
    n *= r0;
    n *= r4;
    n += 0.00000006f;
    return n;
} // Solution0

// Solution1 result = 0.00000019
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065866f;
    r1 = n *= -0.20880824f;
    n *= -0.40020254f;
    n *= r1;
    n += 1.05794168f;
    r1 = n += 1.32391286f;
    n += -1.44740510f;
    n *= -4.82996416f;
    n *= 0.00000069f;
    r2 = n += 0.37443677f;
    r3 = n *= 0.57571286f;
    n = r1 += n;
    n += -1.89331365f;
    r4 = n *= -1.26552999f;
    n *= 1.20832157f;
    n = r2 += n;
    n *= r2;
    n += 1.89134979f;
    r2 = n *= 0.93165362f;
    n *= r2;
    n += -4.68117523f;
    n = r3 += n;
    n *= r1;
    n *= 0.00048942f;
    r1 = n += 0.91483557f;
    n += -0.57579201f;
    n = r3 *= n;
    n += r1;
    n += r3;
    n *= r0;
    n *= r4;
    n += -0.11813196f;
    return n;
} // Solution1

// Solution2 result = 0.00000013
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799383f;
    r1 = n *= 0.46222323f;
    n *= 1.32956076f;
    n *= r1;
    n += -2.38822484f;
    r1 = n += 0.93825686f;
    n += -0.19602792f;
    n *= -31.36986732f;
    n *= 0.00742345f;
    r2 = n += 4.82252026f;
    r3 = n *= 0.24164388f;
    n = r1 += n;
    n += -1.14387953f;
    r4 = n *= -0.04419443f;
    n *= -1.70366192f;
    n = r2 += n;
    n *= r2;
    n += 4.06258059f;
    r2 = n *= 0.05081111f;
    n *= r2;
    n += -0.13751473f;
    n = r3 += n;
    n *= r1;
    n *= 0.13942173f;
    r1 = n += 0.04815973f;
    n += -2.39413691f;
    n = r3 *= n;
    n += r1;
    n += r3;
    n *= r0;
    n *= r4;
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
