// Run date: 09/04/23 11:17:56 Pacific Daylight Time
// Run duration = 8119.806369 seconds
// Run generation = 0
// Run evolution = 0
// Run result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 2
// Run processes = 2
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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
    float r0, r1, r2, r3, r4, r5;

    n *= -0.03603507f;
    r0 = n += 0.11320752f;
    r1 = n *= -12.70499992f;
    n *= r1;
    r1 = n *= -0.27462742f;
    n *= -9.04169846f;
    n += -1.74207962f;
    r2 = n *= -0.01089160f;
    n += r2;
    n += 1.71070635f;
    r2 = n *= 0.56949770f;
    r3 = n *= -1.23676598f;
    n = r2 *= n;
    r4 = n *= 1.05534744f;
    r5 = n *= 0.57405150f;
    n *= -4.65362644f;
    n *= -0.00617456f;
    n += r3;
    r3 = n += -2.23767209f;
    n *= -0.82557529f;
    n *= 1.82405293f;
    n = r0 *= n;
    n *= r2;
    n = r3 *= n;
    n *= r0;
    n += r1;
    n += r4;
    n += 0.46470329f;
    n *= r3;
    n *= r5;
    r5 = n += -0.00000000f;
    n += r5;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= 0.28453633f;
    r0 = n += -0.87940460f;
    r1 = n *= 1.00695527f;
    n *= r1;
    r1 = n *= 1.44956803f;
    n *= 2.86576128f;
    n += -1.27799308f;
    r2 = n *= 0.00965188f;
    n += r2;
    n += -1.45661366f;
    r2 = n *= 1.25869429f;
    r3 = n *= -0.39535135f;
    n = r2 *= n;
    r4 = n *= -1.37051964f;
    r5 = n *= -0.18643884f;
    n *= 0.00428886f;
    n *= 2.78935266f;
    n += r3;
    r3 = n += 0.51884139f;
    n *= 1.39672768f;
    n *= -0.83199370f;
    n = r0 *= n;
    n *= r2;
    n = r3 *= n;
    n *= r0;
    n += r1;
    n += r4;
    n += 0.31591627f;
    n *= r3;
    n *= r5;
    r5 = n += -0.05906582f;
    n += r5;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n *= -0.69626343f;
    r0 = n += 1.82281327f;
    r1 = n *= -1.66853833f;
    n *= r1;
    r1 = n *= 0.17064883f;
    n *= -1.53644180f;
    n += 3.98632765f;
    r2 = n *= 0.04848932f;
    n += r2;
    n += 1.47807109f;
    r2 = n *= 0.98079449f;
    r3 = n *= -0.08747384f;
    n = r2 *= n;
    r4 = n *= 2.02622604f;
    r5 = n *= -3.40537453f;
    n *= 0.00006370f;
    n *= -3.72272635f;
    n += r3;
    r3 = n += -1.22376060f;
    n *= 0.50954145f;
    n *= 0.82233459f;
    n = r0 *= n;
    n *= r2;
    n = r3 *= n;
    n *= r0;
    n += r1;
    n += r4;
    n += -0.92158425f;
    n *= r3;
    n *= r5;
    r5 = n += 0.26179934f;
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
