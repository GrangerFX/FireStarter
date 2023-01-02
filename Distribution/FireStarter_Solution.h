// Run date: 01/02/23 13:48:16 Pacific Standard Time
// Run duration = 218.114550 seconds
// Run count = 25
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 25

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

// Precision = 0.00000077

// Solution0 precision = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 0.00751661f;
    n += -1.66323435f;
    r0 = n += -1.48587489f;
    r1 = n *= -0.27712068f;
    n *= 1.08660209f;
    n = r1 *= n;
    r2 = n += -1.71820140f;
    r3 = n += 1.37199318f;
    n *= -0.06709277f;
    r4 = n += 0.18727173f;
    n += -0.35521337f;
    n = r1 *= n;
    n += r3;
    r3 = n *= -0.69756043f;
    r5 = n += 0.21811593f;
    n += -3.21733570f;
    n += -1.52641678f;
    n += r2;
    n *= -0.00212625f;
    n *= 0.14257823f;
    n += 0.96603650f;
    n *= r1;
    n *= 0.00456113f;
    n += 2.89813352f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 1.28630674f;
    n *= r5;
    n += 0.00000001f;
    n *= -0.81517160f;
    return n;
} // Solution0

// Solution1 precision = 0.00000045
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.16931581f;
    n += -1.79298484f;
    r0 = n += 0.87164217f;
    r1 = n *= 0.36934349f;
    n *= -3.98559523f;
    n = r1 *= n;
    r2 = n += 1.96614623f;
    r3 = n += 2.19443703f;
    n *= 0.00242135f;
    r4 = n += 1.72919226f;
    n += -1.71403015f;
    n = r1 *= n;
    n += r3;
    r3 = n *= -0.06409429f;
    r5 = n += -1.32775319f;
    n += 1.38573682f;
    n += 4.90554142f;
    n += r2;
    n *= -0.08267419f;
    n *= 0.26744789f;
    n += -0.52846992f;
    n *= r1;
    n *= 0.27331343f;
    n += -0.60995007f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 0.69292492f;
    n *= r5;
    n += -0.15858115f;
    n *= 0.74492919f;
    return n;
} // Solution1

// Solution2 precision = 0.00000077
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.87121999f;
    n += -1.23145926f;
    r0 = n += 0.48468563f;
    r1 = n *= -0.79933745f;
    n *= -0.07034550f;
    n = r1 *= n;
    r2 = n += 0.32394373f;
    r3 = n += 0.04122343f;
    n *= 0.23553418f;
    r4 = n += 0.40629622f;
    n += -0.17424974f;
    n = r1 *= n;
    n += r3;
    r3 = n *= 1.10961223f;
    r5 = n += -0.09072780f;
    n += -2.30819154f;
    n += -0.89249909f;
    n += r2;
    n *= 3.10432553f;
    n *= -1.02846110f;
    n += 0.25956038f;
    n *= r1;
    n *= -0.01535320f;
    n += 1.81863832f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= -1.36570513f;
    n *= r5;
    n += 0.54748148f;
    n *= 0.95637721f;
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
