// Run date: 03/05/24 20:09:39 Pacific Standard Time
// Run duration = 4570.843752 seconds
// Run generation = 453
// Run evolution = 16
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -1.83144379f;
    n += -1.31015086f;
    r0 = n *= -0.37152290f;
    r1 = n += -0.00000100f;
    n *= r0;
    r0 = n += -1.36229420f;
    r2 = n *= -1.22515976f;
    n = r0 += n;
    n += -1.12764835f;
    r3 = n += 1.51686347f;
    n *= 0.00004898f;
    n = r0 *= n;
    n *= 3.38499832f;
    n = r0 *= n;
    n *= -22581.26367188f;
    n += -0.23344089f;
    n *= 0.53021389f;
    n = r2 *= n;
    n = r3 += n;
    n = r0 += n;
    n *= -1.47204876f;
    n = r3 *= n;
    n += -2.37627292f;
    n *= r0;
    n *= 2.08342671f;
    n += -2.27610826f;
    r0 = n += -1.02121520f;
    n *= r3;
    n *= r2;
    n *= r1;
    n *= r0;
    n += 0.00000077f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -1.72254765f;
    n += -1.36810029f;
    r0 = n *= -0.14695610f;
    r1 = n += 0.00000214f;
    n *= r0;
    r0 = n += -1.25785911f;
    r2 = n *= -1.25507474f;
    n = r0 += n;
    n += -1.27340055f;
    r3 = n += 0.50295752f;
    n *= -0.00544573f;
    n = r0 *= n;
    n *= 0.02334345f;
    n = r0 *= n;
    n *= 368210.40625000f;
    n += 0.65781826f;
    n *= 1.01386774f;
    n = r2 *= n;
    n = r3 += n;
    n = r0 += n;
    n *= 0.25013450f;
    n = r3 *= n;
    n += 1.26811957f;
    n *= r0;
    n *= 1.80686152f;
    n += 7.16651344f;
    r0 = n += 0.00715685f;
    n *= r3;
    n *= r2;
    n *= r1;
    n *= r0;
    n += -0.11813635f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -0.58109224f;
    n += -2.03690338f;
    r0 = n *= 0.46072584f;
    r1 = n += 0.00000123f;
    n *= r0;
    r0 = n += -1.05778551f;
    r2 = n *= -0.89696968f;
    n = r0 += n;
    n += 0.50900692f;
    r3 = n += -1.23687053f;
    n *= 0.01424935f;
    n = r0 *= n;
    n *= -14.36754894f;
    n = r0 *= n;
    n *= -5.39084673f;
    n += -1.49592626f;
    n *= -0.02317861f;
    n = r2 *= n;
    n = r3 += n;
    n = r0 += n;
    n *= -1.10363019f;
    n = r3 *= n;
    n += -3.34409261f;
    n *= r0;
    n *= 2.83296871f;
    n += 0.93916291f;
    r0 = n += -0.56302506f;
    n *= r3;
    n *= r2;
    n *= r1;
    n *= r0;
    n += 0.52359951f;
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
