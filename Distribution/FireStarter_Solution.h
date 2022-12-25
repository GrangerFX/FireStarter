// Run date: 12/25/22 13:05:42 Pacific Standard Time
// Run duration = 2128.114771 seconds
// Run count = 10484
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_RANDOM;
// Run units = 8;
// Run processes = 16;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 11000;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 10484

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

// Precision = 0.00001296

// Solution0 precision = 0.00001296
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14158630f;
    r1 = n *= 0.26930547f;
    n = r1 *= n;
    n *= -0.71949434f;
    n += 1.94253230f;
    r2 = n *= 0.78052789f;
    r3 = n *= -1.29461205f;
    n *= 1.81994677f;
    n *= -0.11523640f;
    r4 = n *= 1.49700534f;
    n = r3 *= n;
    r5 = n *= -1.40605462f;
    r6 = n *= -0.03199394f;
    n = r1 *= n;
    r7 = n *= 0.75032932f;
    n *= r2;
    n *= 1.14337111f;
    n += -1.71823239f;
    n += 1.53844404f;
    n *= -3.57852674f;
    n = r6 *= n;
    n += -0.65249664f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 0.76150441f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.00000048f;
    return n;
} // Solution0

// Solution1 precision = 0.00000912
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09066439f;
    r1 = n *= 0.34557953f;
    n = r1 *= n;
    n *= 1.10672367f;
    n += -5.09385014f;
    r2 = n *= -0.60678077f;
    r3 = n *= -0.46594661f;
    n *= 1.21066165f;
    n *= -0.11035255f;
    r4 = n *= 0.44817811f;
    n = r3 *= n;
    r5 = n *= -1.39707029f;
    r6 = n *= -0.57412475f;
    n = r1 *= n;
    r7 = n *= -4.81458473f;
    n *= r2;
    n *= 1.03904939f;
    n += 0.13618442f;
    n += -0.86348003f;
    n *= 2.50821614f;
    n = r6 *= n;
    n += -0.00079167f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 55.02058411f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.11813450f;
    return n;
} // Solution1

// Solution2 precision = 0.00000346
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799312f;
    r1 = n *= -0.83708006f;
    n = r1 *= n;
    n *= -0.01513972f;
    n += 1.68833935f;
    r2 = n *= -0.54997492f;
    r3 = n *= -1.76414824f;
    n *= -1.02159536f;
    n *= 0.73751861f;
    r4 = n *= -0.55228257f;
    n = r3 *= n;
    r5 = n *= -1.82198620f;
    r6 = n *= 0.07641655f;
    n = r1 *= n;
    r7 = n *= 0.39373621f;
    n *= r2;
    n *= -4.55428791f;
    n += 2.57851529f;
    n += -2.05403876f;
    n *= 0.29011506f;
    n = r6 *= n;
    n += -0.07515255f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 0.73796701f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.52359742f;
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
