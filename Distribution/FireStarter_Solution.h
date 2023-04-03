// Run date: 04/02/23 21:42:25 Pacific Daylight Time
// Run duration = 1389.127285 seconds
// Run generation = 237
// Run result = 0.00000060
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 1
// Run seeds = 1
// Run mode = FIRESTARTER_OPTIMIZE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
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

// Solution0 result = 0.00000030
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n *= -0.04153413f;
    n *= r0;
    r0 = n *= 0.14733160f;
    r2 = n *= -1.58166146f;
    r3 = n += 3.46287513f;
    r4 = n += -3.55591869f;
    r5 = n *= 0.33925220f;
    n *= r4;
    r4 = n *= -1.07322502f;
    r6 = n += 1.48908532f;
    n = r2 += n;
    n *= r2;
    n *= r6;
    n += -9.14589024f;
    n += r4;
    n = r1 *= n;
    r4 = n *= -0.64767444f;
    n *= -7.51056480f;
    n *= r4;
    n = r3 += n;
    n += -0.88549799f;
    n *= -2.77832532f;
    n += 7.16184902f;
    n += -103.78324890f;
    n *= r3;
    n *= r5;
    n *= 0.55211741f;
    n *= -0.65508461f;
    n += r0;
    n *= r1;
    n += 0.00000002f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065843f;
    r1 = n *= -0.03922391f;
    n *= r0;
    r0 = n *= -2.33608103f;
    r2 = n *= -0.18378636f;
    r3 = n += 5.41085386f;
    r4 = n += -0.27481860f;
    r5 = n *= -0.40707123f;
    n *= r4;
    r4 = n *= 0.04509416f;
    r6 = n += 1.93033659f;
    n = r2 += n;
    n *= r2;
    n *= r6;
    n += 1.18862748f;
    n += r4;
    n = r1 *= n;
    r4 = n *= 2.18938565f;
    n *= -5.35061789f;
    n *= r4;
    n = r3 += n;
    n += 133.95292664f;
    n *= -1.68784332f;
    n += 4.28301859f;
    n += -209.66056824f;
    n *= r3;
    n *= r5;
    n *= -0.02512014f;
    n *= -0.06007126f;
    n += r0;
    n *= r1;
    n += -0.11813164f;
    return n;
} // Solution1

// Solution2 result = 0.00000060
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799359f;
    r1 = n *= -0.28778929f;
    n *= r0;
    r0 = n *= 0.12678671f;
    r2 = n *= -0.75482440f;
    r3 = n += -0.74258316f;
    r4 = n += -1.22727060f;
    r5 = n *= -0.47202832f;
    n *= r4;
    r4 = n *= 0.39133379f;
    r6 = n += -0.22049521f;
    n = r2 += n;
    n *= r2;
    n *= r6;
    n += 1.03667295f;
    n += r4;
    n = r1 *= n;
    r4 = n *= -0.00710543f;
    n *= 25.64047050f;
    n *= r4;
    n = r3 += n;
    n += 0.15081346f;
    n *= 0.29852116f;
    n += -2.07181048f;
    n += -3.85102367f;
    n *= r3;
    n *= r5;
    n *= -1.55592930f;
    n *= 1.05322063f;
    n += r0;
    n *= r1;
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
