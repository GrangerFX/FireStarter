// Run date: 03/06/23 01:17:49 Pacific Standard Time
// Run duration = 7349.177671 seconds
// Run count = 318
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 2
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run seed = 1
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 318

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

// Precision = 0.00000051

// Solution0 precision = 0.00000007
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    n *= -2.26702929f;
    r1 = n *= 1.40860689f;
    r2 = n *= -0.08243631f;
    n *= r1;
    r1 = n += 2.82482815f;
    n *= -0.03323136f;
    r3 = n += -1.27757168f;
    n *= r3;
    n += 1.65864527f;
    r3 = n += -0.41133556f;
    n *= r3;
    n += 0.36618221f;
    r3 = n *= -1.24492955f;
    n *= -0.32986128f;
    n += r1;
    n *= -0.11847536f;
    n = r2 *= n;
    n *= 1.00480342f;
    r1 = n *= 0.64884114f;
    r4 = n *= 1.45685506f;
    n = r3 *= n;
    n += r0;
    n += r4;
    n = r3 += n;
    n += 0.09344289f;
    n += r2;
    n *= -1.18514431f;
    n += r3;
    n += -0.10555926f;
    n += r1;
    n += 0.21630256f;
    return n;
} // Solution0

// Solution1 precision = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065795f;
    n *= -0.13751319f;
    r1 = n *= -2.30633974f;
    r2 = n *= 0.29711613f;
    n *= r1;
    r1 = n += -1.09226179f;
    n *= -0.57691938f;
    r3 = n += 1.62245357f;
    n *= r3;
    n += -0.97207391f;
    r3 = n += -0.64068919f;
    n *= r3;
    n += -2.38241434f;
    r3 = n *= 2.39588547f;
    n *= -0.06180261f;
    n += r1;
    n *= -0.49606657f;
    n = r2 *= n;
    n *= 2.29863715f;
    r1 = n *= 1.61166382f;
    r4 = n *= 1.69144094f;
    n = r3 *= n;
    n += r0;
    n += r4;
    n = r3 += n;
    n += -1.75858855f;
    n += r2;
    n *= -1.03969169f;
    n += r3;
    n += -1.29325163f;
    n += r1;
    n += -0.65326917f;
    return n;
} // Solution1

// Solution2 precision = 0.00000051
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799359f;
    n *= -1.29950166f;
    r1 = n *= -0.78887153f;
    r2 = n *= 0.03149872f;
    n *= r1;
    r1 = n += 1.47068608f;
    n *= 0.52151638f;
    r3 = n += -1.60179281f;
    n *= r3;
    n += -0.35772040f;
    r3 = n += 1.05514026f;
    n *= r3;
    n += -1.69170690f;
    r3 = n *= 2.52219200f;
    n *= 1.09005547f;
    n += r1;
    n *= 2.60327840f;
    n = r2 *= n;
    n *= -1.22436786f;
    r1 = n *= 1.71809781f;
    r4 = n *= 2.56283307f;
    n = r3 *= n;
    n += r0;
    n += r4;
    n = r3 += n;
    n += -2.14256954f;
    n += r2;
    n *= -0.58474874f;
    n += r3;
    n += -0.24641982f;
    n += r1;
    n += -0.48284668f;
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
