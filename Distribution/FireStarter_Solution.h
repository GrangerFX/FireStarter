// Run date: 04/01/23 22:23:35 Pacific Daylight Time
// Run duration = 2590.598591 seconds
// Run generation = 297
// Run result = 0.00000077
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n *= 0.41951364f;
    r0 = n += -1.31794095f;
    r1 = n *= 4.08958387f;
    n *= 5.48588371f;
    n *= 0.21769942f;
    n *= -0.26713425f;
    n *= 0.32320961f;
    r2 = n *= 0.95296544f;
    n *= r2;
    n *= -1.03553593f;
    r2 = n += 1.19809926f;
    n = r2 += n;
    n *= -1.60239351f;
    r3 = n *= 0.11941607f;
    n *= -2.79038882f;
    n += -0.96924591f;
    n *= -2.01519275f;
    n *= -0.02742211f;
    n *= 1.28196073f;
    n = r2 *= n;
    n = r3 *= n;
    n += 0.02664796f;
    n *= 7.18933868f;
    n = r0 *= n;
    n *= -9.68743992f;
    n *= r0;
    n += 59.07154846f;
    n *= r2;
    n += 21.03157997f;
    n *= r3;
    n *= r1;
    n += 0.00000006f;
    return n;
} // Solution0

// Solution1 result = 0.00000072
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n *= -0.36672944f;
    r0 = n += 1.13343561f;
    r1 = n *= 0.27244869f;
    n *= -1.88381255f;
    n *= 0.39946428f;
    n *= 1.55866551f;
    n *= 3.76180768f;
    r2 = n *= 1.08636725f;
    n *= r2;
    n *= -0.71156609f;
    r2 = n += 4.19131804f;
    n = r2 += n;
    n *= -0.37284049f;
    r3 = n *= 0.98939753f;
    n *= 0.63350755f;
    n += -1.74509752f;
    n *= 0.24618344f;
    n *= 0.09113977f;
    n *= 0.19108519f;
    n = r2 *= n;
    n = r3 *= n;
    n += 0.43213215f;
    n *= -0.13837646f;
    n = r0 *= n;
    n *= 11.56374741f;
    n *= r0;
    n += -40.07683945f;
    n *= r2;
    n += 21.40945625f;
    n *= r3;
    n *= r1;
    n += -0.11813224f;
    return n;
} // Solution1

// Solution2 result = 0.00000077
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n *= 0.41057703f;
    r0 = n += -1.07488811f;
    r1 = n *= -0.50911480f;
    n *= 0.44239780f;
    n *= 72.54651642f;
    n *= -0.01442229f;
    n *= 0.68313909f;
    r2 = n *= -0.15041858f;
    n *= r2;
    n *= -96.87866211f;
    r2 = n += 0.64812016f;
    n = r2 += n;
    n *= -1.68602073f;
    r3 = n *= -1.30135643f;
    n *= -0.51687354f;
    n += 0.52775455f;
    n *= -0.85711902f;
    n *= 0.05758462f;
    n *= 2.43431091f;
    n = r2 *= n;
    n = r3 *= n;
    n += 7.12492418f;
    n *= 2.19709396f;
    n = r0 *= n;
    n *= -0.26000586f;
    n *= r0;
    n += 167.86602783f;
    n *= r2;
    n += -13.17323685f;
    n *= r3;
    n *= r1;
    n += 0.52359873f;
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
