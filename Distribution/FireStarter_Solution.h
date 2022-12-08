// Run date: 12/08/22 10:09:54 Pacific Standard Time
// Run duration = 45.103564 seconds
// Run count = 7
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 10;
// Run processes = 16;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 7

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

// Precision = 0.00005674

// Solution0 precision = 0.00003541
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.08148062f;
    r0 = n *= 0.50842458f;
    r1 = n *= -0.99978852f;
    n += 1.54549766f;
    r2 = n += 0.30022365f;
    n *= r2;
    n += -0.59176356f;
    n += 0.13270847f;
    r2 = n *= 0.28179017f;
    n *= 0.14689711f;
    r3 = n += -1.03446758f;
    n = r3 *= n;
    r4 = n += 0.17864102f;
    r5 = n *= -0.23933001f;
    r6 = n += -1.98959196f;
    n += -5.16923046f;
    r7 = n += 1.88855326f;
    n *= r2;
    n *= -0.54272133f;
    n += -0.77134347f;
    n *= r3;
    n *= -0.24788323f;
    n *= r6;
    n *= 0.43860376f;
    n = r5 += n;
    n *= r5;
    n *= r7;
    n += r1;
    n += r0;
    n += r4;
    n += 1.23886228f;
    n += -1.30769336f;
    return n;
} // Solution0

// Solution1 precision = 0.00005674
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.56873572f;
    r0 = n *= 0.51902866f;
    r1 = n *= -1.38580847f;
    n += 2.76459551f;
    r2 = n += -0.41483265f;
    n *= r2;
    n += -0.65961319f;
    n += -1.34296227f;
    r2 = n *= -0.58992833f;
    n *= 0.02041718f;
    r3 = n += 0.79248703f;
    n = r3 *= n;
    r4 = n += 0.88166058f;
    r5 = n *= -0.19234189f;
    r6 = n += -0.52344203f;
    n += 0.39227918f;
    r7 = n += -1.74821854f;
    n *= r2;
    n *= 0.72246987f;
    n += -2.18458867f;
    n *= r3;
    n *= -0.49548921f;
    n *= r6;
    n *= 0.62794280f;
    n = r5 += n;
    n *= r5;
    n *= r7;
    n += r1;
    n += r0;
    n += r4;
    n += 1.01120853f;
    n += -1.25276792f;
    return n;
} // Solution1

// Solution2 precision = 0.00000274
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6, r7;

    n += -1.87514520f;
    r0 = n *= 1.30743659f;
    r1 = n *= -0.84702885f;
    n += 1.38792551f;
    r2 = n += 0.88436311f;
    n *= r2;
    n += -1.12344718f;
    n += -0.28962067f;
    r2 = n *= -0.27312788f;
    n *= 0.02966646f;
    r3 = n += 0.72745812f;
    n = r3 *= n;
    r4 = n += 1.00760341f;
    r5 = n *= -0.22065431f;
    r6 = n += -0.48769522f;
    n += -0.31635615f;
    r7 = n += -0.69917822f;
    n *= r2;
    n *= -0.53841978f;
    n += 1.12222064f;
    n *= r3;
    n *= 1.09654307f;
    n *= r6;
    n *= 0.96589255f;
    n = r5 += n;
    n *= r5;
    n *= r7;
    n += r1;
    n += r0;
    n += r4;
    n += -0.59478754f;
    n += 0.51396257f;
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
