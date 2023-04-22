// Run date: 04/22/23 12:07:34 Pacific Daylight Time
// Run duration = 1992.545746 seconds
// Run generation = 208
// Run result = 0.00000107
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    r1 = n *= -0.35134283f;
    r2 = n *= 1.85952926f;
    n = r0 += n;
    n = r0 *= n;
    n *= 0.34487396f;
    n *= -0.14381373f;
    r3 = n += 1.49930930f;
    r4 = n *= 0.05611946f;
    n += 0.10896248f;
    n += 0.05303038f;
    n = r1 *= n;
    n *= -162.30357361f;
    n *= 0.00559368f;
    n *= r2;
    n += r4;
    r4 = n += 2.17837858f;
    r2 = n *= 2.19981551f;
    n += r3;
    n *= 1.11214483f;
    r3 = n += -6.32038784f;
    n += r0;
    n = r4 *= n;
    r0 = n *= 0.00020325f;
    n *= -4.10553455f;
    n *= r0;
    n += r3;
    n *= r4;
    n += 0.56193793f;
    n *= r2;
    n *= r1;
    n += -0.00000002f;
    return n;
} // Solution0

// Solution1 result = 0.00000060
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065866f;
    r1 = n *= 0.88388532f;
    r2 = n *= -1.12626338f;
    n = r0 += n;
    n = r0 *= n;
    n *= 2.07209754f;
    n *= -0.00428839f;
    r3 = n += 3.31052852f;
    r4 = n *= 0.18164925f;
    n += -1.24611270f;
    n += 0.67063332f;
    n = r1 *= n;
    n *= -2.42767763f;
    n *= 1.20832062f;
    n *= r2;
    n += r4;
    r4 = n += -2.30919528f;
    r2 = n *= -0.73865438f;
    n += r3;
    n *= 1.34630847f;
    r3 = n += -1.53507268f;
    n += r0;
    n = r4 *= n;
    r0 = n *= 0.06653602f;
    n *= 0.70684147f;
    n *= r0;
    n += r3;
    n *= r4;
    n += -0.13087040f;
    n *= r2;
    n *= r1;
    n += -0.11813173f;
    return n;
} // Solution1

// Solution2 result = 0.00000107
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799359f;
    r1 = n *= 0.02603731f;
    r2 = n *= 0.00011152f;
    n = r0 += n;
    n = r0 *= n;
    n *= -0.39086515f;
    n *= 2.03239322f;
    r3 = n += 0.56021196f;
    r4 = n *= -0.02279711f;
    n += -2.06399608f;
    n += 1.09265876f;
    n = r1 *= n;
    n *= -1.50503039f;
    n *= 10.90748787f;
    n *= r2;
    n += r4;
    r4 = n += -0.98143142f;
    r2 = n *= -1.11461341f;
    n += r3;
    n *= 1.13158393f;
    r3 = n += -6.12904501f;
    n += r0;
    n = r4 *= n;
    r0 = n *= 0.76334643f;
    n *= 1.17002106f;
    n *= r0;
    n += r3;
    n *= r4;
    n += 1.98984659f;
    n *= r2;
    n *= r1;
    n += 0.52359879f;
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
