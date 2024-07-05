// Run date: 07/04/24 17:15:35 Pacific Daylight Time
// Run duration = 7940.828149 seconds
// Run generation = 975
// Run evolution = 10
// Run max result = 0.00000060
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
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

// Solution0 result = 0.00000018
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159298f;
    n *= 0.37299848f;
    r1 = n += -1.03162634f;
    n += 2.06325316f;
    n *= r1;
    r1 = n += 0.56910706f;
    r2 = n *= 0.39399683f;
    n *= r1;
    n += 10.07006359f;
    r1 = n *= 0.24146239f;
    n += r1;
    n *= -0.00055578f;
    r1 = n += 0.41407716f;
    r3 = n *= -3.00565147f;
    r4 = n += 1.61668968f;
    n = r2 *= n;
    n += 3.46428800f;
    n += -1.16347659f;
    r5 = n += -3.59245944f;
    n *= r1;
    n *= -6.46855879f;
    n *= r2;
    n = r3 *= n;
    n *= r4;
    n *= -1.73903048f;
    r4 = n *= 0.78359532f;
    n *= r4;
    n += r3;
    n *= r5;
    n += -0.50387889f;
    n *= r0;
    n += -0.00000048f;
    return n;
} // Solution0

// Solution1 result = 0.00000018
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065962f;
    n *= -0.74377340f;
    r1 = n += 0.54930508f;
    n += -1.09861279f;
    n *= r1;
    r1 = n += -2.86676002f;
    r2 = n *= -0.06447361f;
    n *= r1;
    n += -1.41285598f;
    r1 = n *= -0.00008399f;
    n += r1;
    n *= 3.74397612f;
    r1 = n += -1.57424521f;
    r3 = n *= -0.80597538f;
    r4 = n += -1.81895983f;
    n = r2 *= n;
    n += 0.67103642f;
    n += 0.44885617f;
    r5 = n += -2.73524737f;
    n *= r1;
    n *= -0.72060931f;
    n *= r2;
    n = r3 *= n;
    n *= r4;
    n *= -0.53170681f;
    r4 = n *= 2.42226887f;
    n *= r4;
    n += r3;
    n *= r5;
    n += -0.54879481f;
    n *= r0;
    n += -0.11813292f;
    return n;
} // Solution1

// Solution2 result = 0.00000060
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799431f;
    n *= -0.59366053f;
    r1 = n += -1.84147096f;
    n += 3.68294024f;
    n *= r1;
    r1 = n += 1.12460840f;
    r2 = n *= -0.62029570f;
    n *= r1;
    n += 2.21943521f;
    r1 = n *= -0.00032045f;
    n += r1;
    n *= -3.00989509f;
    r1 = n += -0.92893028f;
    r3 = n *= -0.41653842f;
    r4 = n += -1.16854715f;
    n = r2 *= n;
    n += -3.04591846f;
    n += -4.80850887f;
    r5 = n += -1.63516855f;
    n *= r1;
    n *= -0.01745431f;
    n *= r2;
    n = r3 *= n;
    n *= r4;
    n *= -1.78977334f;
    r4 = n *= 1.86672533f;
    n *= r4;
    n += r3;
    n *= r5;
    n += 0.16121060f;
    n *= r0;
    n += 0.52359796f;
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
