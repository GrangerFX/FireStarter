// Run date: 07/03/22 11:01:23 Pacific Daylight Time
// Run duration = 1.208974 seconds
// Run count = 498
// Run mode = 3
// Run clients = 4
// Run process = 0
// Run units = 1
// Run states = 1
// Run population = 69632
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// Run seed = 497
// Solution Generation = 0

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

// Precision = 0.000073

// Solution0 precision = 0.000060
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.29416668f;
    n += -0.81881690f;
    r1 = n *= -0.52855337f;
    r2 = n += 0.49118471f;
    r3 = n += -0.20609841f;
    n += r1;
    r1 = n *= 0.23517880f;
    n += 0.43014893f;
    n *= 0.09299075f;
    r4 = n *= -0.91069078f;
    n *= r0;
    r0 = n += -0.25355199f;
    r5 = n += -0.89445615f;
    r6 = n *= -0.81980944f;
    n += r0;
    n += -0.90976870f;
    n = r2 *= n;
    n *= -0.36498433f;
    n *= -0.55695939f;
    n *= 1.25466406f;
    n = r2 *= n;
    n = r5 += n;
    n = r3 *= n;
    r0 = n += 1.30077124f;
    n *= r1;
    n += r4;
    n += r0;
    n += r2;
    n *= r5;
    n *= r3;
    n += r6;
    n += -0.50545466f;
    return n;
} // Solution0

// Solution1 precision = 0.000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.77758694f;
    n += 0.07798143f;
    r1 = n *= -0.37928435f;
    r2 = n += -0.73885965f;
    r3 = n += 0.75838780f;
    n += r1;
    r1 = n *= -0.13833943f;
    n += -0.13055699f;
    n *= 0.49019259f;
    r4 = n *= -0.59244120f;
    n *= r0;
    r0 = n += 1.06449223f;
    r5 = n += 0.25692922f;
    r6 = n *= -0.64160430f;
    n += r0;
    n += -0.10746750f;
    n = r2 *= n;
    n *= -0.17229107f;
    n *= -0.37528077f;
    n *= -2.53690171f;
    n = r2 *= n;
    n = r5 += n;
    n = r3 *= n;
    r0 = n += 1.35600007f;
    n *= r1;
    n += r4;
    n += r0;
    n += r2;
    n *= r5;
    n *= r3;
    n += r6;
    n += 0.03696078f;
    return n;
} // Solution1

// Solution2 precision = 0.000073
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.47289753f;
    n += -0.48521888f;
    r1 = n *= -0.46184921f;
    r2 = n += -0.12083958f;
    r3 = n += -0.38328421f;
    n += r1;
    r1 = n *= 0.30580682f;
    n += 1.24572003f;
    n *= 2.57374549f;
    r4 = n *= -0.03486373f;
    n *= r0;
    r0 = n += -1.01942503f;
    r5 = n += -0.42421946f;
    r6 = n *= -1.20028627f;
    n += r0;
    n += -0.17221743f;
    n = r2 *= n;
    n *= 0.62624228f;
    n *= -0.54987001f;
    n *= -0.79005033f;
    n = r2 *= n;
    n = r5 += n;
    n = r3 *= n;
    r0 = n += -0.55147934f;
    n *= r1;
    n += r4;
    n += r0;
    n += r2;
    n *= r5;
    n *= r3;
    n += r6;
    n += -0.60577178f;
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
