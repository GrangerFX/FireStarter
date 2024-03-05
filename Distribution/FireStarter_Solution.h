// Run date: 03/04/24 18:32:49 Pacific Standard Time
// Run duration = 621.395054 seconds
// Run generation = 47
// Run evolution = 8
// Run max result = 0.00000015
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.54670519f;
    r0 = n += 1.71752501f;
    n *= 1.32108641f;
    r1 = n *= 0.54975373f;
    n = r0 *= n;
    r2 = n += -2.14242458f;
    n += 1.46878254f;
    r3 = n *= 1.56915343f;
    n = r0 += n;
    r4 = n *= -0.60776913f;
    n = r3 += n;
    n *= 0.63958967f;
    r5 = n *= -0.19230685f;
    n *= r4;
    r4 = n += 0.52856421f;
    n += r5;
    n += r0;
    n *= 0.04064433f;
    r0 = n += -2.74911928f;
    n += r3;
    n *= r4;
    r4 = n *= -1.20269763f;
    n += -0.40528837f;
    n += 2.61393595f;
    n *= r0;
    n *= r4;
    n *= 0.02269707f;
    n *= r1;
    n *= r2;
    r2 = n += -0.03596388f;
    n += 0.07192773f;
    n += r2;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.55134737f;
    r0 = n += -1.70402634f;
    n *= 0.09628871f;
    r1 = n *= 0.27794421f;
    n = r0 *= n;
    r2 = n += 0.48477936f;
    n += -0.49787825f;
    r3 = n *= -4.07940626f;
    n = r0 += n;
    r4 = n *= 0.13955908f;
    n = r3 += n;
    n *= -2.07869434f;
    r5 = n *= 1.06186521f;
    n *= r4;
    r4 = n += -1.45272839f;
    n += r5;
    n += r0;
    n *= 2.57612157f;
    r0 = n += 0.82509953f;
    n += r3;
    n *= r4;
    r4 = n *= -4.92811537f;
    n += 2.21502781f;
    n += 1.31744218f;
    n *= r0;
    n *= r4;
    n *= 0.06063219f;
    n *= r1;
    n *= r2;
    r2 = n += -0.02544395f;
    n += -0.06724368f;
    n += r2;
    return n;
} // Solution1

// Solution2 result = 0.00000015
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.60518736f;
    r0 = n += -1.58437669f;
    n *= 2.79524302f;
    r1 = n *= -0.29272056f;
    n = r0 *= n;
    r2 = n += 1.49336171f;
    n += 1.55967855f;
    r3 = n *= 0.39669910f;
    n = r0 += n;
    r4 = n *= -0.25835803f;
    n = r3 += n;
    n *= 0.23240636f;
    r5 = n *= -0.46890423f;
    n *= r4;
    r4 = n += 0.28001124f;
    n += r5;
    n += r0;
    n *= 0.05787963f;
    r0 = n += 0.87876129f;
    n += r3;
    n *= r4;
    r4 = n *= 0.51773727f;
    n += -0.15843448f;
    n += 2.12678385f;
    n *= r0;
    n *= r4;
    n *= 1.03745747f;
    n *= r1;
    n *= r2;
    r2 = n += 0.30544502f;
    n += -0.08729126f;
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
