// Run date: 08/23/22 10:29:47 Pacific Daylight Time
// Run duration = 0.595788 seconds
// Run count = 63
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_CODE;
// Run units = 1;
// Run process = 0;
// Run population = 17408;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 1;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 63

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

// Precision = 0.00917959

// Solution0 precision = 0.00861916
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.41702434f;
    r0 = n += 0.38315862f;
    r1 = n += 0.38236171f;
    n *= 0.80203271f;
    r2 = n *= 0.61301583f;
    n = r1 *= n;
    r3 = n *= 0.19587091f;
    r4 = n += 0.07707640f;
    r5 = n *= 3.24819303f;
    n *= r5;
    r5 = n *= 0.14456527f;
    n *= -0.12271658f;
    n += r2;
    n = r4 += n;
    n = r4 += n;
    n *= -2.03663802f;
    n *= -3.06924748f;
    n *= -0.40031347f;
    n = r3 *= n;
    n *= -0.32946888f;
    n *= 1.80840468f;
    n = r5 += n;
    n *= r3;
    r3 = n += -0.71508032f;
    n += r3;
    n += r1;
    n = r0 *= n;
    n += r0;
    n += r5;
    n *= r4;
    n += -1.08720767f;
    n += 1.87630963f;
    return n;
} // Solution0

// Solution1 precision = 0.00916302
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.34081951f;
    r0 = n += -0.49716723f;
    r1 = n += -0.66043794f;
    n *= 0.40488377f;
    r2 = n *= 0.60178769f;
    n = r1 *= n;
    r3 = n *= -1.07683265f;
    r4 = n += 0.37487364f;
    r5 = n *= 1.31042647f;
    n *= r5;
    r5 = n *= -1.07102001f;
    n *= -0.33999309f;
    n += r2;
    n = r4 += n;
    n = r4 += n;
    n *= 0.50092381f;
    n *= 0.60593688f;
    n *= 0.59446234f;
    n = r3 *= n;
    n *= -5.72839975f;
    n *= 0.73108459f;
    n = r5 += n;
    n *= r3;
    r3 = n += -0.59784973f;
    n += r3;
    n += r1;
    n = r0 *= n;
    n += r0;
    n += r5;
    n *= r4;
    n += 0.56976801f;
    n += 0.67148346f;
    return n;
} // Solution1

// Solution2 precision = 0.00917959
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.50668693f;
    r0 = n += 0.50483525f;
    r1 = n += 0.53402966f;
    n *= 0.89486706f;
    r2 = n *= -0.51976240f;
    n = r1 *= n;
    r3 = n *= 0.52250803f;
    r4 = n += 0.04093210f;
    r5 = n *= 0.60847068f;
    n *= r5;
    r5 = n *= 0.67173380f;
    n *= 0.66813338f;
    n += r2;
    n = r4 += n;
    n = r4 += n;
    n *= -0.59743404f;
    n *= -0.22105949f;
    n *= -3.03013134f;
    n = r3 *= n;
    n *= -2.20607328f;
    n *= 0.15129438f;
    n = r5 += n;
    n *= r3;
    r3 = n += 0.63300794f;
    n += r3;
    n += r1;
    n = r0 *= n;
    n += r0;
    n += r5;
    n *= r4;
    n += 0.55808973f;
    n += 0.58486658f;
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
