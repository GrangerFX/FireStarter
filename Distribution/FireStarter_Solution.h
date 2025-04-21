// Run date: 04/20/25 21:16:47 Pacific Daylight Time
// Run duration = 163.917857 seconds
// Run generation = 80
// Run evolution = 2
// Run max result = 0.00010360
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
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run population = 262144
// Run generations = 0
// Run passes = 512
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
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
    switch (variation & 3) {
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

    r0 = n += -0.60805148f;
    r1 = n += -2.23316336f;
    r2 = n *= 0.02357932f;
    r3 = n *= -2.62111568f;
    r4 = n += 0.77750856f;
    r5 = n *= 0.94826782f;
    n *= 0.36627492f;
    n = r2 *= n;
    n *= 11.64259434f;
    r6 = n *= 0.03482763f;
    n = r4 += n;
    n *= r4;
    n *= -1.02176738f;
    n = r6 *= n;
    n += -0.45690903f;
    n *= 3.60871124f;
    n = r0 *= n;
    n *= 0.93082291f;
    n += r6;
    n += r1;
    r1 = n *= -4.98390198f;
    n = r2 *= n;
    n *= -0.78581762f;
    r6 = n += 0.54389220f;
    n = r3 += n;
    n *= 0.55542189f;
    n *= r5;
    n *= r0;
    n *= r1;
    n *= r2;
    n += r3;
    n *= r6;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.14427255f;
    r1 = n += -2.27563930f;
    r2 = n *= -0.11655586f;
    r3 = n *= 0.09062876f;
    r4 = n += 0.14014116f;
    r5 = n *= 0.22168706f;
    n *= 1.95099187f;
    n = r2 *= n;
    n *= -9.55129051f;
    r6 = n *= 0.23892833f;
    n = r4 += n;
    n *= r4;
    n *= 9.76409817f;
    n = r6 *= n;
    n += 0.71908158f;
    n *= 2.18260574f;
    n = r0 *= n;
    n *= -0.98243445f;
    n += r6;
    n += r1;
    r1 = n *= 2.85089111f;
    n = r2 *= n;
    n *= -1.58688641f;
    r6 = n += 0.76395446f;
    n = r3 += n;
    n *= 16.62835312f;
    n *= r5;
    n *= r0;
    n *= r1;
    n *= r2;
    n += r3;
    n *= r6;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.84162086f;
    r1 = n += -1.93489289f;
    r2 = n *= -0.03380788f;
    r3 = n *= 7.48498440f;
    r4 = n += 2.41390157f;
    r5 = n *= -1.38386285f;
    n *= 0.20049824f;
    n = r2 *= n;
    n *= 44.31885529f;
    r6 = n *= -0.01138005f;
    n = r4 += n;
    n *= r4;
    n *= -0.04842193f;
    n = r6 *= n;
    n += 0.97954881f;
    n *= -1.10179937f;
    n = r0 *= n;
    n *= 1.41035497f;
    n += r6;
    n += r1;
    r1 = n *= 0.62309414f;
    n = r2 *= n;
    n *= 2.92504144f;
    r6 = n += 0.60508364f;
    n = r3 += n;
    n *= -3.48138165f;
    n *= r5;
    n *= r0;
    n *= r1;
    n *= r2;
    n += r3;
    n *= r6;
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
