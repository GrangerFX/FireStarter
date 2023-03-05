// Run date: 03/04/23 19:10:52 Pacific Standard Time
// Run duration = 2558.049167 seconds
// Run count = 14
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 99
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 14

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

// Precision = 0.00047576

// Solution0 precision = 0.00045487
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.05995200f;
    r1 = n += 0.18834421f;
    r2 = n *= 1.04390776f;
    n += 0.01176406f;
    n += -1.33328569f;
    r3 = n += 1.12492990f;
    n *= 1.80153680f;
    r4 = n *= 1.19474542f;
    n *= r3;
    n = r0 += n;
    r3 = n *= -0.16365102f;
    r5 = n += 1.53308737f;
    n = r0 *= n;
    r6 = n += -1.60585701f;
    r7 = n *= 0.92805976f;
    n += 0.04985346f;
    n = r4 *= n;
    n *= -0.96354914f;
    n += 1.22580516f;
    n *= r2;
    n = r4 *= n;
    n *= r3;
    n += r5;
    n *= r0;
    n += r6;
    n = r7 *= n;
    n = r4 *= n;
    n *= r1;
    n += 1.61831391f;
    n += 2.11374998f;
    n *= r7;
    n *= r4;
    return n;
} // Solution0

// Solution1 precision = 0.00021607
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.13564374f;
    r1 = n += -0.40466914f;
    r2 = n *= -1.14191341f;
    n += -1.30079734f;
    n += 1.41626024f;
    r3 = n += 0.79989719f;
    n *= 1.25093234f;
    r4 = n *= -0.25876108f;
    n *= r3;
    n = r0 += n;
    r3 = n *= -0.14242776f;
    r5 = n += -1.58672249f;
    n = r0 *= n;
    r6 = n += -1.56417155f;
    r7 = n *= 1.06503165f;
    n += -1.76262152f;
    n = r4 *= n;
    n *= 0.01379431f;
    n += -0.23292360f;
    n *= r2;
    n = r4 *= n;
    n *= r3;
    n += r5;
    n *= r0;
    n += r6;
    n = r7 *= n;
    n = r4 *= n;
    n *= r1;
    n += -3.45279312f;
    n += -0.60614961f;
    n *= r7;
    n *= r4;
    return n;
} // Solution1

// Solution2 precision = 0.00047576
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.11349745f;
    r1 = n += 0.49435237f;
    r2 = n *= 1.25555182f;
    n += 0.17989211f;
    n += -3.31022501f;
    r3 = n += 2.50959992f;
    n *= 1.52807987f;
    r4 = n *= 0.62635797f;
    n *= r3;
    n = r0 += n;
    r3 = n *= -0.09996030f;
    r5 = n += 0.98679197f;
    n = r0 *= n;
    r6 = n += -1.55881405f;
    r7 = n *= 0.90503109f;
    n += -0.06175024f;
    n = r4 *= n;
    n *= -0.52655739f;
    n += 0.37229398f;
    n *= r2;
    n = r4 *= n;
    n *= r3;
    n += r5;
    n *= r0;
    n += r6;
    n = r7 *= n;
    n = r4 *= n;
    n *= r1;
    n += 1.13223946f;
    n += 5.11426735f;
    n *= r7;
    n *= r4;
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
