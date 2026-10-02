// Run date: 02/24/24 10:36:26 Pacific Standard Time
// Run duration = 27886.631433 seconds
// Run generation = 85
// Run evolution = 11
// Run max result = 0.00003541
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 128
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
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

// Solution0 result = 0.00000432
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 1.11894989f;
    r1 = n *= 0.58015043f;
    r2 = n *= 0.16347763f;
    n += -1.81166315f;
    r3 = n += 0.33265868f;
    r4 = n *= 3.63555312f;
    r5 = n *= -0.07204774f;
    n *= -2.59188819f;
    n = r5 *= n;
    r6 = n += 0.00710084f;
    n *= r6;
    n *= -1.22958100f;
    n += 1.52118921f;
    n *= r0;
    n += -1.09127760f;
    n *= -0.10717368f;
    n *= 0.73010075f;
    n = r1 *= n;
    r0 = n += 0.64889091f;
    n += r0;
    r0 = n *= -0.69779390f;
    n += r1;
    n *= -0.20722881f;
    n = r2 *= n;
    n *= r3;
    n *= -18.11231995f;
    r3 = n += 2.31883836f;
    n *= r3;
    n += r4;
    n *= r0;
    n += r2;
    n *= r5;
    return n;
} // Solution0

// Solution1 result = 0.00001127
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.62871140f;
    r1 = n *= -0.21725912f;
    r2 = n *= 0.65785664f;
    n += 0.50120109f;
    r3 = n += 0.83071971f;
    r4 = n *= -0.43004984f;
    r5 = n *= 0.19471315f;
    n *= 99.12127686f;
    n = r5 *= n;
    r6 = n += 2.79219818f;
    n *= r6;
    n *= 0.01025918f;
    n += -2.45752501f;
    n *= r0;
    n += 1.62043071f;
    n *= -1.51200104f;
    n *= -0.87473017f;
    n = r1 *= n;
    r0 = n += -1.28846240f;
    n += r0;
    r0 = n *= -1.14041460f;
    n += r1;
    n *= -0.62139809f;
    n = r2 *= n;
    n *= r3;
    n *= 0.15581918f;
    r3 = n += 0.89889133f;
    n *= r3;
    n += r4;
    n *= r0;
    n += r2;
    n *= r5;
    return n;
} // Solution1

// Solution2 result = 0.00003541
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.62745064f;
    r1 = n *= 0.33181465f;
    r2 = n *= -1.04751110f;
    n += 0.68836743f;
    r3 = n += 1.84087205f;
    r4 = n *= -0.89398944f;
    r5 = n *= 0.14885330f;
    n *= 1.97461998f;
    n = r5 *= n;
    r6 = n += -0.04110055f;
    n *= r6;
    n *= 17.46567345f;
    n += -7.94467878f;
    n *= r0;
    n += 3.96241164f;
    n *= -0.27707642f;
    n *= 0.52564740f;
    n = r1 *= n;
    r0 = n += -1.63906419f;
    n += r0;
    r0 = n *= -2.50968122f;
    n += r1;
    n *= 1.64876831f;
    n = r2 *= n;
    n *= r3;
    n *= -0.04114080f;
    r3 = n += 1.50369453f;
    n *= r3;
    n += r4;
    n *= r0;
    n += r2;
    n *= r5;
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
