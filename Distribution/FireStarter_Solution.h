// Run date: 06/21/25 10:25:37 Pacific Daylight Time
// Run duration = 233.226954 seconds
// Run test = 0
// Run generation = 113
// Run evolution = 6
// Run precision  = 0.00000170
// Run max result = 0.00000143
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_SELECT
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 16
// Run population = 32768
// Run generations = 0
// Run passes = 512
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3
#define SOLUTION_VARIATION 0

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * SOLUTION_PI)

inline float SolutionTarget(float n, unsigned int variation = 0)
{
    switch (variation & 3) {
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

inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    r1 = n *= -0.51973653f;
    n *= -0.70801419f;
    n *= r1;
    r1 = n += 0.50313652f;
    r2 = n *= -0.05069821f;
    n += -5.88195372f;
    n = r2 *= n;
    n += 1.72373855f;
    r3 = n += 0.10457958f;
    n += 2.76250648f;
    r4 = n += 0.13208032f;
    n *= r2;
    n += 1.76018560f;
    n *= r0;
    n = r3 *= n;
    n *= -3.68427277f;
    n *= r4;
    n *= 0.03581801f;
    r4 = n *= 2.35432076f;
    n += r4;
    n = r1 *= n;
    n += r1;
    n *= -0.19129819f;
    n *= -0.00824178f;
    n *= -12.21765614f;
    n += r3;
    n += 1.93107665f;
    n *= -0.12589949f;
    n *= 1.51970196f;
    n += 3.42567158f;
    n += -3.05619931f;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065914f;
    r1 = n *= -0.16125761f;
    n *= -0.48013127f;
    n *= r1;
    r1 = n += 0.08145817f;
    r2 = n *= -1.01853275f;
    n += -0.71889353f;
    n = r2 *= n;
    n += 0.52002060f;
    r3 = n += 1.35440135f;
    n += -1.92433083f;
    r4 = n += 4.86037731f;
    n *= r2;
    n += 0.58127993f;
    n *= r0;
    n = r3 *= n;
    n *= 3.14864898f;
    n *= r4;
    n *= 0.11165410f;
    r4 = n *= 3.47479057f;
    n += r4;
    n = r1 *= n;
    n += r1;
    n *= -3.49025488f;
    n *= -0.59537882f;
    n *= 0.09543828f;
    n += r3;
    n += 2.34999776f;
    n *= -0.40733951f;
    n *= 1.10910439f;
    n += -2.69516778f;
    n += 3.63872266f;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799383f;
    r1 = n *= -0.19067162f;
    n *= -1.02121949f;
    n *= r1;
    r1 = n += 0.21398433f;
    r2 = n *= 1.08875895f;
    n += 3.61701465f;
    n = r2 *= n;
    n += 2.09077883f;
    r3 = n += 1.03167427f;
    n += 2.71674466f;
    r4 = n += -1.75434041f;
    n *= r2;
    n += -0.48333877f;
    n *= r0;
    n = r3 *= n;
    n *= -1.90819001f;
    n *= r4;
    n *= -0.90676761f;
    r4 = n *= 0.01717060f;
    n += r4;
    n = r1 *= n;
    n += r1;
    n *= 0.90366107f;
    n *= -0.02087760f;
    n *= -7.16707373f;
    n += r3;
    n += -2.97186494f;
    n *= 0.04125855f;
    n *= -1.48765969f;
    n += -4.65211153f;
    n += 4.99330091f;
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
