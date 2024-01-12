// Run date: 01/11/24 10:58:25 Pacific Standard Time
// Run duration = 33066.204509 seconds
// Run generation = 81
// Run evolution = 8
// Run max result = 0.00000024
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
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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

// Solution0 result = 0.00000024
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.54211420f;
    r1 = n += 1.70310020f;
    r2 = n *= -1.09873629f;
    n += -1.87126565f;
    n = r0 *= n;
    r3 = n *= 0.00079716f;
    n *= -6.77235699f;
    r4 = n += -0.26418823f;
    n = r0 += n;
    n = r4 *= n;
    n *= 0.11183010f;
    r5 = n += -0.73056716f;
    n = r5 *= n;
    n *= r0;
    n += -2.21714520f;
    n *= r5;
    n += 1.23029506f;
    n *= r2;
    r2 = n += -0.00000207f;
    n += -0.00231958f;
    n = r1 *= n;
    n += 5.21716881f;
    n *= r4;
    n *= -0.43187612f;
    n *= -11.80943775f;
    n += 52.38768005f;
    n *= r1;
    n *= -0.01164130f;
    n *= r3;
    n += 2.10882187f;
    n *= r2;
    n *= -0.75194991f;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 0.45977506f;
    r1 = n += -1.42098618f;
    r2 = n *= 1.47352612f;
    n += -2.09397292f;
    n = r0 *= n;
    r3 = n *= 0.00074150f;
    n *= 0.71667796f;
    r4 = n += -0.03122867f;
    n = r0 += n;
    n = r4 *= n;
    n *= -0.67565459f;
    r5 = n += -0.63391268f;
    n = r5 *= n;
    n *= r0;
    n += 1.79846108f;
    n *= r5;
    n += -0.94329101f;
    n *= r2;
    r2 = n += -0.05711246f;
    n += 0.13179137f;
    n = r1 *= n;
    n += 0.35813355f;
    n *= r4;
    n *= 0.22015265f;
    n *= 10.20648003f;
    n += -1.38038826f;
    n *= r1;
    n *= 0.21074967f;
    n *= r3;
    n += -1.69479764f;
    n *= r2;
    n *= -1.21991456f;
    return n;
} // Solution1

// Solution2 result = 0.00000019
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -0.41547307f;
    r1 = n += 1.08770609f;
    r2 = n *= -0.69363910f;
    n += -0.75447494f;
    n = r0 *= n;
    r3 = n *= 0.00306362f;
    n *= -0.88316119f;
    r4 = n += -0.07472880f;
    n = r0 += n;
    n = r4 *= n;
    n *= -3.65389061f;
    r5 = n += 1.36392200f;
    n = r5 *= n;
    n *= r0;
    n += -0.40333691f;
    n *= r5;
    n += 0.21702661f;
    n *= r2;
    r2 = n += -0.56924468f;
    n += 1.12029636f;
    n = r1 *= n;
    n += 4.22233057f;
    n *= r4;
    n *= -11.07154465f;
    n *= 1.60583901f;
    n += -8.20318508f;
    n *= r1;
    n *= -0.00268854f;
    n *= r3;
    n += 0.37843034f;
    n *= r2;
    n *= -2.43059945f;
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
