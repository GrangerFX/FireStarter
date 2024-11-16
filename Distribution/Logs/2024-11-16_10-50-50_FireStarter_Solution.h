// Run date: 11/16/24 10:50:50 Pacific Standard Time
// Run duration = 496.650858 seconds
// Run generation = 162
// Run evolution = 11
// Run max result = 0.00000048
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 262144
// Run passes = 500
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * 3.14159265f)

inline float SolutionTarget(float n, unsigned int variation = 0)
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

// Solution0 result = 0.00000000
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.16864276f;
    r0 = n += -1.97294986f;
    n *= -0.34460852f;
    n *= -2.76739287f;
    n *= -0.50728506f;
    r1 = n *= -0.16436413f;
    n *= r1;
    n *= -2.95685840f;
    r1 = n += 1.75246811f;
    r2 = n *= 0.30799282f;
    r3 = n *= 1.55642354f;
    n = r1 *= n;
    n += -1.39506602f;
    r4 = n *= 4.57932663f;
    n = r2 += n;
    r5 = n += -0.56328088f;
    n = r2 += n;
    n *= -0.47419226f;
    n += 0.82538736f;
    n = r4 += n;
    r6 = n *= 4.55120945f;
    n *= r6;
    n += r2;
    n = r1 *= n;
    n += r3;
    n *= r4;
    n *= 1.43205237f;
    n *= r5;
    n += r1;
    n *= -0.06033514f;
    n *= r0;
    n += 0.00000006f;
    return n;
} // Solution0

// Solution1 result = 0.00000000
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.27330041f;
    r0 = n += -1.81735826f;
    n *= -1.30196977f;
    n *= 1.46399975f;
    n *= -0.02690645f;
    r1 = n *= 8.82616806f;
    n *= r1;
    n *= 0.28326717f;
    r1 = n += -1.47412062f;
    r2 = n *= 0.25134879f;
    r3 = n *= -0.80193359f;
    n = r1 *= n;
    n += -2.23924446f;
    r4 = n *= 0.00206722f;
    n = r2 += n;
    r5 = n += 0.01214953f;
    n = r2 += n;
    n *= 2.00524402f;
    n += -5.61482811f;
    n = r4 += n;
    r6 = n *= -0.18353915f;
    n *= r6;
    n += r2;
    n = r1 *= n;
    n += r3;
    n *= r4;
    n *= 0.40311801f;
    n *= r5;
    n += r1;
    n *= 2.00292182f;
    n *= r0;
    n += -0.11813188f;
    return n;
} // Solution1

// Solution2 result = 0.00000000
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -2.78664827f;
    r0 = n += 0.16865459f;
    n *= -0.01754028f;
    n *= -2.85894585f;
    n *= -1.86326659f;
    r1 = n *= 1.33306634f;
    n *= r1;
    n *= -2.29446626f;
    r1 = n += 0.17739137f;
    r2 = n *= -0.19671385f;
    r3 = n *= 2.27413464f;
    n = r1 *= n;
    n += -3.29243803f;
    r4 = n *= 0.06861752f;
    n = r2 += n;
    r5 = n += -0.91228008f;
    n = r2 += n;
    n *= 1.92115760f;
    n += 0.44401705f;
    n = r4 += n;
    r6 = n *= 0.71330029f;
    n *= r6;
    n += r2;
    n = r1 *= n;
    n += r3;
    n *= r4;
    n *= 0.99212688f;
    n *= r5;
    n += r1;
    n *= 2.95808148f;
    n *= r0;
    n += 0.52359873f;
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
