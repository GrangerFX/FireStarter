// Run date: 12/19/22 22:38:24 Pacific Standard Time
// Run duration = 50.869514 seconds
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
// Run attempts = 8;
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

// Precision = 0.00013191

// Solution0 precision = 0.00007874
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.40948942f;
    r0 = n += 0.68878657f;
    n *= 0.85424453f;
    r1 = n += 0.64458722f;
    n += -0.90353352f;
    r2 = n *= -0.38248616f;
    n += 1.20524228f;
    r3 = n += -0.18384549f;
    n += -0.72672141f;
    n += -0.79068160f;
    n *= r2;
    r2 = n *= -0.70119685f;
    n += 0.76154846f;
    n *= r1;
    r1 = n += 0.62911183f;
    r4 = n += -0.73676264f;
    n *= -1.75688469f;
    r5 = n *= -1.58490157f;
    r6 = n += -2.12609839f;
    n *= -0.01104182f;
    n *= r4;
    n += r0;
    n *= r2;
    n += -3.22893214f;
    n *= r3;
    n *= 0.25237465f;
    r3 = n *= 0.75847983f;
    n += 1.81139874f;
    n *= r5;
    n *= r6;
    n *= r1;
    n *= r3;
    return n;
} // Solution0

// Solution1 precision = 0.00004375
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.55308455f;
    r0 = n += 0.57018721f;
    n *= 0.41648299f;
    r1 = n += 0.25350100f;
    n += 0.61156428f;
    r2 = n *= -0.08940127f;
    n += 1.56761575f;
    r3 = n += 1.89376616f;
    n += 2.23912501f;
    n += -4.11333847f;
    n *= r2;
    r2 = n *= -2.04302216f;
    n += 0.30666062f;
    n *= r1;
    r1 = n += -0.54691410f;
    r4 = n += -0.64283806f;
    n *= -0.73227644f;
    r5 = n *= -0.72570395f;
    r6 = n += 0.67648530f;
    n *= -0.06458184f;
    n *= r4;
    n += r0;
    n *= r2;
    n += -1.38090217f;
    n *= r3;
    n *= -1.28513324f;
    r3 = n *= -1.09864366f;
    n += -0.49312928f;
    n *= r5;
    n *= r6;
    n *= r1;
    n *= r3;
    return n;
} // Solution1

// Solution2 precision = 0.00013191
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n *= -0.74387354f;
    r0 = n += 0.64697528f;
    n *= 0.26177055f;
    r1 = n += 0.27409539f;
    n += 0.35559195f;
    r2 = n *= 0.65991217f;
    n += -0.37353906f;
    r3 = n += -1.68671882f;
    n += -4.23283386f;
    n += -9.74824333f;
    n *= r2;
    r2 = n *= 0.07174634f;
    n += 0.28916883f;
    n *= r1;
    r1 = n += 0.13205136f;
    r4 = n += 1.53943968f;
    n *= 1.24863482f;
    r5 = n *= -1.13654184f;
    r6 = n += -1.60931540f;
    n *= 1.34544539f;
    n *= r4;
    n += r0;
    n *= r2;
    n += -1.39222395f;
    n *= r3;
    n *= 1.06234145f;
    r3 = n *= 0.11388194f;
    n += -2.15995288f;
    n *= r5;
    n *= r6;
    n *= r1;
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
