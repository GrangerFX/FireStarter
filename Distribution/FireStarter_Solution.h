// Run date: 10/09/22 11:02:36 Pacific Daylight Time
// Run duration = 0.100756 seconds
// Run count = 176
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 2;
// Run processes = 6;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 100;
// Run seed = 7988;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 176

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

// Precision = 0.00002091

// Solution0 precision = 0.00002091
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.22520895f;
    r0 = n += 0.39795217f;
    r1 = n += 0.30956283f;
    r2 = n *= -0.25716376f;
    r3 = n += 1.01759613f;
    n = r3 += n;
    n += r0;
    n += 0.19614297f;
    n = r3 *= n;
    n += 2.33994031f;
    r0 = n += -1.24777842f;
    n += -1.13738334f;
    n = r1 *= n;
    r4 = n *= -0.04544495f;
    n *= 0.39080545f;
    n *= 0.45070216f;
    n *= 7.75416422f;
    n = r1 *= n;
    r5 = n += 1.24054599f;
    n = r1 += n;
    n = r3 += n;
    n *= -0.82032377f;
    n += 1.90660989f;
    n *= r1;
    n *= r3;
    n += r5;
    n *= r4;
    n += r2;
    n *= r0;
    n *= -3.27454543f;
    n += 0.00006485f;
    n *= -0.12728421f;
    return n;
} // Solution0

// Solution1 precision = 0.00002009
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.20590924f;
    r0 = n += -0.02623747f;
    r1 = n += -0.61015785f;
    r2 = n *= 0.48519376f;
    r3 = n += -0.63665736f;
    n = r3 += n;
    n += r0;
    n += 3.24864578f;
    n = r3 *= n;
    n += 0.62687445f;
    r0 = n += -1.28811443f;
    n += 0.54779822f;
    n = r1 *= n;
    r4 = n *= 1.23984730f;
    n *= 0.24637383f;
    n *= -0.00359960f;
    n *= 1.25234210f;
    n = r1 *= n;
    r5 = n += 0.72850257f;
    n = r1 += n;
    n = r3 += n;
    n *= -0.54502165f;
    n += 0.51331109f;
    n *= r1;
    n *= r3;
    n += r5;
    n *= r4;
    n += r2;
    n *= r0;
    n *= -0.57520837f;
    n += 0.62735760f;
    n *= -0.18830228f;
    return n;
} // Solution1

// Solution2 precision = 0.00001979
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.09776172f;
    r0 = n += 1.07905078f;
    r1 = n += -0.82313055f;
    r2 = n *= -1.56993854f;
    r3 = n += -0.09412771f;
    n = r3 += n;
    n += r0;
    n += -0.50689024f;
    n = r3 *= n;
    n += 2.44660640f;
    r0 = n += -11.49030399f;
    n += 0.51149511f;
    n = r1 *= n;
    r4 = n *= 0.18710344f;
    n *= -0.50563449f;
    n *= 0.56709653f;
    n *= -0.60153228f;
    n = r1 *= n;
    r5 = n += -0.71516466f;
    n = r1 += n;
    n = r3 += n;
    n *= 0.57780325f;
    n += -3.69850397f;
    n *= r1;
    n *= r3;
    n += r5;
    n *= r4;
    n += r2;
    n *= r0;
    n *= -0.11310294f;
    n += 0.16106404f;
    n *= 3.25216889f;
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
