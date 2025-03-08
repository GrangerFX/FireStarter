// Run date: 03/08/25 11:30:12 Pacific Standard Time
// Run duration = 644.507637 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00024131
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 262144
// Run passes = 512
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3

#ifndef __CUDACC__
#include <cmath>
#endif

#if 0
namespace Constants {
    constexpr long double PIld = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899L; // 80 digits of precision but long double is only 80 bits.
    constexpr double PId = 3.1415926535897932;
    constexpr float PIf = 3.14159265f;
} // Constants
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * SOLUTION_PI)

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

inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.32805187f;
    n *= -2.25519681f;
    n += -0.57997411f;
    r1 = n *= 0.25462571f;
    r2 = n += -2.00018716f;
    r3 = n *= -0.95464003f;
    n *= r2;
    r2 = n *= 0.51857638f;
    r4 = n *= -0.36869845f;
    r5 = n += -1.52876079f;
    n *= r0;
    r0 = n += -2.64149427f;
    n += 1.52980161f;
    r6 = n *= -3.92175245f;
    n *= -0.12370945f;
    n *= r4;
    n = r3 += n;
    r4 = n += -2.48985386f;
    n *= -0.00007880f;
    n *= -8.87032700f;
    n += 0.47339979f;
    n = r5 *= n;
    n = r5 *= n;
    n += r1;
    n *= r6;
    n *= r2;
    n *= r3;
    n *= r0;
    n += r4;
    n *= r5;
    n += -2.93862009f;
    n += 3.21987247f;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.69053441f;
    n *= -0.54042441f;
    n += 1.44054294f;
    r1 = n *= -0.42562440f;
    r2 = n += 2.57818604f;
    r3 = n *= 0.08053848f;
    n *= r2;
    r2 = n *= -0.77350444f;
    r4 = n *= 2.98907471f;
    r5 = n += 1.44489062f;
    n *= r0;
    r0 = n += 0.35363099f;
    n += 2.79120827f;
    r6 = n *= -3.33927631f;
    n *= 0.78558034f;
    n *= r4;
    n = r3 += n;
    r4 = n += 0.29423541f;
    n *= -2.05197906f;
    n *= -0.00370686f;
    n += 0.85271066f;
    n = r5 *= n;
    n = r5 *= n;
    n += r1;
    n *= r6;
    n *= r2;
    n *= r3;
    n *= r0;
    n += r4;
    n *= r5;
    n += 1.13981891f;
    n += -2.58890319f;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -1.28009796f;
    n *= 0.17831743f;
    n += 0.83745295f;
    r1 = n *= 0.70385540f;
    r2 = n += 0.94055974f;
    r3 = n *= 2.50464511f;
    n *= r2;
    r2 = n *= -0.77221054f;
    r4 = n *= -0.06612430f;
    r5 = n += -0.78067976f;
    n *= r0;
    r0 = n += -0.49910709f;
    n += -0.97484452f;
    r6 = n *= 1.20278466f;
    n *= 2.75732207f;
    n *= r4;
    n = r3 += n;
    r4 = n += 0.36050719f;
    n *= -0.40411940f;
    n *= 0.02739806f;
    n += -0.68938315f;
    n = r5 *= n;
    n = r5 *= n;
    n += r1;
    n *= r6;
    n *= r2;
    n *= r3;
    n *= r0;
    n += r4;
    n *= r5;
    n += -4.28385162f;
    n += 4.76390696f;
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
