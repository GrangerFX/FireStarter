// Run date: 08/08/22 12:07:36 Pacific Daylight Time
// Run duration = 1.234286 seconds
// Run count = 5
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_CODE;
// Run units = 1;
// Run process = 0;
// Run population = 4352;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 5;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 4321;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 25

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

// Precision = 0.02098000

// Solution0 precision = 0.02098000
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.22419639f;
    r1 = n += 0.70045251f;
    n *= 1.12487710f;
    r2 = n *= 1.40109324f;
    n *= 0.82527077f;
    n += -0.32456395f;
    r3 = n += 0.59378481f;
    n = r0 *= n;
    r4 = n += -0.92497540f;
    n *= 0.04338444f;
    n *= -0.32492736f;
    n += 0.19369683f;
    n += -0.32834718f;
    n = r4 += n;
    n += r3;
    n += -0.06045825f;
    n = r4 += n;
    r3 = n += 0.89917028f;
    n = r0 *= n;
    n += 0.54551148f;
    n += r1;
    n *= -0.20410241f;
    n += -0.33901060f;
    n *= r0;
    n *= -0.20117891f;
    n *= 2.48010421f;
    r0 = n += -0.26253566f;
    n *= r0;
    n += r3;
    n *= r4;
    n *= r2;
    n *= 0.95126736f;
    return n;
} // Solution0

// Solution1 precision = 0.01710409
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.33798108f;
    r1 = n += 1.00748098f;
    n *= -0.60671002f;
    r2 = n *= -0.82876247f;
    n *= 0.16216272f;
    n += 0.76405275f;
    r3 = n += -0.42864099f;
    n = r0 *= n;
    r4 = n += -0.07144041f;
    n *= -0.21060625f;
    n *= -2.38265061f;
    n += 0.51707798f;
    n += -1.03195322f;
    n = r4 += n;
    n += r3;
    n += -1.08331800f;
    n = r4 += n;
    r3 = n += 0.58094245f;
    n = r0 *= n;
    n += -2.92014170f;
    n += r1;
    n *= -0.14815447f;
    n += 2.29222989f;
    n *= r0;
    n *= -0.50737792f;
    n *= 1.03776836f;
    r0 = n += 0.62731975f;
    n *= r0;
    n += r3;
    n *= r4;
    n *= r2;
    n *= 0.96030831f;
    return n;
} // Solution1

// Solution2 precision = 0.02038763
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.49428737f;
    r1 = n += -3.42939138f;
    n *= 1.37765753f;
    r2 = n *= -0.81096333f;
    n *= 0.60418940f;
    n += -0.27942654f;
    r3 = n += -0.25615937f;
    n = r0 *= n;
    r4 = n += 0.13145058f;
    n *= 0.69060183f;
    n *= -0.76787704f;
    n += -0.43274698f;
    n += -0.50556862f;
    n = r4 += n;
    n += r3;
    n += -0.01842346f;
    n = r4 += n;
    r3 = n += 0.13993484f;
    n = r0 *= n;
    n += 0.61512822f;
    n += r1;
    n *= -0.60013777f;
    n += 0.48975101f;
    n *= r0;
    n *= -0.12441780f;
    n *= 0.46098658f;
    r0 = n += -0.83989388f;
    n *= r0;
    n += r3;
    n *= r4;
    n *= r2;
    n *= 0.80514765f;
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
