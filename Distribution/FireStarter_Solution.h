// Run date: 04/08/23 13:34:02 Pacific Daylight Time
// Run duration = 853.028332 seconds
// Run generation = 310
// Run result = 0.00000060
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_OPTIMIZE
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= -0.30875066f;
    r1 = n *= 0.46557865f;
    n *= -2.91003084f;
    r2 = n *= -0.00009139f;
    n *= r2;
    n *= -8.99238014f;
    r2 = n += -1.58404362f;
    r3 = n *= -0.01783554f;
    n *= 2.29841399f;
    n += -4.25167036f;
    n *= r1;
    r1 = n *= 1.60492313f;
    n *= r0;
    n += 0.95080817f;
    r0 = n += -0.23896047f;
    n *= -0.98846024f;
    r4 = n += -2.20572734f;
    n += r0;
    r0 = n *= -1.42330015f;
    n *= 1.01379263f;
    r5 = n += -3.42948294f;
    n = r0 *= n;
    n *= r2;
    n *= r5;
    n = r0 *= n;
    n = r3 += n;
    n *= r3;
    n += r0;
    n *= r4;
    n *= r1;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065866f;
    r0 = n *= -0.25239539f;
    r1 = n *= 0.52200162f;
    n *= -0.71467084f;
    r2 = n *= 1.85289550f;
    n *= r2;
    n *= -1.33365297f;
    r2 = n += 1.05265009f;
    r3 = n *= -0.56794000f;
    n *= -3.06886721f;
    n += 1.01462185f;
    n *= r1;
    r1 = n *= 0.73989785f;
    n *= r0;
    n += 0.32495070f;
    r0 = n += -11.28459644f;
    n *= -1.34833229f;
    r4 = n += -3.69623923f;
    n += r0;
    r0 = n *= 0.08012119f;
    n *= 0.76515472f;
    r5 = n += 1.02384639f;
    n = r0 *= n;
    n *= r2;
    n *= r5;
    n = r0 *= n;
    n = r3 += n;
    n *= r3;
    n += r0;
    n *= r4;
    n *= r1;
    n += -0.11813183f;
    return n;
} // Solution1

// Solution2 result = 0.00000060
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799383f;
    r0 = n *= -0.48826081f;
    r1 = n *= -0.22972488f;
    n *= 2.59160757f;
    r2 = n *= -0.00574473f;
    n *= r2;
    n *= -9.61000061f;
    r2 = n += 1.16546488f;
    r3 = n *= 0.25976923f;
    n *= 1.75817704f;
    n += -3.10395527f;
    n *= r1;
    r1 = n *= -1.42581058f;
    n *= r0;
    n += 1.55374134f;
    r0 = n += 0.06544666f;
    n *= -0.89065462f;
    r4 = n += 0.55084527f;
    n += r0;
    r0 = n *= 0.32701835f;
    n *= 0.55833632f;
    r5 = n += 2.34814668f;
    n = r0 *= n;
    n *= r2;
    n *= r5;
    n = r0 *= n;
    n = r3 += n;
    n *= r3;
    n += r0;
    n *= r4;
    n *= r1;
    n += 0.52359867f;
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
