// Run date: 05/08/22 15:56:20 Pacific Daylight Time
// Run duration = 4.390547 seconds
// Run count = 12
// Run units = 4
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15
// State Generation = 1100

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

// Precision = 0.000051

// Solution0 precision = 0.000049
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.81665874f;
    r0 = n += -0.64892364f;
    n += -0.64710128f;
    n += -0.56408989f;
    r1 = n += -0.62175673f;
    r2 = n *= -2.98211098f;
    n += r1;
    n = r0 += n;
    r1 = n *= -0.14263427f;
    r3 = n += 0.40693524f;
    r4 = n += 0.40147680f;
    n *= -1.52452123f;
    n *= -0.38905615f;
    n *= r1;
    n *= -0.16961880f;
    r1 = n += 0.82659668f;
    n *= -1.25563264f;
    n *= r2;
    n *= r1;
    n *= -0.64998186f;
    n += 0.92973882f;
    n *= r4;
    r4 = n *= -0.05735860f;
    r1 = n += -1.04120064f;
    n = r4 += n;
    n += r1;
    n = r3 *= n;
    n += -0.93775308f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.11805061f;
    return n;
} // Solution0

// Solution1 precision = 0.000051
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.35364917f;
    r0 = n += 0.23673423f;
    n += -0.03874835f;
    n += -0.87718260f;
    r1 = n += -0.14766489f;
    r2 = n *= -1.58987963f;
    n += r1;
    n = r0 += n;
    r1 = n *= -0.24901292f;
    r3 = n += 1.07359660f;
    r4 = n += -0.43204635f;
    n *= -0.13173382f;
    n *= 0.89360428f;
    n *= r1;
    n *= -0.25573203f;
    r1 = n += -0.31897306f;
    n *= 1.46338415f;
    n *= r2;
    n *= r1;
    n *= -1.08756137f;
    n += 0.55582529f;
    n *= r4;
    r4 = n *= 0.65020841f;
    r1 = n += 1.01840234f;
    n = r4 += n;
    n += r1;
    n = r3 *= n;
    n += -1.50418460f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += -0.03221027f;
    return n;
} // Solution1

// Solution2 precision = 0.000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.73633224f;
    r0 = n += -0.07419630f;
    n += 0.66339821f;
    n += 0.49135557f;
    r1 = n += -0.10441452f;
    r2 = n *= 0.62341774f;
    n += r1;
    n = r0 += n;
    r1 = n *= -0.05213716f;
    r3 = n += 0.37829980f;
    r4 = n += 0.35884655f;
    n *= -0.21751927f;
    n *= 0.66952133f;
    n *= r1;
    n *= 1.25644684f;
    r1 = n += 0.80283582f;
    n *= -1.31082082f;
    n *= r2;
    n *= r1;
    n *= -0.27790976f;
    n += -0.08563997f;
    n *= r4;
    r4 = n *= 0.77566379f;
    r1 = n += 0.84106189f;
    n = r4 += n;
    n += r1;
    n = r3 *= n;
    n += 0.42889085f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.22361983f;
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
