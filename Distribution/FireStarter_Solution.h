// Run date: 02/11/23 13:23:32 Pacific Standard Time
// Run duration = 22.562269 seconds
// Run count = 53
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
// Run seed = 4
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f
// Solution Generation = 53

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

// Precision = 0.00019062

// Solution0 precision = 0.00016847
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -0.62753111f;
    r1 = n += 1.51930606f;
    n *= r0;
    r0 = n *= 0.14490213f;
    n *= 1.29231298f;
    r2 = n *= -0.92646605f;
    n += 1.13386619f;
    n = r0 += n;
    r3 = n += 0.35933846f;
    r4 = n *= 0.34728947f;
    r5 = n += -1.09018075f;
    n *= 1.48093116f;
    n += 1.26640677f;
    n = r0 *= n;
    n = r1 *= n;
    r6 = n += -0.95186442f;
    n += r5;
    n += 2.23023224f;
    n *= r6;
    r6 = n *= -1.99912655f;
    r5 = n += -1.21412146f;
    n += r0;
    n = r1 += n;
    n *= r4;
    n += r6;
    n += -1.24282038f;
    n *= r2;
    n += r3;
    n += -2.55075026f;
    n += r1;
    n += 0.97954130f;
    n += r5;
    return n;
} // Solution0

// Solution1 precision = 0.00019062
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.46215633f;
    r1 = n += -0.88741380f;
    n *= r0;
    r0 = n *= 0.10518783f;
    n *= 0.01265056f;
    r2 = n *= 0.77618319f;
    n += -1.75031126f;
    n = r0 += n;
    r3 = n += -0.08478171f;
    r4 = n *= 0.82712549f;
    r5 = n += 1.15128028f;
    n *= 0.89810342f;
    n += -0.33651006f;
    n = r0 *= n;
    n = r1 *= n;
    r6 = n += 1.22742045f;
    n += r5;
    n += -0.27286330f;
    n *= r6;
    r6 = n *= -0.55770350f;
    r5 = n += 2.54800892f;
    n += r0;
    n = r1 += n;
    n *= r4;
    n += r6;
    n += 1.89585602f;
    n *= r2;
    n += r3;
    n += 1.90776443f;
    n += r1;
    n += -4.54397917f;
    n += r5;
    return n;
} // Solution1

// Solution2 precision = 0.00015926
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.85920841f;
    r1 = n += -1.85431230f;
    n *= r0;
    r0 = n *= 0.11707151f;
    n *= -0.33556658f;
    r2 = n *= 1.92461431f;
    n += -0.92372841f;
    n = r0 += n;
    r3 = n += 0.14924511f;
    r4 = n *= -0.43548134f;
    r5 = n += 0.68216634f;
    n *= -0.61056507f;
    n += -0.24370109f;
    n = r0 *= n;
    n = r1 *= n;
    r6 = n += -0.55616677f;
    n += r5;
    n += 1.85524714f;
    n *= r6;
    r6 = n *= -0.63787907f;
    r5 = n += -0.90300751f;
    n += r0;
    n = r1 += n;
    n *= r4;
    n += r6;
    n += -1.59939408f;
    n *= r2;
    n += r3;
    n += -0.38068205f;
    n += r1;
    n += 1.47184658f;
    n += r5;
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
