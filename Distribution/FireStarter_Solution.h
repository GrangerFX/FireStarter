// Run date: 09/05/22 16:39:43 Pacific Daylight Time
// Run duration = 1.278962 seconds
// Run count = 6
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_UNIT;
// Run units = 4;
// Run process = 0;
// Run population = 69632;
// Run iterations = 128;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 8337;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 6

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00000525

// Solution0 precision = 0.00000125
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.14159250f;
    r0 = n *= -0.95610476f;
    n *= -0.50648504f;
    r1 = n *= 0.70603132f;
    n = r0 *= n;
    r2 = n += 1.02789104f;
    n *= 0.04367317f;
    r3 = n += 0.94827694f;
    r4 = n *= 0.00047121f;
    n *= r0;
    n *= 1.74366152f;
    r0 = n *= -3.05556631f;
    n *= -3.77031350f;
    n += -4.07354689f;
    n = r0 *= n;
    n = r3 += n;
    n += 0.89702874f;
    n *= r2;
    n += 3.78300500f;
    n = r4 += n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= 0.83630311f;
    n = r3 *= n;
    n *= -0.01274062f;
    n *= r4;
    n += -0.00000004f;
    n *= -5.47750807f;
    n += r3;
    n += r0;
    n *= -0.43936345f;
    return n;
} // Solution0

// Solution1 precision = 0.00000525
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.09065914f;
    r0 = n *= 0.53330314f;
    n *= -0.75103676f;
    r1 = n *= 0.36440876f;
    n = r0 *= n;
    r2 = n += 1.33866763f;
    n *= -0.92777628f;
    r3 = n += -0.41784722f;
    r4 = n *= 0.80541342f;
    n *= r0;
    n *= -5.30573320f;
    r0 = n *= -0.00597400f;
    n *= 4.82061958f;
    n += -0.33394328f;
    n = r0 *= n;
    n = r3 += n;
    n += -1.00956702f;
    n *= r2;
    n += -1.26137519f;
    n = r4 += n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -1.34002590f;
    n = r3 *= n;
    n *= -0.04028878f;
    n *= r4;
    n += 0.41264701f;
    n *= 0.59910303f;
    n += r3;
    n += r0;
    n *= -0.47784662f;
    return n;
} // Solution1

// Solution2 precision = 0.00000095
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.61799359f;
    r0 = n *= -0.75326455f;
    n *= -1.29388690f;
    r1 = n *= -0.32439792f;
    n = r0 *= n;
    r2 = n += -1.19121623f;
    n *= -0.05264970f;
    r3 = n += 1.47400141f;
    r4 = n *= -0.20722340f;
    n *= r0;
    n *= 0.01496101f;
    r0 = n *= -1.18584692f;
    n *= 0.40351504f;
    n += -7.76966476f;
    n = r0 *= n;
    n = r3 += n;
    n += 0.45782173f;
    n *= r2;
    n += 0.31378505f;
    n = r4 += n;
    n = r1 *= n;
    n = r0 *= n;
    n += r1;
    n *= -0.88092273f;
    n = r3 *= n;
    n *= 0.22979431f;
    n *= r4;
    n += -1.10312939f;
    n *= -0.65760827f;
    n += r3;
    n += r0;
    n *= 0.72178000f;
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
