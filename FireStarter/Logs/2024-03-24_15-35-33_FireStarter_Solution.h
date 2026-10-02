// Run date: 03/24/24 15:35:33 Pacific Daylight Time
// Run duration = 706.688425 seconds
// Run generation = 379
// Run evolution = 11
// Run max result = 0.00000021
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n += -3.14159250f;
    r0 = n *= 0.11912423f;
    r1 = n *= 1.88269210f;
    n = r1 *= n;
    n *= -0.48307121f;
    r2 = n += 1.15324092f;
    n *= r2;
    r2 = n *= 0.56614274f;
    r3 = n += 2.16420841f;
    n += 1.41360915f;
    n *= 18.23496819f;
    n += -27.71157646f;
    n += r1;
    r1 = n += 0.82085991f;
    n *= -0.15992391f;
    n = r3 *= n;
    n *= 2.37163043f;
    n += r1;
    r1 = n *= -2.06200838f;
    n *= 3.29098606f;
    n += r3;
    n += -0.31282288f;
    n *= 0.00015188f;
    n *= 5.08388090f;
    n += 2.42378283f;
    n *= r1;
    n *= -1.11010337f;
    n *= 0.93260163f;
    n *= 0.38716075f;
    n *= r0;
    n *= r2;
    n += 0.00000010f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n += -3.09065890f;
    r0 = n *= -0.14605555f;
    r1 = n *= -0.66538984f;
    n = r1 *= n;
    n *= -1.58831489f;
    r2 = n += 0.38724580f;
    n *= r2;
    r2 = n *= 0.21456036f;
    r3 = n += -2.79333997f;
    n += 1.75954974f;
    n *= 0.10889481f;
    n += 1.31992209f;
    n += r1;
    r1 = n += -1.61384642f;
    n *= -3.97953892f;
    n = r3 *= n;
    n *= -0.08361661f;
    n += r1;
    r1 = n *= -0.22298592f;
    n *= 24.56899834f;
    n += r3;
    n += 10.99333954f;
    n *= -0.01029353f;
    n *= 1.27854705f;
    n += 40496.39062500f;
    n *= r1;
    n *= -0.05938416f;
    n *= 3.47595406f;
    n *= -3.83725476f;
    n *= r0;
    n *= r2;
    n += -0.11813211f;
    return n;
} // Solution1

// Solution2 result = 0.00000021
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n += -2.61799359f;
    r0 = n *= 0.59641492f;
    r1 = n *= 0.24979703f;
    n = r1 *= n;
    n *= 1.66065931f;
    r2 = n += -1.61751354f;
    n *= r2;
    r2 = n *= 1.32011247f;
    r3 = n += -1.82070303f;
    n += -0.17513926f;
    n *= 1.91060758f;
    n += 0.07906553f;
    n += r1;
    r1 = n += -1.56176472f;
    n *= 2.71445537f;
    n = r3 *= n;
    n *= 0.09108886f;
    n += r1;
    r1 = n *= -0.28900954f;
    n *= 0.95633441f;
    n += r3;
    n += -1.12951016f;
    n *= -0.00007114f;
    n *= -10.61271572f;
    n += 1.35772431f;
    n *= r1;
    n *= 1.03749061f;
    n *= -1.19299400f;
    n *= -0.54517525f;
    n *= r0;
    n *= r2;
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
