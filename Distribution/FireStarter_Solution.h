// Run date: 03/25/23 15:20:18 Pacific Daylight Time
// Run duration = 1742.673945 seconds
// Run count = 316
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 8
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 316

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

// Precision = 0.00014305

// Solution0 precision = 0.00008097
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -2.94139242f;
    r1 = n *= -0.37880629f;
    n += 1.41303062f;
    r2 = n *= -0.74741966f;
    n += 0.94735193f;
    n = r0 *= n;
    n += -0.71799213f;
    n *= -1.03944707f;
    n = r0 += n;
    n *= -1.32043874f;
    r3 = n += -1.82700312f;
    n = r0 *= n;
    n = r0 += n;
    n *= r3;
    n += -16.58722115f;
    n *= -9.30660057f;
    n = r0 += n;
    n *= -23.84016800f;
    n += r1;
    n *= 0.01670547f;
    n += -17.75058556f;
    n *= 1.90433383f;
    n = r0 += n;
    r1 = n *= 0.09773186f;
    r3 = n += 1.72962677f;
    n *= r2;
    n += r3;
    n = r0 *= n;
    n += r0;
    n *= r1;
    n += 0.03778902f;
    n *= 0.04975348f;
    return n;
} // Solution0

// Solution1 precision = 0.00008380
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -1.26382935f;
    r1 = n *= 0.17017370f;
    n += 0.85894418f;
    r2 = n *= -0.85522419f;
    n += 1.26432121f;
    n = r0 *= n;
    n += 0.21358509f;
    n *= -1.04026473f;
    n = r0 += n;
    n *= 1.37513912f;
    r3 = n += -1.89213490f;
    n = r0 *= n;
    n = r0 += n;
    n *= r3;
    n += 0.57680762f;
    n *= 2.15415382f;
    n = r0 += n;
    n *= 2.16452503f;
    n += r1;
    n *= -2.04777598f;
    n += 3.95999837f;
    n *= 0.00613094f;
    n = r0 += n;
    r1 = n *= 1.01253915f;
    r3 = n += -5.13682652f;
    n *= r2;
    n += r3;
    n = r0 *= n;
    n += r0;
    n *= r1;
    n += 1.81715584f;
    n *= -0.06310531f;
    return n;
} // Solution1

// Solution2 precision = 0.00014305
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -1.86749578f;
    r1 = n *= 0.36888933f;
    n += -1.24979043f;
    r2 = n *= 1.02729058f;
    n += 0.71679437f;
    n = r0 *= n;
    n += -0.64576364f;
    n *= -1.04244184f;
    n = r0 += n;
    n *= 1.18693614f;
    r3 = n += 0.82857084f;
    n = r0 *= n;
    n = r0 += n;
    n *= r3;
    n += 1.16233313f;
    n *= 0.40145975f;
    n = r0 += n;
    n *= 44.49102020f;
    n += r1;
    n *= 0.01751849f;
    n += -1.94871867f;
    n *= 0.15698406f;
    n = r0 += n;
    r1 = n *= 0.58677977f;
    r3 = n += -2.10998893f;
    n *= r2;
    n += r3;
    n = r0 *= n;
    n += r0;
    n *= r1;
    n += -2.05133224f;
    n *= -0.25596336f;
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
