// Run date: 07/26/23 08:57:32 Pacific Daylight Time
// Run duration = 61.234697 seconds
// Run generation = 3
// Run evolution = 0
// Run result = 0.00019151
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 8
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

// Solution0 result = 0.00017762
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    r0 = n += 1.04963291f;
    r1 = n += 2.52849674f;
    n *= 0.61994946f;
    n += 2.09006786f;
    n *= -0.40977752f;
    r2 = n *= 0.06452952f;
    n *= r1;
    r1 = n += 1.82019842f;
    n += r2;
    n *= 0.19890414f;
    r2 = n += 1.07996058f;
    r3 = n *= 1.62695563f;
    n += -1.53375685f;
    n *= r2;
    n = r3 += n;
    r2 = n *= -0.45863557f;
    n += r3;
    n = r1 *= n;
    n *= 0.54305774f;
    n += -1.45185149f;
    n *= r2;
    n *= 1.23680127f;
    r2 = n *= -0.24460679f;
    n *= r0;
    n = r2 += n;
    n += 0.88426369f;
    n += 1.25979733f;
    n *= r2;
    n *= r1;
    n *= -0.16882278f;
    n *= 6.02242899f;
    n += -0.76783866f;
    return n;
} // Solution0

// Solution1 result = 0.00016224
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    r0 = n += 0.82794350f;
    r1 = n += 0.90462101f;
    n *= 0.37308997f;
    n += 0.44423518f;
    n *= -2.06046343f;
    r2 = n *= -0.05321725f;
    n *= r1;
    r1 = n += -1.17060852f;
    n += r2;
    n *= -0.07062926f;
    r2 = n += 1.07269013f;
    r3 = n *= 1.33182144f;
    n += 2.67718887f;
    n *= r2;
    n = r3 += n;
    r2 = n *= -0.40356550f;
    n += r3;
    n = r1 *= n;
    n *= -0.21333522f;
    n += 1.73391759f;
    n *= r2;
    n *= -0.62067360f;
    r2 = n *= 0.25127548f;
    n *= r0;
    n = r2 += n;
    n += 1.12862551f;
    n += -1.05451953f;
    n *= r2;
    n *= r1;
    n *= -0.04606402f;
    n *= 1.67428803f;
    n += -0.07824250f;
    return n;
} // Solution1

// Solution2 result = 0.00019151
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    r0 = n += -3.12983513f;
    r1 = n += -0.92832488f;
    n *= 0.17976344f;
    n += 0.38279039f;
    n *= -0.49401942f;
    r2 = n *= 0.49270695f;
    n *= r1;
    r1 = n += 0.16099603f;
    n += r2;
    n *= -0.67601174f;
    r2 = n += -1.87254202f;
    r3 = n *= -1.12086475f;
    n += 0.24817319f;
    n *= r2;
    n = r3 += n;
    r2 = n *= 0.06475712f;
    n += r3;
    n = r1 *= n;
    n *= 0.04434411f;
    n += -0.70286679f;
    n *= r2;
    n *= -0.38368291f;
    r2 = n *= -0.81349760f;
    n *= r0;
    n = r2 += n;
    n += 0.63802040f;
    n += 17.64659500f;
    n *= r2;
    n *= r1;
    n *= 0.54656953f;
    n *= 3.97605777f;
    n += 0.97890806f;
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
