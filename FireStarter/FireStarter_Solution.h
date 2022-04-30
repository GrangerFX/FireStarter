// Run date: 04/30/22 12:21:43 Pacific Daylight Time
// Run duration = 1.214367 seconds
// Run count = 17
// Run units = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// State Generation = 1400

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

// Precision = 0.000151

// Solution0 precision = 0.000056
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.71015692f;
    r1 = n += -1.16117036f;
    r2 = n *= 0.19415776f;
    r3 = n += 0.99601644f;
    n *= 3.32263780f;
    n = r2 += n;
    r4 = n *= 0.05537468f;
    n += 0.12120954f;
    r5 = n += 0.18153118f;
    n = r1 += n;
    n *= 0.12513642f;
    n = r3 *= n;
    n += 0.28938457f;
    r6 = n += -0.29109257f;
    n += r4;
    n *= -0.76982999f;
    n += 0.58819258f;
    n = r1 *= n;
    n += 0.71266526f;
    r4 = n *= 6.37268257f;
    n *= 0.55077678f;
    n += r0;
    n *= r1;
    n += r2;
    n += -2.79902244f;
    n *= 0.01529343f;
    n += -0.16298851f;
    n += -0.28933388f;
    n += r6;
    n *= r5;
    n *= r4;
    n += r3;
    return n;
} // Solution0

// Solution1 precision = 0.000052
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.09291635f;
    r1 = n += -0.99859172f;
    r2 = n *= 0.54801714f;
    r3 = n += -1.01617336f;
    n *= 0.94974750f;
    n = r2 += n;
    r4 = n *= 0.00543440f;
    n += -1.18932211f;
    r5 = n += -1.55336034f;
    n = r1 += n;
    n *= 0.02009995f;
    n = r3 *= n;
    n += 0.00623952f;
    r6 = n += -0.02638526f;
    n += r4;
    n *= 1.02907276f;
    n += -0.47031921f;
    n = r1 *= n;
    n += -0.31906515f;
    r4 = n *= 2.00067306f;
    n *= -2.35547256f;
    n += r0;
    n *= r1;
    n += r2;
    n += -0.05968599f;
    n *= -0.01512589f;
    n += 0.27490032f;
    n += -0.62760174f;
    n += r6;
    n *= r5;
    n *= r4;
    n += r3;
    return n;
} // Solution1

// Solution2 precision = 0.000151
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.66987753f;
    r1 = n += 1.00801635f;
    r2 = n *= 0.25279346f;
    r3 = n += 0.50649554f;
    n *= 0.16938774f;
    n = r2 += n;
    r4 = n *= -0.00514990f;
    n += -1.14524484f;
    r5 = n += 0.35263869f;
    n = r1 += n;
    n *= -0.38998848f;
    n = r3 *= n;
    n += 0.49775907f;
    r6 = n += 0.71118248f;
    n += r4;
    n *= 0.50730163f;
    n += 1.13416791f;
    n = r1 *= n;
    n += 0.67309856f;
    r4 = n *= 1.20017290f;
    n *= -0.57435399f;
    n += r0;
    n *= r1;
    n += r2;
    n += -0.19266738f;
    n *= 0.09350684f;
    n += 0.12089388f;
    n += -1.10300529f;
    n += r6;
    n *= r5;
    n *= r4;
    n += r3;
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
