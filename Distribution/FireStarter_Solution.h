// Run date: 06/23/24 10:15:05 Pacific Daylight Time
// Run duration = 615.879072 seconds
// Run generation = 313
// Run evolution = 11
// Run max result = 0.00000060
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
// Run tests = 0
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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    r1 = n *= 1.00790250f;
    r2 = n *= -0.17316857f;
    n *= -0.27896866f;
    r3 = n *= -1.56945801f;
    n *= -2.28463149f;
    n = r2 += n;
    n *= -1.40513432f;
    n = r1 += n;
    n = r1 *= n;
    r4 = n += -8.08673573f;
    n *= r2;
    n *= -8.66872597f;
    n *= 5.99116802f;
    n *= r0;
    n += -1.84204721f;
    n = r1 += n;
    n *= -0.99487466f;
    n += r1;
    r1 = n += -0.55156463f;
    r0 = n *= -0.89735705f;
    n *= r4;
    r4 = n *= 0.69500059f;
    n += -8.55427551f;
    n *= r1;
    n *= r4;
    n *= r0;
    n += -1.14127648f;
    n *= r3;
    n *= -1.27821231f;
    n += 0.17506939f;
    n += -0.17506939f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065843f;
    r1 = n *= -0.18211696f;
    r2 = n *= 1.21797729f;
    n *= 0.79221076f;
    r3 = n *= -1.94269133f;
    n *= 0.65029401f;
    n = r2 += n;
    n *= 3.15149283f;
    n = r1 += n;
    n = r1 *= n;
    r4 = n += -0.75208431f;
    n *= r2;
    n *= 1.75069964f;
    n *= -7.56655550f;
    n *= r0;
    n += -2.87128067f;
    n = r1 += n;
    n *= -0.37669012f;
    n += r1;
    r1 = n += -1.05486083f;
    r0 = n *= -3.03674817f;
    n *= r4;
    r4 = n *= 0.28524274f;
    n += -0.28310305f;
    n *= r1;
    n *= r4;
    n *= r0;
    n += -0.74447674f;
    n *= r3;
    n *= 0.03287428f;
    n += 2.96302462f;
    n += -3.08115625f;
    return n;
} // Solution1

// Solution2 result = 0.00000060
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799383f;
    r1 = n *= 0.45769215f;
    r2 = n *= -0.76805878f;
    n *= -0.31188411f;
    r3 = n *= -1.21253896f;
    n *= -2.64448118f;
    n = r2 += n;
    n *= 12.25832748f;
    n = r1 += n;
    n = r1 *= n;
    r4 = n += -1.24304020f;
    n *= r2;
    n *= -1.69968271f;
    n *= -4.36949015f;
    n *= r0;
    n += -1.87903893f;
    n = r1 += n;
    n *= -1.26958561f;
    n += r1;
    r1 = n += 1.75069642f;
    r0 = n *= 1.07915103f;
    n *= r4;
    r4 = n *= 0.13772765f;
    n += -4.76610231f;
    n *= r1;
    n *= r4;
    n *= r0;
    n += -1.18003535f;
    n *= r3;
    n *= 0.70266569f;
    n += 0.60010606f;
    n += -0.07650734f;
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
