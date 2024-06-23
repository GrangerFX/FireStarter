// Run date: 06/23/24 15:42:39 Pacific Daylight Time
// Run duration = 495.427470 seconds
// Run generation = 426
// Run evolution = 11
// Run max result = 0.00000057
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
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

// Solution0 result = 0.00000015
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    n *= -0.16744316f;
    r1 = n *= -0.14153197f;
    n *= -0.40447879f;
    n *= r0;
    r0 = n *= -3.26893568f;
    r2 = n += -2.04132533f;
    r3 = n += -0.59156895f;
    n *= -0.08680799f;
    n *= r0;
    r0 = n += -2.23961353f;
    r4 = n *= 0.51307094f;
    n *= -0.30019277f;
    n *= r3;
    r3 = n += -0.90040481f;
    n *= -0.06624249f;
    n = r2 += n;
    r5 = n += 1.62080383f;
    n = r3 += n;
    n = r3 += n;
    n = r4 *= n;
    n *= r0;
    n += r3;
    n *= r2;
    n *= r1;
    n *= r5;
    n *= r4;
    r4 = n += 0.16311997f;
    n *= -1.02884901f;
    n *= 0.00069754f;
    n += -0.16300288f;
    n += r4;
    return n;
} // Solution0

// Solution1 result = 0.00000048
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065866f;
    n *= -0.44571549f;
    r1 = n *= 0.16817081f;
    n *= -1.59360361f;
    n *= r0;
    r0 = n *= -0.59942681f;
    r2 = n += 0.59410191f;
    r3 = n += -0.88440883f;
    n *= -0.41127279f;
    n *= r0;
    r0 = n += -5.23442459f;
    r4 = n *= -0.00868174f;
    n *= -1.69792569f;
    n *= r3;
    r3 = n += 2.03956771f;
    n *= 0.54029953f;
    n = r2 += n;
    r5 = n += 0.08668476f;
    n = r3 += n;
    n = r3 += n;
    n = r4 *= n;
    n *= r0;
    n += r3;
    n *= r2;
    n *= r1;
    n *= r5;
    n *= r4;
    r4 = n += -0.32275686f;
    n *= -1.68196201f;
    n *= -0.78639907f;
    n += 0.63153344f;
    n += r4;
    return n;
} // Solution1

// Solution2 result = 0.00000057
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    n *= 0.11420544f;
    r1 = n *= 0.80800265f;
    n *= 0.04704386f;
    n *= r0;
    r0 = n *= -1.02923715f;
    r2 = n += -0.31436053f;
    r3 = n += 3.27637982f;
    n *= 0.99681801f;
    n *= r0;
    r0 = n += 0.06524651f;
    r4 = n *= 0.30644587f;
    n *= -2.51478887f;
    n *= r3;
    r3 = n += -0.82518029f;
    n *= 2.31319904f;
    n = r2 += n;
    r5 = n += -1.07198715f;
    n = r3 += n;
    n = r3 += n;
    n = r4 *= n;
    n *= r0;
    n += r3;
    n *= r2;
    n *= r1;
    n *= r5;
    n *= r4;
    r4 = n += 1.52468765f;
    n *= -1.00340700f;
    n *= 1.67450583f;
    n += 1.56070781f;
    n += r4;
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
