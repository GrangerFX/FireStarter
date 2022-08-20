// Run date: 08/20/22 11:26:22 Pacific Daylight Time
// Run duration = 0.523473 seconds
// Run count = 1
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_CODE;
// Run units = 1;
// Run process = 0;
// Run population = 17408;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 1;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 1

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

// Precision = 0.29700992

// Solution0 precision = 0.24805611
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -0.83244121f;
    n *= -0.79706895f;
    r1 = n *= 0.86103106f;
    n *= 0.30519578f;
    n *= 0.94043005f;
    r2 = n *= 0.33664915f;
    n += 0.51469952f;
    n += -0.18540752f;
    n = r1 *= n;
    r3 = n += 0.14968149f;
    r4 = n += -0.75925702f;
    n = r4 += n;
    n += r2;
    n = r3 += n;
    n += 11.26756954f;
    n *= -0.23763199f;
    n += -0.19530724f;
    n += 0.06547772f;
    n += -0.21514289f;
    n = r0 += n;
    n += 0.60449541f;
    n *= 1.07867897f;
    n += -0.59600145f;
    r2 = n *= -0.92328399f;
    n += 0.55462974f;
    n = r0 += n;
    n += r4;
    n += r1;
    n *= 0.48092628f;
    n *= r3;
    n *= r2;
    n *= r0;
    return n;
} // Solution0

// Solution1 precision = 0.28988105
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += 1.71008539f;
    n *= 1.81301117f;
    r1 = n *= 0.23700958f;
    n *= 0.12506714f;
    n *= -3.79357386f;
    r2 = n *= -0.36601552f;
    n += -0.86293119f;
    n += 0.02042046f;
    n = r1 *= n;
    r3 = n += -0.25595462f;
    r4 = n += -1.03663731f;
    n = r4 += n;
    n += r2;
    n = r3 += n;
    n += -0.78407824f;
    n *= -0.07828885f;
    n += -0.04540097f;
    n += 0.47079360f;
    n += -0.45169777f;
    n = r0 += n;
    n += 0.12539642f;
    n *= 0.95058328f;
    n += 0.01172563f;
    r2 = n *= -0.02228013f;
    n += -5.15850925f;
    n = r0 += n;
    n += r4;
    n += r1;
    n *= 0.24071093f;
    n *= r3;
    n *= r2;
    n *= r0;
    return n;
} // Solution1

// Solution2 precision = 0.29700992
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -0.40499550f;
    n *= 1.60147440f;
    r1 = n *= 0.51495498f;
    n *= 0.31200093f;
    n *= 0.75941217f;
    r2 = n *= -0.40113351f;
    n += 0.04217282f;
    n += 0.11452791f;
    n = r1 *= n;
    r3 = n += -0.81394845f;
    r4 = n += 0.26992929f;
    n = r4 += n;
    n += r2;
    n = r3 += n;
    n += -1.38757408f;
    n *= 0.55049473f;
    n += 0.05678791f;
    n += 0.80481964f;
    n += -1.31998980f;
    n = r0 += n;
    n += -0.30507872f;
    n *= -0.81721509f;
    n += 0.38012367f;
    r2 = n *= 1.09677374f;
    n += 0.85594290f;
    n = r0 += n;
    n += r4;
    n += r1;
    n *= -0.42956406f;
    n *= r3;
    n *= r2;
    n *= r0;
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
