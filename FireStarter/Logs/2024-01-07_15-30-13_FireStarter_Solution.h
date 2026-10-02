// Run date: 01/07/24 15:30:13 Pacific Standard Time
// Run duration = 10358.489239 seconds
// Run generation = 64
// Run evolution = 11
// Run max result = 0.00000012
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
// Run tests = 4
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

    n += -2.98070407f;
    r0 = n += -0.16088916f;
    r1 = n *= 1.97163212f;
    n += 0.00000159f;
    r2 = n *= 0.23184466f;
    n = r1 *= n;
    r3 = n += -3.01452827f;
    n *= -1.84166741f;
    n = r1 += n;
    n += -0.11449584f;
    r4 = n *= -0.99954462f;
    n += r1;
    r1 = n *= 4.55373383f;
    n *= r1;
    n *= r3;
    r3 = n *= -0.00580752f;
    n *= -1.84441853f;
    r1 = n += -0.07570395f;
    n = r3 += n;
    n = r1 *= n;
    n *= -7.39830399f;
    n += 38475.49218750f;
    n *= r2;
    n += r0;
    n *= r1;
    r1 = n *= -0.00203633f;
    n *= -3.78087449f;
    n *= -1.89897239f;
    n *= r4;
    n *= r3;
    n += r1;
    n += 0.00000024f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.21504140f;
    r0 = n += -0.87550884f;
    r1 = n *= 0.84805059f;
    n += -0.00016994f;
    r2 = n *= 0.51478356f;
    n = r1 *= n;
    r3 = n += -1.37396395f;
    n *= -0.99991179f;
    n = r1 += n;
    n += -1.55914617f;
    r4 = n *= -5.29316092f;
    n += r1;
    r1 = n *= 0.02591086f;
    n *= r1;
    n *= r3;
    r3 = n *= -0.00513334f;
    n *= 2726.32153320f;
    r1 = n += 0.42508596f;
    n = r3 += n;
    n = r1 *= n;
    n *= 2.67806339f;
    n += 2.50493383f;
    n *= r2;
    n += r0;
    n *= r1;
    r1 = n *= -0.75323343f;
    n *= 0.66857773f;
    n *= 4.56011724f;
    n *= r4;
    n *= r3;
    n += r1;
    n += -0.11814060f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.12212261f;
    r0 = n += -2.49587202f;
    r1 = n *= 0.39719623f;
    n += 0.00000055f;
    r2 = n *= -2.00809312f;
    n = r1 *= n;
    r3 = n += 2.86738706f;
    n *= 0.99711549f;
    n = r1 += n;
    n += -1.32210541f;
    r4 = n *= -0.99268699f;
    n += r1;
    r1 = n *= -0.00680618f;
    n *= r1;
    n *= r3;
    r3 = n *= -0.01388477f;
    n *= 35520.30468750f;
    r1 = n += -0.37423202f;
    n = r3 += n;
    n = r1 *= n;
    n *= -4.89032125f;
    n += -27.97714424f;
    n *= r2;
    n += r0;
    n *= r1;
    r1 = n *= -0.08158653f;
    n *= 0.85526186f;
    n *= 1.71598423f;
    n *= r4;
    n *= r3;
    n += r1;
    n += 0.52359921f;
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
