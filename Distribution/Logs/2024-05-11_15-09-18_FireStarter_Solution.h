// Run date: 05/11/24 15:09:18 Pacific Daylight Time
// Run duration = 2484.190878 seconds
// Run generation = 454
// Run evolution = 12
// Run max result = 0.00000045
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

// Solution0 result = 0.00000019
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.88806391f;
    r0 = n += -1.25352871f;
    r1 = n *= -0.17652258f;
    n *= -2.62242556f;
    r2 = n *= -1.16612244f;
    n *= -0.06000361f;
    n = r1 *= n;
    r3 = n *= -0.89695698f;
    n *= -2.78301644f;
    n += 0.62126184f;
    r4 = n += 2.57500720f;
    n = r3 *= n;
    n *= r4;
    n += r1;
    r1 = n += -2.06340647f;
    n = r1 *= n;
    r4 = n *= 0.00148490f;
    r5 = n += 1.84615207f;
    n = r2 *= n;
    n *= r1;
    n *= r5;
    n *= r3;
    n *= -1.28787327f;
    n += r2;
    n += -0.27367741f;
    r2 = n += 0.26621851f;
    n = r4 *= n;
    n *= r0;
    n *= 0.08988500f;
    n *= r4;
    n += r2;
    n += 0.00745888f;
    return n;
} // Solution0

// Solution1 result = 0.00000027
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -1.49019885f;
    r0 = n += -1.60046017f;
    r1 = n *= -0.19524494f;
    n *= -0.81289977f;
    r2 = n *= -1.79331195f;
    n *= -0.14919211f;
    n = r1 *= n;
    r3 = n *= -0.89704454f;
    n *= -0.95395762f;
    n += 3.58516955f;
    r4 = n += -1.35319364f;
    n = r3 *= n;
    n *= r4;
    n += r1;
    r1 = n += -1.54669130f;
    n = r1 *= n;
    r4 = n *= 0.00156297f;
    r5 = n += 3.86100245f;
    n = r2 *= n;
    n *= r1;
    n *= r5;
    n *= r3;
    n *= -0.71925515f;
    n += r2;
    n += -1.70160115f;
    r2 = n += 1.69875062f;
    n = r4 *= n;
    n *= r0;
    n *= 2.27122068f;
    n *= r4;
    n += r2;
    n += -0.11528175f;
    return n;
} // Solution1

// Solution2 result = 0.00000045
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.60162735f;
    r0 = n += -0.01636629f;
    r1 = n *= -0.23060006f;
    n *= 1.43897676f;
    r2 = n *= 1.15560353f;
    n *= -0.21897775f;
    n = r1 *= n;
    r3 = n *= -0.36248755f;
    n *= -2.56401110f;
    n += 1.45958126f;
    r4 = n += 1.89884257f;
    n = r3 *= n;
    n *= r4;
    n += r1;
    r1 = n += -1.82308590f;
    n = r1 *= n;
    r4 = n *= 0.00663276f;
    r5 = n += 2.58577657f;
    n = r2 *= n;
    n *= r1;
    n *= r5;
    n *= r3;
    n *= -1.40685320f;
    n += r2;
    n += -2.45000172f;
    r2 = n += 2.43070531f;
    n = r4 *= n;
    n *= r0;
    n *= 0.00617267f;
    n *= r4;
    n += r2;
    n += 0.54289496f;
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
