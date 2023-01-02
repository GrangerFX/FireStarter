// Run date: 01/02/23 12:45:37 Pacific Standard Time
// Run duration = 33.466015 seconds
// Run count = 2
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
// Solution Generation = 2

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

// Precision = 0.00000060

// Solution0 precision = 0.00000023
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += 1.82907641f;
    n += -4.03112268f;
    r0 = n += -0.93954623f;
    r1 = n *= 0.35485655f;
    n *= -1.64785528f;
    n = r1 *= n;
    r2 = n += 0.08632158f;
    r3 = n += 0.43344072f;
    n *= 0.00765830f;
    r4 = n += 0.05583464f;
    n += 0.24685310f;
    n = r1 *= n;
    n += r3;
    r3 = n *= -0.02177295f;
    r5 = n += -0.04624878f;
    n += 3.46321893f;
    n += -2.46756721f;
    n += r2;
    n *= -0.28430295f;
    n *= 0.05376008f;
    n += -1.39108801f;
    n *= r1;
    n *= -2.85595965f;
    n += 13.31564522f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 0.92298347f;
    n *= r5;
    n += 0.00000002f;
    n *= 1.77764940f;
    return n;
} // Solution0

// Solution1 precision = 0.00000060
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -0.96267015f;
    n += 0.97769463f;
    r0 = n += -3.10568357f;
    r1 = n *= -0.50429648f;
    n *= 1.33700204f;
    n = r1 *= n;
    r2 = n += 1.45593262f;
    r3 = n += -2.47814822f;
    n *= 0.02159507f;
    r4 = n += -0.55357385f;
    n += -0.17868957f;
    n = r1 *= n;
    n += r3;
    r3 = n *= 0.01627040f;
    r5 = n += 0.34895456f;
    n += -10.37145805f;
    n += 3.78469849f;
    n += r2;
    n *= 0.45663449f;
    n *= -0.00129442f;
    n += 0.99759459f;
    n *= r1;
    n *= -0.26965892f;
    n += -1.36959684f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 2.53828144f;
    n *= r5;
    n += -0.10020769f;
    n *= 1.17887080f;
    return n;
} // Solution1

// Solution2 precision = 0.00000042
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.14427733f;
    n += -0.63124186f;
    r0 = n += -0.84247452f;
    r1 = n *= 0.32983291f;
    n *= -0.17568980f;
    n = r1 *= n;
    r2 = n += -0.08263818f;
    r3 = n += 0.84833789f;
    n *= 4.71135283f;
    r4 = n += 2.11530781f;
    n += 1.57175803f;
    n = r1 *= n;
    n += r3;
    r3 = n *= -0.42327872f;
    r5 = n += 0.00779552f;
    n += 1.38277841f;
    n += -0.22522528f;
    n += r2;
    n *= -0.03943466f;
    n *= -0.25825307f;
    n += 0.79670864f;
    n *= r1;
    n *= 0.44924474f;
    n += -0.23210700f;
    n = r3 += n;
    n *= r3;
    n *= r0;
    n *= r4;
    n *= 3.62286544f;
    n *= r5;
    n += 1.06230426f;
    n *= 0.49288955f;
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
