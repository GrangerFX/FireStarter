// Run date: 11/19/23 10:54:25 Pacific Standard Time
// Run duration = 43636.437786 seconds
// Run generation = 48
// Run evolution = 17
// Run result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run seeds = 64
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.72015768f;
    r0 = n += -1.74916780f;
    r1 = n += -0.51327425f;
    r2 = n *= -0.97804224f;
    r3 = n += 0.48004621f;
    n *= r0;
    n += r3;
    n = r1 += n;
    n *= 11.54523659f;
    r3 = n *= 0.00098498f;
    r0 = n += 0.99649769f;
    n *= -2.76125455f;
    n += -3.02542830f;
    n += 1.53874946f;
    n = r3 += n;
    r4 = n *= -0.16382137f;
    n = r1 *= n;
    n *= 0.45397088f;
    n += 2.42444873f;
    r5 = n *= -0.41183215f;
    n += -0.74861062f;
    n += r4;
    n *= r0;
    n += r3;
    n = r5 *= n;
    n *= r5;
    n += -1.54379427f;
    n += r1;
    n *= 0.20915252f;
    n *= r2;
    n *= 0.20056008f;
    n += 0.00000005f;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.65818149f;
    r0 = n += 2.14441085f;
    r1 = n += -0.11019638f;
    r2 = n *= -1.38215947f;
    r3 = n += 0.53446960f;
    n *= r0;
    n += r3;
    n = r1 += n;
    n *= -0.00059069f;
    r3 = n *= 12.13052654f;
    r0 = n += -2.16166043f;
    n *= 0.27266234f;
    n += -2.54448056f;
    n += 1.68886817f;
    n = r3 += n;
    r4 = n *= -0.07948551f;
    n = r1 *= n;
    n *= -1.06591809f;
    n += -1.45733654f;
    r5 = n *= -0.35356060f;
    n += 1.88095534f;
    n += r4;
    n *= r0;
    n += r3;
    n = r5 *= n;
    n *= r5;
    n += 1.49644792f;
    n += r1;
    n *= 0.07982603f;
    n *= r2;
    n *= -0.96558040f;
    n += -0.11813215f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -1.00788987f;
    r0 = n += 0.95774025f;
    r1 = n += 1.68090880f;
    r2 = n *= -0.30571824f;
    r3 = n += -1.20816660f;
    n *= r0;
    n += r3;
    n = r1 += n;
    n *= -10.93921757f;
    r3 = n *= -0.00215370f;
    r0 = n += 0.71397018f;
    n *= 1.02063060f;
    n += -1.24304497f;
    n += 3.22226954f;
    n = r3 += n;
    r4 = n *= 0.54420561f;
    n = r1 *= n;
    n *= -0.47634175f;
    n += -1.53427076f;
    r5 = n *= -0.30401021f;
    n += 1.08254838f;
    n += r4;
    n *= r0;
    n += r3;
    n = r5 *= n;
    n *= r5;
    n += -1.08251798f;
    n += r1;
    n *= 1.33407855f;
    n *= r2;
    n *= -0.22125682f;
    n += 0.52359903f;
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
