// Run date: 02/24/24 20:28:17 Pacific Standard Time
// Run duration = 28155.972166 seconds
// Run generation = 56
// Run evolution = 6
// Run max result = 0.00005310
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
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 128
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

// Solution0 result = 0.00001436
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.19199391f;
    n *= 1.54023826f;
    r1 = n *= 0.09731783f;
    n += r1;
    r1 = n *= 1.60811496f;
    r2 = n += -0.00000603f;
    n = r1 *= n;
    n += 1.68921077f;
    r3 = n += -3.06253266f;
    n += r1;
    r1 = n *= -0.61917925f;
    r4 = n *= -2.35102439f;
    r5 = n += -2.96972823f;
    r6 = n += -1.01627851f;
    n *= r2;
    n *= r3;
    n *= -0.00634092f;
    r3 = n *= -149.11083984f;
    n *= 0.86861497f;
    r2 = n *= -0.38560653f;
    n *= r2;
    n *= r4;
    r4 = n += 0.64604753f;
    n *= -0.00123492f;
    n *= -6.63973141f;
    n += r1;
    n *= r4;
    n *= r6;
    n *= r0;
    n *= r5;
    n += r3;
    n *= 0.25803694f;
    return n;
} // Solution0

// Solution1 result = 0.00001788
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.64534795f;
    n *= -1.21147311f;
    r1 = n *= 0.89009058f;
    n += r1;
    r1 = n *= -0.09468185f;
    r2 = n += -0.59875119f;
    n = r1 *= n;
    n += -0.29496142f;
    r3 = n += -2.11972690f;
    n += r1;
    r1 = n *= -0.14560777f;
    r4 = n *= 1.27948713f;
    r5 = n += -3.66884375f;
    r6 = n += 0.57135332f;
    n *= r2;
    n *= r3;
    n *= 0.00816238f;
    r3 = n *= -487.93994141f;
    n *= -0.35105404f;
    r2 = n *= -1.01426506f;
    n *= r2;
    n *= r4;
    r4 = n += -2.60972977f;
    n *= -1.88783634f;
    n *= 0.00514902f;
    n += r1;
    n *= r4;
    n *= r6;
    n *= r0;
    n *= r5;
    n += r3;
    n *= 0.05590146f;
    return n;
} // Solution1

// Solution2 result = 0.00005310
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.09580752f;
    n *= -1.83178866f;
    r1 = n *= 0.95593691f;
    n += r1;
    r1 = n *= 0.51950997f;
    r2 = n += 0.00001177f;
    n = r1 *= n;
    n += -2.81823945f;
    r3 = n += -0.72818220f;
    n += r1;
    r1 = n *= -0.29718167f;
    r4 = n *= 1.10602057f;
    r5 = n += 2.29155874f;
    r6 = n += -0.64287484f;
    n *= r2;
    n *= r3;
    n *= -0.41604984f;
    r3 = n *= 0.97631609f;
    n *= 0.48613098f;
    r2 = n *= 1.30364513f;
    n *= r2;
    n *= r4;
    r4 = n += -0.55970931f;
    n *= 0.00040312f;
    n *= -17.80552673f;
    n += r1;
    n *= r4;
    n *= r6;
    n *= r0;
    n *= r5;
    n += r3;
    n *= -1.11243629f;
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
