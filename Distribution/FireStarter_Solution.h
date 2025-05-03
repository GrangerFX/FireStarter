// Run date: 04/28/25 08:38:47 Pacific Daylight Time
// Run duration = 63.834943 seconds
// Run test = 0
// Run generation = 0
// Run evolution = 0
// Run precision  = 0.00000015
// Run max result = 0.00059932
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 16
// Run population = 262144
// Run generations = 0
// Run passes = 512
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3
#define SOLUTION_VARIATION 0

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * SOLUTION_PI)

inline float SolutionTarget(float n, unsigned int variation = 0)
{
    switch (variation & 3) {
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
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14148402f;
    r1 = n += -0.00017215f;
    n += r1;
    r1 = n *= 0.18196250f;
    r2 = n += 0.00002183f;
    n = r2 *= n;
    n += 0.24086444f;
    r3 = n *= 0.02130297f;
    n *= -0.29644653f;
    n *= 11.67545986f;
    n += -0.54835343f;
    n += 1.17728865f;
    n *= r2;
    r2 = n += -0.17594783f;
    n *= 0.93618166f;
    r4 = n += -0.46522942f;
    n *= r0;
    n *= -0.35882175f;
    n += r1;
    n *= -0.03652038f;
    n *= 0.22045289f;
    n *= r4;
    r4 = n *= 0.22772899f;
    n = r2 *= n;
    r1 = n += 15.49597645f;
    n += -11.64719391f;
    n *= r2;
    n *= r3;
    n += 15.82001972f;
    n *= r4;
    n *= -5.98527193f;
    n *= r1;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.67158055f;
    r1 = n += 3.05122685f;
    n += r1;
    r1 = n *= 0.03559802f;
    r2 = n += -0.96734059f;
    n = r2 *= n;
    n += 2.85621548f;
    r3 = n *= -0.02185773f;
    n *= 1.13153684f;
    n *= 0.01669676f;
    n += -0.05511902f;
    n += 1.91104054f;
    n *= r2;
    r2 = n += -1.00845361f;
    n *= -0.29248509f;
    r4 = n += 2.31895900f;
    n *= r0;
    n *= -0.33029237f;
    n += r1;
    n *= -0.08917882f;
    n *= 2.19626021f;
    n *= r4;
    r4 = n *= -2.05661225f;
    n = r2 *= n;
    r1 = n += -3.32100224f;
    n += -4.82352400f;
    n *= r2;
    n *= r3;
    n += -1.10243857f;
    n *= r4;
    n *= 0.45426846f;
    n *= r1;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.24605441f;
    r1 = n += 0.36688647f;
    n += r1;
    r1 = n *= 0.14366542f;
    r2 = n += -0.23657240f;
    n = r2 *= n;
    n += -0.55895638f;
    r3 = n *= 0.61956209f;
    n *= -0.14617626f;
    n *= 6.37946987f;
    n += 1.21621525f;
    n += 1.12667429f;
    n *= r2;
    r2 = n += -0.76324391f;
    n *= 0.62959594f;
    r4 = n += -1.68748045f;
    n *= r0;
    n *= 0.18657863f;
    n += r1;
    n *= -1.25890100f;
    n *= 0.72304946f;
    n *= r4;
    r4 = n *= -0.08421469f;
    n = r2 *= n;
    r1 = n += -2.16185665f;
    n += -7.72396898f;
    n *= r2;
    n *= r3;
    n += 4.09419584f;
    n *= r4;
    n *= 5.72994184f;
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
