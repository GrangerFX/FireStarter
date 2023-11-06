// Run date: 11/05/23 14:41:43 Pacific Standard Time
// Run duration = 10205.109841 seconds
// Run generation = 6
// Run evolution = 3
// Run result = 0.00006831
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
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

// Solution0 result = 0.00002044
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.27508411f;
    r0 = n *= -1.44624376f;
    r1 = n += -1.23956966f;
    r2 = n += -1.26013207f;
    n += 1.30249918f;
    n *= 1.13459778f;
    r3 = n += 1.35833478f;
    n += 0.37263191f;
    r4 = n += -1.79208601f;
    n *= 0.22384873f;
    r5 = n += -0.77311516f;
    n *= 1.97057688f;
    n *= -0.00036884f;
    r6 = n *= -4.62610483f;
    r7 = n += 1.79213107f;
    n += r0;
    n *= r5;
    r5 = n *= -0.18427508f;
    r0 = n *= -1.48111343f;
    n = r6 += n;
    n *= r5;
    r5 = n *= 3.47162676f;
    n += 1.27648866f;
    n += r0;
    n *= r1;
    n *= -0.40497386f;
    n += r4;
    n *= r3;
    n *= r5;
    n *= r2;
    n *= r6;
    n *= r7;
    return n;
} // Solution0

// Solution1 result = 0.00006831
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= 0.58663547f;
    r0 = n *= 0.90955985f;
    r1 = n += -1.90017629f;
    r2 = n += 0.30844435f;
    n += -0.47044873f;
    n *= 0.19137390f;
    r3 = n += -0.76237476f;
    n += 0.19607222f;
    r4 = n += 1.10812771f;
    n *= -1.81418622f;
    r5 = n += 1.90322244f;
    n *= 3.58989382f;
    n *= -0.04266936f;
    r6 = n *= -0.29139680f;
    r7 = n += 2.09377050f;
    n += r0;
    n *= r5;
    r5 = n *= 0.35099658f;
    r0 = n *= -0.70957232f;
    n = r6 += n;
    n *= r5;
    r5 = n *= 1.91393793f;
    n += 0.24902640f;
    n += r0;
    n *= r1;
    n *= -0.00215234f;
    n += r4;
    n *= r3;
    n *= r5;
    n *= r2;
    n *= r6;
    n *= r7;
    return n;
} // Solution1

// Solution2 result = 0.00006321
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.34450227f;
    r0 = n *= 1.84719408f;
    r1 = n += -0.39863598f;
    r2 = n += 0.39866474f;
    n += -0.28309143f;
    n *= -0.15654510f;
    r3 = n += 1.56148720f;
    n += -1.32161772f;
    r4 = n += -1.89303589f;
    n *= 0.33118898f;
    r5 = n += 0.20564887f;
    n *= 0.96124184f;
    n *= 0.02301185f;
    r6 = n *= -135.46798706f;
    r7 = n += 1.36923468f;
    n += r0;
    n *= r5;
    r5 = n *= 1.42672873f;
    r0 = n *= 0.48771298f;
    n = r6 += n;
    n *= r5;
    r5 = n *= -1.76042366f;
    n += -1.03968811f;
    n += r0;
    n *= r1;
    n *= 0.31159726f;
    n += r4;
    n *= r3;
    n *= r5;
    n *= r2;
    n *= r6;
    n *= r7;
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
