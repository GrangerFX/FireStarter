// Run date: 12/04/22 17:50:01 Pacific Standard Time
// Run duration = 265.280078 seconds
// Run count = 58
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 10;
// Run processes = 16;
// Run population = 139264;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 3;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 58

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

// Precision = 0.00004542

// Solution0 precision = 0.00001335
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14241719f;
    n += -0.94292200f;
    r1 = n *= -0.41989717f;
    n += -0.79273432f;
    n = r1 *= n;
    n *= -0.01819863f;
    r2 = n += -0.25689992f;
    n += 1.66576684f;
    r3 = n += -1.29278398f;
    r4 = n *= 0.93076009f;
    n += 0.71320021f;
    r5 = n *= 0.82607752f;
    n += 0.92033988f;
    n = r3 += n;
    n *= r3;
    n *= r1;
    r1 = n += 0.16737181f;
    n += r1;
    n += r5;
    n += -9.75627804f;
    r5 = n *= 0.17162347f;
    n += -7.04960823f;
    r1 = n += -2.70774364f;
    n *= r4;
    n *= r0;
    n *= r1;
    n *= -2.20408893f;
    n *= r5;
    n += -0.73881519f;
    n += r2;
    n += 1.03577733f;
    n *= -0.01894424f;
    return n;
} // Solution0

// Solution1 precision = 0.00001919
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09105515f;
    n += -1.24774468f;
    r1 = n *= 0.38316971f;
    n += 0.95660150f;
    n = r1 *= n;
    n *= -0.00773347f;
    r2 = n += 1.09103882f;
    n += -1.05967915f;
    r3 = n += 0.92045170f;
    r4 = n *= 5.01640368f;
    n += -0.84844047f;
    r5 = n *= -0.42238817f;
    n += 0.11003020f;
    n = r3 += n;
    n *= r3;
    n *= r1;
    r1 = n += -0.75895256f;
    n += r1;
    n += r5;
    n += 1.11168957f;
    r5 = n *= -1.01166284f;
    n += 1.46041691f;
    r1 = n += -0.10793539f;
    n *= r4;
    n *= r0;
    n *= r1;
    n *= 0.49648991f;
    n *= r5;
    n += 6.72816181f;
    n += r2;
    n += -0.28327698f;
    n *= -0.01572992f;
    return n;
} // Solution1

// Solution2 precision = 0.00004542
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.62391806f;
    n += 1.02669263f;
    r1 = n *= -0.34436491f;
    n += 0.70177698f;
    n = r1 *= n;
    n *= 0.15554057f;
    r2 = n += 0.21817718f;
    n += -0.86907125f;
    r3 = n += 0.57812911f;
    r4 = n *= 0.29755217f;
    n += 0.11706986f;
    r5 = n *= -0.23890688f;
    n += -4.24157143f;
    n = r3 += n;
    n *= r3;
    n *= r1;
    r1 = n += -64.23529816f;
    n += r1;
    n += r5;
    n += 5.29636335f;
    r5 = n *= 0.13473344f;
    n += -1.21358275f;
    r1 = n += -5.14810514f;
    n *= r4;
    n *= r0;
    n *= r1;
    n *= -0.09722358f;
    n *= r5;
    n += 3.89914751f;
    n += r2;
    n += 9.09748077f;
    n *= 0.03922741f;
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
