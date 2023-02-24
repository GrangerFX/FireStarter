// Run date: 02/24/23 12:30:30 Pacific Standard Time
// Run duration = 45.852951 seconds
// Run count = 24
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
// Run attempts = 32
// Run seed = 0
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 24

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

// Precision = 0.00035560

// Solution0 precision = 0.00018370
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.33936471f;
    n += 0.86347896f;
    n *= 0.58841920f;
    r0 = n += -0.43686405f;
    r1 = n *= 0.06712443f;
    n = r1 *= n;
    n += 0.88564450f;
    r2 = n += -0.64362997f;
    n = r0 += n;
    n = r0 += n;
    n = r0 *= n;
    n += 2.19890928f;
    n *= -0.91813111f;
    n *= 0.22438356f;
    n += r2;
    n += 1.11204135f;
    r2 = n *= 0.58080691f;
    r3 = n += 0.44411206f;
    r4 = n += 0.68713212f;
    n *= r3;
    r3 = n += 0.38273278f;
    n *= -3.27370787f;
    r5 = n *= 1.67446470f;
    n *= r0;
    n *= -0.17805934f;
    n *= r2;
    n *= r5;
    n += r3;
    n += r4;
    n += r1;
    n *= 1.63058782f;
    n *= 0.16852760f;
    return n;
} // Solution0

// Solution1 precision = 0.00012821
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.22745681f;
    n += -1.00190902f;
    n *= -0.31376535f;
    r0 = n += 1.62145567f;
    r1 = n *= -0.34012461f;
    n = r1 *= n;
    n += -1.18234754f;
    r2 = n += -1.08135211f;
    n = r0 += n;
    n = r0 += n;
    n = r0 *= n;
    n += -0.60386574f;
    n *= 0.23029368f;
    n *= 2.19333124f;
    n += r2;
    n += 1.01684213f;
    r2 = n *= 1.94896603f;
    r3 = n += -1.98766911f;
    r4 = n += 1.42078662f;
    n *= r3;
    r3 = n += -1.66917336f;
    n *= -0.45942560f;
    r5 = n *= 0.97202301f;
    n *= r0;
    n *= 1.11218166f;
    n *= r2;
    n *= r5;
    n += r3;
    n += r4;
    n += r1;
    n *= -1.03741789f;
    n *= -0.15480492f;
    return n;
} // Solution1

// Solution2 precision = 0.00035560
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.34873879f;
    n += -1.80885303f;
    n *= 1.18707120f;
    r0 = n += 0.36903784f;
    r1 = n *= 0.63483155f;
    n = r1 *= n;
    n += -2.54796386f;
    r2 = n += -0.43406892f;
    n = r0 += n;
    n = r0 += n;
    n = r0 *= n;
    n += -24.25234222f;
    n *= 0.45080367f;
    n *= 0.01049912f;
    n += r2;
    n += 0.02143607f;
    r2 = n *= -1.85988843f;
    r3 = n += -0.76397687f;
    r4 = n += 0.87049782f;
    n *= r3;
    r3 = n += -10.03754044f;
    n *= 0.06573805f;
    r5 = n *= -0.16409065f;
    n *= r0;
    n *= -3.93770933f;
    n *= r2;
    n *= r5;
    n += r3;
    n += r4;
    n += r1;
    n *= -0.11134544f;
    n *= -1.55259478f;
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
