// Run date: 11/26/22 12:12:54 Pacific Standard Time
// Run duration = 10.815399 seconds
// Run count = 11
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_UNIT;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 3;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 11

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

// Precision = 0.00088465

// Solution0 precision = 0.00008967
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.78379649f;
    r1 = n *= -0.17516886f;
    n += r0;
    n += 0.41112301f;
    r0 = n += 0.60446012f;
    n *= r0;
    n += -1.08036983f;
    r0 = n *= -0.43098041f;
    r2 = n *= -0.49855888f;
    n *= -0.29192016f;
    r3 = n += 3.39108086f;
    n *= r3;
    n += -0.20577165f;
    r3 = n *= 0.14109683f;
    r4 = n += 0.03277497f;
    n += -0.78271729f;
    r5 = n += -0.39604717f;
    n *= r2;
    r2 = n *= -4.45101357f;
    n += r2;
    n *= 1.46728480f;
    n += r1;
    n *= -0.01016262f;
    n *= 0.09505097f;
    n = r3 += n;
    n *= r3;
    n *= r5;
    n *= r0;
    n *= 0.93419558f;
    n *= r4;
    n += 0.44015667f;
    n += -0.47711197f;
    return n;
} // Solution0

// Solution1 precision = 0.00033820
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.80951649f;
    r1 = n *= -0.57613450f;
    n += r0;
    n += -0.37067288f;
    r0 = n += 0.68712401f;
    n *= r0;
    n += -0.42424470f;
    r0 = n *= 0.31021217f;
    r2 = n *= -0.18373676f;
    n *= 0.58425999f;
    r3 = n += 0.98430097f;
    n *= r3;
    n += -0.67854482f;
    r3 = n *= -4.62499285f;
    r4 = n += -0.77591777f;
    n += 1.69210196f;
    r5 = n += -1.67813373f;
    n *= r2;
    r2 = n *= 4.69348669f;
    n += r2;
    n *= 0.02276601f;
    n += r1;
    n *= 0.37034518f;
    n *= -0.56637990f;
    n = r3 += n;
    n *= r3;
    n *= r5;
    n *= r0;
    n *= -0.66312283f;
    n *= r4;
    n += 0.39124650f;
    n += -0.21432507f;
    return n;
} // Solution1

// Solution2 precision = 0.00088465
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.82797116f;
    r1 = n *= -0.30792457f;
    n += r0;
    n += -0.43140432f;
    r0 = n += 1.22679138f;
    n *= r0;
    n += -1.16167557f;
    r0 = n *= 0.24682730f;
    r2 = n *= 1.83068597f;
    n *= 0.20786484f;
    r3 = n += -4.00038671f;
    n *= r3;
    n += -1.43405962f;
    r3 = n *= 0.20874169f;
    r4 = n += -1.41968942f;
    n += -0.92351025f;
    r5 = n += -0.13385545f;
    n *= r2;
    r2 = n *= 0.02168310f;
    n += r2;
    n *= -3.65348554f;
    n += r1;
    n *= -0.01633216f;
    n *= -4.72713041f;
    n = r3 += n;
    n *= r3;
    n *= r5;
    n *= r0;
    n *= 0.46679243f;
    n *= r4;
    n += 2.41489291f;
    n += -1.75785947f;
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
