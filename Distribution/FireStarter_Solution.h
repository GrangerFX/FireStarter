// Run date: 06/25/22 21:02:10 Pacific Daylight Time
// Run duration = 2.970545 seconds
// Run count = 4
// Run units = 1
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Solution Generation = 3

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

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.000215

// Solution0 precision = 0.000215
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n *= -1.68400705f;
    r0 = n += 0.19001830f;
    r1 = n += 4.75974321f;
    r2 = n *= -0.70285398f;
    r3 = n *= -0.77979225f;
    r4 = n *= -0.75484228f;
    r5 = n *= 0.11583681f;
    r6 = n += -0.41327268f;
    r7 = n *= -0.60860044f;
    r8 = n += -0.89845031f;
    n *= r7;
    n *= r8;
    n = r4 *= n;
    r8 = n *= -1.29553068f;
    n += -0.50426018f;
    n += 1.30485189f;
    n *= r5;
    n += 1.57251394f;
    n += r3;
    r3 = n *= 0.62762010f;
    n += r1;
    n += r6;
    n += r2;
    n *= -0.64410073f;
    n += -1.82522357f;
    n *= r0;
    n *= r8;
    r8 = n += 0.20108873f;
    n *= r3;
    n *= 0.89793867f;
    n *= r4;
    n += r8;
    return n;
} // Solution0

// Solution1 precision = 0.000163
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n *= -0.12687252f;
    r0 = n += -1.10201657f;
    r1 = n += 1.50949705f;
    r2 = n *= -2.17257166f;
    r3 = n *= 1.15869462f;
    r4 = n *= -1.06836784f;
    r5 = n *= -0.41734788f;
    r6 = n += -0.63415140f;
    r7 = n *= 0.47414657f;
    r8 = n += 1.01271415f;
    n *= r7;
    n *= r8;
    n = r4 *= n;
    r8 = n *= -1.84633934f;
    n += 1.58352220f;
    n += 1.38894928f;
    n *= r5;
    n += -2.33577418f;
    n += r3;
    r3 = n *= 0.89993608f;
    n += r1;
    n += r6;
    n += r2;
    n *= 1.62797987f;
    n += -2.86648488f;
    n *= r0;
    n *= r8;
    r8 = n += -0.25116357f;
    n *= r3;
    n *= -1.22346258f;
    n *= r4;
    n += r8;
    return n;
} // Solution1

// Solution2 precision = 0.000078
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n *= -0.39624316f;
    r0 = n += 1.03519320f;
    r1 = n += -0.93677425f;
    r2 = n *= -1.96281779f;
    r3 = n *= -0.80537999f;
    r4 = n *= -1.27313316f;
    r5 = n *= -0.24702896f;
    r6 = n += -1.01253796f;
    r7 = n *= 0.29290602f;
    r8 = n += 1.13259244f;
    n *= r7;
    n *= r8;
    n = r4 *= n;
    r8 = n *= -1.42313266f;
    n += -1.02134562f;
    n += -0.54857874f;
    n *= r5;
    n += 2.57953691f;
    n += r3;
    r3 = n *= -0.66189682f;
    n += r1;
    n += r6;
    n += r2;
    n *= -2.37451673f;
    n += -0.92057848f;
    n *= r0;
    n *= r8;
    r8 = n += 0.34337267f;
    n *= r3;
    n *= 1.30641270f;
    n *= r4;
    n += r8;
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
