// Run date: 03/05/24 11:09:44 Pacific Standard Time
// Run duration = 483.531230 seconds
// Run generation = 42
// Run evolution = 11
// Run max result = 0.00000036
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

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
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n *= -0.43203384f;
    n *= r1;
    r1 = n += -1.84219372f;
    n *= 1.52030039f;
    r2 = n += 2.33759618f;
    n += 0.06518556f;
    n *= -0.02778766f;
    r3 = n += 0.67646325f;
    r4 = n *= 0.26763746f;
    n = r3 += n;
    r5 = n *= 1.47755778f;
    r6 = n += -0.23647779f;
    n = r4 *= n;
    n += -0.04219376f;
    n = r5 *= n;
    n *= r1;
    n = r0 *= n;
    n *= r5;
    n += r0;
    n *= 1.10954762f;
    n = r6 *= n;
    r0 = n += -0.08810670f;
    n += r2;
    n *= r3;
    n *= -0.00000241f;
    n *= r6;
    n = r4 *= n;
    n *= r4;
    n += 0.08810670f;
    n = r0 += n;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065866f;
    r1 = n *= -0.21494716f;
    n *= r1;
    r1 = n += -1.23022127f;
    n *= -2.33190227f;
    r2 = n += -0.30267012f;
    n += -1.83277500f;
    n *= -0.07950667f;
    r3 = n += -0.15582205f;
    r4 = n *= -0.03789346f;
    n = r3 += n;
    r5 = n *= 4.88423252f;
    r6 = n += -0.96232700f;
    n = r4 *= n;
    n += -0.14080240f;
    n = r5 *= n;
    n *= r1;
    n = r0 *= n;
    n *= r5;
    n += r0;
    n *= -1.24353874f;
    n = r6 *= n;
    r0 = n += -0.82707697f;
    n += r2;
    n *= r3;
    n *= -0.19232313f;
    n *= r6;
    n = r4 *= n;
    n *= r4;
    n += 0.76801091f;
    n = r0 += n;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799359f;
    r1 = n *= 0.62389541f;
    n *= r1;
    r1 = n += -1.93970740f;
    n *= 0.41469058f;
    r2 = n += -0.75812811f;
    n += 0.30170766f;
    n *= 0.09668914f;
    r3 = n += -0.58256161f;
    r4 = n *= -0.29502705f;
    n = r3 += n;
    r5 = n *= -1.51309204f;
    r6 = n += -0.04782667f;
    n = r4 *= n;
    n += 0.04915092f;
    n = r5 *= n;
    n *= r1;
    n = r0 *= n;
    n *= r5;
    n += r0;
    n *= 2.17570376f;
    n = r6 *= n;
    r0 = n += 1.29595363f;
    n += r2;
    n *= r3;
    n *= -0.03239689f;
    n *= r6;
    n = r4 *= n;
    n *= r4;
    n += -1.03415430f;
    n = r0 += n;
    n += r0;
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
