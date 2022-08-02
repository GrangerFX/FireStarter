// Run date: 08/02/22 12:23:37 Pacific Daylight Time
// Run duration = 2.335814 seconds
// Run count = 23
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
// Run generations = 5;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Solution Generation = 110

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

// Precision = 0.00820851

// Solution0 precision = 0.00815880
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.24804732f;
    r1 = n += 0.16614446f;
    n *= -0.54682571f;
    r2 = n *= -0.77694398f;
    n *= 0.74402612f;
    n *= -0.17869745f;
    n = r2 += n;
    r3 = n *= -0.90752685f;
    r4 = n *= -0.36046472f;
    r5 = n += -0.90167987f;
    n = r1 *= n;
    n += -0.22869837f;
    n = r1 *= n;
    r6 = n += -0.35072771f;
    n = r5 += n;
    n *= r3;
    n = r6 += n;
    n += r5;
    n += -0.41728371f;
    n += -0.44305715f;
    n += -0.80104911f;
    n *= -0.47964817f;
    n += -0.51070029f;
    n *= r0;
    n += 1.15695167f;
    n = r4 *= n;
    n *= r1;
    n *= 1.35381472f;
    n *= r2;
    n += r4;
    n *= 0.00470175f;
    n += r6;
    return n;
} // Solution0

// Solution1 precision = 0.00820851
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.13048351f;
    r1 = n += 1.58226955f;
    n *= -0.95233822f;
    r2 = n *= 0.53232181f;
    n *= -0.01046398f;
    n *= -0.54229450f;
    n = r2 += n;
    r3 = n *= 0.64756638f;
    r4 = n *= -0.31949160f;
    r5 = n += -0.76694852f;
    n = r1 *= n;
    n += -0.45345965f;
    n = r1 *= n;
    r6 = n += 0.63334441f;
    n = r5 += n;
    n *= r3;
    n = r6 += n;
    n += r5;
    n += 0.27345556f;
    n += 0.40905944f;
    n += 0.96054542f;
    n *= -0.07532357f;
    n += 4.79154158f;
    n *= r0;
    n += -0.91723609f;
    n = r4 *= n;
    n *= r1;
    n *= 0.78125089f;
    n *= r2;
    n += r4;
    n *= 0.00344244f;
    n += r6;
    return n;
} // Solution1

// Solution2 precision = 0.00372142
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.55333877f;
    r1 = n += -0.19345888f;
    n *= 0.90248948f;
    r2 = n *= -0.41698280f;
    n *= 0.02878025f;
    n *= -1.01470709f;
    n = r2 += n;
    r3 = n *= 0.60233581f;
    r4 = n *= 0.79496831f;
    r5 = n += 1.05199909f;
    n = r1 *= n;
    n += 1.08047307f;
    n = r1 *= n;
    r6 = n += -0.43702060f;
    n = r5 += n;
    n *= r3;
    n = r6 += n;
    n += r5;
    n += 0.16179293f;
    n += -2.52612591f;
    n += 0.13381404f;
    n *= 0.37646639f;
    n += 0.03990501f;
    n *= r0;
    n += -0.76297879f;
    n = r4 *= n;
    n *= r1;
    n *= -0.05676384f;
    n *= r2;
    n += r4;
    n *= 0.21774189f;
    n += r6;
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
