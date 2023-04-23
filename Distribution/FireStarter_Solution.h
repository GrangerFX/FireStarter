// Run date: 04/23/23 09:40:10 Pacific Daylight Time
// Run duration = 484.234145 seconds
// Run generation = 304
// Run result = 0.00000012
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
    r1 = n *= 1.57466614f;
    r2 = n *= 0.00249319f;
    n *= 1.78032720f;
    n *= 0.00000006f;
    n += r2;
    n *= r1;
    n *= 1.69044352f;
    r1 = n *= -0.39666659f;
    r2 = n += 0.03119864f;
    n = r2 += n;
    r3 = n *= 0.45682925f;
    n += r3;
    r3 = n *= -6.36717558f;
    r4 = n *= -0.18034764f;
    n += -0.93164402f;
    n += -0.44952273f;
    n = r3 += n;
    n += r4;
    n = r2 += n;
    n *= r2;
    r2 = n += 1.36918616f;
    n = r1 *= n;
    n *= 0.08688127f;
    n *= -4.66157436f;
    n += -0.82999170f;
    n += r3;
    n *= r1;
    n += -0.26495209f;
    n *= r2;
    n *= r0;
    n += -0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000006
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065843f;
    r1 = n *= 1.03042340f;
    r2 = n *= 0.05104829f;
    n *= -5.39651775f;
    n *= 0.00000001f;
    n += r2;
    n *= r1;
    n *= -2.87053657f;
    r1 = n *= 1.44714928f;
    r2 = n += 0.47283310f;
    n = r2 += n;
    r3 = n *= -1.09407771f;
    n += r3;
    r3 = n *= -0.42079014f;
    r4 = n *= -1.03734446f;
    n += 0.30866390f;
    n += 0.34312150f;
    n = r3 += n;
    n += r4;
    n = r2 += n;
    n *= r2;
    r2 = n += 0.08893142f;
    n = r1 *= n;
    n *= -1.69787085f;
    n *= 0.10615718f;
    n += -2.35528588f;
    n += r3;
    n *= r1;
    n += -2.08820677f;
    n *= r2;
    n *= r0;
    n += -0.11813170f;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799383f;
    r1 = n *= 0.08209366f;
    r2 = n *= 2.13497519f;
    n *= -0.00000172f;
    n *= 6.41784859f;
    n += r2;
    n *= r1;
    n *= -1.35216975f;
    r1 = n *= -1.12647903f;
    r2 = n += -0.26124886f;
    n = r2 += n;
    r3 = n *= -0.46613497f;
    n += r3;
    r3 = n *= 0.45979419f;
    r4 = n *= 1.25589001f;
    n += -0.91606855f;
    n += 1.80822730f;
    n = r3 += n;
    n += r4;
    n = r2 += n;
    n *= r2;
    r2 = n += 0.18152826f;
    n = r1 *= n;
    n *= -0.94163764f;
    n *= 0.70594782f;
    n += 3.63535595f;
    n += r3;
    n *= r1;
    n += -0.65862632f;
    n *= r2;
    n *= r0;
    n += 0.52359861f;
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
