// Run date: 01/03/23 08:35:31 Pacific Standard Time
// Run duration = 12.037030 seconds
// Run count = 22
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run units = 8
// Run processes = 16
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 11000
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 22

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00051498

// Solution0 precision = 0.00034118
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n *= 0.24955909f;
    r0 = n += -0.83975863f;
    r1 = n += 0.86005443f;
    n *= -1.81621397f;
    n += -0.84378612f;
    r2 = n += 1.47111154f;
    n *= 0.33814988f;
    r3 = n += -0.17713787f;
    n += r0;
    r0 = n *= 1.15862727f;
    n += 0.46066779f;
    n *= -2.08424067f;
    n *= 0.36387140f;
    n *= -1.18732858f;
    n += r1;
    n *= r2;
    n += -2.13506556f;
    n += 2.01566744f;
    n *= -0.99715662f;
    r2 = n += -0.95824641f;
    n *= -0.31933674f;
    n += 2.51046109f;
    r1 = n *= -0.58025587f;
    n *= r1;
    n = r0 += n;
    n *= r0;
    n += -0.32089934f;
    n *= r2;
    n += 1.04691982f;
    n += r3;
    n *= -0.64969695f;
    n += -0.05732512f;
    return n;
} // Solution0

// Solution1 precision = 0.00008857
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n *= 0.40094769f;
    r0 = n += -0.15888877f;
    r1 = n += -1.66274440f;
    n *= 0.14838332f;
    n += -0.31896514f;
    r2 = n += 0.27032125f;
    n *= -1.17465055f;
    r3 = n += -1.79657447f;
    n += r0;
    r0 = n *= -0.59888512f;
    n += 3.68936038f;
    n *= -0.03705658f;
    n *= -1.22706187f;
    n *= -0.51676077f;
    n += r1;
    n *= r2;
    n += 0.50362271f;
    n += -0.04336391f;
    n *= 0.67026001f;
    r2 = n += -0.32085684f;
    n *= -1.70234263f;
    n += 1.55769026f;
    r1 = n *= 1.61224568f;
    n *= r1;
    n = r0 += n;
    n *= r0;
    n += -0.61411077f;
    n *= r2;
    n += 0.15767337f;
    n += r3;
    n *= 0.56641692f;
    n += -0.25523242f;
    return n;
} // Solution1

// Solution2 precision = 0.00051498
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n *= 0.59683233f;
    r0 = n += -0.66698062f;
    r1 = n += 0.05250733f;
    n *= -0.89007318f;
    n += 1.94666016f;
    r2 = n += 1.18172503f;
    n *= 1.20652962f;
    r3 = n += 1.26333737f;
    n += r0;
    r0 = n *= 0.36034924f;
    n += -0.23012312f;
    n *= -0.01042642f;
    n *= -0.65113974f;
    n *= 3.85280442f;
    n += r1;
    n *= r2;
    n += -1.32647216f;
    n += -1.10660112f;
    n *= 0.19257671f;
    r2 = n += -0.11479942f;
    n *= -0.75501460f;
    n += -1.27020550f;
    r1 = n *= -1.71397507f;
    n *= r1;
    n = r0 += n;
    n *= r0;
    n += -2.10868311f;
    n *= r2;
    n += 0.71447974f;
    n += r3;
    n *= -0.34476155f;
    n += 0.59318101f;
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
