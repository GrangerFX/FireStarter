// Run date: 11/27/22 13:46:38 Pacific Standard Time
// Run duration = 158.828828 seconds
// Run count = 164
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run processes = 0;
// Run population = 69632;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 164

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

// Precision = 0.00002855

// Solution0 precision = 0.00002855
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.65902257f;
    r1 = n += -0.78383267f;
    n *= -139.73139954f;
    n *= 0.00811929f;
    r2 = n *= 0.00271868f;
    r3 = n *= 2.92292070f;
    n *= -0.51185071f;
    r4 = n += -0.25944483f;
    n += r0;
    r0 = n += 0.19579327f;
    n += 0.13591863f;
    n *= -0.01565020f;
    r5 = n += 0.60973465f;
    n *= 0.77724850f;
    n += -0.47401470f;
    n *= r1;
    n += r3;
    n = r5 += n;
    n += 1.01947939f;
    n *= r4;
    n = r0 *= n;
    n += 0.02874299f;
    r4 = n += -1.14029825f;
    r3 = n += -1.29517329f;
    n += 3.80695391f;
    n *= r4;
    n *= r5;
    n *= r0;
    n += -3.12892699f;
    n += 2.95896769f;
    n += r2;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.00002253
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.46242216f;
    r1 = n += -1.72219503f;
    n *= 50.28340912f;
    n *= 0.00025845f;
    r2 = n *= -0.01592176f;
    r3 = n *= -92.36044312f;
    n *= -0.16325982f;
    r4 = n += -0.15296046f;
    n += r0;
    r0 = n += -3.41486263f;
    n += -1.92870462f;
    n *= -0.31401169f;
    r5 = n += -0.18548600f;
    n *= 0.03481790f;
    n += 0.47105679f;
    n *= r1;
    n += r3;
    n = r5 += n;
    n += -0.26496798f;
    n *= r4;
    n = r0 *= n;
    n += 0.35751686f;
    r4 = n += 1.20814192f;
    r3 = n += 0.30544546f;
    n += -0.24575104f;
    n *= r4;
    n *= r5;
    n *= r0;
    n += -5.90543318f;
    n += 5.83061790f;
    n += r2;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.00002074
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += 0.10396584f;
    r1 = n += -2.55512977f;
    n *= 129.52345276f;
    n *= -0.02648598f;
    r2 = n *= -0.04653576f;
    r3 = n *= 0.00428682f;
    n *= 9.50302124f;
    r4 = n += -0.07664853f;
    n += r0;
    r0 = n += -0.52174944f;
    n += -1.62849021f;
    n *= 0.11184572f;
    r5 = n += 0.31245604f;
    n *= -0.38824162f;
    n += -0.53294581f;
    n *= r1;
    n += r3;
    n = r5 += n;
    n += 0.71246147f;
    n *= r4;
    n = r0 *= n;
    n += -2.36318994f;
    r4 = n += 0.49447405f;
    r3 = n += 0.46635351f;
    n += -0.84832478f;
    n *= r4;
    n *= r5;
    n *= r0;
    n += -9.21328068f;
    n += 9.04371357f;
    n += r2;
    n *= r3;
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
