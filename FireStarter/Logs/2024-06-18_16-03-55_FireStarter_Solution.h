// Run date: 06/18/24 16:03:55 Pacific Daylight Time
// Run duration = 543.396577 seconds
// Run generation = 16
// Run evolution = 1
// Run max result = 0.00002778
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
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

// Solution0 result = 0.00001490
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.79329550f;
    r0 = n *= 0.76233792f;
    r1 = n *= -1.22401869f;
    r2 = n += -1.21726918f;
    r3 = n += 4.48996401f;
    n *= 0.61715770f;
    n += r1;
    n *= -1.60936868f;
    r1 = n += -0.03638650f;
    n *= 1.06358266f;
    n *= 0.06648922f;
    n = r3 += n;
    n *= r2;
    n *= 0.48460710f;
    r2 = n *= 0.02938999f;
    r4 = n *= -0.50172764f;
    n *= -3.05312371f;
    n *= 3.85958028f;
    r5 = n += -1.98729253f;
    n += -3.21993589f;
    n *= r2;
    n += r3;
    n = r0 += n;
    n *= r0;
    n *= r4;
    n *= -1.48614872f;
    n *= r5;
    n *= -0.75629157f;
    n += -0.24809116f;
    n *= r1;
    n += -0.01746480f;
    n *= 0.29642916f;
    return n;
} // Solution0

// Solution1 result = 0.00002110
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.51687193f;
    r0 = n *= 0.13186498f;
    r1 = n *= -0.91684800f;
    r2 = n += -0.60469294f;
    r3 = n += 1.41679764f;
    n *= 0.91505814f;
    n += r1;
    n *= -0.25881368f;
    r1 = n += 0.15793201f;
    n *= -0.18735565f;
    n *= 1.09514165f;
    n = r3 += n;
    n *= r2;
    n *= 1.40470457f;
    r2 = n *= -1.88483357f;
    r4 = n *= -0.34037384f;
    n *= 2.77255630f;
    n *= -1.58499575f;
    r5 = n += 8.70181084f;
    n += 4.26784706f;
    n *= r2;
    n += r3;
    n = r0 += n;
    n *= r0;
    n *= r4;
    n *= -4.83291626f;
    n *= r5;
    n *= 0.06937873f;
    n += -14.15666676f;
    n *= r1;
    n += 4.34999990f;
    n *= -0.02722081f;
    return n;
} // Solution1

// Solution2 result = 0.00002778
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.93561518f;
    r0 = n *= -0.75891149f;
    r1 = n *= 0.42317843f;
    r2 = n += -0.60042053f;
    r3 = n += -1.20974731f;
    n *= 0.64057565f;
    n += r1;
    n *= -0.60768688f;
    r1 = n += -0.91456753f;
    n *= -2.13039923f;
    n *= -1.59699452f;
    n = r3 += n;
    n *= r2;
    n *= -2.11564445f;
    r2 = n *= -0.12469513f;
    r4 = n *= -1.21982491f;
    n *= 0.02539528f;
    n *= 7.15433598f;
    r5 = n += -0.28501067f;
    n += -0.81397349f;
    n *= r2;
    n += r3;
    n = r0 += n;
    n *= r0;
    n *= r4;
    n *= 1.85470009f;
    n *= r5;
    n *= 3.60395932f;
    n += -1.89928484f;
    n *= r1;
    n += -1.84523094f;
    n *= -0.29824153f;
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
