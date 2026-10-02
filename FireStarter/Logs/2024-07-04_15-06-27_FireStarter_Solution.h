// Run date: 07/04/24 15:06:27 Pacific Daylight Time
// Run duration = 596.875166 seconds
// Run generation = 599
// Run evolution = 10
// Run max result = 0.00000023
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
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
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.58838952f;
    r1 = n *= -0.78988165f;
    r2 = n += -0.14007363f;
    r3 = n += 1.36692035f;
    n += 1.22684872f;
    n *= r1;
    n *= -1.54901803f;
    n *= -0.00116997f;
    r1 = n += -0.52963167f;
    n *= 2.54600739f;
    r4 = n *= 1.37526178f;
    r5 = n += 0.45609349f;
    n *= r3;
    n *= -3.05366015f;
    r3 = n *= 0.29314700f;
    r6 = n *= -0.56878418f;
    n *= r3;
    n *= 0.07967901f;
    r3 = n += 0.88958389f;
    n += -0.16102080f;
    n = r1 *= n;
    n += r4;
    n *= 2.73556876f;
    n += 1.76074910f;
    n *= r6;
    n *= r5;
    n *= r3;
    n *= r1;
    n += r0;
    n += 0.01985984f;
    n += r2;
    n += -0.20614271f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.45945203f;
    r1 = n *= -1.02268195f;
    r2 = n += 0.26854250f;
    r3 = n += 1.39966285f;
    n += 1.66821599f;
    n *= r1;
    n *= 5.20192909f;
    n *= -0.00039435f;
    r1 = n += 1.44655097f;
    n *= 3.05436325f;
    r4 = n *= 0.26337424f;
    r5 = n += -0.38056257f;
    n *= r3;
    n *= -0.38876885f;
    r3 = n *= -2.00458074f;
    r6 = n *= -0.31153864f;
    n *= r3;
    n *= -0.47127911f;
    r3 = n += -1.08162284f;
    n += -0.43462625f;
    n = r1 *= n;
    n += r4;
    n *= 0.52362174f;
    n += -2.39481497f;
    n *= r6;
    n *= r5;
    n *= r3;
    n *= r1;
    n += r0;
    n += 1.55911779f;
    n += r2;
    n += -1.90879309f;
    return n;
} // Solution1

// Solution2 result = 0.00000023
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -1.53775620f;
    r1 = n *= -0.54095542f;
    r2 = n += -0.45793223f;
    r3 = n += 1.04229259f;
    n += 0.58435619f;
    n *= r1;
    n *= 0.00367767f;
    n *= -4.47448158f;
    r1 = n += 0.52621013f;
    n *= -2.52716136f;
    r4 = n *= 3.91345239f;
    r5 = n += -3.72626925f;
    n *= r3;
    n *= 0.54592532f;
    r3 = n *= 0.03791848f;
    r6 = n *= 0.90343934f;
    n *= r3;
    n *= 3.16363335f;
    r3 = n += -0.36245498f;
    n += 0.02912463f;
    n = r1 *= n;
    n += r4;
    n *= -4.76029015f;
    n += 1.91455758f;
    n *= r6;
    n *= r5;
    n *= r3;
    n *= r1;
    n += r0;
    n += 0.65700722f;
    n += r2;
    n += -0.17135362f;
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
