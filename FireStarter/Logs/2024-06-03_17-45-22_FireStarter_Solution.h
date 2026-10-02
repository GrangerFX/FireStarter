// Run date: 06/03/24 17:45:22 Pacific Daylight Time
// Run duration = 17735.352672 seconds
// Run generation = 125
// Run evolution = 9
// Run max result = 0.00000036
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    r1 = n *= 0.06351692f;
    n = r1 *= n;
    n += -5.88646793f;
    n *= 2.00732493f;
    n = r1 *= n;
    n *= -1.53911781f;
    r2 = n += -0.71924239f;
    n *= 0.00832805f;
    r3 = n += -0.86228567f;
    n += -0.02811391f;
    n = r3 *= n;
    n += r3;
    n += 0.34043577f;
    r3 = n += -1.52846718f;
    r4 = n += -0.55223948f;
    n += r1;
    n = r3 *= n;
    n += 2.21853781f;
    r1 = n += -1.54456830f;
    n *= -0.63904291f;
    n *= -2.93000126f;
    n *= r1;
    n *= r2;
    n = r0 *= n;
    n = r3 *= n;
    n *= r4;
    n += 0.11200475f;
    n += r0;
    n *= 2.06219840f;
    n += r3;
    n += -0.23097600f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065890f;
    r1 = n *= 0.09441784f;
    n = r1 *= n;
    n += 2.53085303f;
    n *= -2.07696033f;
    n = r1 *= n;
    n *= -0.02718475f;
    r2 = n += -0.50181156f;
    n *= 1.23297107f;
    r3 = n += -0.19224145f;
    n += -0.25160646f;
    n = r3 *= n;
    n += r3;
    n += 0.29440045f;
    r3 = n += -1.44707572f;
    r4 = n += -0.84413242f;
    n += r1;
    n = r3 *= n;
    n += -2.07197547f;
    r1 = n += 2.78898501f;
    n *= -0.76834273f;
    n *= -4.89438200f;
    n *= r1;
    n *= r2;
    n = r0 *= n;
    n = r3 *= n;
    n *= r4;
    n += -0.41431984f;
    n += r0;
    n *= 1.92620611f;
    n += r3;
    n += 0.67993343f;
    return n;
} // Solution1

// Solution2 result = 0.00000027
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799359f;
    r1 = n *= 0.17418304f;
    n = r1 *= n;
    n += -3.80531144f;
    n *= 2.03953171f;
    n = r1 *= n;
    n *= -0.96654820f;
    r2 = n += -1.08908355f;
    n *= 0.00482738f;
    r3 = n += 0.17281726f;
    n += -0.32944599f;
    n = r3 *= n;
    n += r3;
    n += 0.12950915f;
    r3 = n += 0.06651969f;
    r4 = n += 0.38716584f;
    n += r1;
    n = r3 *= n;
    n += -0.50384063f;
    r1 = n += 1.42671371f;
    n *= 0.19174786f;
    n *= -0.72604907f;
    n *= r1;
    n *= r2;
    n = r0 *= n;
    n = r3 *= n;
    n *= r4;
    n += 0.07227133f;
    n += r0;
    n *= -6.44308758f;
    n += r3;
    n += 0.98924923f;
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
