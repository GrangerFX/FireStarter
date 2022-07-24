// Run date: 07/24/22 16:20:29 Pacific Daylight Time
// Run duration = 3.706194 seconds
// Run count = 4
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;
// Run variations = 3;
// Run samples = 15;

// Run sampleMin = 0.000000f;
// Run sampleMax = 6.283185f;
// Run evolveFactor = 0.100000f;
// Run evolveStartFactor = 4.000000f;
// Run evolveStartResult = 10.000000f;
// Run evolveCandidates = 16;

// Run mode = FIRESTARTER_CODE;
// Run states = 1;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run generations = 10;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_INDIVIDUAL;
// Run attempts = 32;
// Run seed = 0;
// Solution Generation = 30

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

// Precision = 0.02390504

// Solution0 precision = 0.01298100
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.64246106f;
    n += 0.17612727f;
    r1 = n += 1.04611313f;
    n *= 0.42246303f;
    n += -0.03215438f;
    r2 = n *= 0.30190206f;
    r3 = n += -0.60589725f;
    r4 = n += -0.87482631f;
    r5 = n += 0.44149092f;
    n *= 0.79001725f;
    r6 = n *= -0.15949486f;
    n += r1;
    n *= 0.35787490f;
    n += -0.76410139f;
    n = r3 *= n;
    n *= -0.12165428f;
    r1 = n += 0.20795457f;
    n *= -2.15011048f;
    n += -0.67151946f;
    n += -0.86539227f;
    n += r6;
    n = r2 += n;
    n *= r2;
    n = r0 += n;
    n += -0.26239455f;
    n *= r5;
    n *= -3.58512163f;
    n *= r0;
    n *= r4;
    n *= r3;
    n += 0.80090654f;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 0.02088118
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.57171398f;
    n += 1.89339292f;
    r1 = n += 0.40740618f;
    n *= 0.27737555f;
    n += -1.05340993f;
    r2 = n *= -0.29025924f;
    r3 = n += 0.47064140f;
    r4 = n += 0.47215119f;
    r5 = n += 0.39166102f;
    n *= -0.12202321f;
    r6 = n *= 2.51847744f;
    n += r1;
    n *= -0.34804109f;
    n += -0.39430287f;
    n = r3 *= n;
    n *= -2.52993679f;
    r1 = n += 1.03298247f;
    n *= 0.28352210f;
    n += -0.17177568f;
    n += -0.00943008f;
    n += r6;
    n = r2 += n;
    n *= r2;
    n = r0 += n;
    n += -0.82979059f;
    n *= r5;
    n *= 0.13325895f;
    n *= r0;
    n *= r4;
    n *= r3;
    n += 0.43496150f;
    n *= r1;
    return n;
} // Solution1

// Solution2 precision = 0.02390504
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.13665335f;
    n += -0.67270005f;
    r1 = n += -2.70361996f;
    n *= 0.25662163f;
    n += -0.34566629f;
    r2 = n *= -0.82287300f;
    r3 = n += 0.70383656f;
    r4 = n += -0.73788375f;
    r5 = n += 0.87404889f;
    n *= -0.20078860f;
    r6 = n *= 2.64048100f;
    n += r1;
    n *= -0.60041571f;
    n += -0.81319875f;
    n = r3 *= n;
    n *= -0.05305718f;
    r1 = n += 0.75171793f;
    n *= 0.95119733f;
    n += 1.44824564f;
    n += -1.03993189f;
    n += r6;
    n = r2 += n;
    n *= r2;
    n = r0 += n;
    n += -1.02385914f;
    n *= r5;
    n *= 0.40205789f;
    n *= r0;
    n *= r4;
    n *= r3;
    n += 0.39509040f;
    n *= r1;
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
