// Run date: 06/15/24 17:45:32 Pacific Daylight Time
// Run duration = 25.133767 seconds
// Run generation = 1
// Run evolution = 0
// Run max result = 0.00127017
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

// Solution0 result = 0.00065428
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += 2.75443697f;
    r0 = n *= 0.24329586f;
    n *= 1.67481637f;
    r1 = n *= -0.46496883f;
    n *= 0.95749629f;
    r2 = n += 1.35482633f;
    r3 = n *= -0.80962700f;
    r4 = n += -1.29642868f;
    n += 2.20614815f;
    r5 = n *= -1.93005157f;
    r6 = n += 3.56160283f;
    n = r0 *= n;
    n *= -0.15758865f;
    n *= 1.41884720f;
    n *= -0.09525535f;
    r7 = n *= -0.88117886f;
    n *= r2;
    n *= -4.26845551f;
    n += -3.89203072f;
    n = r3 *= n;
    n *= -0.63381988f;
    n *= r5;
    n *= 1.42092800f;
    n *= r0;
    n *= r7;
    n *= 0.31912136f;
    n *= r6;
    n *= r1;
    n *= r3;
    n *= -4.54424381f;
    n *= r4;
    n += -1.00041747f;
    return n;
} // Solution0

// Solution1 result = 0.00019947
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += 2.45878124f;
    r0 = n *= -1.38388848f;
    n *= -1.17595577f;
    r1 = n *= 1.82064605f;
    n *= 0.05603663f;
    r2 = n += 1.67377615f;
    r3 = n *= -0.29408637f;
    r4 = n += 0.99264997f;
    n += -0.22713478f;
    r5 = n *= 0.17343153f;
    r6 = n += 0.21272756f;
    n = r0 *= n;
    n *= 0.76928848f;
    n *= -2.56061840f;
    n *= 2.80236530f;
    r7 = n *= 0.17069159f;
    n *= r2;
    n *= -0.13995337f;
    n += 1.23013890f;
    n = r3 *= n;
    n *= 5.30041170f;
    n *= r5;
    n *= -2.50269914f;
    n *= r0;
    n *= r7;
    n *= 9.24643421f;
    n *= r6;
    n *= r1;
    n *= r3;
    n *= 1.99402905f;
    n *= r4;
    n += -0.17028229f;
    return n;
} // Solution1

// Solution2 result = 0.00127017
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += 3.42949796f;
    r0 = n *= 0.21863829f;
    n *= 1.14842439f;
    r1 = n *= 0.85227996f;
    n *= 1.07016969f;
    r2 = n += -1.11649263f;
    r3 = n *= -1.11423135f;
    r4 = n += 1.00896108f;
    n += 1.02724731f;
    r5 = n *= 1.26054227f;
    r6 = n += 0.03222539f;
    n = r0 *= n;
    n *= -0.38668180f;
    n *= -0.40867198f;
    n *= -3.51258254f;
    r7 = n *= 0.40525335f;
    n *= r2;
    n *= 0.07026065f;
    n += -0.34056789f;
    n = r3 *= n;
    n *= -0.24792458f;
    n *= r5;
    n *= -0.49459469f;
    n *= r0;
    n *= r7;
    n *= -7.76792049f;
    n *= r6;
    n *= r1;
    n *= r3;
    n *= -8.17076206f;
    n *= r4;
    n += 1.27640378f;
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
