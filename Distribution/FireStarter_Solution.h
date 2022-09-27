// Run date: 09/26/22 21:32:04 Pacific Daylight Time
// Run duration = 5.861404 seconds
// Run count = 2
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_UNIT;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 7988;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 2

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

// Precision = 0.00002600

// Solution0 precision = 0.00002400
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.45687100f;
    n += -0.53058201f;
    r0 = n += -0.90472800f;
    r1 = n *= -0.06491900f;
    r2 = n += -0.86614102f;
    n = r2 += n;
    n += 0.45544100f;
    n += 3.00914311f;
    n = r2 *= n;
    n += -0.66223300f;
    r3 = n += 2.94776893f;
    n += -0.60400701f;
    n = r0 *= n;
    r4 = n *= -0.33013201f;
    n *= 0.52054203f;
    n *= -0.14619000f;
    n *= 5.51771879f;
    n = r0 *= n;
    r5 = n += -0.92208898f;
    n = r0 += n;
    n = r2 += n;
    n *= 3.28373790f;
    n += -0.40379101f;
    n *= r0;
    n *= r2;
    n += r5;
    n *= r4;
    n += r1;
    n *= r3;
    n *= -0.14800601f;
    n += 0.00001000f;
    n *= 0.96619499f;
    return n;
} // Solution0

// Solution1 precision = 0.00000500
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.39385799f;
    n += -0.35988101f;
    r0 = n += -0.85739499f;
    r1 = n *= -0.19116500f;
    r2 = n += -0.26285201f;
    n = r2 += n;
    n += 0.78180301f;
    n += 0.26958799f;
    n = r2 *= n;
    n += -2.91141891f;
    r3 = n += -0.01933500f;
    n += -11.55285358f;
    n = r0 *= n;
    r4 = n *= -0.08705800f;
    n *= 0.05566900f;
    n *= -0.22784799f;
    n *= -0.65014201f;
    n = r0 *= n;
    r5 = n += 0.88671702f;
    n = r0 += n;
    n = r2 += n;
    n *= 6.09800100f;
    n += 9.68563271f;
    n *= r0;
    n *= r2;
    n += r5;
    n *= r4;
    n += r1;
    n *= r3;
    n *= -0.19682200f;
    n += 0.27424300f;
    n *= -0.43071201f;
    return n;
} // Solution1

// Solution2 precision = 0.00002600
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.38061300f;
    n += 0.50442499f;
    r0 = n += -1.50073397f;
    r1 = n *= -0.35739601f;
    r2 = n += 0.08605600f;
    n = r2 += n;
    n += -0.95219302f;
    n += 0.60838997f;
    n = r2 *= n;
    n += -6.19146681f;
    r3 = n += -1.40536499f;
    n += -2.74163294f;
    n = r0 *= n;
    r4 = n *= 0.11618500f;
    n *= -0.42767301f;
    n *= -0.04080500f;
    n *= 0.22815600f;
    n = r0 *= n;
    r5 = n += -0.38817599f;
    n = r0 += n;
    n = r2 += n;
    n *= 3.53601193f;
    n += -8.26414776f;
    n *= r0;
    n *= r2;
    n += r5;
    n *= r4;
    n += r1;
    n *= r3;
    n *= -0.20202200f;
    n += -0.61851901f;
    n *= -0.84714001f;
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
