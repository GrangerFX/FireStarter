// Run date: 02/11/23 11:07:57 Pacific Standard Time
// Run duration = 34.110768 seconds
// Run count = 462
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 128
// Run seed = 4
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 462

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

// Precision = 0.00000298

// Solution0 precision = 0.00000077
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14161062f;
    r1 = n *= -0.48770911f;
    n += 0.15365385f;
    n += -1.28135395f;
    n += 0.06278616f;
    n += 1.33696568f;
    r2 = n += -0.27205908f;
    n += -0.00001604f;
    n *= r1;
    r1 = n += -7.48123837f;
    n += -12.57493496f;
    n *= -0.03997873f;
    n = r2 *= n;
    r3 = n *= -0.44670564f;
    n *= -1.39283323f;
    r4 = n *= 1.38933551f;
    n = r4 *= n;
    n += r1;
    n = r4 += n;
    n *= r4;
    n += 0.30744994f;
    n *= r2;
    n *= 0.28573525f;
    n = r3 += n;
    n += r0;
    r0 = n *= 0.19556257f;
    n *= 0.17838648f;
    n += r3;
    n *= 1.58192194f;
    n *= -0.00026028f;
    n *= 0.00520831f;
    n += r0;
    return n;
} // Solution0

// Solution1 precision = 0.00000262
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.48040223f;
    r1 = n *= -0.29092577f;
    n += -0.43259701f;
    n += -0.09491677f;
    n += -0.17564212f;
    n += 0.13421528f;
    r2 = n += 0.45555803f;
    n += -0.11339687f;
    n *= r1;
    r1 = n += -1.90637422f;
    n += -2.96267080f;
    n *= -0.86077070f;
    n = r2 *= n;
    r3 = n *= 1.64333975f;
    n *= -6.86734200f;
    r4 = n *= 0.00703239f;
    n = r4 *= n;
    n += r1;
    n = r4 += n;
    n *= r4;
    n += -0.42662907f;
    n *= r2;
    n *= 0.66304106f;
    n = r3 += n;
    n += r0;
    r0 = n *= 0.30091268f;
    n *= -5.58312750f;
    n += r3;
    n *= -0.00015515f;
    n *= -110.18565369f;
    n *= -0.07789151f;
    n += r0;
    return n;
} // Solution1

// Solution2 precision = 0.00000298
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.03491020f;
    r1 = n *= 0.28322923f;
    n += 0.46040636f;
    n += 1.09943283f;
    n += 0.24930565f;
    n += -1.03211176f;
    r2 = n += -0.94217944f;
    n += -0.16514573f;
    n *= r1;
    r1 = n += -1.47913527f;
    n += -3.01616311f;
    n *= 0.53683245f;
    n = r2 *= n;
    r3 = n *= -0.38984376f;
    n *= -1.46517968f;
    r4 = n *= -0.45653126f;
    n = r4 *= n;
    n += r1;
    n = r4 += n;
    n *= r4;
    n += 1.39448762f;
    n *= r2;
    n *= 0.94144219f;
    n = r3 += n;
    n += r0;
    r0 = n *= 0.88923603f;
    n *= 2.34039545f;
    n += r3;
    n *= -0.00080328f;
    n *= -2.34038854f;
    n *= 2.23527408f;
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
