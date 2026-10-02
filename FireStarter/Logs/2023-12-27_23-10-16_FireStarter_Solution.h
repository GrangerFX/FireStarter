// Run date: 12/27/23 23:10:16 Pacific Standard Time
// Run duration = 24126.224377 seconds
// Run generation = 26
// Run evolution = 9
// Run max result = 0.00000006
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
// Run evolveSeed = 1
// Run optimizeSeed = 1
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

// Solution0 result = 0.00000003
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159369f;
    r1 = n += 0.00000145f;
    n *= r0;
    n += 1.83349895f;
    r0 = n += -4.18421221f;
    n *= -0.27367538f;
    n += 1.70430994f;
    r2 = n *= 0.02419139f;
    n *= -1.68687856f;
    n *= -0.34891367f;
    r3 = n += 1.00018835f;
    n = r2 *= n;
    r4 = n += 0.37771928f;
    n = r3 *= n;
    n *= r2;
    r2 = n *= 0.14660339f;
    n *= 25.28820419f;
    n += -3.65502691f;
    n *= r2;
    r2 = n += 0.00800133f;
    n *= r2;
    n = r3 += n;
    n = r3 *= n;
    n *= r0;
    n += -1.15063071f;
    n += r3;
    n *= -1.15326154f;
    n *= r1;
    n *= r4;
    n *= -1.39377677f;
    n += -0.05644504f;
    n += 0.05644546f;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065270f;
    r1 = n += -0.00000821f;
    n *= r0;
    n += 0.01488712f;
    r0 = n += -3.08321524f;
    n *= -0.70973021f;
    n += 2.96595788f;
    r2 = n *= 0.02852464f;
    n *= 1.95267773f;
    n *= 0.02305820f;
    r3 = n += 0.49627993f;
    n = r2 *= n;
    r4 = n += 0.63729811f;
    n = r3 *= n;
    n *= r2;
    r2 = n *= 0.39372924f;
    n *= 9.09810925f;
    n += -2.00778699f;
    n *= r2;
    r2 = n += 0.00402508f;
    n *= r2;
    n = r3 += n;
    n = r3 *= n;
    n *= r0;
    n += -1.16119957f;
    n += r3;
    n *= 2.11966515f;
    n *= r1;
    n *= r4;
    n *= 0.51176411f;
    n += -0.05326685f;
    n += -0.06486756f;
    return n;
} // Solution1

// Solution2 result = 0.00000003
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799479f;
    r1 = n += 0.00000154f;
    n *= r0;
    n += -5.44031000f;
    r0 = n += -1.04453003f;
    n *= -0.04792129f;
    n += 0.18511614f;
    r2 = n *= -0.52589273f;
    n *= -12.88570023f;
    n *= 0.00000049f;
    r3 = n += -0.40278929f;
    n = r2 *= n;
    r4 = n += 1.88075233f;
    n = r3 *= n;
    n *= r2;
    r2 = n *= 0.41510925f;
    n *= 0.95823866f;
    n += -5.16786337f;
    n *= r2;
    r2 = n += 1.20981860f;
    n *= r2;
    n = r3 += n;
    n = r3 *= n;
    n *= r0;
    n += 0.41863388f;
    n += r3;
    n *= 0.37254605f;
    n *= r1;
    n *= r4;
    n *= 0.20311604f;
    n += 0.48176572f;
    n += 0.04183349f;
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
