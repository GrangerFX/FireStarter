// Run date: 05/21/22 13:45:37 Pacific Daylight Time
// Run duration = 2.710455 seconds
// Run count = 45
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 44

#ifndef __CUDACC__
#include <cmath>
#endif

// TARGET //
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
// END //
#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.000037

// Solution0 precision = 0.000037
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.61144745f;
    r0 = n += 0.82335395f;
    n += -0.20972645f;
    n += -0.88711756f;
    n += -0.08409096f;
    r1 = n *= 0.43967617f;
    n = r0 += n;
    n *= 0.73565781f;
    r2 = n *= 0.15932228f;
    r3 = n += -0.47990882f;
    r4 = n += -0.57177109f;
    n *= 1.65788102f;
    n *= 0.06255919f;
    n *= r2;
    n *= -0.61482090f;
    r2 = n += 0.74199814f;
    n *= 0.54320180f;
    n *= r1;
    n *= -0.15609549f;
    n = r2 *= n;
    n += r2;
    n *= r4;
    r4 = n *= 1.46659970f;
    r2 = n += 0.76985949f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.88861173f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.14819501f;
    return n;
} // Solution0

// Solution1 precision = 0.000029
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.54812127f;
    r0 = n += -0.45639130f;
    n += -1.15045619f;
    n += -0.06361149f;
    n += 0.41211045f;
    r1 = n *= -0.59946185f;
    n = r0 += n;
    n *= 0.48896277f;
    r2 = n *= 0.91083503f;
    r3 = n += -0.75894326f;
    r4 = n += -0.73478186f;
    n *= -0.02660282f;
    n *= -1.06269920f;
    n *= r2;
    n *= 1.16109002f;
    r2 = n += -0.88946271f;
    n *= 0.43525785f;
    n *= r1;
    n *= -1.07775378f;
    n = r2 *= n;
    n += r2;
    n *= r4;
    r4 = n *= -0.14727354f;
    r2 = n += 0.91197264f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -1.46226037f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.02253075f;
    return n;
} // Solution1

// Solution2 precision = 0.000035
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.03890818f;
    r0 = n += -0.06409095f;
    n += -0.56218755f;
    n += -0.55199546f;
    n += 0.31396648f;
    r1 = n *= 0.17113262f;
    n = r0 += n;
    n *= -0.80563813f;
    r2 = n *= -0.31470811f;
    r3 = n += -0.77793634f;
    r4 = n += -0.63886690f;
    n *= 0.14912485f;
    n *= -0.57263708f;
    n *= r2;
    n *= -0.56861866f;
    r2 = n += -1.03802860f;
    n *= -0.90470397f;
    n *= r1;
    n *= -1.02688074f;
    n = r2 *= n;
    n += r2;
    n *= r4;
    r4 = n *= -0.12471786f;
    r2 = n += 0.71352190f;
    n = r4 += n;
    n += r2;
    n = r3 *= n;
    n += -0.80050719f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.30485693f;
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
