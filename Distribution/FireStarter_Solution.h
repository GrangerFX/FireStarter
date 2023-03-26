// Run date: 03/25/23 20:35:04 Pacific Daylight Time
// Run duration = 2547.122649 seconds
// Run count = 0
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_RANDOM
// Run units = 8
// Run processes = 16
// Run iterations = 256
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 7986
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 0

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

// Precision = 0.00001350

// Solution0 precision = 0.00001128
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 0.65607697f;
    n += 1.59836972f;
    n *= 0.53900802f;
    n += -1.97284436f;
    r0 = n *= -1.27090657f;
    r1 = n += -0.00073043f;
    n = r0 *= n;
    r2 = n += -1.21099699f;
    n *= 0.00163812f;
    n += -1.53576708f;
    r3 = n *= -0.46724272f;
    r4 = n += -1.25297630f;
    n = r4 *= n;
    r5 = n += -0.89479786f;
    n *= r2;
    n += 0.26044118f;
    r2 = n *= 1.85095930f;
    n = r0 += n;
    r6 = n *= 0.66742462f;
    n += r5;
    n = r0 *= n;
    n += 1.10333633f;
    n = r0 *= n;
    n += r0;
    n *= r2;
    n += r6;
    n *= r1;
    n += 0.65256011f;
    n *= r3;
    n += -0.58634496f;
    n *= r4;
    n += 0.03419320f;
    return n;
} // Solution0

// Solution1 precision = 0.00000945
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.91740912f;
    n += 0.56228143f;
    n *= -0.18634702f;
    n += -0.42267779f;
    r0 = n *= -0.66354078f;
    r1 = n += 0.00106080f;
    n = r0 *= n;
    r2 = n += -0.70743620f;
    n *= 0.41351807f;
    n += -1.77344024f;
    r3 = n *= -0.30372471f;
    r4 = n += -0.58631712f;
    n = r4 *= n;
    r5 = n += -1.54706085f;
    n *= r2;
    n += 1.61751997f;
    r2 = n *= 2.03678393f;
    n = r0 += n;
    r6 = n *= 1.18162072f;
    n += r5;
    n = r0 *= n;
    n += 2.52403831f;
    n = r0 *= n;
    n += r0;
    n *= r2;
    n += r6;
    n *= r1;
    n += -2.67013073f;
    n *= r3;
    n += -0.75349772f;
    n *= r4;
    n += -0.11844111f;
    return n;
} // Solution1

// Solution2 precision = 0.00001350
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= 1.43707907f;
    n += -0.71098191f;
    n *= 0.28867018f;
    n += -0.88281339f;
    r0 = n *= 1.34530902f;
    r1 = n += 0.00435640f;
    n = r0 *= n;
    r2 = n += -0.49091905f;
    n *= -0.02749338f;
    n += -2.55249500f;
    r3 = n *= 0.10622092f;
    r4 = n += 0.57343477f;
    n = r4 *= n;
    r5 = n += 0.95972270f;
    n *= r2;
    n += -1.07688284f;
    r2 = n *= -1.11098754f;
    n = r0 += n;
    r6 = n *= 0.69607323f;
    n += r5;
    n = r0 *= n;
    n += 0.90135264f;
    n = r0 *= n;
    n += r0;
    n *= r2;
    n += r6;
    n *= r1;
    n += -0.21963507f;
    n *= r3;
    n += 0.63890076f;
    n *= r4;
    n += 0.46218899f;
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
