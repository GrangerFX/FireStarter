// Run date: 02/26/23 19:39:11 Pacific Standard Time
// Run duration = 3065.159765 seconds
// Run count = 12
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 99
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 12

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

// Precision = 0.00052133

// Solution0 precision = 0.00052133
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.18116350f;
    r1 = n += 0.30950952f;
    r2 = n *= -0.42579177f;
    n += -0.73245931f;
    n += -0.89985192f;
    r3 = n += 0.63241017f;
    r4 = n += 1.43402827f;
    r5 = n *= 0.30776933f;
    r6 = n *= 1.45632410f;
    n += r3;
    r3 = n *= -1.68574524f;
    n = r4 += n;
    r7 = n *= -1.48176110f;
    n += -1.61192858f;
    n = r4 *= n;
    n += r7;
    n = r5 *= n;
    n *= -0.76832020f;
    n += r6;
    n *= r2;
    n = r5 *= n;
    n *= -2.32020354f;
    n += -0.58343029f;
    n *= r0;
    n += 1.80237687f;
    n *= r4;
    n *= r5;
    n *= r1;
    n += 1.59202707f;
    n += 0.98465985f;
    n += -1.84734178f;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.00036037
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 0.31461307f;
    r1 = n += -2.44693685f;
    r2 = n *= 0.80028266f;
    n += 1.42040443f;
    n += 1.89923084f;
    r3 = n += -0.37716421f;
    r4 = n += -0.18230580f;
    r5 = n *= 1.62649429f;
    r6 = n *= -0.61765194f;
    n += r3;
    r3 = n *= -0.34042063f;
    n = r4 += n;
    r7 = n *= -0.21255834f;
    n += 1.35573602f;
    n = r4 *= n;
    n += r7;
    n = r5 *= n;
    n *= 0.48771000f;
    n += r6;
    n *= r2;
    n = r5 *= n;
    n *= 0.15688524f;
    n += -0.07562053f;
    n *= r0;
    n += 13.70969296f;
    n *= r4;
    n *= r5;
    n *= r1;
    n += 7.42188215f;
    n += -0.15880670f;
    n += -2.33621645f;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.00039005
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 1.20072293f;
    r1 = n += 2.44679976f;
    r2 = n *= -0.20716201f;
    n += 1.26863003f;
    n += -0.19425727f;
    r3 = n += 1.85460234f;
    r4 = n += -0.25970334f;
    r5 = n *= -1.28297222f;
    r6 = n *= 0.92747408f;
    n += r3;
    r3 = n *= 1.62991667f;
    n = r4 += n;
    r7 = n *= -0.68070233f;
    n += 1.42725384f;
    n = r4 *= n;
    n += r7;
    n = r5 *= n;
    n *= -0.22469465f;
    n += r6;
    n *= r2;
    n = r5 *= n;
    n *= 0.02278039f;
    n += -0.48948053f;
    n *= r0;
    n += -1.25292122f;
    n *= r4;
    n *= r5;
    n *= r1;
    n += 0.71660626f;
    n += -0.01535570f;
    n += 2.81127238f;
    n *= r3;
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
