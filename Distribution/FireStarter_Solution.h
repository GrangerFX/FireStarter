// Run date: 08/27/22 11:46:41 Pacific Daylight Time
// Run duration = 1.288016 seconds
// Run count = 14
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
// Run population = 69632;
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
// Solution Generation = 1400

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

// Precision = 0.00126147

// Solution0 precision = 0.00073123
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 1.27241933f;
    r0 = n += 0.18807250f;
    r1 = n += 0.68504554f;
    r2 = n *= 0.35834292f;
    r3 = n += -0.40677571f;
    n += -0.45065078f;
    r4 = n *= 0.68683225f;
    r5 = n += -0.75077420f;
    r6 = n += -0.69646555f;
    n *= 1.04723930f;
    n += -1.26231658f;
    n *= r6;
    n *= 2.02208400f;
    n = r1 *= n;
    n *= 1.38118589f;
    n *= 0.87877041f;
    n *= 0.34532622f;
    n *= -1.15926015f;
    n *= -0.84437239f;
    n *= r2;
    n += r3;
    n *= 0.63283229f;
    n *= -0.04472156f;
    n *= -0.70270288f;
    n *= r0;
    n *= 0.69663048f;
    n += r4;
    n *= r1;
    n *= r5;
    n += 0.97855288f;
    n *= -0.60952163f;
    n *= 0.25979441f;
    return n;
} // Solution0

// Solution1 precision = 0.00007069
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 2.01682496f;
    r0 = n += 0.30582276f;
    r1 = n += 0.46531737f;
    r2 = n *= -0.79364198f;
    r3 = n += 0.51998848f;
    n += -0.58443236f;
    r4 = n *= -0.15935379f;
    r5 = n += -1.30081570f;
    r6 = n += 0.52990979f;
    n *= -0.88030982f;
    n += 1.03859901f;
    n *= r6;
    n *= -1.16423905f;
    n = r1 *= n;
    n *= -1.07509613f;
    n *= 0.96091461f;
    n *= -0.92828733f;
    n *= -0.87612927f;
    n *= -0.27306566f;
    n *= r2;
    n += r3;
    n *= 1.56316340f;
    n *= -0.09786200f;
    n *= 0.98904192f;
    n *= r0;
    n *= 1.39435303f;
    n += r4;
    n *= r1;
    n *= r5;
    n += 0.68479514f;
    n *= -0.74418902f;
    n *= 0.52414739f;
    return n;
} // Solution1

// Solution2 precision = 0.00126147
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.13386154f;
    r0 = n += 0.85489500f;
    r1 = n += -0.43321106f;
    r2 = n *= -0.37866044f;
    r3 = n += -0.28750286f;
    n += 0.83927077f;
    r4 = n *= -0.97647226f;
    r5 = n += 1.33375823f;
    r6 = n += -2.42799592f;
    n *= -1.18691599f;
    n += 0.98767674f;
    n *= r6;
    n *= -0.77078092f;
    n = r1 *= n;
    n *= -6.94789791f;
    n *= 0.35898069f;
    n *= -2.68683314f;
    n *= -3.02648520f;
    n *= 0.01724007f;
    n *= r2;
    n += r3;
    n *= 1.11401320f;
    n *= 0.04801412f;
    n *= -2.13115454f;
    n *= r0;
    n *= -0.32808700f;
    n += r4;
    n *= r1;
    n *= r5;
    n += -1.44473338f;
    n *= -1.83577800f;
    n *= 0.33849481f;
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
