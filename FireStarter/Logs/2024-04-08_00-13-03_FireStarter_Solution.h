// Run date: 04/08/24 00:13:03 Pacific Daylight Time
// Run duration = 26928.001819 seconds
// Run generation = 78
// Run evolution = 5
// Run max result = 0.00000036
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 28
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
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
    float r0, r1, r2, r3;

    n *= -0.55195761f;
    r0 = n += 1.73402596f;
    n *= 1.84444892f;
    r1 = n *= -0.85609883f;
    n *= r1;
    r1 = n += -1.63252938f;
    r2 = n *= -0.00066682f;
    r3 = n += 0.26681778f;
    n += r1;
    n *= 0.11138957f;
    n += -0.68253511f;
    n = r3 *= n;
    n += -1.54716778f;
    r1 = n += -0.18737815f;
    n *= r2;
    n *= 7.17660379f;
    n += -2.02119827f;
    n *= 0.18441817f;
    n = r1 *= n;
    n += 0.62816817f;
    r2 = n += 2.29198456f;
    n *= -0.26866159f;
    n += 1.95663047f;
    n = r2 *= n;
    n += r2;
    n *= r1;
    n = r3 *= n;
    n += -1.71533656f;
    n *= r3;
    n *= r0;
    n += -0.00000002f;
    n *= 0.53572559f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n *= -0.25987241f;
    r0 = n += 0.80317706f;
    n *= 2.70754290f;
    r1 = n *= -1.19340479f;
    n *= r1;
    r1 = n += -1.32690525f;
    r2 = n *= -0.00067048f;
    r3 = n += -1.89348531f;
    n += r1;
    n *= 0.05054462f;
    n += -2.20745683f;
    n = r3 *= n;
    n += 1.76687896f;
    r1 = n += -4.54949522f;
    n *= r2;
    n *= -0.14545925f;
    n += -0.07365734f;
    n *= -0.09314953f;
    n = r1 *= n;
    n += -11.19453716f;
    r2 = n += 5.59209394f;
    n *= -0.35896531f;
    n += -4.18754387f;
    n = r2 *= n;
    n += r2;
    n *= r1;
    n = r3 *= n;
    n += 0.00750606f;
    n *= r3;
    n *= r0;
    n += -0.04613595f;
    n *= 2.56052423f;
    return n;
} // Solution1

// Solution2 result = 0.00000036
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n *= -0.61837900f;
    r0 = n += 1.61891234f;
    n *= -1.17989063f;
    r1 = n *= 0.29904661f;
    n *= r1;
    r1 = n += -0.14153136f;
    r2 = n *= 0.02423600f;
    r3 = n += -0.07507101f;
    n += r1;
    n *= 2.36452103f;
    n += -0.05427685f;
    n = r3 *= n;
    n += 1.07563353f;
    r1 = n += -0.23841320f;
    n *= r2;
    n *= 1.55355775f;
    n += -2.53559208f;
    n *= -0.05484106f;
    n = r1 *= n;
    n += -1.81465340f;
    r2 = n += 1.03610706f;
    n *= -1.30424321f;
    n += -65.71543121f;
    n = r2 *= n;
    n += r2;
    n *= r1;
    n = r3 *= n;
    n += 1.20799696f;
    n *= r3;
    n *= r0;
    n += 0.25640199f;
    n *= 2.04210114f;
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
