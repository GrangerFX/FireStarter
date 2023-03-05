// Run date: 03/05/23 00:44:28 Pacific Standard Time
// Run duration = 2769.856667 seconds
// Run count = 77
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 32
// Run seed = 99
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 77

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

// Precision = 0.00037873

// Solution0 precision = 0.00036624
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.37202096f;
    n *= 0.38939238f;
    n += 0.70418286f;
    r0 = n += -0.46919560f;
    r1 = n += 0.19690973f;
    n *= 1.22682214f;
    r2 = n += -0.81149876f;
    n *= -0.41713434f;
    n += r1;
    r1 = n += -0.90192592f;
    r3 = n += 0.39586613f;
    n += -0.28157911f;
    r4 = n += -0.50526446f;
    n *= r1;
    n += -0.34067151f;
    n *= -0.50043923f;
    n += 1.28657627f;
    r1 = n += -0.56901228f;
    n += r3;
    n = r4 *= n;
    r3 = n *= 0.41342530f;
    n *= -2.28377604f;
    n = r1 *= n;
    n *= r2;
    r2 = n += -1.06033587f;
    n += r0;
    n *= -1.83240676f;
    n *= 2.11244154f;
    n += r4;
    n += r2;
    n += r3;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 0.00024736
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.02043927f;
    n *= 0.17232385f;
    n += 3.31031561f;
    r0 = n += -3.77537918f;
    r1 = n += 0.16419257f;
    n *= 0.56358308f;
    r2 = n += -0.07989748f;
    n *= 0.55295843f;
    n += r1;
    r1 = n += -0.80147666f;
    r3 = n += 0.77327627f;
    n += -0.07513260f;
    r4 = n += 0.09853585f;
    n *= r1;
    n += -0.62513286f;
    n *= 0.65051979f;
    n += -2.18573165f;
    r1 = n += -0.28315496f;
    n += r3;
    n = r4 *= n;
    r3 = n *= -0.94709504f;
    n *= 0.53695017f;
    n = r1 *= n;
    n *= r2;
    r2 = n += 1.07958758f;
    n += r0;
    n *= 0.03920460f;
    n *= 1.70014095f;
    n += r4;
    n += r2;
    n += r3;
    n *= r1;
    return n;
} // Solution1

// Solution2 precision = 0.00037873
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -2.36452389f;
    n *= -0.40515381f;
    n += -1.05185521f;
    r0 = n += 1.47614157f;
    r1 = n += -0.29187962f;
    n *= -2.03227305f;
    r2 = n += -1.01309645f;
    n *= 0.87408477f;
    n += r1;
    r1 = n += -1.39841437f;
    r3 = n += 1.50547194f;
    n += 0.96729046f;
    r4 = n += -0.71224993f;
    n *= r1;
    n += -0.58948040f;
    n *= 0.83848411f;
    n += -1.35705805f;
    r1 = n += -1.74444604f;
    n += r3;
    n = r4 *= n;
    r3 = n *= -0.89209455f;
    n *= -0.49199793f;
    n = r1 *= n;
    n *= r2;
    r2 = n += -0.16479315f;
    n += r0;
    n *= 1.66454279f;
    n *= -0.63485014f;
    n += r4;
    n += r2;
    n += r3;
    n *= r1;
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
