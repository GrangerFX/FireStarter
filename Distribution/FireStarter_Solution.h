// Run date: 09/04/23 13:59:19 Pacific Daylight Time
// Run duration = 2951.131821 seconds
// Run generation = 7
// Run evolution = 6
// Run result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 2
// Run processes = 2
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= 1.39086604f;
    r1 = n *= 0.44492093f;
    n *= r1;
    r1 = n *= 0.61101502f;
    r2 = n *= -0.48794112f;
    n += 0.32742378f;
    r3 = n *= 1.04714262f;
    n += r3;
    n = r1 += n;
    r3 = n *= -0.77886283f;
    n *= -1.66256618f;
    n = r3 *= n;
    n *= -1.70470071f;
    r4 = n *= -2.74985790f;
    n = r1 += n;
    n *= 0.02590677f;
    n *= 1.96581018f;
    r5 = n += -1.15480959f;
    n *= 1.76657546f;
    n *= r0;
    r0 = n *= 0.16514625f;
    n *= r3;
    n = r5 *= n;
    n = r0 *= n;
    n += r2;
    n += r1;
    n += r0;
    n *= r5;
    n *= r4;
    n += 0.03659560f;
    n += -0.03659558f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065843f;
    r0 = n *= 0.40049547f;
    r1 = n *= 1.82260656f;
    n *= r1;
    r1 = n *= -0.25992027f;
    r2 = n *= 0.94342804f;
    n += 0.41374904f;
    r3 = n *= -0.53907287f;
    n += r3;
    n = r1 += n;
    r3 = n *= 1.37351274f;
    n *= 2.69610429f;
    n = r3 *= n;
    n *= 0.62885499f;
    r4 = n *= -2.33380771f;
    n = r1 += n;
    n *= 0.16921285f;
    n *= -0.46414724f;
    r5 = n += 0.88811636f;
    n *= -1.37586594f;
    n *= r0;
    r0 = n *= 0.63582289f;
    n *= r3;
    n = r5 *= n;
    n = r0 *= n;
    n += r2;
    n += r1;
    n += r0;
    n *= r5;
    n *= r4;
    n += -0.13774969f;
    n += 0.01961797f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799359f;
    r0 = n *= 0.53377676f;
    r1 = n *= -0.11780130f;
    n *= r1;
    r1 = n *= -107.59008026f;
    r2 = n *= -0.52149677f;
    n += -1.42278552f;
    r3 = n *= 1.08896875f;
    n += r3;
    n = r1 += n;
    r3 = n *= 0.40508646f;
    n *= -1.13815284f;
    n = r3 *= n;
    n *= -0.42328560f;
    r4 = n *= 1.70645189f;
    n = r1 += n;
    n *= -0.17472565f;
    n *= 0.29128101f;
    r5 = n += -1.41101539f;
    n *= -0.24465995f;
    n *= r0;
    r0 = n *= 1.05024326f;
    n *= r3;
    n = r5 *= n;
    n = r0 *= n;
    n += r2;
    n += r1;
    n += r0;
    n *= r5;
    n *= r4;
    n += 0.69759977f;
    n += -0.17400096f;
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
