// Run date: 06/15/24 17:48:27 Pacific Daylight Time
// Run duration = 62.362237 seconds
// Run generation = 22
// Run evolution = 2
// Run max result = 0.00004530
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

// Solution0 result = 0.00001323
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8, r9;

    r0 = n += -3.15775609f;
    r1 = n *= 0.20194915f;
    r2 = n += -1.42011595f;
    n = r2 *= n;
    n *= -0.52792764f;
    r3 = n += 0.33132252f;
    r4 = n *= 0.20947401f;
    r5 = n += 0.72539532f;
    n += 2.15966296f;
    r6 = n *= 1.07510674f;
    r7 = n += -2.09425044f;
    n = r1 *= n;
    n *= 1.70978737f;
    n *= 0.01412629f;
    r8 = n += 2.96347809f;
    r9 = n *= -0.35490489f;
    n *= r3;
    n *= -0.97314435f;
    n += 1.95040047f;
    n = r4 *= n;
    n += r8;
    n *= r6;
    n += r0;
    n *= r1;
    n *= r9;
    n *= -0.42066494f;
    n *= r7;
    n *= r2;
    n *= r4;
    n *= 9.09260941f;
    n *= r5;
    n += -0.01617248f;
    return n;
} // Solution0

// Solution1 result = 0.00003827
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8, r9;

    r0 = n += -3.07929611f;
    r1 = n *= 0.08880625f;
    r2 = n += 0.44621712f;
    n = r2 *= n;
    n *= -0.55666965f;
    r3 = n += 2.83514285f;
    r4 = n *= 0.96126157f;
    r5 = n += -1.99221730f;
    n += -0.37487459f;
    r6 = n *= 2.23268199f;
    r7 = n += 0.16571321f;
    n = r1 *= n;
    n *= 2.15158772f;
    n *= -0.00775271f;
    r8 = n += -0.80615908f;
    r9 = n *= -0.42256206f;
    n *= r3;
    n *= 3.43847251f;
    n += 1.48675263f;
    n = r4 *= n;
    n += r8;
    n *= r6;
    n += r0;
    n *= r1;
    n *= r9;
    n *= 3.85428524f;
    n *= r7;
    n *= r2;
    n *= r4;
    n *= -1.81296217f;
    n *= r5;
    n += -0.10561449f;
    return n;
} // Solution1

// Solution2 result = 0.00004530
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7, r8, r9;

    r0 = n += -1.91878700f;
    r1 = n *= -0.22375375f;
    r2 = n += 1.50885534f;
    n = r2 *= n;
    n *= -0.60551113f;
    r3 = n += 0.34399408f;
    r4 = n *= 0.86902022f;
    r5 = n += 3.46260691f;
    n += -0.34440657f;
    r6 = n *= 0.29446930f;
    r7 = n += 1.13919783f;
    n = r1 *= n;
    n *= 0.07312658f;
    n *= -9.49296856f;
    r8 = n += 1.03983200f;
    r9 = n *= 0.17218356f;
    n *= r3;
    n *= 0.79450595f;
    n += -0.55121368f;
    n = r4 *= n;
    n += r8;
    n *= r6;
    n += r0;
    n *= r1;
    n *= r9;
    n *= 1.52199602f;
    n *= r7;
    n *= r2;
    n *= r4;
    n *= 0.76912737f;
    n *= r5;
    n += 1.12779939f;
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
