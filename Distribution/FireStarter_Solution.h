// Run date: 08/26/23 12:53:46 Pacific Daylight Time
// Run duration = 6.711342 seconds
// Run generation = 300
// Run evolution = 29
// Run result = 0.00001323
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
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

// Solution0 result = 0.00000098
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.14159274f;
    r1 = n *= -0.44599938f;
    r2 = n *= 0.14233944f;
    r3 = n *= -0.84033948f;
    n *= r2;
    r2 = n += 0.03411248f;
    r4 = n += 0.14080314f;
    r5 = n *= 0.12080196f;
    r6 = n *= -30631.65625000f;
    r7 = n += 4.69747353f;
    n *= r5;
    r5 = n *= 0.00380750f;
    n *= r3;
    n *= r1;
    n = r5 *= n;
    n += -0.42974636f;
    n += 4.25795794f;
    n *= r5;
    n += -0.22629806f;
    n *= 0.02136844f;
    n = r4 *= n;
    n += r2;
    n *= r4;
    n = r6 *= n;
    r4 = n += 0.60118318f;
    n *= r6;
    n *= r7;
    n *= r0;
    n *= 0.22273578f;
    n *= r4;
    n += 0.40103412f;
    n += -0.40103409f;
    return n;
} // Solution0

// Solution1 result = 0.00001323
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -3.09066081f;
    r1 = n *= 0.08259594f;
    r2 = n *= 0.22580320f;
    r3 = n *= 0.10008482f;
    n *= r2;
    r2 = n += -0.18703112f;
    r4 = n += 0.06976061f;
    r5 = n *= -0.06215866f;
    r6 = n *= 24682.37695312f;
    r7 = n += -1.06325984f;
    n *= r5;
    r5 = n *= 5.49913168f;
    n *= r3;
    n *= r1;
    n = r5 *= n;
    n += -4.53287983f;
    n += -2.99686074f;
    n *= r5;
    n += 1.29128253f;
    n *= 0.04045045f;
    n = r4 *= n;
    n += r2;
    n *= r4;
    n = r6 *= n;
    r4 = n += 0.12180632f;
    n *= r6;
    n *= r7;
    n *= r0;
    n *= -0.25792637f;
    n *= r4;
    n += 2.72709179f;
    n += -2.84522629f;
    return n;
} // Solution1

// Solution2 result = 0.00000727
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n += -2.61799383f;
    r1 = n *= 0.15627478f;
    r2 = n *= -0.24726278f;
    r3 = n *= -0.69741774f;
    n *= r2;
    r2 = n += 0.07011605f;
    r4 = n += 0.03259321f;
    r5 = n *= 0.01872287f;
    r6 = n *= 108521.92968750f;
    r7 = n += -0.19895519f;
    n *= r5;
    r5 = n *= 4.51959467f;
    n *= r3;
    n *= r1;
    n = r5 *= n;
    n += -1.85497499f;
    n += 3.65696216f;
    n *= r5;
    n += -0.10404214f;
    n *= 0.19709842f;
    n = r4 *= n;
    n += r2;
    n *= r4;
    n = r6 *= n;
    r4 = n += -1.50180173f;
    n *= r6;
    n *= r7;
    n *= r0;
    n *= 0.06838874f;
    n *= r4;
    n += -2.36768579f;
    n += 2.89128470f;
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
