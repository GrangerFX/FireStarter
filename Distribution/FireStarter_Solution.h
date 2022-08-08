// Run date: 08/08/22 11:49:10 Pacific Daylight Time
// Run duration = 2.556708 seconds
// Run count = 63
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run process = 0;
// Run population = 139264;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 6300

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

// Precision = 0.00001431

// Solution0 precision = 0.00000125
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= 0.94056439f;
    n *= -0.92171502f;
    r2 = n *= 0.10044926f;
    n = r1 *= n;
    n *= 1.09632421f;
    r3 = n += 0.81708294f;
    n = r1 += n;
    n *= 0.27432269f;
    r4 = n += 1.09672928f;
    r5 = n *= 0.92933607f;
    n *= r3;
    n *= r4;
    r4 = n += 0.92466581f;
    n += r1;
    n *= r0;
    n *= 0.96410960f;
    n *= 0.29481804f;
    r0 = n *= 0.93403387f;
    n += -0.09627601f;
    n += 0.09664621f;
    n *= r4;
    n *= -0.00163231f;
    n *= r2;
    n += -1.23589849f;
    n = r0 *= n;
    n *= 0.66618282f;
    n = r5 *= n;
    n += -0.00000080f;
    n += r0;
    n *= 0.09687015f;
    n += r5;
    return n;
} // Solution0

// Solution1 precision = 0.00000072
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065890f;
    r1 = n *= -0.44876930f;
    n *= -0.60112691f;
    r2 = n *= 0.28449434f;
    n = r1 *= n;
    n *= -0.02024692f;
    r3 = n += 0.44706753f;
    n = r1 += n;
    n *= 5.04745054f;
    r4 = n += -0.21989869f;
    r5 = n *= 0.01059704f;
    n *= r3;
    n *= r4;
    r4 = n += 1.08289802f;
    n += r1;
    n *= r0;
    n *= -0.75330490f;
    n *= 1.23403227f;
    r0 = n *= -1.07877612f;
    n += -0.43854630f;
    n += 0.43854797f;
    n *= r4;
    n *= -0.47374338f;
    n *= r2;
    n += 0.71938330f;
    n = r0 *= n;
    n *= 0.56292659f;
    n = r5 *= n;
    n += 0.12003377f;
    n += r0;
    n *= -0.98415804f;
    n += r5;
    return n;
} // Solution1

// Solution2 precision = 0.00001431
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799455f;
    r1 = n *= -0.81120318f;
    n *= -0.22953999f;
    r2 = n *= -0.71036720f;
    n = r1 *= n;
    n *= 0.19934008f;
    r3 = n += -0.94881952f;
    n = r1 += n;
    n *= 0.51261252f;
    r4 = n += 0.30707210f;
    r5 = n *= 1.63160956f;
    n *= r3;
    n *= r4;
    r4 = n += 0.33820996f;
    n += r1;
    n *= r0;
    n *= 0.60470492f;
    n *= 1.34995186f;
    r0 = n *= -0.59919691f;
    n += -0.08130354f;
    n += 0.08290872f;
    n *= r4;
    n *= 0.09933581f;
    n *= r2;
    n += 2.12295938f;
    n = r0 *= n;
    n *= -1.49842596f;
    n = r5 *= n;
    n += -0.39710444f;
    n += r0;
    n *= -1.31853509f;
    n += r5;
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
