// Run date: 12/17/22 11:12:31 Pacific Standard Time
// Run duration = 12.939879 seconds
// Run count = 12
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
// Solution Generation = 12

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

// Precision = 0.00000145

// Solution0 precision = 0.00000072
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= 0.36451843f;
    n = r1 *= n;
    n *= 0.02969034f;
    n += -0.92193806f;
    r2 = n *= -1.21974850f;
    r3 = n *= 3.68643498f;
    n *= -0.06679572f;
    n *= 0.58970749f;
    r4 = n *= -1.09234715f;
    n = r3 *= n;
    r5 = n *= 1.23785830f;
    r6 = n *= 1.49951136f;
    n = r1 *= n;
    r7 = n *= -0.15891282f;
    n *= r2;
    n *= 22.98764610f;
    n += -19.62574577f;
    n += 23.71129417f;
    n *= 0.00195610f;
    n = r6 *= n;
    n += -14.54577827f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += -1.58159029f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.00000005f;
    return n;
} // Solution0

// Solution1 precision = 0.00000083
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09065843f;
    r1 = n *= 0.29427338f;
    n = r1 *= n;
    n *= 0.46704254f;
    n += -5.40728283f;
    r2 = n *= -1.07715571f;
    r3 = n *= 0.77577174f;
    n *= -3.54128742f;
    n *= 0.28963637f;
    r4 = n *= 0.15200613f;
    n = r3 *= n;
    r5 = n *= -0.78181887f;
    r6 = n *= -0.06137843f;
    n = r1 *= n;
    r7 = n *= 0.04380644f;
    n *= r2;
    n *= 9.49324989f;
    n += -5.22262287f;
    n += 7.25528908f;
    n *= 0.24818170f;
    n = r6 *= n;
    n += 0.17312633f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 0.05733113f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += -0.11813165f;
    return n;
} // Solution1

// Solution2 precision = 0.00000145
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799383f;
    r1 = n *= 0.48024088f;
    n = r1 *= n;
    n *= 0.11272672f;
    n += -4.15729094f;
    r2 = n *= 0.56766653f;
    r3 = n *= -1.01067805f;
    n *= -0.82909602f;
    n *= 0.43903074f;
    r4 = n *= -0.72149855f;
    n = r3 *= n;
    r5 = n *= -0.75082135f;
    r6 = n *= 0.54328865f;
    n = r1 *= n;
    r7 = n *= 0.30415115f;
    n *= r2;
    n *= -12.57454300f;
    n += 4.80296993f;
    n += 3.21991420f;
    n *= -0.00962371f;
    n = r6 *= n;
    n += 0.84626961f;
    n *= r6;
    n = r1 += n;
    n *= r7;
    n += 0.92837393f;
    n += r1;
    n *= r5;
    n *= r3;
    n += r4;
    n *= r0;
    n += 0.52359879f;
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
