// Run date: 02/05/23 16:00:12 Pacific Standard Time
// Run duration = 73.007676 seconds
// Run count = 195
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run units = 1
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 128
// Run seed = 99
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 195

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

// Precision = 0.00031233

// Solution0 precision = 0.00027544
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.45579845f;
    n = r0 += n;
    n += 0.75038409f;
    n += -0.29655731f;
    r1 = n += -0.45357874f;
    r2 = n += 5.72723436f;
    r3 = n *= -0.04008692f;
    r4 = n += -0.02884677f;
    n = r0 *= n;
    r5 = n += 1.35038960f;
    n = r1 *= n;
    n += 2.54660010f;
    n += 1.76297057f;
    n += r5;
    n += r3;
    n += -2.34484148f;
    r3 = n *= -0.04899688f;
    n *= -2.11756086f;
    n += -0.91945940f;
    n *= -1.48034620f;
    r5 = n += -1.57322443f;
    n *= r5;
    n += -0.21474247f;
    n *= -0.03366601f;
    n += -0.73519289f;
    n += 1.67643428f;
    n *= r3;
    n *= r0;
    n += 0.11624577f;
    n += r4;
    n *= r2;
    n *= r1;
    return n;
} // Solution0

// Solution1 precision = 0.00025702
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.15149081f;
    n = r0 += n;
    n += 0.49954915f;
    n += -0.84270984f;
    r1 = n += 1.18940353f;
    r2 = n += -1.75007820f;
    r3 = n *= -0.01453518f;
    r4 = n += 0.70228904f;
    n = r0 *= n;
    r5 = n += -1.61253321f;
    n = r1 *= n;
    n += 0.26433620f;
    n += -1.55369699f;
    n += r5;
    n += r3;
    n += 1.40076172f;
    r3 = n *= -0.14940520f;
    n *= -2.82745075f;
    n += -1.83569610f;
    n *= -2.28838062f;
    r5 = n += -0.58705109f;
    n *= r5;
    n += -2.47450209f;
    n *= 0.19510436f;
    n += 0.29805648f;
    n += -1.21674657f;
    n *= r3;
    n *= r0;
    n += -0.02462164f;
    n += r4;
    n *= r2;
    n *= r1;
    return n;
} // Solution1

// Solution2 precision = 0.00031233
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.13921887f;
    n = r0 += n;
    n += 1.26209772f;
    n += 1.44342840f;
    r1 = n += 0.22511502f;
    r2 = n += 0.42670909f;
    r3 = n *= -0.32161114f;
    r4 = n += 1.57134724f;
    n = r0 *= n;
    r5 = n += 0.69213951f;
    n = r1 *= n;
    n += -2.12657762f;
    n += 4.93685675f;
    n += r5;
    n += r3;
    n += -1.62258422f;
    r3 = n *= 0.11232743f;
    n *= -5.48328543f;
    n += 0.49527732f;
    n *= 0.69387054f;
    r5 = n += -0.25089160f;
    n *= r5;
    n += -1.26840401f;
    n *= 3.04901385f;
    n += -0.81861776f;
    n += -1.79342818f;
    n *= r3;
    n *= r0;
    n += -0.49163115f;
    n += r4;
    n *= r2;
    n *= r1;
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
