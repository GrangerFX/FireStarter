// Run date: 11/24/22 13:04:38 Pacific Standard Time
// Run duration = 38.533324 seconds
// Run count = 51
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 51

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

// Precision = 0.00000620

// Solution0 precision = 0.00000173
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    n += 0.00000000f;
    r1 = n *= -0.16419411f;
    n = r1 *= n;
    n *= 0.52708405f;
    n *= 2.93779874f;
    r2 = n += -2.07166815f;
    r3 = n *= 4.07837963f;
    n += 13.96000957f;
    n += r3;
    r3 = n *= -0.06762912f;
    r4 = n += 2.72481179f;
    n = r1 += n;
    r5 = n += -3.44128299f;
    r6 = n *= -0.08908921f;
    n *= r1;
    r1 = n *= 0.05325428f;
    n += r2;
    n *= r5;
    r5 = n *= 0.48969042f;
    n = r5 *= n;
    n += r6;
    n *= r4;
    n += 13.75687408f;
    n *= r3;
    n += 0.40808743f;
    n *= r1;
    n = r5 *= n;
    n += r5;
    n *= -76.36306763f;
    n *= r0;
    n += -0.00000007f;
    return n;
} // Solution0

// Solution1 precision = 0.00000620
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09066248f;
    n += 0.00000713f;
    r1 = n *= 0.07023121f;
    n = r1 *= n;
    n *= 2.88522720f;
    n *= 2.62185001f;
    r2 = n += -0.33997360f;
    r3 = n *= -45.97430801f;
    n += -5.87383270f;
    n += r3;
    r3 = n *= -0.00065369f;
    r4 = n += -0.87004656f;
    n = r1 += n;
    r5 = n += -0.04017678f;
    r6 = n *= -4.55466509f;
    n *= r1;
    r1 = n *= 0.25678602f;
    n += r2;
    n *= r5;
    r5 = n *= -0.29069951f;
    n = r5 *= n;
    n += r6;
    n *= r4;
    n += 7.04311991f;
    n *= r3;
    n += 3.94648290f;
    n *= r1;
    n = r5 *= n;
    n += r5;
    n *= 1.19607854f;
    n *= r0;
    n += -0.11813644f;
    return n;
} // Solution1

// Solution2 precision = 0.00000072
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799359f;
    n += -0.00000028f;
    r1 = n *= 0.30961695f;
    n = r1 *= n;
    n *= 0.37067536f;
    n *= -0.48912820f;
    r2 = n += -0.62096626f;
    r3 = n *= -3.06070423f;
    n += 6.30401659f;
    n += r3;
    r3 = n *= 0.00138788f;
    r4 = n += -0.49246821f;
    n = r1 += n;
    r5 = n += -17.57951355f;
    r6 = n *= 0.03888271f;
    n *= r1;
    r1 = n *= -0.67243153f;
    n += r2;
    n *= r5;
    r5 = n *= -0.14343895f;
    n = r5 *= n;
    n += r6;
    n *= r4;
    n += 0.16637076f;
    n *= r3;
    n += -0.87547946f;
    n *= r1;
    n = r5 *= n;
    n += r5;
    n *= -0.51071912f;
    n *= r0;
    n += 0.52359891f;
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
