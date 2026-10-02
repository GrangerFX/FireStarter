// Run date: 01/09/24 14:06:11 Pacific Standard Time
// Run duration = 9619.767481 seconds
// Run generation = 118
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
// Run tests = 4
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.19977280f;
    r1 = n += -0.94140702f;
    n = r1 *= n;
    r2 = n *= 1.24145460f;
    n += 0.41114172f;
    r3 = n += -0.46909931f;
    r4 = n += -1.00270152f;
    n *= 0.91556799f;
    r5 = n *= 0.00183175f;
    n += r5;
    r5 = n *= -1.28137624f;
    n *= -4.75787020f;
    n += -0.41876963f;
    n *= r3;
    r3 = n += 1.85420918f;
    n *= 1.23154414f;
    n = r3 *= n;
    n *= r4;
    n *= r2;
    n += 1.35562074f;
    n = r3 *= n;
    n *= r5;
    n *= r1;
    r1 = n += 1.34479320f;
    n *= -73200.38281250f;
    n += r0;
    r0 = n *= -0.00000384f;
    n += r3;
    n *= -0.44042763f;
    n += r0;
    n += 0.04203323f;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.34732229f;
    r1 = n += 0.46726316f;
    n = r1 *= n;
    r2 = n *= -0.18366069f;
    n += 0.07271825f;
    r3 = n += -0.03824903f;
    r4 = n += 0.56550634f;
    n *= -47.27899551f;
    r5 = n *= 0.31832233f;
    n += r5;
    r5 = n *= 0.00031465f;
    n *= 4.66135836f;
    n += -0.52918607f;
    n *= r3;
    r3 = n += -1.28409445f;
    n *= -2.21589422f;
    n = r3 *= n;
    n *= r4;
    n *= r2;
    n += -0.33475426f;
    n = r3 *= n;
    n *= r5;
    n *= r1;
    r1 = n += 0.18118252f;
    n *= 0.44655296f;
    n += r0;
    r0 = n *= 0.19830011f;
    n += r3;
    n *= 1.90385985f;
    n += r0;
    n += -1.12640679f;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.43527126f;
    r1 = n += -1.70930612f;
    n = r1 *= n;
    r2 = n *= -0.51060849f;
    n += 1.44693720f;
    r3 = n += -1.40795410f;
    r4 = n += 1.38239098f;
    n *= -0.06436963f;
    r5 = n *= -103.94348907f;
    n += r5;
    r5 = n *= 0.00036181f;
    n *= 1.21879673f;
    n += 0.15956435f;
    n *= r3;
    r3 = n += 0.96614206f;
    n *= -1.98378742f;
    n = r3 *= n;
    n *= r4;
    n *= r2;
    n += -1.10817516f;
    n = r3 *= n;
    n *= r5;
    n *= r1;
    r1 = n += 0.90907329f;
    n *= -0.81375772f;
    n += r0;
    r0 = n *= -1.54906952f;
    n += r3;
    n *= -1.29661906f;
    n += r0;
    n += 1.12773299f;
    n += r1;
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
