// Run date: 03/30/25 20:13:25 Pacific Daylight Time
// Run duration = 66.977484 seconds
// Run generation = 8
// Run evolution = 1
// Run max result = 0.00750786
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run population = 278528
// Run generations = 0
// Run passes = 500
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run attempts = 0
// Run optimize = 8

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
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.57078719f;
    r1 = n *= -0.17060947f;
    n = r1 *= n;
    r2 = n += -0.07182055f;
    n *= 1.62842250f;
    n *= 1.53515518f;
    r3 = n += -6.35970831f;
    n *= r2;
    r2 = n *= -2.03812718f;
    r4 = n *= 1.24927533f;
    n *= 0.09469673f;
    r5 = n *= 0.03854243f;
    n *= r0;
    n *= r1;
    n += 5.43840885f;
    n *= 1.14435399f;
    r1 = n *= 0.07835887f;
    n += r5;
    n += -0.78365219f;
    r5 = n *= -0.96650815f;
    r0 = n *= 0.47573355f;
    n *= -5.29800701f;
    r6 = n *= -3.79051876f;
    n *= r6;
    n *= r0;
    n *= 1.20394504f;
    n *= r2;
    n += r3;
    n *= r5;
    n *= r4;
    n *= 0.76096851f;
    n *= r1;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 3.95388699f;
    r1 = n *= 0.07850792f;
    n = r1 *= n;
    r2 = n += -1.07511997f;
    n *= 1.28419423f;
    n *= -0.43446892f;
    r3 = n += 0.34499970f;
    n *= r2;
    r2 = n *= -1.17352366f;
    r4 = n *= -1.77023840f;
    n *= -0.58284920f;
    r5 = n *= -9.09788704f;
    n *= r0;
    n *= r1;
    n += 0.99303573f;
    n *= 0.89471716f;
    r1 = n *= -0.50994432f;
    n += r5;
    n += 0.88021410f;
    r5 = n *= 0.31138107f;
    r0 = n *= -0.10592423f;
    n *= -6.48138142f;
    r6 = n *= 0.08084926f;
    n *= r6;
    n *= r0;
    n *= -31.01918983f;
    n *= r2;
    n += r3;
    n *= r5;
    n *= r4;
    n *= 0.21979327f;
    n *= r1;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 2.15754342f;
    r1 = n *= -0.23021023f;
    n = r1 *= n;
    r2 = n += -1.51615918f;
    n *= 0.17936449f;
    n *= 2.77903867f;
    r3 = n += -2.55227590f;
    n *= r2;
    r2 = n *= 0.49663183f;
    r4 = n *= 1.07076812f;
    n *= 1.21569145f;
    r5 = n *= -0.38406959f;
    n *= r0;
    n *= r1;
    n += -5.79033041f;
    n *= -0.01209850f;
    r1 = n *= -0.36718333f;
    n += r5;
    n += -2.35128665f;
    r5 = n *= -0.28862524f;
    r0 = n *= 1.93899608f;
    n *= 0.17042877f;
    r6 = n *= 4.31859255f;
    n *= r6;
    n *= r0;
    n *= 0.43202350f;
    n *= r2;
    n += r3;
    n *= r5;
    n *= r4;
    n *= 21.38410950f;
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
