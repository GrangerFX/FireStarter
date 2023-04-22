// Run date: 04/22/23 12:56:42 Pacific Daylight Time
// Run duration = 1925.880026 seconds
// Run generation = 194
// Run result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
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
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.46382412f;
    r1 = n *= -1.00107276f;
    n = r0 += n;
    r2 = n *= 0.18142746f;
    n *= 0.00754468f;
    n *= 1.41376507f;
    n += 1.45871270f;
    n = r1 += n;
    r3 = n *= 2.04501915f;
    n += -0.33477020f;
    n += 1.42103279f;
    n += 1.89683473f;
    n *= r2;
    r2 = n *= 3.73250961f;
    r4 = n *= -9.02437115f;
    r5 = n += 5.07773447f;
    n += -0.66488832f;
    n *= r4;
    n += r5;
    n *= 4.53639889f;
    n *= r2;
    r2 = n += -0.85950583f;
    n *= r3;
    r3 = n *= -0.30132872f;
    n *= 1.44122350f;
    n *= r3;
    n = r2 += n;
    n += -1.36910343f;
    n *= r2;
    n *= r1;
    n += r0;
    n += 0.00156317f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.35727015f;
    r1 = n *= -1.00976110f;
    n = r0 += n;
    r2 = n *= 0.93277740f;
    n *= 0.00006989f;
    n *= 2.15330625f;
    n += 1.11497986f;
    n = r1 += n;
    r3 = n *= 1.10248268f;
    n += 1.75658560f;
    n += -1.14171040f;
    n += 0.61436903f;
    n *= r2;
    r2 = n *= -1.45823550f;
    r4 = n *= 2.70353532f;
    r5 = n += 1.99953473f;
    n += -2.30401492f;
    n *= r4;
    n += r5;
    n *= -3.22201920f;
    n *= r2;
    r2 = n += -1.63165998f;
    n *= r3;
    r3 = n *= -0.35960981f;
    n *= 1.34067142f;
    n *= r3;
    n = r2 += n;
    n += 0.01290091f;
    n *= r2;
    n *= r1;
    n += r0;
    n += -0.10735385f;
    return n;
} // Solution1

// Solution2 result = 0.00000006
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.60567266f;
    r1 = n *= -0.91294968f;
    n = r0 += n;
    r2 = n *= -0.01221734f;
    n *= 0.00016055f;
    n *= 2.66621590f;
    n += 1.44761682f;
    n = r1 += n;
    r3 = n *= 1.40702307f;
    n += 1.43992603f;
    n += 1.25028133f;
    n += -0.65337610f;
    n *= r2;
    r2 = n *= -5.44663143f;
    r4 = n *= -1.03439748f;
    r5 = n += 1.31232059f;
    n += -4.35412598f;
    n *= r4;
    n += r5;
    n *= -2.40156531f;
    n *= r2;
    r2 = n += -0.70560879f;
    n *= r3;
    r3 = n *= -0.47832039f;
    n *= 1.85775781f;
    n *= r3;
    n = r2 += n;
    n += -1.71788633f;
    n *= r2;
    n *= r1;
    n += r0;
    n += 0.38556769f;
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
