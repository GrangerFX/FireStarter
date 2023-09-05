// Run date: 09/04/23 14:52:39 Pacific Daylight Time
// Run duration = 2273.801087 seconds
// Run generation = 10
// Run evolution = 5
// Run result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 2
// Run processes = 2
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

    n += -1.57556784f;
    r0 = n += -1.56602490f;
    r1 = n *= 0.44372171f;
    n = r1 *= n;
    n += -0.38494608f;
    r2 = n *= -1.08218169f;
    n *= 0.88996232f;
    n += r1;
    n += -1.47038054f;
    r1 = n *= 1.69241929f;
    r3 = n *= -0.61120683f;
    n *= -0.50489318f;
    n = r3 *= n;
    r4 = n *= 1.37046885f;
    r5 = n *= 0.56461149f;
    n += 0.87940371f;
    n += r1;
    r1 = n *= 1.90222442f;
    n *= -0.12092797f;
    n += 0.84586632f;
    n *= -0.86815077f;
    n = r0 *= n;
    n *= r3;
    r3 = n *= -0.88775682f;
    n *= r0;
    n += r2;
    n += r4;
    n += r1;
    n *= r3;
    n *= r5;
    n += -0.00069412f;
    n += 0.00069409f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.66059804f;
    r0 = n += -2.43006039f;
    r1 = n *= 0.43875477f;
    n = r1 *= n;
    n += -0.68760782f;
    r2 = n *= 1.40319967f;
    n *= -0.73760033f;
    n += r1;
    n += 0.77066398f;
    r1 = n *= -1.39758265f;
    r3 = n *= 0.39403763f;
    n *= -1.63564348f;
    n = r3 *= n;
    r4 = n *= 0.56776732f;
    r5 = n *= 1.12760329f;
    n += -2.10483766f;
    n += r1;
    r1 = n *= -1.49142087f;
    n *= 1.75246608f;
    n += -2.78915477f;
    n *= -0.27309054f;
    n = r0 *= n;
    n *= r3;
    r3 = n *= 0.09359859f;
    n *= r0;
    n += r2;
    n += r4;
    n += r1;
    n *= r3;
    n *= r5;
    n += 0.30055687f;
    n += -0.41868845f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.19987321f;
    r0 = n += -0.41812053f;
    r1 = n *= 0.65496868f;
    n = r1 *= n;
    n += -1.57445741f;
    r2 = n *= -0.83250999f;
    n *= 1.36866379f;
    n += r1;
    n += 1.43809807f;
    r1 = n *= 0.20302774f;
    r3 = n *= 1.29227340f;
    n *= 1.05709183f;
    n = r3 *= n;
    r4 = n *= 1.73765993f;
    r5 = n *= 1.78590620f;
    n += 0.49853569f;
    n += r1;
    r1 = n *= -0.00818440f;
    n *= -2.14802527f;
    n += 0.94835246f;
    n *= 0.89501029f;
    n = r0 *= n;
    n *= r3;
    r3 = n *= -0.23699063f;
    n *= r0;
    n += r2;
    n += r4;
    n += r1;
    n *= r3;
    n *= r5;
    n += 0.06838507f;
    n += 0.45521376f;
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
