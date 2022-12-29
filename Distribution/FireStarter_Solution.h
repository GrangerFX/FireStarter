// Run date: 12/29/22 11:17:16 Pacific Standard Time
// Run duration = 6.422606 seconds
// Run count = 56
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 2.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 56

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

// Precision = 0.00005209

// Solution0 precision = 0.00001779
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.44341129f;
    n += 1.93677223f;
    n += -1.09413373f;
    r1 = n += -1.53956354f;
    r2 = n *= 0.00021934f;
    r3 = n *= -3.42812943f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= 0.82542944f;
    n = r1 *= n;
    n += -0.23799604f;
    n *= -0.26489264f;
    n += 0.94467908f;
    n *= -7.72295523f;
    n += 1.96742225f;
    r0 = n *= -0.04237181f;
    r2 = n += 1.28118312f;
    r4 = n += -0.13622364f;
    n *= r2;
    r2 = n += 0.87861216f;
    n *= -1.66668749f;
    r5 = n *= 0.91936034f;
    n *= r1;
    n *= -0.20126864f;
    n = r0 *= n;
    n *= r5;
    n += r0;
    n += r4;
    n += r3;
    n *= r2;
    n += -3.17967653f;
    return n;
} // Solution0

// Solution1 precision = 0.00005209
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.03517032f;
    n += 0.03079589f;
    n += -1.25732005f;
    r1 = n += -0.60843486f;
    r2 = n *= 1.71772206f;
    r3 = n *= 0.17701058f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= -2.00527501f;
    n = r1 *= n;
    n += -4.80544519f;
    n *= 1.13204193f;
    n += -1.65008283f;
    n *= -0.25989470f;
    n += -4.38383627f;
    r0 = n *= 0.94201362f;
    r2 = n += -0.04603383f;
    r4 = n += 0.00514267f;
    n *= r2;
    r2 = n += -0.74568981f;
    n *= -1.06324995f;
    r5 = n *= 1.18219066f;
    n *= r1;
    n *= -0.41562775f;
    n = r0 *= n;
    n *= r5;
    n += r0;
    n += r4;
    n += r3;
    n *= r2;
    n += -0.13654511f;
    return n;
} // Solution1

// Solution2 precision = 0.00004053
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -1.14709187f;
    n += 0.79058295f;
    n += 1.03172588f;
    r1 = n += -0.33827001f;
    r2 = n *= 0.12753597f;
    r3 = n *= -1.00421202f;
    n += r2;
    n *= r0;
    n = r1 += n;
    n *= -0.24485603f;
    n = r1 *= n;
    n += 1.37236273f;
    n *= -0.44364512f;
    n += -1.13299727f;
    n *= 2.02203441f;
    n += -0.95421928f;
    r0 = n *= -0.04965691f;
    r2 = n += 0.00489415f;
    r4 = n += 1.46651447f;
    n *= r2;
    r2 = n += 1.12512183f;
    n *= 1.31943619f;
    r5 = n *= -1.28167045f;
    n *= r1;
    n *= 1.51650989f;
    n = r0 *= n;
    n *= r5;
    n += r0;
    n += r4;
    n += r3;
    n *= r2;
    n += -1.29868090f;
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
