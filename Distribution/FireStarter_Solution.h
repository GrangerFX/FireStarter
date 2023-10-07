// Run date: 10/07/23 10:23:38 Pacific Daylight Time
// Run duration = 2811.267668 seconds
// Run generation = 22
// Run evolution = 4
// Run result = 0.00000131
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
// Run seeds = 64
// Run tests = 8
// Run units = 4
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n *= -0.03133286f;
    r0 = n += 0.09843507f;
    r1 = n *= -2.14683771f;
    n *= 1.94419098f;
    r2 = n *= -1.66256881f;
    r3 = n *= 1.12883508f;
    r4 = n *= 0.13308953f;
    n *= r1;
    r1 = n += 1.27321064f;
    n *= r3;
    n *= -2.31808805f;
    n *= r4;
    r4 = n *= -1.03993392f;
    n += -1.85793126f;
    r3 = n += -1.10665393f;
    n *= r4;
    n *= -1.36601174f;
    n *= r3;
    r3 = n += 0.66829795f;
    n *= 0.02861479f;
    n += -1.03946531f;
    n = r1 += n;
    r4 = n *= 2.50444818f;
    n *= r3;
    n += r4;
    n += r1;
    n *= r2;
    n += r0;
    n += -0.60553133f;
    n *= 3.05209732f;
    n *= 1.03673637f;
    n += 1.91603458f;
    return n;
} // Solution0

// Solution1 result = 0.00000131
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.44358903f;
    r0 = n += -1.37098241f;
    r1 = n *= -0.12607263f;
    n *= 4.73883009f;
    r2 = n *= 0.87031686f;
    r3 = n *= -0.67135173f;
    r4 = n *= -0.31929031f;
    n *= r1;
    r1 = n += -1.43637049f;
    n *= r3;
    n *= -1.60195220f;
    n *= r4;
    r4 = n *= -0.83334488f;
    n += -1.01957047f;
    r3 = n += -1.66777408f;
    n *= r4;
    n *= -1.65211058f;
    n *= r3;
    r3 = n += 1.24043310f;
    n *= -1.45517325f;
    n += -2.31030917f;
    n = r1 += n;
    r4 = n *= 3.23093343f;
    n *= r3;
    n += r4;
    n += r1;
    n *= r2;
    n += r0;
    n += -0.35650170f;
    n *= -1.11414325f;
    n *= 0.08981034f;
    n += -0.15380432f;
    return n;
} // Solution1

// Solution2 result = 0.00000072
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.45823872f;
    r0 = n += -1.19966602f;
    r1 = n *= 0.30041713f;
    n *= 1.17284834f;
    r2 = n *= 1.84040153f;
    r3 = n *= 1.10663533f;
    r4 = n *= 0.10747997f;
    n *= r1;
    r1 = n += -1.34970081f;
    n *= r3;
    n *= 2.57747579f;
    n *= r4;
    r4 = n *= -0.71835166f;
    n += -1.72767770f;
    r3 = n += -1.30285501f;
    n *= r4;
    n *= 1.57763481f;
    n *= r3;
    r3 = n += -1.39054906f;
    n *= 1.60286951f;
    n += -1.65377522f;
    n = r1 += n;
    r4 = n *= -0.20407721f;
    n *= r3;
    n += r4;
    n += r1;
    n *= r2;
    n += r0;
    n += -0.48511389f;
    n *= -0.37532473f;
    n *= -2.18308401f;
    n += 0.92108434f;
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
