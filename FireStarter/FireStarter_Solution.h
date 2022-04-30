// Run date: 04/30/22 12:16:45 Pacific Daylight Time
// Run duration = 1.797188 seconds
// Run count = 3
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// State Generation = 1

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

// Precision = 0.000074

// Solution0 precision = 0.000045
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.11795783f;
    r0 = n += 0.09739529f;
    n += -1.19461954f;
    n += -0.71373934f;
    n += 0.37512466f;
    r1 = n *= -0.32536808f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.11399829f;
    r3 = n += -0.39675587f;
    r4 = n += -0.42648122f;
    n *= -0.11304767f;
    n *= 1.69625342f;
    n *= r2;
    n *= 0.68229514f;
    r2 = n += 1.25512552f;
    n *= 0.52519077f;
    n *= r1;
    n *= r2;
    n *= -0.44159222f;
    n += 0.10215371f;
    n *= r4;
    r4 = n *= -0.62245929f;
    r2 = n += 0.90786117f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.94820035f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.27739686f;
    return n;
} // Solution0

// Solution1 precision = 0.000074
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.84180599f;
    r0 = n += 0.28769711f;
    n += 1.02964985f;
    n += -0.84789538f;
    n += -0.88141477f;
    r1 = n *= -0.50862765f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.11180157f;
    r3 = n += 0.26551583f;
    r4 = n += 0.53081810f;
    n *= -1.30726707f;
    n *= -1.59065688f;
    n *= r2;
    n *= 0.06824467f;
    r2 = n += -1.11882949f;
    n *= 0.55831927f;
    n *= r1;
    n *= r2;
    n *= -1.22512376f;
    n += 0.28526622f;
    n *= r4;
    r4 = n *= 0.24460110f;
    r2 = n += 0.99220687f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 1.21694148f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.73952115f;
    return n;
} // Solution1

// Solution2 precision = 0.000062
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.18041968f;
    r0 = n += -0.44677383f;
    n += -0.42277250f;
    n += 0.27053776f;
    n += -0.86263090f;
    r1 = n *= 0.49884644f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.05678177f;
    r3 = n += 0.75617015f;
    r4 = n += -0.21540973f;
    n *= 1.20752692f;
    n *= -0.34366751f;
    n *= r2;
    n *= -0.53584605f;
    r2 = n += -1.50937235f;
    n *= 1.01308084f;
    n *= r1;
    n *= r2;
    n *= -0.27535796f;
    n += -0.22646786f;
    n *= r4;
    r4 = n *= -0.25486439f;
    r2 = n += 0.76543379f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.75095487f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.78393763f;
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
