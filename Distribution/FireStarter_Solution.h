// Run date: 04/02/23 11:39:29 Pacific Daylight Time
// Run duration = 2549.565472 seconds
// Run generation = 86
// Run result = 0.00017256
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 24
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

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

// Solution0 result = 0.00016320
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.28026590f;
    r1 = n *= 0.00259039f;
    r2 = n *= 1.74110544f;
    n *= 1.51235473f;
    n *= -0.04704608f;
    r3 = n *= -0.02154145f;
    n *= 2.52943921f;
    n *= -0.62222105f;
    n *= 2.43822289f;
    r4 = n += 0.43398005f;
    n = r0 *= n;
    n = r0 += n;
    n *= r3;
    n *= 2.94396091f;
    n *= r2;
    r2 = n += 0.76267934f;
    n += 0.00217950f;
    n = r0 += n;
    n += r2;
    n *= -0.37146887f;
    n = r0 *= n;
    n += r4;
    r4 = n *= -3.82620072f;
    n *= 0.32903227f;
    r2 = n += -0.94162506f;
    n = r0 *= n;
    n += -2.39975190f;
    n *= r4;
    n *= -1.64306760f;
    n *= r0;
    n *= r2;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00010943
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= -0.10018271f;
    r1 = n *= 0.20741618f;
    r2 = n *= 0.65745986f;
    n *= 1.44406712f;
    n *= 0.28028277f;
    r3 = n *= -1.51857007f;
    n *= 0.43402338f;
    n *= 1.33827674f;
    n *= -2.85059810f;
    r4 = n += -0.73844755f;
    n = r0 *= n;
    n = r0 += n;
    n *= r3;
    n *= 2.99049926f;
    n *= r2;
    r2 = n += 0.12278961f;
    n += -1.52173960f;
    n = r0 += n;
    n += r2;
    n *= 0.31211597f;
    n = r0 *= n;
    n += r4;
    r4 = n *= 2.83613992f;
    n *= 1.16244495f;
    r2 = n += -1.94662392f;
    n = r0 *= n;
    n += 0.87113070f;
    n *= r4;
    n *= 0.84116131f;
    n *= r0;
    n *= r2;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00017256
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n *= 0.27319291f;
    r1 = n *= 0.74247080f;
    r2 = n *= -0.04985158f;
    n *= 0.30126873f;
    n *= 1.74459469f;
    r3 = n *= -0.36839747f;
    n *= 0.61360127f;
    n *= 1.69860053f;
    n *= 0.43280467f;
    r4 = n += -0.80291450f;
    n = r0 *= n;
    n = r0 += n;
    n *= r3;
    n *= -3.03318691f;
    n *= r2;
    r2 = n += 1.15367460f;
    n += -0.01062865f;
    n = r0 += n;
    n += r2;
    n *= 0.30586591f;
    n = r0 *= n;
    n += r4;
    r4 = n *= 1.41485286f;
    n *= -0.44624084f;
    r2 = n += 0.87778622f;
    n = r0 *= n;
    n += -3.97504473f;
    n *= r4;
    n *= 0.90626436f;
    n *= r0;
    n *= r2;
    n += r1;
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
