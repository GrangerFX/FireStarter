// Run date: 04/02/23 15:46:56 Pacific Daylight Time
// Run duration = 2679.779132 seconds
// Run generation = 142
// Run result = 0.00050163
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
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

// Solution0 result = 0.00034738
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= 0.30518949f;
    r1 = n *= -0.01604504f;
    r2 = n *= -0.93915772f;
    n *= -0.40221110f;
    n *= -8.43113518f;
    n *= 2.68239832f;
    n *= -1.82914817f;
    n *= -1.39216268f;
    r3 = n *= -0.94321847f;
    n += 1.48121440f;
    n += r3;
    r3 = n *= 0.45199838f;
    n *= -24.90923691f;
    n *= r2;
    n *= r3;
    r3 = n += -0.55135375f;
    n += -0.57001483f;
    n = r0 += n;
    n += r3;
    n *= 0.92913139f;
    n *= r0;
    n += -1.74301744f;
    r0 = n *= 1.98231983f;
    r3 = n *= 1.45952916f;
    r2 = n *= -1.08220339f;
    n *= r3;
    n *= -0.69767779f;
    n *= r0;
    n *= 0.09969614f;
    n += r2;
    n *= 0.52826947f;
    n += r1;
    return n;
} // Solution0

// Solution1 result = 0.00039083
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= 0.29219252f;
    r1 = n *= -0.13080008f;
    r2 = n *= 0.49433959f;
    n *= -0.08032775f;
    n *= -20.62970543f;
    n *= -1.47268879f;
    n *= -0.51900619f;
    n *= -4.39673328f;
    r3 = n *= -0.49674907f;
    n += 1.85047126f;
    n += r3;
    r3 = n *= 2.34387684f;
    n *= 0.42262194f;
    n *= r2;
    n *= r3;
    r3 = n += -1.68475771f;
    n += 0.68187064f;
    n = r0 += n;
    n += r3;
    n *= -1.20386469f;
    n *= r0;
    n += 1.21077895f;
    r0 = n *= -0.92368358f;
    r3 = n *= -1.35902309f;
    r2 = n *= 1.11779678f;
    n *= r3;
    n *= 0.14290376f;
    n *= r0;
    n *= 1.01760387f;
    n += r2;
    n *= -0.98752594f;
    n += r1;
    return n;
} // Solution1

// Solution2 result = 0.00050163
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n *= -1.15245664f;
    r1 = n *= -0.17329681f;
    r2 = n *= 0.14294286f;
    n *= 83.97729492f;
    n *= -1.33456886f;
    n *= 0.34835854f;
    n *= -0.08273996f;
    n *= 1.27289510f;
    r3 = n *= -0.93572217f;
    n += 1.34274614f;
    n += r3;
    r3 = n *= -1.33914328f;
    n *= 2.17882133f;
    n *= r2;
    n *= r3;
    r3 = n += 3.14361763f;
    n += -0.29786023f;
    n = r0 += n;
    n += r3;
    n *= 1.17917597f;
    n *= r0;
    n += -20.10211563f;
    r0 = n *= 0.18488416f;
    r3 = n *= -0.94499087f;
    r2 = n *= -0.30249593f;
    n *= r3;
    n *= -1.30325806f;
    n *= r0;
    n *= -0.05879560f;
    n += r2;
    n *= -2.44771934f;
    n += r1;
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
