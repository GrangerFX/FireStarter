// Run date: 08/28/22 10:44:02 Pacific Daylight Time
// Run duration = 2.322816 seconds
// Run count = 74
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run process = 0;
// Run population = 69632;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 7400

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

// Precision = 0.00113773

// Solution0 precision = 0.00014454
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.20980346f;
    r0 = n += -0.47661772f;
    r1 = n += 0.30749518f;
    r2 = n *= -0.23246339f;
    r3 = n += 0.15975431f;
    n += -0.07124372f;
    r4 = n *= 0.74415284f;
    r5 = n += 0.97843969f;
    r6 = n += 0.69477761f;
    n *= 1.73465300f;
    n += -4.49039125f;
    n *= r6;
    n *= 0.82973576f;
    n = r1 *= n;
    n *= 0.81365395f;
    n *= 1.38518286f;
    n *= 0.22195360f;
    n *= 3.33016443f;
    n *= 0.23672207f;
    n *= r2;
    n += r3;
    n *= 0.06766082f;
    n *= -7.57439899f;
    n *= -0.09468742f;
    n *= r0;
    n *= 1.39127302f;
    n += r4;
    n *= r1;
    n *= r5;
    n += -0.71521139f;
    n *= 15.62552452f;
    n *= -0.08785085f;
    return n;
} // Solution0

// Solution1 precision = 0.00009039
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.35516503f;
    r0 = n += -0.06996135f;
    r1 = n += 1.52790177f;
    r2 = n *= 0.26637071f;
    r3 = n += -1.04008770f;
    n += -1.01915741f;
    r4 = n *= 0.53492802f;
    r5 = n += 1.05185270f;
    r6 = n += -1.36946595f;
    n *= -3.95652056f;
    n += 1.07689261f;
    n *= r6;
    n *= -4.27523184f;
    n = r1 *= n;
    n *= 21.93429947f;
    n *= 1.52879167f;
    n *= -0.30851150f;
    n *= 0.65601265f;
    n *= -2.16517138f;
    n *= r2;
    n += r3;
    n *= -0.12805131f;
    n *= 0.10670054f;
    n *= -0.12030006f;
    n *= r0;
    n *= 0.07022646f;
    n += r4;
    n *= r1;
    n *= r5;
    n += -0.30770686f;
    n *= -1.78838062f;
    n *= 0.05205048f;
    return n;
} // Solution1

// Solution2 precision = 0.00113773
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.00157509f;
    r0 = n += -0.00107443f;
    r1 = n += -0.76967442f;
    r2 = n *= 0.40469068f;
    r3 = n += 1.20293117f;
    n += -1.66508007f;
    r4 = n *= -1.25912631f;
    r5 = n += -1.72125447f;
    r6 = n += 4.50472450f;
    n *= -0.32498834f;
    n += 0.36543015f;
    n *= r6;
    n *= 0.44679967f;
    n = r1 *= n;
    n *= 2.45544767f;
    n *= 0.01724786f;
    n *= -32.06469345f;
    n *= -0.01246402f;
    n *= 64.45893097f;
    n *= r2;
    n += r3;
    n *= 0.13848774f;
    n *= 1.48993397f;
    n *= -0.02233403f;
    n *= r0;
    n *= -9.94303226f;
    n += r4;
    n *= r1;
    n *= r5;
    n += 0.80870193f;
    n *= 0.34360337f;
    n *= 3.43785787f;
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
