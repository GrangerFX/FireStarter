// Run date: 05/15/22 16:51:38 Pacific Daylight Time
// Run duration = 1.917805 seconds
// Run count = 4
// Run units = 1
// Run population = 4352
// Run iterations = 512
// Run generations = 10
// Run samples = 15
// State Generation = 30

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

// Precision = 0.015091

// Solution0 precision = 0.015091
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.53429163f;
    r1 = n += -0.12690368f;
    r2 = n += -1.89537442f;
    r3 = n += 0.04419501f;
    r4 = n += -0.98665226f;
    r5 = n *= 0.06714568f;
    r6 = n += -0.45771980f;
    n = r2 += n;
    n += 1.07427013f;
    n += r5;
    n *= -0.57304013f;
    n += r3;
    r3 = n += -1.11306655f;
    n *= -0.79834878f;
    n += r6;
    n *= 0.42308578f;
    n *= r3;
    n *= r0;
    r0 = n += -1.05030024f;
    n *= 0.29720503f;
    n *= r2;
    n += 0.01040621f;
    n *= r0;
    n += -0.69200450f;
    n += 0.35854954f;
    n *= r1;
    n += -0.49692303f;
    r1 = n += -0.12143680f;
    n *= 0.87628639f;
    n += 0.24456505f;
    n *= r4;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.008765
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.24687961f;
    r1 = n += -0.77525854f;
    r2 = n += 0.21246701f;
    r3 = n += -0.54822665f;
    r4 = n += -0.01062512f;
    r5 = n *= -0.42125294f;
    r6 = n += -1.14522326f;
    n = r2 += n;
    n += 0.71417528f;
    n += r5;
    n *= -2.87261176f;
    n += r3;
    r3 = n += 0.25501928f;
    n *= 0.34040639f;
    n += r6;
    n *= 1.19133222f;
    n *= r3;
    n *= r0;
    r0 = n += 0.83597475f;
    n *= 4.79328012f;
    n *= r2;
    n += -0.79225290f;
    n *= r0;
    n += -0.58488011f;
    n += -0.04256875f;
    n *= r1;
    n += -1.36501634f;
    r1 = n += 1.44654334f;
    n *= 0.55899549f;
    n += 0.67462784f;
    n *= r4;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.006821
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.41511896f;
    r1 = n += 0.78653967f;
    r2 = n += 0.19860420f;
    r3 = n += 0.79028916f;
    r4 = n += -0.28116947f;
    r5 = n *= -0.54958391f;
    r6 = n += -0.38021240f;
    n = r2 += n;
    n += 0.02561636f;
    n += r5;
    n *= 0.27806088f;
    n += r3;
    r3 = n += 1.27162278f;
    n *= 0.86034584f;
    n += r6;
    n *= 1.31177342f;
    n *= r3;
    n *= r0;
    r0 = n += 0.38023478f;
    n *= -0.86022621f;
    n *= r2;
    n += -0.58825749f;
    n *= r0;
    n += -0.34177169f;
    n += -1.26477575f;
    n *= r1;
    n += -0.61108851f;
    r1 = n += 1.20625532f;
    n *= 0.15234587f;
    n += 0.68081301f;
    n *= r4;
    n += r1;
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
