// Run date: 11/23/23 17:14:17 Pacific Standard Time
// Run duration = 43701.204667 seconds
// Run generation = 150
// Run evolution = 16
// Run result = 0.00000489
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
// Run tests = 16
// Run seeds = 64
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

// Solution0 result = 0.00000224
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n += -1.34466577f;
    r0 = n *= 0.29523745f;
    r1 = n *= 0.56738496f;
    r2 = n += -0.71342474f;
    n *= -0.28435287f;
    r3 = n += 0.81378567f;
    r4 = n += -1.45719242f;
    n = r0 += n;
    r5 = n *= -1.08655381f;
    r6 = n += -0.65076065f;
    n += 0.08643679f;
    r7 = n *= -0.03137930f;
    n *= -1.22925150f;
    n += 0.08633342f;
    n += -0.73353672f;
    r8 = n += -0.01100412f;
    n = r0 *= n;
    n = r1 += n;
    n = r1 *= n;
    n = r3 *= n;
    n *= r0;
    n *= r3;
    n *= r8;
    n *= r2;
    n *= r6;
    n *= 0.79123509f;
    n *= r4;
    n *= 0.72714013f;
    n *= 129849.84375000f;
    n *= r1;
    n += r5;
    n += r7;
    return n;
} // Solution0

// Solution1 result = 0.00000370
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n += 0.21623144f;
    r0 = n *= 0.25527468f;
    r1 = n *= -0.36244389f;
    r2 = n += 0.57889920f;
    n *= -0.13627511f;
    r3 = n += -0.65978462f;
    r4 = n += -0.14399499f;
    n = r0 += n;
    r5 = n *= -1.11886966f;
    r6 = n += -0.87507397f;
    n += 0.36561304f;
    r7 = n *= 0.20615584f;
    n *= -0.14656347f;
    n += 0.42848501f;
    n += -0.25390908f;
    r8 = n += 0.15546818f;
    n = r0 *= n;
    n = r1 += n;
    n = r1 *= n;
    n = r3 *= n;
    n *= r0;
    n *= r3;
    n *= r8;
    n *= r2;
    n *= r6;
    n *= 2.73870564f;
    n *= r4;
    n *= -213118.96875000f;
    n *= 0.50292408f;
    n *= r1;
    n += r5;
    n += r7;
    return n;
} // Solution1

// Solution2 result = 0.00000489
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    n += -0.71940225f;
    r0 = n *= -0.53858680f;
    r1 = n *= -0.26380116f;
    r2 = n += 0.04119846f;
    n *= -0.21555044f;
    r3 = n += 0.74547839f;
    r4 = n += 1.50890470f;
    n = r0 += n;
    r5 = n *= 0.30249766f;
    r6 = n += -0.33585724f;
    n += -0.14944370f;
    r7 = n *= -0.61700624f;
    n *= 0.13223426f;
    n += 1.21969831f;
    n += -1.40876973f;
    r8 = n += 0.45568582f;
    n = r0 *= n;
    n = r1 += n;
    n = r1 *= n;
    n = r3 *= n;
    n *= r0;
    n *= r3;
    n *= r8;
    n *= r2;
    n *= r6;
    n *= 0.09916872f;
    n *= r4;
    n *= 132019.23437500f;
    n *= 0.33865458f;
    n *= r1;
    n += r5;
    n += r7;
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
