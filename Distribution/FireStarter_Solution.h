// Run date: 05/25/25 11:57:50 Pacific Daylight Time
// Run duration = 5.480500 seconds
// Run test = 0
// Run generation = 6
// Run evolution = 0
// Run precision  = 0.00000000
// Run max result = 0.00000014
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 65536
// Run generations = 0
// Run passes = 384
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 1
#define SOLUTION_VARIATION 0

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * SOLUTION_PI)

inline float SolutionTarget(float n, unsigned int variation = 0)
{
    switch (variation & 3) {
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

inline float Solution(float n)
{
    float r0, r1, r2, r3, r4;

    n += 1.22214985f;
    n += 0.65236688f;
    n += 8.03735447f;
    r0 = n += -13.05346394f;
    r1 = n *= -0.14495291f;
    n *= r1;
    n += -1.45047605f;
    r1 = n += 0.27037877f;
    n *= -1.27963495f;
    r2 = n += -1.24473107f;
    n += 0.25772533f;
    n *= -0.12498954f;
    r3 = n += 0.05447622f;
    n = r3 *= n;
    n *= -4.90310764f;
    r4 = n += 1.67994559f;
    n += -2.01826048f;
    n *= -1.94061899f;
    n *= r2;
    r2 = n *= -0.83486259f;
    n *= r3;
    r3 = n *= -6.19770432f;
    n = r2 += n;
    n *= r4;
    n *= 1.52828789f;
    n += r3;
    n += -2.23044300f;
    n = r1 *= n;
    n *= r2;
    n *= r1;
    n *= 0.72733605f;
    n *= r0;
    return n;
} // Solution
