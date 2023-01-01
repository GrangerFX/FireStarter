// Run date: 01/01/23 11:07:51 Pacific Standard Time
// Run duration = 26.950190 seconds
// Run count = 203
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
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 203

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

// Precision = 0.00000054

// Solution0 precision = 0.00000003
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.47668588f;
    n += -1.48984218f;
    r0 = n += -0.17506459f;
    r1 = n *= 0.99690312f;
    n *= 0.91373259f;
    n = r1 *= n;
    r2 = n += -1.16533327f;
    r3 = n += -4.30085468f;
    n *= 0.00093868f;
    r4 = n += -1.49024308f;
    n += 1.49213815f;
    n = r1 *= n;
    n += r3;
    r3 = n *= 0.08436602f;
    r5 = n += -0.29887652f;
    n += 2.48549247f;
    n += 1.69562471f;
    n += r2;
    n *= -0.33640718f;
    n *= 0.03057181f;
    n += 1.81695187f;
    n *= r1;
    n *= -0.60552818f;
    n += -1.96343207f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= -2.60762358f;
    n *= r5;
    n += -0.00000037f;
    n *= 0.05739750f;
    return n;
} // Solution0

// Solution1 precision = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 1.80371451f;
    n += -4.50321341f;
    r0 = n += -0.39115995f;
    r1 = n *= -2.34507656f;
    n *= -0.27305540f;
    n = r1 *= n;
    r2 = n += -2.28018308f;
    r3 = n += 6.72230959f;
    n *= 0.00269856f;
    r4 = n += 0.85750848f;
    n += -1.03336418f;
    n = r1 *= n;
    n += r3;
    r3 = n *= 0.02229979f;
    r5 = n += 0.98809946f;
    n += -1.88492000f;
    n += -1.04826033f;
    n += r2;
    n *= 2.64915752f;
    n *= 0.94389665f;
    n += -6.84955788f;
    n *= r1;
    n *= 0.00006407f;
    n += 0.60729605f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= -0.73833919f;
    n *= r5;
    n += -0.03739691f;
    n *= 3.15887117f;
    return n;
} // Solution1

// Solution2 precision = 0.00000054
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.10864671f;
    n += -0.22695877f;
    r0 = n += -2.28238821f;
    r1 = n *= 0.20917778f;
    n *= -1.78517675f;
    n = r1 *= n;
    r2 = n += -0.45766842f;
    r3 = n += 1.46292222f;
    n *= 0.02407200f;
    r4 = n += 1.45033693f;
    n += -1.49665821f;
    n = r1 *= n;
    n += r3;
    r3 = n *= -1.60488343f;
    r5 = n += 1.00829279f;
    n += -4.38096333f;
    n += -2.70444608f;
    n += r2;
    n *= -1.16517377f;
    n *= 1.23278809f;
    n += -3.32850575f;
    n *= r1;
    n *= -1.11354244f;
    n += -0.91823196f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= -0.46090981f;
    n *= r5;
    n += -1.37978911f;
    n *= -0.37947735f;
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
