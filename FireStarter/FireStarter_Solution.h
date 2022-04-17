// Run date: 04/17/22 16:20:33 Pacific Daylight Time
// Run duration = 2.257442 seconds
// Run count = 15
// Run units = 1
// Run population = 34816
// Run iterations = 256
// Run generations = 100
// Run samples = 15

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

// Precision = 0.000052

// Solution0 precision = 0.000039
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.47433037f;
    r0 = n += -0.10081054f;
    n += -1.16427481f;
    n += -0.53363270f;
    n += 1.33042443f;
    r1 = n *= -0.51460683f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.10431962f;
    r3 = n += 0.28057528f;
    r4 = n += 0.35031155f;
    n *= -1.07668090f;
    n *= 0.92703176f;
    n *= r2;
    n *= -1.17442846f;
    n += -2.37804031f;
    n *= 3.36102796f;
    n *= r1;
    n *= 0.00779645f;
    r1 = n *= 0.93121952f;
    n += r1;
    n *= r4;
    r4 = n *= 2.68648672f;
    r1 = n += 1.23172033f;
    n = r4 += n;
    n += r1;
    n = r3 *= n;
    n += 0.87118202f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.18451053f;
    return n;
} // Solution0

// Solution1 precision = 0.000029
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.00786980f;
    r0 = n += -0.09210103f;
    n += 0.14193389f;
    n += -1.26851976f;
    n += 0.49675667f;
    r1 = n *= -0.68696809f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= 0.34192267f;
    r3 = n += -0.91259003f;
    r4 = n += -0.88070047f;
    n *= 0.01746267f;
    n *= -1.51775467f;
    n *= r2;
    n *= -0.78836328f;
    n += -0.39905921f;
    n *= -0.72684973f;
    n *= r1;
    n *= 2.02831364f;
    r1 = n *= 0.03541448f;
    n += r1;
    n *= r4;
    r4 = n *= 1.45524073f;
    r1 = n += 0.69587761f;
    n = r4 += n;
    n += r1;
    n = r3 *= n;
    n += -1.33723533f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.01965999f;
    return n;
} // Solution1

// Solution2 precision = 0.000052
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.17426407f;
    r0 = n += 0.04716586f;
    n += -0.45381463f;
    n += -0.44489166f;
    n += -0.19324395f;
    r1 = n *= 0.33429143f;
    n = r0 += n;
    n = r0 += n;
    r2 = n *= -0.14457567f;
    r3 = n += 1.17606807f;
    r4 = n += 0.71128845f;
    n *= 4.15707350f;
    n *= 0.00363437f;
    n *= r2;
    n *= 2.25629544f;
    n += -0.62464589f;
    n *= -1.15825450f;
    n *= r1;
    n *= 0.06631059f;
    r1 = n *= 1.50048923f;
    n += r1;
    n *= r4;
    r4 = n *= 0.43665051f;
    r1 = n += 0.45075315f;
    n = r4 += n;
    n += r1;
    n = r3 *= n;
    n += 0.48946989f;
    n *= r4;
    n *= r0;
    n *= r3;
    n += 0.07299906f;
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
