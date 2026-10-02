// Run date: 03/09/25 15:32:01 Pacific Daylight Time
// Run duration = 37.313555 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00259799
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
// Run units = 1
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
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.62200129f;
    n *= -1.36931682f;
    r1 = n *= -0.70084608f;
    r2 = n += -3.11247182f;
    n *= 5.98489809f;
    n += r2;
    n *= -0.13301821f;
    n *= -0.06288866f;
    n += 0.70978302f;
    n *= r1;
    r1 = n += -0.73225904f;
    r2 = n += -2.06965566f;
    r3 = n *= 0.32277724f;
    r4 = n += 0.51853794f;
    n += -0.72893786f;
    n *= 0.47745299f;
    n = r1 *= n;
    n += r3;
    n *= -3.34539866f;
    n *= r1;
    r1 = n += -0.31728339f;
    r3 = n *= -0.03566193f;
    n *= 8.97355461f;
    n *= -8.79709721f;
    n *= -0.37930590f;
    n *= r0;
    n *= r3;
    n += r1;
    n *= -4.31267309f;
    n += 1.52560699f;
    n *= r4;
    n *= r2;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.13921243f;
    n *= 0.15719804f;
    r1 = n *= -2.35975337f;
    r2 = n += 0.75606042f;
    n *= -3.76446342f;
    n += r2;
    n *= 4.14405346f;
    n *= 0.02897068f;
    n += 4.97163200f;
    n *= r1;
    r1 = n += -0.21997088f;
    r2 = n += -0.10192806f;
    r3 = n *= -1.05530477f;
    r4 = n += -2.74381804f;
    n += -1.09613824f;
    n *= 0.11145608f;
    n = r1 *= n;
    n += r3;
    n *= 3.28941679f;
    n *= r1;
    r1 = n += -1.80070651f;
    r3 = n *= 2.84788656f;
    n *= 1.28600669f;
    n *= 0.29884690f;
    n *= -0.27735168f;
    n *= r0;
    n *= r3;
    n += r1;
    n *= -0.96211785f;
    n += -0.51553828f;
    n *= r4;
    n *= r2;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -1.73503435f;
    n *= -1.41424847f;
    r1 = n *= 0.08701285f;
    r2 = n += -0.93093508f;
    n *= 8.77251434f;
    n += r2;
    n *= 0.04145610f;
    n *= 1.18144381f;
    n += 1.08440506f;
    n *= r1;
    r1 = n += -1.43235850f;
    r2 = n += -1.07391846f;
    r3 = n *= -1.21166348f;
    r4 = n += -1.81533134f;
    n += 0.69385445f;
    n *= -0.06535094f;
    n = r1 *= n;
    n += r3;
    n *= 4.38998604f;
    n *= r1;
    r1 = n += -2.26287150f;
    r3 = n *= 1.59672010f;
    n *= -0.76491761f;
    n *= 0.39403102f;
    n *= 0.16074350f;
    n *= r0;
    n *= r3;
    n += r1;
    n *= 0.75731087f;
    n += -0.20360945f;
    n *= r4;
    n *= r2;
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
