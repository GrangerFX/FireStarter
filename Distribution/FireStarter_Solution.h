// Run date: 03/05/23 18:04:03 Pacific Standard Time
// Run duration = 6984.475409 seconds
// Run count = 92
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 2
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 92

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

// Precision = 0.00012484

// Solution0 precision = 0.00012484
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.13883924f;
    r1 = n += -1.62887692f;
    r2 = n *= -1.03490746f;
    r3 = n *= -0.23772401f;
    n *= 0.85893291f;
    n += r2;
    n += -2.67242098f;
    n *= r1;
    r1 = n += -0.24616794f;
    n *= -0.01997049f;
    r2 = n += -1.09103036f;
    r4 = n *= -1.04443264f;
    n *= -0.15231317f;
    r5 = n += 0.80281603f;
    n *= r0;
    n = r2 *= n;
    r0 = n *= -1.62065351f;
    n *= 2.14941001f;
    n *= r2;
    n += 14.29551792f;
    n += -0.99518037f;
    n *= r0;
    n = r3 += n;
    n *= r4;
    n *= 0.02574752f;
    n *= r1;
    n *= 1.18582833f;
    n += r3;
    n += r5;
    n += -0.15388170f;
    n += -0.08649768f;
    n *= -0.06065479f;
    return n;
} // Solution0

// Solution1 precision = 0.00008178
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.03084397f;
    r1 = n += -0.67157221f;
    r2 = n *= -0.31770226f;
    r3 = n *= -1.55705547f;
    n *= 1.43904209f;
    n += r2;
    n += 0.47022986f;
    n *= r1;
    r1 = n += -2.59041071f;
    n *= -0.04149575f;
    r2 = n += 1.05445981f;
    r4 = n *= -1.45493841f;
    n *= 0.33434972f;
    r5 = n += 0.40107235f;
    n *= r0;
    n = r2 *= n;
    r0 = n *= 1.67599165f;
    n *= 0.26454440f;
    n *= r2;
    n += -19.00337029f;
    n += 0.10243946f;
    n *= r0;
    n = r3 += n;
    n *= r4;
    n *= 0.22183508f;
    n *= r1;
    n *= 0.48242837f;
    n += r3;
    n += r5;
    n += -0.37837020f;
    n += 1.51697147f;
    n *= -0.11015304f;
    return n;
} // Solution1

// Solution2 precision = 0.00010639
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61970258f;
    r1 = n += -1.35832238f;
    r2 = n *= 0.14255248f;
    r3 = n *= -1.51963675f;
    n *= 1.20730662f;
    n += r2;
    n += -0.32371089f;
    n *= r1;
    r1 = n += 0.61224538f;
    n *= -0.26602232f;
    r2 = n += -1.44639599f;
    r4 = n *= -0.25423774f;
    n *= -0.33482563f;
    r5 = n += -0.49654061f;
    n *= r0;
    n = r2 *= n;
    r0 = n *= -0.34276232f;
    n *= -1.44020307f;
    n *= r2;
    n += -1.39251447f;
    n += -1.46905208f;
    n *= r0;
    n = r3 += n;
    n *= r4;
    n *= 0.58728772f;
    n *= r1;
    n *= 0.38802871f;
    n += r3;
    n += r5;
    n += 0.82525128f;
    n += -0.97148824f;
    n *= -1.11805499f;
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
