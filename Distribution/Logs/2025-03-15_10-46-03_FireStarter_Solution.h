// Run date: 03/15/25 10:46:03 Pacific Daylight Time
// Run duration = 7.199872 seconds
// Run generation = 5
// Run evolution = 0
// Run max result = 0.01336002
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run passes = 384
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

    n *= 0.06842244f;
    n *= 0.20991148f;
    r0 = n *= 4.58273029f;
    r1 = n *= 3.14887571f;
    n += -2.96338010f;
    n *= 0.43210080f;
    n *= 4.18820620f;
    n *= -0.39743537f;
    r2 = n *= -0.54387128f;
    n *= -2.25967288f;
    n += -0.23246333f;
    r3 = n *= 1.33804035f;
    n *= 0.49109641f;
    n = r0 += n;
    n *= r3;
    n *= 0.77014452f;
    r3 = n *= 0.35064015f;
    n *= 1.96560037f;
    n = r1 *= n;
    n = r1 += n;
    r4 = n *= 0.32263899f;
    n *= r0;
    r0 = n *= 0.80534363f;
    n = r4 *= n;
    n += -0.22430585f;
    n += r0;
    n *= r4;
    r4 = n += 1.08276618f;
    n *= r2;
    n *= r4;
    n += r1;
    n += r3;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 0.69209832f;
    n *= -0.32111928f;
    r0 = n *= -0.10280018f;
    r1 = n *= -0.44787064f;
    n += 0.67160088f;
    n *= 1.07626390f;
    n *= 2.87834191f;
    n *= -2.40685964f;
    r2 = n *= -0.09686992f;
    n *= 0.69550771f;
    n += 2.61332822f;
    r3 = n *= -1.35339653f;
    n *= 1.98369682f;
    n = r0 += n;
    n *= r3;
    n *= 0.28475112f;
    r3 = n *= -0.60262406f;
    n *= 6.25212717f;
    n = r1 *= n;
    n = r1 += n;
    r4 = n *= -0.17069139f;
    n *= r0;
    r0 = n *= 0.62865829f;
    n = r4 *= n;
    n += 0.46258742f;
    n += r0;
    n *= r4;
    r4 = n += 3.59847665f;
    n *= r2;
    n *= r4;
    n += r1;
    n += r3;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n *= 1.23276842f;
    n *= -0.80273253f;
    r0 = n *= -0.11669912f;
    r1 = n *= 0.76632249f;
    n += -1.54778171f;
    n *= 0.35158950f;
    n *= -0.29245958f;
    n *= 0.61919028f;
    r2 = n *= -4.06254148f;
    n *= 2.74746799f;
    n += 4.71914101f;
    r3 = n *= 1.99796832f;
    n *= -0.13869750f;
    n = r0 += n;
    n *= r3;
    n *= -1.37947261f;
    r3 = n *= 0.29442346f;
    n *= 2.74023628f;
    n = r1 *= n;
    n = r1 += n;
    r4 = n *= 0.27271011f;
    n *= r0;
    r0 = n *= 1.61538911f;
    n = r4 *= n;
    n += 0.40011489f;
    n += r0;
    n *= r4;
    r4 = n += 2.70632124f;
    n *= r2;
    n *= r4;
    n += r1;
    n += r3;
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
