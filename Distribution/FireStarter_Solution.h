// Run date: 03/23/25 13:18:30 Pacific Daylight Time
// Run duration = 3104.374792 seconds
// Run generation = 336
// Run evolution = 5
// Run max result = 0.00004518
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 4

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
// Run population = 278528
// Run generations = 0
// Run passes = 500
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run attempts = 0
// Run optimize = 8

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
    float r0, r1, r2, r3, r4, r5;

    n += -3.14252186f;
    r0 = n *= 1.26633048f;
    r1 = n *= 0.61809975f;
    n *= 2.06796551f;
    n *= 2.22095108f;
    n *= -0.22023296f;
    n = r1 += n;
    r2 = n *= 0.14806712f;
    r3 = n += 2.49686146f;
    r4 = n *= -0.38814723f;
    r5 = n += 3.54824805f;
    n *= r0;
    n = r1 *= n;
    n += 2.36068368f;
    r0 = n *= 2.41158152f;
    n *= r3;
    n *= 0.11844972f;
    n += r4;
    r4 = n += 0.82908154f;
    n *= 0.34747732f;
    n *= -6.38589478f;
    n *= -0.09779018f;
    n += r1;
    n = r4 *= n;
    n *= r5;
    n *= 10.97996616f;
    n *= r2;
    n = r0 *= n;
    n *= r4;
    n += r0;
    n *= 5.93409681f;
    n += -0.00092915f;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09224296f;
    r0 = n *= 1.30280292f;
    r1 = n *= 0.78396016f;
    n *= -0.88204741f;
    n *= 0.47953397f;
    n *= 2.35868859f;
    n = r1 += n;
    r2 = n *= 0.15458393f;
    r3 = n += -2.54397774f;
    r4 = n *= 1.29524446f;
    r5 = n += 6.22701788f;
    n *= r0;
    n = r1 *= n;
    n += -0.92116100f;
    r0 = n *= 2.04281998f;
    n *= r3;
    n *= 2.43795991f;
    n += r4;
    r4 = n += -0.10369671f;
    n *= -0.02790649f;
    n *= -1.41533291f;
    n *= -1.72420824f;
    n += r1;
    n = r4 *= n;
    n *= r5;
    n *= -4.41617584f;
    n *= r2;
    n = r0 *= n;
    n *= r4;
    n += r0;
    n *= -7.15978813f;
    n += -0.11987427f;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.68514132f;
    r0 = n *= -0.56840837f;
    r1 = n *= -2.17483687f;
    n *= 1.22151005f;
    n *= -0.84154195f;
    n *= 0.99949545f;
    n = r1 += n;
    r2 = n *= 1.99345720f;
    r3 = n += 1.01068902f;
    r4 = n *= 0.82618761f;
    r5 = n += -2.00568628f;
    n *= r0;
    n = r1 *= n;
    n += 0.11077490f;
    r0 = n *= 1.33994436f;
    n *= r3;
    n *= 2.19485497f;
    n += r4;
    r4 = n += 1.86376572f;
    n *= 1.74746418f;
    n *= 1.75381780f;
    n *= -0.64993215f;
    n += r1;
    n = r4 *= n;
    n *= r5;
    n *= 6.41278267f;
    n *= r2;
    n = r0 *= n;
    n *= r4;
    n += r0;
    n *= -0.04193369f;
    n += 0.45655972f;
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
