// Run date: 09/10/23 12:16:53 Pacific Daylight Time
// Run duration = 1507.175411 seconds
// Run generation = 69
// Run evolution = 20
// Run result = 0.00000083
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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

// Solution0 result = 0.00000048
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= 0.22621840f;
    r1 = n *= 0.81403023f;
    n *= r0;
    r0 = n += -1.53706646f;
    r2 = n *= 1.63517094f;
    n += 1.78374958f;
    r3 = n += -0.19305830f;
    r4 = n *= -0.16403130f;
    r5 = n *= -1.70094550f;
    n *= 0.05821993f;
    n = r5 += n;
    n *= -0.05309309f;
    n *= 7.39104843f;
    n *= -0.78095239f;
    n += 2.32554412f;
    n *= r3;
    n += 1.15270483f;
    n *= 0.12587240f;
    n *= r4;
    n += -1.72516441f;
    n = r2 *= n;
    n += 1.03266692f;
    n += 2.70775795f;
    n *= r5;
    n *= r0;
    n *= -0.41553804f;
    n *= r2;
    n += -1.74879551f;
    n += 2.50669360f;
    n *= r1;
    n += -0.00000004f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065843f;
    r0 = n *= 0.18208459f;
    r1 = n *= 1.61088037f;
    n *= r0;
    r0 = n += -1.32443559f;
    r2 = n *= 0.40384629f;
    n += -1.12343478f;
    r3 = n += -3.11381793f;
    r4 = n *= -0.45997530f;
    r5 = n *= -0.02564156f;
    n *= -1.17479110f;
    n = r5 += n;
    n *= -0.21948013f;
    n *= -1.11950827f;
    n *= 0.00003138f;
    n += 4.39891100f;
    n *= r3;
    n += 1.24558401f;
    n *= 0.65238833f;
    n *= r4;
    n += -0.69713527f;
    n = r2 *= n;
    n += 4.37518787f;
    n += 25.93518829f;
    n *= r5;
    n *= r0;
    n *= 0.40345275f;
    n *= r2;
    n += -0.63212597f;
    n += 0.61391944f;
    n *= r1;
    n += -0.11813174f;
    return n;
} // Solution1

// Solution2 result = 0.00000083
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799383f;
    r0 = n *= 0.40335813f;
    r1 = n *= -0.20992097f;
    n *= r0;
    r0 = n += 1.28260362f;
    r2 = n *= 1.84209406f;
    n += -0.79199272f;
    r3 = n += -1.19610345f;
    r4 = n *= -0.16686068f;
    r5 = n *= 1.05394006f;
    n *= -1.11067295f;
    n = r5 += n;
    n *= 0.10217737f;
    n *= -30.96170425f;
    n *= -3.83962774f;
    n += -1.73810053f;
    n *= r3;
    n += -4.41761923f;
    n *= 2.81449533f;
    n *= r4;
    n += 19.42760658f;
    n = r2 *= n;
    n += 0.47066957f;
    n += 8.49486923f;
    n *= r5;
    n *= r0;
    n *= 0.51428306f;
    n *= r2;
    n += -3.04167438f;
    n += 1.70536780f;
    n *= r1;
    n += 0.52359885f;
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
