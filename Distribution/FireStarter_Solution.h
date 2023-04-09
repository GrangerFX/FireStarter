// Run date: 04/08/23 21:33:59 Pacific Daylight Time
// Run duration = 982.316002 seconds
// Run generation = 202
// Run result = 0.00000018
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 1
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

// Solution0 result = 0.00000015
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= -0.11833098f;
    n = r0 *= n;
    n += 0.29274106f;
    n *= -1.15362096f;
    r2 = n *= 0.98101914f;
    n *= -0.83330560f;
    n += 0.81583571f;
    r3 = n *= 0.98117983f;
    n *= r2;
    n *= 0.00812715f;
    n *= -1.26448905f;
    n = r3 += n;
    n *= -1.37920749f;
    n = r0 += n;
    r2 = n *= -3.81535029f;
    n *= 1.20176876f;
    r4 = n *= -0.06776599f;
    n *= -0.00163195f;
    r5 = n *= -3.31888723f;
    n *= 3.29449821f;
    n *= 0.91641194f;
    n *= r5;
    n += r2;
    n *= r4;
    n = r0 += n;
    r4 = n += 2.73379207f;
    n += r0;
    n *= r4;
    n += r3;
    n *= r1;
    n += 0.00000000f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065843f;
    r1 = n *= -0.10288516f;
    n = r0 *= n;
    n += 0.63956738f;
    n *= -1.24864912f;
    r2 = n *= 1.62072206f;
    n *= 2.83722448f;
    n += -1.44559622f;
    r3 = n *= 0.01741483f;
    n *= r2;
    n *= 2.32280827f;
    n *= 0.43378496f;
    n = r3 += n;
    n *= 0.70803630f;
    n = r0 += n;
    r2 = n *= -0.50441033f;
    n *= 0.76057786f;
    r4 = n *= 0.09971888f;
    n *= 1.90698302f;
    r5 = n *= -0.05574083f;
    n *= -3.86636853f;
    n *= 2.58124471f;
    n *= r5;
    n += r2;
    n *= r4;
    n = r0 += n;
    r4 = n += 3.23685718f;
    n += r0;
    n *= r4;
    n += r3;
    n *= r1;
    n += -0.11813166f;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799383f;
    r1 = n *= -0.16632164f;
    n = r0 *= n;
    n += 0.98853791f;
    n *= -1.36448002f;
    r2 = n *= -1.04195392f;
    n *= 0.96963835f;
    n += -0.57989043f;
    r3 = n *= 1.66000605f;
    n *= r2;
    n *= -0.02154000f;
    n *= -1.01301312f;
    n = r3 += n;
    n *= -0.88155770f;
    n = r0 += n;
    r2 = n *= 4.25687122f;
    n *= 0.72626698f;
    r4 = n *= -0.00557396f;
    n *= -2.39018297f;
    r5 = n *= 0.27010840f;
    n *= 9.64409065f;
    n *= -6.21017265f;
    n *= r5;
    n += r2;
    n *= r4;
    n = r0 += n;
    r4 = n += -0.33003929f;
    n += r0;
    n *= r4;
    n += r3;
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
