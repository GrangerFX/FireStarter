// Run date: 08/20/22 13:07:02 Pacific Daylight Time
// Run duration = 3.432452 seconds
// Run count = 50
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run process = 0;
// Run population = 139264;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 5000

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

#define SOLUTION_VARIATIONS 3

// Precision = 0.00006914

// Solution0 precision = 0.00001776
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.14116383f;
    r0 = n += 0.56261003f;
    r1 = n += -0.27836177f;
    n *= 0.94797403f;
    r2 = n *= -1.30315185f;
    n = r1 *= n;
    r3 = n *= 1.02370822f;
    r4 = n += 1.39311218f;
    r5 = n *= -0.46795246f;
    n *= r5;
    n *= 1.30483675f;
    r5 = n *= 0.67698097f;
    n = r2 += n;
    n = r4 += n;
    n = r4 += n;
    n *= -1.38620174f;
    n *= -0.44625014f;
    n += 2.44825721f;
    n = r3 *= n;
    n *= r2;
    n *= 0.01186981f;
    n += r5;
    n = r3 *= n;
    r5 = n += 0.26634765f;
    n += r5;
    n += r1;
    n = r0 *= n;
    n += r0;
    n += r3;
    n *= r4;
    n += 4.01236105f;
    n += -4.15776157f;
    return n;
} // Solution0

// Solution1 precision = 0.00006914
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.48787269f;
    r0 = n += 0.22126922f;
    r1 = n += 1.45727813f;
    n *= 0.04784643f;
    r2 = n *= 3.10259295f;
    n = r1 *= n;
    r3 = n *= 0.62555909f;
    r4 = n += -0.17350462f;
    r5 = n *= 1.22045994f;
    n *= r5;
    n *= 1.10487211f;
    r5 = n *= -1.03664374f;
    n = r2 += n;
    n = r4 += n;
    n = r4 += n;
    n *= -12.46491623f;
    n *= 0.01321935f;
    n += -0.43811724f;
    n = r3 *= n;
    n *= r2;
    n *= -4.68076563f;
    n += r5;
    n = r3 *= n;
    r5 = n += -0.61298478f;
    n += r5;
    n += r1;
    n = r0 *= n;
    n += r0;
    n += r3;
    n *= r4;
    n += 0.91128153f;
    n += 0.19784081f;
    return n;
} // Solution1

// Solution2 precision = 0.00006074
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.48268217f;
    r0 = n += 1.36466491f;
    r1 = n += -0.25338030f;
    n *= -0.50043511f;
    r2 = n *= 0.37193620f;
    n = r1 *= n;
    r3 = n *= 0.67278671f;
    r4 = n += 0.89333910f;
    r5 = n *= 0.80901814f;
    n *= r5;
    n *= 1.25654578f;
    r5 = n *= 0.80582851f;
    n = r2 += n;
    n = r4 += n;
    n = r4 += n;
    n *= 0.11021268f;
    n *= -0.64034617f;
    n += 1.57615399f;
    n = r3 *= n;
    n *= r2;
    n *= 0.47699761f;
    n += r5;
    n = r3 *= n;
    r5 = n += 0.17230085f;
    n += r5;
    n += r1;
    n = r0 *= n;
    n += r0;
    n += r3;
    n *= r4;
    n += -2.64803886f;
    n += 2.98154306f;
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
