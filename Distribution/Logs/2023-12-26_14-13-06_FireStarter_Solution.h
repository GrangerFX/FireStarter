// Run date: 12/26/23 14:13:06 Pacific Standard Time
// Run duration = 1867.458393 seconds
// Run generation = 34
// Run evolution = 5
// Run max result = 0.00000024
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
// Run startResult = 9.999999f

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
    r1 = n *= -0.21623830f;
    n = r1 += n;
    n = r0 *= n;
    n *= -0.09893176f;
    r2 = n *= 1.05008519f;
    n *= 1.10194123f;
    r3 = n *= -0.01237507f;
    n *= 0.52965051f;
    r4 = n *= -1.39984179f;
    n += -0.08372777f;
    n *= r0;
    n += -1.92173421f;
    n = r1 *= n;
    r0 = n *= -1.34508073f;
    n = r1 *= n;
    n *= 0.39656645f;
    r5 = n += 2.46899080f;
    n = r3 *= n;
    n *= -2.01173925f;
    n *= r1;
    n += 1.21821880f;
    n += r2;
    n *= -0.08695184f;
    n *= r3;
    n *= -0.45150974f;
    n += r4;
    n *= 1.33529210f;
    n += 0.36230648f;
    n *= r0;
    n *= r5;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    r1 = n *= 0.04468111f;
    n = r1 += n;
    n = r0 *= n;
    n *= 1.89554667f;
    r2 = n *= -0.22013292f;
    n *= 1.07670569f;
    r3 = n *= 0.01972691f;
    n *= 4.55166626f;
    r4 = n *= 1.27370393f;
    n += 1.26500583f;
    n *= r0;
    n += -7.24176931f;
    n = r1 *= n;
    r0 = n *= 0.37292081f;
    n = r1 *= n;
    n *= 1.65586996f;
    r5 = n += -2.70057178f;
    n = r3 *= n;
    n *= 0.30928901f;
    n *= r1;
    n += -1.70409966f;
    n += r2;
    n *= 0.17699428f;
    n *= r3;
    n *= -2.41812491f;
    n += r4;
    n *= 0.50908303f;
    n += -1.68780363f;
    n *= r0;
    n *= r5;
    n += -0.11813182f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799383f;
    r1 = n *= 0.24604771f;
    n = r1 += n;
    n = r0 *= n;
    n *= -0.03836101f;
    r2 = n *= -2.15291619f;
    n *= -0.07124044f;
    r3 = n *= 0.40246171f;
    n *= -0.68672436f;
    r4 = n *= -0.90464038f;
    n += 0.08784311f;
    n *= r0;
    n += -1.65630805f;
    n = r1 *= n;
    r0 = n *= -0.84549361f;
    n = r1 *= n;
    n *= -1.14650452f;
    r5 = n += -2.45854950f;
    n = r3 *= n;
    n *= 7.00046539f;
    n *= r1;
    n += -1.46137488f;
    n += r2;
    n *= -0.04798239f;
    n *= r3;
    n *= 2.58120584f;
    n += r4;
    n *= -0.08815696f;
    n += 0.59022844f;
    n *= r0;
    n *= r5;
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
