// Run date: 07/03/22 10:46:28 Pacific Daylight Time
// Run duration = 1.723371 seconds
// Run count = 1
// Run mode = 4
// Run clients = 4
// Run process = 0
// Run units = 1
// Run states = 1
// Run population = 69632
// Run iterations = 512
// Run generations = 100
// Run samples = 15
// Run seed = 0
// Solution Generation = 0

#ifndef __CUDACC__
#include <cmath>
#endif

#define TARGET_PI 3.14159265f

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
        return fabsf(fmodf(fabsf(n - TARGET_PI * 0.5f), TARGET_PI * 2.0f) - TARGET_PI) - TARGET_PI * 0.5f;
    }
} // SolutionTarget

#define SOLUTION_MIN 0.000000
#define SOLUTION_MAX 6.283185

#define SOLUTION_VARIATIONS 3

// Precision = 0.000063

// Solution0 precision = 0.000043
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -1.70525885f;
    n *= -0.62296766f;
    r0 = n *= 0.60982877f;
    n += 0.03352880f;
    r1 = n *= 0.35528898f;
    n += 0.32934493f;
    n *= r1;
    r1 = n += -0.00704172f;
    r2 = n += -1.09626162f;
    n += -0.74394566f;
    r3 = n *= -0.96519691f;
    n += 0.65767950f;
    n *= 0.22160716f;
    n += r0;
    n *= -0.84947813f;
    n *= r3;
    n += -0.05452185f;
    r3 = n *= 1.35156310f;
    n *= r2;
    r2 = n *= -0.86470550f;
    r0 = n *= 0.11742964f;
    n *= r3;
    r3 = n += -0.17617254f;
    n += -0.88659555f;
    n += 0.11843404f;
    n += r3;
    n = r1 += n;
    n *= -0.10266503f;
    n += r2;
    n += r0;
    n *= r1;
    n += 0.04127406f;
    return n;
} // Solution0

// Solution1 precision = 0.000022
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += 0.42183235f;
    n *= -0.35699585f;
    r0 = n *= -1.10148239f;
    n += -0.59162259f;
    r1 = n *= 0.14658652f;
    n += -0.19520502f;
    n *= r1;
    r1 = n += 0.75188386f;
    r2 = n += -0.96873575f;
    n += -0.30502895f;
    r3 = n *= 2.89254212f;
    n += -0.09744571f;
    n *= 0.76649278f;
    n += r0;
    n *= -0.97694230f;
    n *= r3;
    n += -0.31355777f;
    r3 = n *= 0.72656041f;
    n *= r2;
    r2 = n *= -1.86620307f;
    r0 = n *= 1.37138677f;
    n *= r3;
    r3 = n += -1.03380787f;
    n += -0.79476023f;
    n += -0.38266876f;
    n += r3;
    n = r1 += n;
    n *= -0.05777627f;
    n += r2;
    n += r0;
    n *= r1;
    n += 0.02382494f;
    return n;
} // Solution1

// Solution2 precision = 0.000063
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -0.81438988f;
    n *= 0.76422995f;
    r0 = n *= -0.77438158f;
    n += -0.08231600f;
    r1 = n *= 0.25341296f;
    n += 0.34580836f;
    n *= r1;
    r1 = n += -0.71081543f;
    r2 = n += -0.82165682f;
    n += 0.09228322f;
    r3 = n *= -0.75813574f;
    n += -0.02359215f;
    n *= 1.60948455f;
    n += r0;
    n *= 0.81774002f;
    n *= r3;
    n += -0.48319036f;
    r3 = n *= -1.11827660f;
    n *= r2;
    r2 = n *= -0.56343007f;
    r0 = n *= 0.37993926f;
    n *= r3;
    r3 = n += 0.21657249f;
    n += -0.98145896f;
    n += 0.03392473f;
    n += r3;
    n = r1 += n;
    n *= -0.17653866f;
    n += r2;
    n += r0;
    n *= r1;
    n += 0.58687872f;
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
