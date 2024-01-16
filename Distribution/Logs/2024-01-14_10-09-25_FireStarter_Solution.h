// Run date: 01/14/24 10:09:25 Pacific Standard Time
// Run duration = 716.531586 seconds
// Run generation = 15
// Run evolution = 7
// Run max result = 0.00000018
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
// Run tests = 1
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n *= 0.25392735f;
    r0 = n += -0.79773629f;
    n *= -10975.52050781f;
    n *= -0.32849312f;
    r1 = n *= 0.00020421f;
    n += r0;
    r0 = n *= -0.28931785f;
    n *= r0;
    n *= 1.12318766f;
    n += -0.18036014f;
    r0 = n *= 0.42126215f;
    r2 = n += -1.52817261f;
    n = r2 *= n;
    n *= 1.93248403f;
    n += -0.48642951f;
    r3 = n *= -1.71187210f;
    n = r2 *= n;
    n *= -0.39232206f;
    n += -3.20174956f;
    n *= -1.01920331f;
    n *= 5.30084419f;
    n *= 0.21172488f;
    n *= r1;
    n *= -1.29688227f;
    n *= r0;
    n *= r3;
    n *= r2;
    r2 = n += 0.00000072f;
    n *= -0.00000026f;
    n *= 8.21844101f;
    n += r2;
    n *= 0.06868661f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n *= -0.32928184f;
    r0 = n += 1.01769769f;
    n *= 2.45510268f;
    n *= 0.98325819f;
    r1 = n *= 0.34438440f;
    n += r0;
    r0 = n *= 1.36154985f;
    n *= r0;
    n *= -0.05717389f;
    n += 1.64896798f;
    r0 = n *= 0.65147465f;
    r2 = n += -0.42544726f;
    n = r2 *= n;
    n *= 0.51156235f;
    n += 2.71017575f;
    r3 = n *= 0.37052190f;
    n = r2 *= n;
    n *= -0.16393101f;
    n += 3.69869280f;
    n *= -0.14107992f;
    n *= -3.59621501f;
    n *= 0.52527237f;
    n *= r1;
    n *= 0.76430273f;
    n *= r0;
    n *= r3;
    n *= r2;
    r2 = n += -0.01153036f;
    n *= -1399.79418945f;
    n *= -0.02352015f;
    n += r2;
    n *= 0.30201259f;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n *= -0.39105532f;
    r0 = n += 1.02378035f;
    n *= 0.18985869f;
    n *= 1.43817031f;
    r1 = n *= 3.08453727f;
    n += r0;
    r0 = n *= 0.75443679f;
    n *= r0;
    n *= 0.78369027f;
    n += -1.15363133f;
    r0 = n *= 0.16225375f;
    r2 = n += -1.80686712f;
    n = r2 *= n;
    n *= -0.03860262f;
    n += -1.22491848f;
    r3 = n *= -0.37252584f;
    n = r2 *= n;
    n *= 0.18913841f;
    n += 0.00565086f;
    n *= 1.49744546f;
    n *= -214.71888733f;
    n *= 0.71769112f;
    n *= r1;
    n *= 0.06553846f;
    n *= r0;
    n *= r3;
    n *= r2;
    r2 = n += 0.20054917f;
    n *= -27.38078690f;
    n *= 0.00001368f;
    n += r2;
    n *= 2.61180305f;
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
