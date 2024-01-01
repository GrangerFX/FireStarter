// Run date: 12/31/23 09:47:03 Pacific Standard Time
// Run duration = 2783.985824 seconds
// Run generation = 12
// Run evolution = 9
// Run max result = 0.00000012
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
// Run tests = 16
// Run states = 64
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -1.54962265f;
    r1 = n += -1.59197009f;
    n += -0.00000045f;
    n *= -0.10593518f;
    r2 = n *= -1.91152561f;
    n += -0.32237032f;
    n = r0 *= n;
    r3 = n *= 0.00995566f;
    r4 = n *= -7.40175724f;
    r5 = n += 6.08192301f;
    n += 2.11701751f;
    r6 = n *= -0.00135793f;
    n += -0.11613361f;
    n *= -1.15865028f;
    n = r3 *= n;
    n = r6 *= n;
    n *= -191.81263733f;
    n += -0.05806424f;
    n = r5 *= n;
    r7 = n += -0.51280820f;
    r8 = n += 0.21421295f;
    n += r6;
    n *= r8;
    n *= r0;
    n += r4;
    n += r3;
    n = r7 += n;
    n += r5;
    n *= r7;
    n *= r1;
    n *= -0.78671038f;
    n += r2;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -1.29349732f;
    r1 = n += -1.79716110f;
    n += 1.01218390f;
    n *= -1.33146870f;
    r2 = n *= 0.08765478f;
    n += 0.32787758f;
    n = r0 *= n;
    r3 = n *= -0.00233563f;
    r4 = n *= -4.94070292f;
    r5 = n += 0.95271140f;
    n += -0.39146334f;
    r6 = n *= 3.36033916f;
    n += -2221.10253906f;
    n *= 0.00102330f;
    n = r3 *= n;
    n = r6 *= n;
    n *= 3.80375695f;
    n += 2.08957505f;
    n = r5 *= n;
    r7 = n += -0.57069230f;
    r8 = n += -0.34815598f;
    n += r6;
    n *= r8;
    n *= r0;
    n += r4;
    n += r3;
    n = r7 += n;
    n += r5;
    n *= r7;
    n *= r1;
    n *= -0.13195056f;
    n += r2;
    return n;
} // Solution1

// Solution2 result = 0.00000006
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8;

    r0 = n += -0.90295273f;
    r1 = n += -1.71504068f;
    n += 1.14304721f;
    n *= -4.16437101f;
    r2 = n *= -0.10999814f;
    n += -1.30921388f;
    n = r0 *= n;
    r3 = n *= 0.00380748f;
    r4 = n *= 1.81937754f;
    r5 = n += 0.04037891f;
    n += -1.91959167f;
    r6 = n *= -4.29710579f;
    n += -797.67004395f;
    n *= -0.00005313f;
    n = r3 *= n;
    n = r6 *= n;
    n *= -16.93321228f;
    n += 2.45746446f;
    n = r5 *= n;
    r7 = n += -1.67642641f;
    r8 = n += 0.97486496f;
    n += r6;
    n *= r8;
    n *= r0;
    n += r4;
    n += r3;
    n = r7 += n;
    n += r5;
    n *= r7;
    n *= r1;
    n *= -0.33173636f;
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
