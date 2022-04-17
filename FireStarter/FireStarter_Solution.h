// Run date: 04/17/22 16:00:21 Pacific Daylight Time
// Run duration = 1.005432 seconds
// Run count = 17
// Run units = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15

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

// Precision = 0.000027

// Solution0 precision = 0.000017
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.76211852f;
    r0 = n += 0.52950209f;
    n += -0.57006919f;
    n += -0.28943241f;
    n += -0.13756576f;
    r1 = n *= -0.16280052f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.11883994f;
    r3 = n += -0.60971540f;
    r4 = n += -0.62536252f;
    n *= -1.17169988f;
    n *= -1.70894825f;
    n *= r2;
    n *= -0.02200197f;
    r2 = n += 0.72032058f;
    n *= 0.92621845f;
    n *= r1;
    n *= r2;
    n *= -1.14707673f;
    n += 0.01337615f;
    n *= r4;
    r4 = n *= -0.48827618f;
    r2 = n += 0.66172075f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.84103703f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.03873465f;
    return n;
} // Solution0

// Solution1 precision = 0.000027
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.19010785f;
    r0 = n += 0.99377382f;
    n += -0.58627933f;
    n += -0.13483630f;
    n += -0.68699127f;
    r1 = n *= -0.74977672f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.21440966f;
    r3 = n += -0.87874985f;
    r4 = n += -0.60900509f;
    n *= 0.10870305f;
    n *= -0.68579477f;
    n *= r2;
    n *= -1.09197748f;
    r2 = n += -0.88023889f;
    n *= -1.14754701f;
    n *= r1;
    n *= r2;
    n *= -1.28950250f;
    n += -0.34216809f;
    n *= r4;
    r4 = n *= 0.15341708f;
    r2 = n += 0.73282444f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.89086658f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.20167467f;
    return n;
} // Solution1

// Solution2 precision = 0.000006
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 1.20190692f;
    r0 = n += -1.00089824f;
    n += -0.89775354f;
    n += 0.25746882f;
    n += -1.02722597f;
    r1 = n *= 1.45407379f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.03013764f;
    r3 = n += -0.64967090f;
    r4 = n += 0.24030095f;
    n *= -1.57465744f;
    n *= -0.89256704f;
    n *= r2;
    n *= 0.09520862f;
    r2 = n += -0.69360507f;
    n *= 2.73193860f;
    n *= r1;
    n *= r2;
    n *= 0.28899583f;
    n += 0.45903072f;
    n *= r4;
    r4 = n *= -0.15750532f;
    r2 = n += 0.72342604f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += 0.68674523f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.96755344f;
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
