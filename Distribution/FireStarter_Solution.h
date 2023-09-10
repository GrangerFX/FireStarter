// Run date: 09/10/23 10:51:11 Pacific Daylight Time
// Run duration = 555.488207 seconds
// Run generation = 21
// Run evolution = 12
// Run result = 0.00000036
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

// Solution0 result = 0.00000036
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    n *= -2.32035089f;
    r1 = n *= 0.32673106f;
    n = r1 *= n;
    n *= 0.55682236f;
    r2 = n *= -0.01402334f;
    n += 1.57209408f;
    r3 = n *= 0.51247168f;
    n = r3 += n;
    n *= r3;
    r3 = n *= 1.13281894f;
    n *= -1.50232852f;
    r4 = n *= -0.09757201f;
    n *= -1.08105767f;
    r5 = n *= 0.46214545f;
    n *= r4;
    n *= r1;
    r1 = n *= 0.94657987f;
    n += -2.88212395f;
    n *= -1.07750738f;
    r4 = n += -4.21210957f;
    r6 = n += 0.22975706f;
    n *= r3;
    n *= 2.54243851f;
    n *= r6;
    n += r2;
    n += r4;
    n += r1;
    n *= r0;
    n *= r5;
    n += -0.10480892f;
    n += 0.10480884f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065843f;
    n *= -1.52063024f;
    r1 = n *= -0.92105007f;
    n = r1 *= n;
    n *= -0.71860099f;
    r2 = n *= -0.00200076f;
    n += -1.22611523f;
    r3 = n *= -0.56026101f;
    n = r3 += n;
    n *= r3;
    r3 = n *= -0.61711442f;
    n *= 0.80342704f;
    r4 = n *= 0.48087084f;
    n *= -0.33988467f;
    r5 = n *= -0.30638927f;
    n *= r4;
    n *= r1;
    r1 = n *= 1.62865579f;
    n += -0.64628404f;
    n *= -1.82851005f;
    r4 = n += -0.05550732f;
    r6 = n += 1.23819149f;
    n *= r3;
    n *= -3.43138814f;
    n *= r6;
    n += r2;
    n += r4;
    n += r1;
    n *= r0;
    n *= r5;
    n += -0.17175983f;
    n += 0.05362822f;
    return n;
} // Solution1

// Solution2 result = 0.00000015
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799383f;
    n *= -0.26924929f;
    r1 = n *= -0.85068262f;
    n = r1 *= n;
    n *= 0.04014967f;
    r2 = n *= 3.31462145f;
    n += -1.71108103f;
    r3 = n *= 0.24264258f;
    n = r3 += n;
    n *= r3;
    r3 = n *= 0.64385903f;
    n *= 1.78287232f;
    r4 = n *= 1.99791002f;
    n *= -2.48410249f;
    r5 = n *= -0.32461053f;
    n *= r4;
    n *= r1;
    r1 = n *= 0.99787557f;
    n += -0.19436559f;
    n *= -1.06927764f;
    r4 = n += 0.18181409f;
    r6 = n += 0.87098283f;
    n *= r3;
    n *= -1.66388559f;
    n *= r6;
    n += r2;
    n += r4;
    n += r1;
    n *= r0;
    n *= r5;
    n += 1.00639307f;
    n += -0.48279437f;
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
