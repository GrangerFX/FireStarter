// Run date: 01/03/24 08:36:41 Pacific Standard Time
// Run duration = 1129.235299 seconds
// Run generation = 4
// Run evolution = 4
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
// Run evolveSeed = 1
// Run optimizeSeed = 1
// Run tests = 16
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -3.14159274f;
    r1 = n *= -0.47974280f;
    r2 = n *= -1.28624523f;
    n *= r0;
    n *= -0.14127667f;
    r0 = n *= -0.83569205f;
    n *= 0.16943491f;
    r3 = n *= 1.83955860f;
    n *= r3;
    n *= -0.69351125f;
    n += -1.21243048f;
    n += -0.66860813f;
    n += r0;
    r0 = n += 1.69189548f;
    n *= 0.02542720f;
    n *= 1.78349900f;
    r3 = n += -0.32940933f;
    n = r1 *= n;
    n *= -0.36852556f;
    n += r1;
    n = r2 += n;
    n = r3 *= n;
    n *= r3;
    n += -1.00569522f;
    n = r2 *= n;
    n *= 1.08313143f;
    n *= r0;
    n += 0.06361783f;
    n += -0.17461804f;
    n *= -1.86493385f;
    n += -0.20700809f;
    n += r2;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -3.09065843f;
    r1 = n *= -0.31748143f;
    r2 = n *= -0.63397604f;
    n *= r0;
    n *= -0.73186588f;
    r0 = n *= -0.80248183f;
    n *= 0.00436672f;
    r3 = n *= 0.10898759f;
    n *= r3;
    n *= -44046.60156250f;
    n += -1.20062435f;
    n += 0.53642344f;
    n += r0;
    r0 = n += -0.15613708f;
    n *= -0.49994677f;
    n *= -0.09411932f;
    r3 = n += -0.52601814f;
    n = r1 *= n;
    n *= 1.75085890f;
    n += r1;
    n = r2 += n;
    n = r3 *= n;
    n *= r3;
    n += -1.54237938f;
    n = r2 *= n;
    n *= 0.07658974f;
    n *= r0;
    n += 3.37100244f;
    n += -2.79641318f;
    n *= -0.43091753f;
    n += 0.12946890f;
    n += r2;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -2.61799359f;
    r1 = n *= 0.43830860f;
    r2 = n *= -0.66011304f;
    n *= r0;
    n *= -0.54167241f;
    r0 = n *= -1.51687443f;
    n *= -0.55327368f;
    r3 = n *= 0.32156950f;
    n *= r3;
    n *= 0.82488650f;
    n += 0.50054723f;
    n += 0.17913261f;
    n += r0;
    r0 = n += 1.41828346f;
    n *= -0.11893146f;
    n *= 0.46825218f;
    r3 = n += -0.94219583f;
    n = r1 *= n;
    n *= -0.79229963f;
    n += r1;
    n = r2 += n;
    n = r3 *= n;
    n *= r3;
    n += -2.14509082f;
    n = r2 *= n;
    n *= 0.48131308f;
    n *= r0;
    n += 0.51277459f;
    n += -0.96331513f;
    n *= -2.18713975f;
    n += -0.46179631f;
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
