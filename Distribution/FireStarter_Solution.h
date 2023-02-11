// Run date: 02/11/23 10:14:03 Pacific Standard Time
// Run duration = 96.602263 seconds
// Run count = 261
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
// Run attempts = 128
// Run seed = 8
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 261

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

// Precision = 0.00013132

// Solution0 precision = 0.00010710
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -1.59063804f;
    n *= -0.04815507f;
    r1 = n += -1.15890801f;
    n *= -1.60581827f;
    n += -1.10216558f;
    r2 = n += -1.15315259f;
    n *= 2.11174512f;
    r3 = n *= 0.41794050f;
    n *= r2;
    n *= 2.27463937f;
    r2 = n += -0.85036647f;
    n *= 1.12177801f;
    n = r3 += n;
    n = r1 += n;
    n *= -0.12671457f;
    n *= r0;
    r0 = n *= 1.20191693f;
    n += -2.20740914f;
    n = r0 *= n;
    n *= r1;
    r1 = n += 0.36448902f;
    n *= r1;
    n += r0;
    n += r2;
    n += -1.91202855f;
    n *= r3;
    n *= -1.50019836f;
    n *= -1.92681241f;
    n += 4.98268270f;
    n += 3.76973677f;
    n *= 0.07788076f;
    n += -0.17843641f;
    return n;
} // Solution0

// Solution1 precision = 0.00012231
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -0.40924805f;
    n *= 0.10753497f;
    r1 = n += -1.18680894f;
    n *= -1.24602282f;
    n += 1.50831389f;
    r2 = n += -0.35250118f;
    n *= -0.65839130f;
    r3 = n *= 1.61544764f;
    n *= r2;
    n *= 0.74556291f;
    r2 = n += 1.54300177f;
    n *= -0.58917958f;
    n = r3 += n;
    n = r1 += n;
    n *= 0.68960077f;
    n *= r0;
    r0 = n *= -0.20416310f;
    n += -2.06375456f;
    n = r0 *= n;
    n *= r1;
    r1 = n += -0.00780041f;
    n *= r1;
    n += r0;
    n += r2;
    n += 0.56951213f;
    n *= r3;
    n *= -5.31661892f;
    n *= 1.09177446f;
    n += 2.05156636f;
    n += -0.50062323f;
    n *= -0.13445474f;
    n += 0.05263269f;
    return n;
} // Solution1

// Solution2 precision = 0.00013132
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -0.69349986f;
    n *= 0.17745231f;
    r1 = n += 0.73852861f;
    n *= -2.12114048f;
    n += 3.13459992f;
    r2 = n += 1.85956943f;
    n *= 1.83400095f;
    r3 = n *= 1.28991473f;
    n *= r2;
    n *= 1.57183480f;
    r2 = n += -27.28367805f;
    n *= -0.14186254f;
    n = r3 += n;
    n = r1 += n;
    n *= 1.44981265f;
    n *= r0;
    r0 = n *= -0.03226514f;
    n += 2.31088829f;
    n = r0 *= n;
    n *= r1;
    r1 = n += 2.59185839f;
    n *= r1;
    n += r0;
    n += r2;
    n += 0.75669783f;
    n *= r3;
    n *= -0.10198567f;
    n *= -0.08855257f;
    n += -1.65978765f;
    n += 0.79809964f;
    n *= -0.59973192f;
    n += 1.10915112f;
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
