// Run date: 03/02/25 14:42:33 Pacific Standard Time
// Run duration = 759.209195 seconds
// Run generation = 963
// Run evolution = 0
// Run max result = 0.00123345
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run passes = 384
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#if 0
namespace Constants {
    constexpr long double PIld = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899L; // 80 digits of precision but long double is only 80 bits.
    constexpr double PId = 3.1415926535897932;
    constexpr float PIf = 3.14159265f;
} // Constants
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * SOLUTION_PI)

inline float SolutionTarget(float n, unsigned int variation = 0)
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

inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += 0.00042871f;
    r1 = n *= 0.05448677f;
    r2 = n *= -1.50485098f;
    n += 0.98641616f;
    r3 = n += 1.70826912f;
    n *= 0.61182773f;
    n += -2.01472926f;
    n *= -2.17137504f;
    r4 = n *= 1.08164823f;
    r5 = n *= 0.72677094f;
    n = r3 *= n;
    n += r3;
    n = r1 *= n;
    r3 = n += -1.73564053f;
    r6 = n += -2.33907533f;
    r7 = n += 1.13910496f;
    n *= r1;
    n *= 0.21016845f;
    n *= r3;
    n *= r7;
    n = r5 *= n;
    n *= r4;
    n += -2.28800058f;
    n *= -14.50654793f;
    n *= -0.12399216f;
    n += 4.35947371f;
    n *= -0.05903391f;
    n += r0;
    n *= r2;
    n *= r6;
    n += -2.75666881f;
    n *= r5;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.98305798f;
    r1 = n *= 0.53565121f;
    r2 = n *= -0.21919499f;
    n += 1.14474428f;
    r3 = n += -1.72838771f;
    n *= 0.14390658f;
    n += -1.99169850f;
    n *= -3.88898468f;
    r4 = n *= 0.08040667f;
    r5 = n *= -0.20181350f;
    n = r3 *= n;
    n += r3;
    n = r1 *= n;
    r3 = n += -0.79299808f;
    r6 = n += -0.77197927f;
    r7 = n += -1.57824492f;
    n *= r1;
    n *= 3.82761359f;
    n *= r3;
    n *= r7;
    n = r5 *= n;
    n *= r4;
    n += -9.02959251f;
    n *= -4.93977785f;
    n *= -0.12145996f;
    n += 2.20719767f;
    n *= -0.14880402f;
    n += r0;
    n *= r2;
    n *= r6;
    n += -3.40496612f;
    n *= r5;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -0.00084837f;
    r1 = n *= 0.54555607f;
    r2 = n *= -0.21115659f;
    n += 1.07575822f;
    r3 = n += -0.57406753f;
    n *= -0.63399988f;
    n += -1.78258884f;
    n *= 1.67502820f;
    r4 = n *= 0.40617564f;
    r5 = n *= -0.25617951f;
    n = r3 *= n;
    n += r3;
    n = r1 *= n;
    r3 = n += 2.07189608f;
    r6 = n += -0.57327127f;
    r7 = n += 0.98832637f;
    n *= r1;
    n *= 0.87127692f;
    n *= r3;
    n *= r7;
    n = r5 *= n;
    n *= r4;
    n += -2.98743653f;
    n *= -7.02210283f;
    n *= 9.33947182f;
    n += 14.89553738f;
    n *= -0.00135830f;
    n += r0;
    n *= r2;
    n *= r6;
    n += 1.71899331f;
    n *= r5;
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
