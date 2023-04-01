// Run date: 04/01/23 13:19:37 Pacific Daylight Time
// Run duration = 2163.590496 seconds
// Run generation = 97
// Run result = 0.00042803
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
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

// Solution0 result = 0.00042803
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.23712757f;
    r1 = n *= 0.37444189f;
    n *= -1.87550008f;
    r2 = n *= 1.55032372f;
    r3 = n *= 0.91439760f;
    n *= 0.64763826f;
    n *= -1.55000854f;
    n *= -1.25207710f;
    r4 = n *= 1.18876493f;
    r5 = n += -3.07859278f;
    r6 = n += -1.29469883f;
    r7 = n *= 0.60695773f;
    n = r3 *= n;
    n *= r1;
    n = r2 *= n;
    n = r3 += n;
    n += 0.48708722f;
    r1 = n += -1.61545777f;
    n += r3;
    n += -1.08986592f;
    n *= r0;
    n += r5;
    n *= r1;
    n *= -0.73338085f;
    n = r7 += n;
    n *= r6;
    n += r7;
    n *= r4;
    n *= 0.43632492f;
    n += r2;
    n *= 0.37160715f;
    n += 0.00042803f;
    return n;
} // Solution0

// Solution1 result = 0.00029886
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= 1.08350754f;
    r1 = n *= -0.32963169f;
    n *= 2.09109616f;
    r2 = n *= -0.08376736f;
    r3 = n *= 2.28676414f;
    n *= 3.50915360f;
    n *= -2.12167358f;
    n *= -1.95579553f;
    r4 = n *= -0.06713574f;
    r5 = n += 1.51345682f;
    r6 = n += -0.25707823f;
    r7 = n *= -1.56444144f;
    n = r3 *= n;
    n *= r1;
    n = r2 *= n;
    n = r3 += n;
    n += -3.77184677f;
    r1 = n += 1.78023112f;
    n += r3;
    n += 1.50948966f;
    n *= r0;
    n += r5;
    n *= r1;
    n *= 0.33845568f;
    n = r7 += n;
    n *= r6;
    n += r7;
    n *= r4;
    n *= -0.92419398f;
    n += r2;
    n *= -0.74075925f;
    n += 0.85256130f;
    return n;
} // Solution1

// Solution2 result = 0.00030767
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    r0 = n *= -0.12842396f;
    r1 = n *= -1.04196596f;
    n *= -1.29110241f;
    r2 = n *= 1.07418740f;
    r3 = n *= 1.64252985f;
    n *= -0.64175588f;
    n *= 0.42730707f;
    n *= -3.47760558f;
    r4 = n *= -0.92004192f;
    r5 = n += -1.49673343f;
    r6 = n += -1.27896464f;
    r7 = n *= -1.16020977f;
    n = r3 *= n;
    n *= r1;
    n = r2 *= n;
    n = r3 += n;
    n += -0.54886216f;
    r1 = n += -1.82703161f;
    n += r3;
    n += 2.62765050f;
    n *= r0;
    n += r5;
    n *= r1;
    n *= 1.85167682f;
    n = r7 += n;
    n *= r6;
    n += r7;
    n *= r4;
    n *= -0.33311915f;
    n += r2;
    n *= 0.90505379f;
    n += -0.00030767f;
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
