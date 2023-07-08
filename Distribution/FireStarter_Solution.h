// Run date: 07/08/23 13:43:39 Pacific Daylight Time
// Run duration = 1561.283333 seconds
// Run generation = 251
// Run evolution = 0
// Run result = 0.00000155
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 1
// Run optimizeSeed = 1
// Run seeds = 1
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
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.69693708f;
    r1 = n += -1.44465542f;
    r2 = n *= -0.28867581f;
    n += 0.36390191f;
    n += 0.05313531f;
    n = r0 *= n;
    n += 1.67599571f;
    n *= -3.25130177f;
    r3 = n *= 0.00057691f;
    r4 = n *= -1.28606451f;
    n *= 7.49985886f;
    n *= -0.37435922f;
    n *= r4;
    n = r3 += n;
    n = r3 += n;
    r4 = n += -0.54215157f;
    r5 = n *= -0.48724490f;
    n = r0 *= n;
    n *= r5;
    n += -0.43133619f;
    r5 = n += 1.45948720f;
    r6 = n += 0.16125712f;
    n *= r5;
    n += r3;
    n *= r0;
    n *= r1;
    n *= r4;
    n += r2;
    n *= r6;
    r6 = n += 0.02114788f;
    n += -0.04229563f;
    n += r6;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.32434845f;
    r1 = n += -1.76631045f;
    r2 = n *= 0.89557594f;
    n += -1.17053866f;
    n += -0.41132498f;
    n = r0 *= n;
    n += -3.99431634f;
    n *= -0.01780616f;
    r3 = n *= 0.13340585f;
    r4 = n *= 0.21336079f;
    n *= -1.69287896f;
    n *= 0.19478963f;
    n *= r4;
    n = r3 += n;
    n = r3 += n;
    r4 = n += 1.48795021f;
    r5 = n *= -0.06078780f;
    n = r0 *= n;
    n *= r5;
    n += -1.67365766f;
    r5 = n += -0.05047053f;
    r6 = n += 1.29644191f;
    n *= r5;
    n += r3;
    n *= r0;
    n *= r1;
    n *= r4;
    n += r2;
    n *= r6;
    r6 = n += 0.31928506f;
    n += -0.75670230f;
    n += r6;
    return n;
} // Solution1

// Solution2 result = 0.00000155
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.39202809f;
    r1 = n += -1.22596443f;
    r2 = n *= -0.28038970f;
    n += 0.74052215f;
    n += -0.39677319f;
    n = r0 *= n;
    n += 1.13358879f;
    n *= -0.58748293f;
    r3 = n *= 0.00712295f;
    r4 = n *= 0.06706625f;
    n *= 13.47344398f;
    n *= -15.68337250f;
    n *= r4;
    n = r3 += n;
    n = r3 += n;
    r4 = n += -0.74711633f;
    r5 = n *= -0.43106180f;
    n = r0 *= n;
    n *= r5;
    n += 2.48778057f;
    r5 = n += -1.18181312f;
    r6 = n += -0.21527369f;
    n *= r5;
    n += r3;
    n *= r0;
    n *= r1;
    n *= r4;
    n += r2;
    n *= r6;
    r6 = n += 0.26094934f;
    n += 0.00170132f;
    n += r6;
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
