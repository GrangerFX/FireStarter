#include <math.h>

// Run date: 03/14/22 20:46:38 Pacific Daylight Time
// Run duration = 0.327203 seconds
// Run count = 8
// Run units = 1
// Run population = 4352
// Run iterations = 1024
// Run generations = 10
// Run samples = 15

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define PROGRAM_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

inline float Target(float n, unsigned int variation)
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
} // Target

// Precision = 0.010211

// Solution0 precision = 0.005860
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.25798649f;
    r1 = n += 0.56508309f;
    r2 = n *= 1.00456166f;
    n += -0.38177973f;
    r3 = n *= 1.51414382f;
    n = r3 += n;
    r4 = n *= 0.69027126f;
    n += r4;
    n *= r1;
    r1 = n += -0.55229557f;
    r4 = n *= -0.28517523f;
    n += 1.03300571f;
    n = r2 *= n;
    n += r3;
    n *= r2;
    n += r1;
    r1 = n *= 1.23937273f;
    r2 = n += -0.66114146f;
    n *= r0;
    n += -0.64134759f;
    n *= 0.05465970f;
    n = r4 += n;
    n *= -1.40305102f;
    n += -0.55475962f;
    n *= -0.43320981f;
    n += 0.58408284f;
    n *= r1;
    n += r4;
    n *= 0.80466300f;
    n += r2;
    n *= -0.35660490f;
    n += 0.19821568f;
    return n;
} // Solution0

// Solution1 precision = 0.007649
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.26633829f;
    r1 = n += -0.09268670f;
    r2 = n *= -0.60841942f;
    n += 0.26112562f;
    r3 = n *= -0.39664826f;
    n = r3 += n;
    r4 = n *= 0.88721102f;
    n += r4;
    n *= r1;
    r1 = n += -0.52647352f;
    r4 = n *= 0.63263881f;
    n += -1.23360932f;
    n = r2 *= n;
    n += r3;
    n *= r2;
    n += r1;
    r1 = n *= -0.47535259f;
    r2 = n += 0.56550974f;
    n *= r0;
    n += -0.40270361f;
    n *= -0.45296210f;
    n = r4 += n;
    n *= 0.62287569f;
    n += -0.76558739f;
    n *= 5.33091545f;
    n += -0.52316147f;
    n *= r1;
    n += r4;
    n *= 0.93735409f;
    n += r2;
    n *= -0.93167192f;
    n += 0.51637965f;
    return n;
} // Solution1

// Solution2 precision = 0.010211
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.83757412f;
    r1 = n += 0.51979625f;
    r2 = n *= 0.08148838f;
    n += -0.77995700f;
    r3 = n *= -3.06325316f;
    n = r3 += n;
    r4 = n *= -0.46029022f;
    n += r4;
    n *= r1;
    r1 = n += -0.38472277f;
    r4 = n *= 0.77613348f;
    n += -0.28591579f;
    n = r2 *= n;
    n += r3;
    n *= r2;
    n += r1;
    r1 = n *= -0.48437712f;
    r2 = n += -1.74471986f;
    n *= r0;
    n += 0.17605370f;
    n *= 0.78391653f;
    n = r4 += n;
    n *= -0.42570168f;
    n += 0.21580119f;
    n *= -0.51629066f;
    n += 1.43242955f;
    n *= r1;
    n += r4;
    n *= -0.39968324f;
    n += r2;
    n *= 0.53644645f;
    n += 0.04300199f;
    return n;
} // Solution2
