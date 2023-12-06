// Run date: 12/05/23 11:07:55 Pacific Standard Time
// Run duration = 5559.822942 seconds
// Run generation = 27
// Run evolution = 7
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.55199522f;
    r0 = n += -1.73414409f;
    n *= 0.07964037f;
    r1 = n *= -1.70245481f;
    r2 = n *= 0.21136992f;
    n *= 1.58748555f;
    n *= r0;
    n += -0.01870685f;
    n *= 0.29959768f;
    r0 = n += 0.55682629f;
    r3 = n *= 1.71722400f;
    n += 1.41998327f;
    r4 = n *= -1.18575895f;
    n *= r0;
    n *= r4;
    r4 = n += -1.07344186f;
    n *= -0.54696059f;
    n *= r4;
    r4 = n += 2.58822107f;
    n *= -2.25076866f;
    r0 = n *= -0.18752739f;
    n += r4;
    n *= r2;
    n *= r0;
    n *= r3;
    r3 = n *= -2.21308374f;
    n += 0.28703973f;
    n += -0.35245043f;
    n += r3;
    n += r1;
    n *= -2.89490700f;
    n += -0.18935783f;
    return n;
} // Solution0

// Solution1 result = 0.00000003
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.49514562f;
    r0 = n += 1.53032601f;
    n *= 1.33352709f;
    r1 = n *= -0.89941341f;
    r2 = n *= -1.46776330f;
    n *= 0.46488002f;
    n *= r0;
    n += -1.33551204f;
    n *= -2.65088439f;
    r0 = n += -0.17954482f;
    r3 = n *= 0.00158304f;
    n += 0.70730722f;
    r4 = n *= 0.38178185f;
    n *= r0;
    n *= r4;
    r4 = n += 2.90958929f;
    n *= -1.01057780f;
    n *= r4;
    r4 = n += -0.90644234f;
    n *= -1.16704655f;
    r0 = n *= -1.11363900f;
    n += r4;
    n *= r2;
    n *= r0;
    n *= r3;
    r3 = n *= -0.20799913f;
    n += 0.30798009f;
    n += -0.32968274f;
    n += r3;
    n += r1;
    n *= -0.85276508f;
    n += -0.13663898f;
    return n;
} // Solution1

// Solution2 result = 0.00000006
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.13431729f;
    r0 = n += 0.35164180f;
    n *= -1.11670482f;
    r1 = n *= 0.25687960f;
    r2 = n *= 1.48286116f;
    n *= 0.60015768f;
    n *= r0;
    n += -0.30399302f;
    n *= -1.59232903f;
    r0 = n += -0.52418262f;
    r3 = n *= -0.72392648f;
    n += 1.82469285f;
    r4 = n *= -1.23832774f;
    n *= r0;
    n *= r4;
    r4 = n += -1.96193147f;
    n *= 0.58142775f;
    n *= r4;
    r4 = n += -0.48373586f;
    n *= 1.15574038f;
    r0 = n *= 2.39758849f;
    n += r4;
    n *= r2;
    n *= r0;
    n *= r3;
    r3 = n *= -3.85938692f;
    n += -0.01546334f;
    n += -0.09302569f;
    n += r3;
    n += r1;
    n *= 1.54607916f;
    n += 0.69133168f;
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
