// Run date: 03/26/23 20:47:03 Pacific Daylight Time
// Run duration = 2558.867289 seconds
// Run generation = 123
// Run result = 0.00023066
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 13

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
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

// Solution0 result = 0.00023066
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.29833588f;
    r0 = n *= 1.13007700f;
    r1 = n += 1.62444782f;
    r2 = n *= -0.10926139f;
    r3 = n += 0.15546405f;
    n *= -0.37140930f;
    n *= 0.26800716f;
    n *= r3;
    n = fabsf(n);
    r4 = n += 0.68257886f;
    n += r2;
    n = r1 *= n;
    r2 = n += 0.86411709f;
    r5 = n *= 2.59563351f;
    n = r1 *= n;
    r6 = n *= -0.83831203f;
    r7 = n *= 1.23176968f;
    n += r1;
    n *= r6;
    n += -0.16621271f;
    n *= -2.72306633f;
    n += r2;
    n += -0.51023442f;
    n = r5 *= n;
    n *= r4;
    n *= r7;
    n += r5;
    n += r3;
    n *= 0.28427270f;
    n *= r0;
    r0 = n += -0.00011533f;
    n += r0;
    return n;
} // Solution0

// Solution1 result = 0.00017869
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -0.29339933f;
    r0 = n *= -0.30668536f;
    r1 = n += -0.56195486f;
    r2 = n *= -1.71470511f;
    r3 = n += -1.10169995f;
    n *= 0.00548078f;
    n *= -3.56183076f;
    n *= r3;
    n = fabsf(n);
    r4 = n += -2.09738064f;
    n += r2;
    n = r1 *= n;
    r2 = n += 2.02282691f;
    r5 = n *= -2.09747672f;
    n = r1 *= n;
    r6 = n *= -0.26294836f;
    r7 = n *= -1.29664266f;
    n += r1;
    n *= r6;
    n += -0.44197047f;
    n *= 0.69743061f;
    n += r2;
    n += -0.36188519f;
    n = r5 *= n;
    n *= r4;
    n *= r7;
    n += r5;
    n += r3;
    n *= 0.18914565f;
    n *= r0;
    r0 = n += 0.42604855f;
    n += r0;
    return n;
} // Solution1

// Solution2 result = 0.00021207
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n *= -1.13817561f;
    r0 = n *= 0.23505338f;
    r1 = n += 0.85911071f;
    r2 = n *= 0.17957905f;
    r3 = n += 0.02696262f;
    n *= -1.68553317f;
    n *= -0.05112871f;
    n *= r3;
    n = fabsf(n);
    r4 = n += -0.31680208f;
    n += r2;
    n = r1 *= n;
    r2 = n += -1.26490653f;
    r5 = n *= -1.85382891f;
    n = r1 *= n;
    r6 = n *= 1.02003789f;
    r7 = n *= 2.15981436f;
    n += r1;
    n *= r6;
    n += -1.17912149f;
    n *= -0.90939605f;
    n += r2;
    n += 0.01054335f;
    n = r5 *= n;
    n *= r4;
    n *= r7;
    n += r5;
    n += r3;
    n *= 1.43353701f;
    n *= r0;
    r0 = n += -0.00010527f;
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
