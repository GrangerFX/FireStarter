// Run date: 03/04/23 17:11:01 Pacific Standard Time
// Run duration = 2960.614862 seconds
// Run count = 62
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 99
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 62

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

// Precision = 0.00020903

// Solution0 precision = 0.00009465
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.61893678f;
    r1 = n += -1.41040885f;
    r2 = n *= 0.27454820f;
    n += -2.03535128f;
    n += -1.24877906f;
    r3 = n += 2.18108559f;
    r4 = n += 1.33836317f;
    r5 = n *= 0.50087011f;
    n *= r3;
    n += -0.29524884f;
    n *= 0.05632751f;
    r3 = n += 1.79618442f;
    r6 = n += -1.94069695f;
    n += -0.11560908f;
    n = r3 *= n;
    n += 0.54088449f;
    n *= r5;
    n *= 0.25277442f;
    n += r4;
    n *= r2;
    r2 = n += -0.96343625f;
    n = r2 *= n;
    n += 1.50257480f;
    n *= r0;
    n += -1.31558359f;
    n *= r3;
    n *= r2;
    n *= r1;
    n += -0.84061092f;
    n += 1.72777700f;
    n += r6;
    n *= 1.05704880f;
    return n;
} // Solution0

// Solution1 precision = 0.00020903
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.22029714f;
    r1 = n += 1.71560872f;
    r2 = n *= -0.68087369f;
    n += 1.42069948f;
    n += -0.31115541f;
    r3 = n += 0.78321636f;
    r4 = n += -1.36076081f;
    r5 = n *= 0.83167791f;
    n *= r3;
    n += 1.54316938f;
    n *= -0.61239368f;
    r3 = n += 1.63129175f;
    r6 = n += -1.55444157f;
    n += -1.77430117f;
    n = r3 *= n;
    n += 0.22619203f;
    n *= r5;
    n *= -0.09233324f;
    n += r4;
    n *= r2;
    r2 = n += -1.76903760f;
    n = r2 *= n;
    n += -0.79330844f;
    n *= r0;
    n += 1.38732243f;
    n *= r3;
    n *= r2;
    n *= r1;
    n += 1.31320524f;
    n += 0.53516030f;
    n += r6;
    n *= -0.26810205f;
    return n;
} // Solution1

// Solution2 precision = 0.00020790
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.41077530f;
    r1 = n += 1.19498777f;
    r2 = n *= -0.28873143f;
    n += 2.44900727f;
    n += 0.14160417f;
    r3 = n += 0.68430912f;
    r4 = n += -0.95287311f;
    r5 = n *= 2.44153404f;
    n *= r3;
    n += -0.15073262f;
    n *= 0.06989740f;
    r3 = n += -1.46919167f;
    r6 = n += 0.18501273f;
    n += -1.49718416f;
    n = r3 *= n;
    n += 1.35406446f;
    n *= r5;
    n *= -0.26168281f;
    n += r4;
    n *= r2;
    r2 = n += -1.80061328f;
    n = r2 *= n;
    n += -0.62323165f;
    n *= r0;
    n += 0.25291148f;
    n *= r3;
    n *= r2;
    n *= r1;
    n += -0.28492647f;
    n += -0.01627087f;
    n += r6;
    n *= -0.80325282f;
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
