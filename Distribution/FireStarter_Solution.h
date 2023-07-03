// Run date: 07/03/23 08:31:51 Pacific Daylight Time
// Run duration = 1699.429336 seconds
// Run generation = 144
// Run evolution = 0
// Run result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -3.34856582f;
    r0 = n += 0.20697312f;
    r1 = n *= -0.99472344f;
    n *= r1;
    n *= 0.77456737f;
    r1 = n += -1.66025639f;
    n += -0.36832884f;
    n *= 0.08450580f;
    r2 = n *= 0.00518405f;
    n += 0.98842990f;
    r3 = n += -0.71645671f;
    n = r1 *= n;
    n *= r3;
    r3 = n += -3.17035985f;
    n += -1.85503709f;
    r4 = n += -3.15394831f;
    n = r2 *= n;
    r5 = n *= 0.49980593f;
    r6 = n += 0.11263628f;
    n *= 4.72855616f;
    n *= r5;
    n *= r4;
    n += r3;
    n = r6 *= n;
    n *= r1;
    n = r2 += n;
    n += 0.93765759f;
    n += r2;
    n *= r6;
    n *= r0;
    r0 = n += 0.00000001f;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.20245004f;
    r0 = n += -0.88820863f;
    r1 = n *= 0.74398565f;
    n *= r1;
    n *= -0.65840071f;
    r1 = n += 0.83737004f;
    n += 0.22296762f;
    n *= -1.21734190f;
    r2 = n *= 0.00085814f;
    n += 1.05011654f;
    r3 = n += -1.32426918f;
    n = r1 *= n;
    n *= r3;
    r3 = n += 1.16754353f;
    n += -0.08969785f;
    r4 = n += -0.11443587f;
    n = r2 *= n;
    r5 = n *= -3.17875814f;
    r6 = n += 0.37749699f;
    n *= -2.39844084f;
    n *= r5;
    n *= r4;
    n += r3;
    n = r6 *= n;
    n *= r1;
    n = r2 += n;
    n += -0.95763499f;
    n += r2;
    n *= r6;
    n *= r0;
    r0 = n += -0.05906588f;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.59519804f;
    r0 = n += -1.02279556f;
    r1 = n *= -0.43237302f;
    n *= r1;
    n *= 4.96704626f;
    r1 = n += -3.08016586f;
    n += -1.46361804f;
    n *= -0.02458556f;
    r2 = n *= 0.06229941f;
    n += 0.00629786f;
    r3 = n += 0.22924529f;
    n = r1 *= n;
    n *= r3;
    r3 = n += -1.34766328f;
    n += -1.45697749f;
    r4 = n += 0.32667044f;
    n = r2 *= n;
    r5 = n *= -0.00001516f;
    r6 = n += 0.32268351f;
    n *= 64352.36328125f;
    n *= r5;
    n *= r4;
    n += r3;
    n = r6 *= n;
    n *= r1;
    n = r2 += n;
    n += 0.29595497f;
    n += r2;
    n *= r6;
    n *= r0;
    r0 = n += 0.26179940f;
    n += r0;
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
