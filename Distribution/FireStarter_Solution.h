// Run date: 07/29/23 21:19:41 Pacific Daylight Time
// Run duration = 638.145720 seconds
// Run generation = 209
// Run evolution = 0
// Run result = 0.00001562
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 1
// Run optimizeSeed = 1
// Run seeds = 1
// Run tests = 0
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

// Solution0 result = 0.00000495
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.58272624f;
    n *= 1.04694748f;
    r0 = n *= 0.30225214f;
    r1 = n += -1.15861380f;
    n *= r0;
    n *= -2.30043221f;
    r0 = n += -0.95763046f;
    r2 = n *= 0.06556989f;
    r3 = n += 2.09152603f;
    n += 1.22535074f;
    n = r0 += n;
    n += 2.12981153f;
    n = r2 *= n;
    r4 = n += 0.27793294f;
    n += 1.35949779f;
    n *= -0.37060228f;
    n = r4 *= n;
    n = r4 += n;
    n *= -0.00021830f;
    r5 = n *= -3.30172038f;
    n *= r5;
    n = r2 *= n;
    n += r2;
    n += 0.57930678f;
    n += r1;
    n *= r3;
    n *= 1.67466199f;
    n = r0 *= n;
    n += r0;
    n *= r4;
    n += -1.56363535f;
    n += 1.56363499f;
    return n;
} // Solution0

// Solution1 result = 0.00000596
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 1.26204574f;
    n *= 0.08887155f;
    r0 = n *= -0.90456033f;
    r1 = n += 0.62712336f;
    n *= r0;
    n *= 0.47754607f;
    r0 = n += 0.03077720f;
    r2 = n *= 0.27349421f;
    r3 = n += -0.13290161f;
    n += -0.00486959f;
    n = r0 += n;
    n += -0.81739372f;
    n = r2 *= n;
    r4 = n += 0.02445119f;
    n += 0.06328098f;
    n *= 1.03330648f;
    n = r4 *= n;
    n = r4 += n;
    n *= -1.27014554f;
    r5 = n *= -0.19655196f;
    n *= r5;
    n = r2 *= n;
    n += r2;
    n += -0.31355524f;
    n += r1;
    n *= r3;
    n *= 45547.82421875f;
    n = r0 *= n;
    n += r0;
    n *= r4;
    n += -0.10043559f;
    n += -0.01773971f;
    return n;
} // Solution1

// Solution2 result = 0.00001562
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.98805678f;
    n *= -0.21248727f;
    r0 = n *= 0.87145972f;
    r1 = n += -0.95800215f;
    n *= r0;
    n *= -0.82003057f;
    r0 = n += -0.35480672f;
    r2 = n *= -0.07440143f;
    r3 = n += -0.10291158f;
    n += 1.28044105f;
    n = r0 += n;
    n += 0.85701931f;
    n = r2 *= n;
    r4 = n += -0.03959290f;
    n += -0.13081385f;
    n *= 0.37893042f;
    n = r4 *= n;
    n = r4 += n;
    n *= -20.46747780f;
    r5 = n *= 0.29099724f;
    n *= r5;
    n = r2 *= n;
    n += r2;
    n += 0.47901034f;
    n += r1;
    n *= r3;
    n *= 16259.36914062f;
    n = r0 *= n;
    n += r0;
    n *= r4;
    n += 0.40472916f;
    n += 0.11891416f;
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
