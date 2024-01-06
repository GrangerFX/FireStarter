// Run date: 01/03/24 23:53:35 Pacific Standard Time
// Run duration = 15543.310989 seconds
// Run generation = 29
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

// Solution0 result = 0.00000006
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4;

    n += 2.01170468f;
    n *= -0.47126451f;
    n += 1.72899306f;
    r0 = n += 0.69957310f;
    r1 = n *= 1.11435068f;
    n *= 0.05855198f;
    n = r1 *= n;
    r2 = n += -0.07667848f;
    n += -4.06726027f;
    n *= -160.04362488f;
    n += -4.38877010f;
    n *= r2;
    n *= 0.06983514f;
    r2 = n *= -0.83740610f;
    n *= 3.06764030f;
    n *= -0.00679566f;
    r3 = n += -1.35221851f;
    n += -0.60902309f;
    n += r1;
    r1 = n *= 0.65895122f;
    r4 = n *= -0.06285053f;
    n += 1.23065674f;
    n *= r3;
    n *= 4.76900578f;
    n += 0.19514291f;
    n = r4 *= n;
    n += 0.18812957f;
    n *= r2;
    n += r1;
    n *= r4;
    n *= r0;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -1.83766866f;
    n *= 0.27069736f;
    n += 0.58279502f;
    r0 = n += -0.92197609f;
    r1 = n *= 1.23836112f;
    n *= -0.43409026f;
    n = r1 *= n;
    r2 = n += 0.16629805f;
    n += 4.17969799f;
    n *= 2.44082332f;
    n += -2.58359790f;
    n *= r2;
    n *= -0.00016360f;
    r2 = n *= 0.00039908f;
    n *= 21753.92578125f;
    n *= 3.14759827f;
    r3 = n += -0.12948070f;
    n += 1.36744678f;
    n += r1;
    r1 = n *= 1.31251562f;
    r4 = n *= -3.53246164f;
    n += 1.53352773f;
    n *= r3;
    n *= 0.40549520f;
    n += 0.21045035f;
    n = r4 *= n;
    n += 9.90091705f;
    n *= r2;
    n += r1;
    n *= r4;
    n *= r0;
    n += -0.11813173f;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += -3.04320121f;
    n *= -0.61316609f;
    n += 1.18823421f;
    r0 = n += -1.44895697f;
    r1 = n *= -0.51350588f;
    n *= -1.87709796f;
    n = r1 *= n;
    r2 = n += 1.30440068f;
    n += 0.84962791f;
    n *= 0.00822759f;
    n += -0.59351516f;
    n *= r2;
    n *= 1.74327385f;
    r2 = n *= -0.71692711f;
    n *= 0.94882828f;
    n *= -1.26351488f;
    r3 = n += 0.86175740f;
    n += 0.76929766f;
    n += r1;
    r1 = n *= 1.48475218f;
    r4 = n *= -1.68284130f;
    n += -3.56828213f;
    n *= r3;
    n *= 0.00393046f;
    n += 0.89396083f;
    n = r4 *= n;
    n += -1.19354117f;
    n *= r2;
    n += r1;
    n *= r4;
    n *= r0;
    n += 0.52359867f;
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
