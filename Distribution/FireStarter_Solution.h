// Run date: 01/02/23 22:16:54 Pacific Standard Time
// Run duration = 10.924061 seconds
// Run count = 105
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 105

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

// Precision = 0.00008416

// Solution0 precision = 0.00000528
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.35802406f;
    n *= 0.68385750f;
    r1 = n *= -0.84565002f;
    n *= -0.71469414f;
    n += 0.46585280f;
    n *= -4.77706718f;
    r2 = n *= -0.24911280f;
    n += -0.53887177f;
    r3 = n += 1.53235352f;
    r4 = n *= -1.82302952f;
    n += 1.23487473f;
    r5 = n += 2.36613607f;
    n += 0.03290947f;
    n *= r4;
    n += 1.10333133f;
    r4 = n += 0.19567005f;
    r6 = n += 0.03990882f;
    n *= r4;
    n *= r2;
    r2 = n *= 1.06523871f;
    n *= -4.13925362f;
    n *= r5;
    n *= 3.36403418f;
    n += r0;
    n += 1.47634208f;
    n *= r3;
    n *= r6;
    n *= -0.02163034f;
    n *= -0.62082380f;
    n += r1;
    n += -0.64926708f;
    n += r2;
    return n;
} // Solution0

// Solution1 precision = 0.00001657
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.33930957f;
    n *= -1.61198783f;
    r1 = n *= -0.11415664f;
    n *= 3.36007452f;
    n += 0.65246964f;
    n *= 1.44909704f;
    r2 = n *= 1.26403964f;
    n += -0.72821718f;
    r3 = n += -1.07582200f;
    r4 = n *= 0.61306518f;
    n += 2.89209580f;
    r5 = n += -0.67393160f;
    n += -0.02286360f;
    n *= r4;
    n += 0.46009296f;
    r4 = n += -0.21857129f;
    r6 = n += -0.51070529f;
    n *= r4;
    n *= r2;
    r2 = n *= 1.35719705f;
    n *= -3.55799747f;
    n *= r5;
    n *= -4.69804716f;
    n += r0;
    n += -0.43794015f;
    n *= r3;
    n *= r6;
    n *= 2.62353206f;
    n *= 0.00295208f;
    n += r1;
    n += 0.08558767f;
    n += r2;
    return n;
} // Solution1

// Solution2 precision = 0.00008416
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 1.06609547f;
    n *= 0.32711390f;
    r1 = n *= 1.10312378f;
    n *= 1.25800335f;
    n += -1.47223520f;
    n *= -1.63705599f;
    r2 = n *= 0.47064599f;
    n += 0.92667758f;
    r3 = n += -1.87987149f;
    r4 = n *= -1.16216028f;
    n += -2.93646193f;
    r5 = n += 0.64809471f;
    n += 0.74150455f;
    n *= r4;
    n += -3.75021672f;
    r4 = n += 1.03635359f;
    r6 = n += -1.84638023f;
    n *= r4;
    n *= r2;
    r2 = n *= 0.16776025f;
    n *= 0.88890016f;
    n *= r5;
    n *= -2.22880292f;
    n += r0;
    n += -1.63651061f;
    n *= r3;
    n *= r6;
    n *= -0.52314419f;
    n *= -0.11603248f;
    n += r1;
    n += -1.51821983f;
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
