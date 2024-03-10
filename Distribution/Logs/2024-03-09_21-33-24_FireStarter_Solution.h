// Run date: 03/09/24 21:33:24 Pacific Standard Time
// Run duration = 1682.246774 seconds
// Run generation = 142
// Run evolution = 15
// Run max result = 0.00000012
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
// Run tests = 1
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -1.64707446f;
    r0 = n += 5.17443705f;
    r1 = n *= -0.03401899f;
    n = r1 *= n;
    r2 = n += -0.21616580f;
    r3 = n *= 2.04821873f;
    n = r1 *= n;
    n *= -7.07836676f;
    r4 = n *= 0.00229460f;
    n = r3 += n;
    n += r4;
    r4 = n += 1.90335631f;
    n = r3 *= n;
    n *= r3;
    n += -3.31879902f;
    n += 129465.36718750f;
    n *= r1;
    n *= r2;
    n *= -0.01322564f;
    r2 = n += 3.72642016f;
    n += -3.31500292f;
    n *= -0.01017538f;
    n += -1.86590791f;
    n += r4;
    n *= r0;
    n *= -0.08744084f;
    n *= 2.14457464f;
    n *= r2;
    n += -0.13755634f;
    n += 0.13755633f;
    r2 = n *= 1.06087196f;
    n += r2;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.60363138f;
    r0 = n += 1.86561847f;
    r1 = n *= 0.12327403f;
    n = r1 *= n;
    r2 = n += -1.00345457f;
    r3 = n *= -1.71879125f;
    n = r1 *= n;
    n *= 1.88075459f;
    r4 = n *= -0.10679176f;
    n = r3 += n;
    n += r4;
    r4 = n += 1.29916525f;
    n = r3 *= n;
    n *= r3;
    n += -1.09486234f;
    n += -0.71676761f;
    n *= r1;
    n *= r2;
    n *= 0.61012328f;
    r2 = n += 1.46984565f;
    n += -0.00605594f;
    n *= -0.00058102f;
    n += -1.62081194f;
    n += r4;
    n *= r0;
    n *= -3.09760213f;
    n *= -0.08258816f;
    n *= r2;
    n += -0.02412445f;
    n += -0.01005621f;
    r2 = n *= 1.72804880f;
    n += r2;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.30019468f;
    r0 = n += -0.78590780f;
    r1 = n *= -0.24495652f;
    n = r1 *= n;
    r2 = n += -1.44924188f;
    r3 = n *= 1.60428309f;
    n = r1 *= n;
    n *= -3.02610922f;
    r4 = n *= 0.01615150f;
    n = r3 += n;
    n += r4;
    r4 = n += -0.04349903f;
    n = r3 *= n;
    n *= r3;
    n += 0.75252014f;
    n += 0.38134772f;
    n *= r1;
    n *= r2;
    n *= -0.38083932f;
    r2 = n += 0.96799767f;
    n += 0.49114013f;
    n *= -1.31861031f;
    n += -0.47119048f;
    n += r4;
    n *= r0;
    n *= -0.23246415f;
    n *= -1.45632017f;
    n *= r2;
    n += 0.38002452f;
    n += -0.13464694f;
    r2 = n *= 1.06692445f;
    n += r2;
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
