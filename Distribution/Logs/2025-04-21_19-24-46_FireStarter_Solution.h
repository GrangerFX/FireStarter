// Run date: 04/21/25 19:24:46 Pacific Daylight Time
// Run duration = 4359.223853 seconds
// Run generation = 42
// Run evolution = 3
// Run max result = 0.00006986
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
#define SOLUTION_VARIATION 0

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
    float r0, r1, r2, r3, r4;

    n += 3.17593360f;
    r0 = n *= -0.21026644f;
    r1 = n += -0.05877337f;
    n = r1 += n;
    r2 = n += 2.16848898f;
    n *= -2.11701822f;
    n = r1 += n;
    n *= 0.65464801f;
    n *= 0.50487339f;
    n *= 3.03032637f;
    n += 2.29447031f;
    n *= -0.80462551f;
    n *= r2;
    r2 = n += -0.22236592f;
    r3 = n *= -0.04660501f;
    r4 = n += 0.39772686f;
    n *= r1;
    n = r0 *= n;
    n *= 0.23483393f;
    n *= 0.66947705f;
    n += -0.90607172f;
    n += 1.81398702f;
    n += r3;
    r3 = n *= -1.77938485f;
    n *= r2;
    n *= r0;
    n += r4;
    n *= r3;
    n += 0.28051448f;
    n *= -2.33970571f;
    n *= 5.77802944f;
    n *= 0.06066080f;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.25656891f;
    r0 = n *= -0.58444214f;
    r1 = n += 0.19109344f;
    n = r1 += n;
    r2 = n += 0.86361188f;
    n *= -0.76991826f;
    n = r1 += n;
    n *= -0.01191572f;
    n *= -18.65992928f;
    n *= -1.48005366f;
    n += 3.26983738f;
    n *= -0.04790688f;
    n *= r2;
    r2 = n += 1.27106631f;
    r3 = n *= -0.35555688f;
    r4 = n += 1.28706491f;
    n *= r1;
    n = r0 *= n;
    n *= -0.36884627f;
    n *= 0.78316230f;
    n += -0.31438199f;
    n += 2.19031215f;
    n += r3;
    r3 = n *= -1.78771031f;
    n *= r2;
    n *= r0;
    n += r4;
    n *= r3;
    n += 0.07406900f;
    n *= -1.54497480f;
    n *= 0.37819919f;
    n *= 0.53036803f;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.91912794f;
    r0 = n *= 0.26439559f;
    r1 = n += -0.57646573f;
    n = r1 += n;
    r2 = n += 2.41917586f;
    n *= -0.50892210f;
    n = r1 += n;
    n *= 1.39208686f;
    n *= 2.85660648f;
    n *= -0.13320076f;
    n += -0.29895383f;
    n *= -6.88456488f;
    n *= r2;
    r2 = n += 3.98723364f;
    r3 = n *= -0.12771617f;
    r4 = n += 2.52688098f;
    n *= r1;
    n = r0 *= n;
    n *= 0.09500174f;
    n *= -2.00518298f;
    n += -2.88594866f;
    n += 6.61927891f;
    n += r3;
    r3 = n *= -0.64588624f;
    n *= r2;
    n *= r0;
    n += r4;
    n *= r3;
    n += -18.08307266f;
    n *= 0.80512094f;
    n *= -0.08553965f;
    n *= 0.65261692f;
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
