// Run date: 04/06/24 16:32:53 Pacific Daylight Time
// Run duration = 19709.933965 seconds
// Run generation = 764
// Run evolution = 7
// Run max result = 0.00000016
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
    float r0, r1, r2, r3, r4, r5;

    n *= 0.45269147f;
    r0 = n += -1.42217219f;
    n = r0 += n;
    n *= -0.00261127f;
    n *= 0.33200619f;
    r1 = n *= 2.50413465f;
    r2 = n *= 540.01837158f;
    n += r1;
    n *= 0.32634214f;
    n *= r0;
    n += 0.81656861f;
    r0 = n *= -1.65079868f;
    r1 = n *= -0.00614863f;
    r3 = n *= 0.17677628f;
    n += 0.15685846f;
    n *= r0;
    n *= -1.67605615f;
    r0 = n += 0.96554828f;
    n += 1.78711057f;
    r4 = n *= 0.20531037f;
    r5 = n += 0.35089085f;
    n += 3.65899038f;
    n = r3 *= n;
    n *= r4;
    n += r1;
    n += 0.21623130f;
    n += r3;
    n *= r5;
    n *= r0;
    n *= r2;
    n += -0.00000001f;
    n *= 3.05303597f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.65873522f;
    r0 = n += 2.03592563f;
    n = r0 += n;
    n *= -0.13983350f;
    n *= -4.94004679f;
    r1 = n *= -0.99318296f;
    r2 = n *= -0.07193379f;
    n += r1;
    n *= -1.51656795f;
    n *= r0;
    n += -4.25684404f;
    r0 = n *= 0.12760131f;
    r1 = n *= -0.02966253f;
    r3 = n *= 1.84355235f;
    n += 2.55569720f;
    n *= r0;
    n *= 0.01962708f;
    r0 = n += -0.76800835f;
    n += -0.22219829f;
    r4 = n *= 1.62103891f;
    r5 = n += -0.30108759f;
    n += -7.60809231f;
    n = r3 *= n;
    n *= r4;
    n += r1;
    n += 0.76344281f;
    n += r3;
    n *= r5;
    n *= r0;
    n *= r2;
    n += -0.01044837f;
    n *= 11.30623436f;
    return n;
} // Solution1

// Solution2 result = 0.00000016
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.60220331f;
    r0 = n += 1.57656443f;
    n = r0 += n;
    n *= -2.60683656f;
    n *= 0.78589177f;
    r1 = n *= 0.37004513f;
    r2 = n *= 0.32396701f;
    n += r1;
    n *= -0.31189644f;
    n *= r0;
    n += -2.93733931f;
    r0 = n *= 0.85787410f;
    r1 = n *= -0.83956230f;
    r3 = n *= 0.01964916f;
    n += 0.37152684f;
    n *= r0;
    n *= -0.39909220f;
    r0 = n += 0.89527208f;
    n += -0.14103375f;
    r4 = n *= -0.64093161f;
    r5 = n += -0.83244509f;
    n += -3.74206948f;
    n = r3 *= n;
    n *= r4;
    n += r1;
    n += -0.46324915f;
    n += r3;
    n *= r5;
    n *= r0;
    n *= r2;
    n += 0.51290482f;
    n *= 1.02084970f;
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
