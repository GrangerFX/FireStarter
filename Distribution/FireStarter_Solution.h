// Run date: 04/01/23 18:13:26 Pacific Daylight Time
// Run duration = 2891.793227 seconds
// Run generation = 78
// Run result = 0.00030112
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 2
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

// Solution0 result = 0.00013581
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= -0.27038562f;
    r1 = n += 0.84941930f;
    n *= -0.06744651f;
    n *= -0.24101818f;
    n *= 1.67421567f;
    n *= 95.25828552f;
    n *= 0.72957021f;
    n *= 0.25694007f;
    r2 = n *= 1.21113014f;
    n = r2 += n;
    n += -0.28311077f;
    n += -0.71677816f;
    n = r1 *= n;
    n = r0 += n;
    r3 = n += -3.49955654f;
    n = r3 *= n;
    n *= -0.91036808f;
    n *= 1.36016846f;
    n *= -0.04497199f;
    n *= 1.40337169f;
    n += 0.81105733f;
    n *= r0;
    n *= -0.16512947f;
    r0 = n *= 0.03969036f;
    n += 27.86239433f;
    n += 11.55495834f;
    n *= -4.70922661f;
    n *= r3;
    n += r1;
    n *= r0;
    n *= -0.07019566f;
    n *= r2;
    return n;
} // Solution0

// Solution1 result = 0.00023389
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= -0.37304074f;
    r1 = n += 1.11275899f;
    n *= 0.47448379f;
    n *= -1.44487643f;
    n *= -2.46273470f;
    n *= 0.06438645f;
    n *= -0.67271662f;
    n *= -0.58566654f;
    r2 = n *= 2.65722036f;
    n = r2 += n;
    n += -1.67168343f;
    n += 0.69057345f;
    n = r1 *= n;
    n = r0 += n;
    r3 = n += -0.84274018f;
    n = r3 *= n;
    n *= -1.83500898f;
    n *= -0.45547923f;
    n *= -0.04156293f;
    n *= -0.99184364f;
    n += 2.15406823f;
    n *= r0;
    n *= 1.89309907f;
    r0 = n *= -1.02971411f;
    n += -0.59570068f;
    n += -1.27999520f;
    n *= 2.93016052f;
    n *= r3;
    n += r1;
    n *= r0;
    n *= 0.07535037f;
    n *= r2;
    return n;
} // Solution1

// Solution2 result = 0.00030112
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= 0.59676200f;
    r1 = n += -1.90693653f;
    n *= 1.01606429f;
    n *= -0.01751500f;
    n *= 1.74348807f;
    n *= -0.48595092f;
    n *= -1.71699297f;
    n *= 0.98489779f;
    r2 = n *= 2.43145442f;
    n = r2 += n;
    n += 0.44635290f;
    n += -1.54302669f;
    n = r1 *= n;
    n = r0 += n;
    r3 = n += 1.40131319f;
    n = r3 *= n;
    n *= 0.59750324f;
    n *= -1.25055242f;
    n *= -1.65003479f;
    n *= -0.53707260f;
    n += -0.90980726f;
    n *= r0;
    n *= -1.49997473f;
    r0 = n *= -0.07349847f;
    n += 1.33495796f;
    n += 0.09031105f;
    n *= -1.16066313f;
    n *= r3;
    n += r1;
    n *= r0;
    n *= -1.54928303f;
    n *= r2;
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
