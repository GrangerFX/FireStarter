// Run date: 12/11/22 16:22:49 Pacific Standard Time
// Run duration = 11.909894 seconds
// Run count = 11
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
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

// Precision = 0.00002468

// Solution0 precision = 0.00002448
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -1.20392406f;
    r1 = n *= -0.57636911f;
    n *= -0.05785884f;
    r2 = n += 1.04472041f;
    r3 = n += -0.69788635f;
    n *= 0.61177069f;
    n *= r1;
    r1 = n += -0.22069816f;
    n += 0.92176056f;
    n = r2 += n;
    r4 = n += 0.14317822f;
    n *= r4;
    n += -1.27632916f;
    n *= r2;
    r2 = n *= -1.53753293f;
    n *= r2;
    n = r0 *= n;
    n = r1 *= n;
    r2 = n *= -0.00000032f;
    n += 0.56653363f;
    r4 = n += -0.56642902f;
    n += r0;
    n *= -0.16684143f;
    n = r3 *= n;
    n += -0.00320935f;
    n += r2;
    n = r1 += n;
    n += 29.15115738f;
    n *= r4;
    n += r1;
    n += r3;
    n *= 0.06525967f;
    return n;
} // Solution0

// Solution1 precision = 0.00002468
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.66432238f;
    r1 = n *= -0.16842851f;
    n *= 0.05444716f;
    r2 = n += -0.05151026f;
    r3 = n += -0.68002039f;
    n *= 0.90425074f;
    n *= r1;
    r1 = n += -0.39594609f;
    n += -0.65583527f;
    n = r2 += n;
    r4 = n += 0.33484203f;
    n *= r4;
    n += -1.13484132f;
    n *= r2;
    r2 = n *= 1.34741259f;
    n *= r2;
    n = r0 *= n;
    n = r1 *= n;
    r2 = n *= 0.22366351f;
    n += -0.61769700f;
    r4 = n += -1.45980227f;
    n += r0;
    n *= -14.50260925f;
    n = r3 *= n;
    n += 1.13301539f;
    n += r2;
    n = r1 += n;
    n += -0.23112057f;
    n *= r4;
    n += r1;
    n += r3;
    n *= 0.88092893f;
    return n;
} // Solution1

// Solution2 precision = 0.00002448
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.17320894f;
    r1 = n *= 0.65755159f;
    n *= 0.42542055f;
    r2 = n += 0.30794340f;
    r3 = n += 2.12609577f;
    n *= 0.90246278f;
    n *= r1;
    r1 = n += -0.09150257f;
    n += 1.53406870f;
    n = r2 += n;
    r4 = n += -6.02896786f;
    n *= r4;
    n += 0.35722333f;
    n *= r2;
    r2 = n *= 0.09438685f;
    n *= r2;
    n = r0 *= n;
    n = r1 *= n;
    r2 = n *= -0.72170037f;
    n += 0.40617219f;
    r4 = n += -0.43568587f;
    n += r0;
    n *= -2.34483504f;
    n = r3 *= n;
    n += -0.27378765f;
    n += r2;
    n = r1 += n;
    n += 2.23320937f;
    n *= r4;
    n += r1;
    n += r3;
    n *= -0.07163749f;
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
