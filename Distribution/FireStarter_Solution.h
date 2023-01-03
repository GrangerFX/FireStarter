// Run date: 01/03/23 15:12:18 Pacific Standard Time
// Run duration = 9.608164 seconds
// Run count = 51
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_OPTIMIZE
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
// Solution Generation = 51

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

// Precision = 0.00023687

// Solution0 precision = 0.00023687
inline float Solution0(float n)
{
    float r0, r1, r2, r3;

    n *= -1.10003996f;
    r0 = n += -0.10353465f;
    r1 = n += 0.68822795f;
    n *= -0.56563431f;
    n += -0.84953421f;
    r2 = n += -0.23940250f;
    n *= -0.83489168f;
    r3 = n += 2.78399849f;
    n += r0;
    r0 = n *= -0.14064918f;
    n += 12.73159695f;
    n *= 2.61669946f;
    n *= 0.00000000f;
    n *= 2.30450559f;
    n += r1;
    n *= r2;
    n += -0.47407719f;
    n += -0.85411209f;
    n *= -0.03652985f;
    r2 = n += -0.05191147f;
    n *= 0.69579977f;
    n += -0.80801094f;
    r1 = n *= 3.54265332f;
    n *= r1;
    n = r0 += n;
    n *= r0;
    n += -0.82591027f;
    n *= r2;
    n += 0.13763115f;
    n += r3;
    n *= -0.26927155f;
    n += 1.48339963f;
    return n;
} // Solution0

// Solution1 precision = 0.00005853
inline float Solution1(float n)
{
    float r0, r1, r2, r3;

    n *= 0.39826339f;
    r0 = n += -0.05064807f;
    r1 = n += -1.68632996f;
    n *= 0.19097988f;
    n += -0.32532981f;
    r2 = n += 0.23159920f;
    n *= -2.12051940f;
    r3 = n += -4.54453611f;
    n += r0;
    r0 = n *= -0.52669829f;
    n += -0.97269833f;
    n *= 7.90189791f;
    n *= 3.42263389f;
    n *= 0.00000010f;
    n += r1;
    n *= r2;
    n += 0.69363636f;
    n += 0.15564731f;
    n *= 0.57152522f;
    r2 = n += -0.47358501f;
    n *= -1.71418369f;
    n += 1.51908302f;
    r1 = n *= 1.58328438f;
    n *= r1;
    n = r0 += n;
    n *= r0;
    n += -2.47588348f;
    n *= r2;
    n += 1.53793192f;
    n += r3;
    n *= 0.50319618f;
    n += -0.14847529f;
    return n;
} // Solution1

// Solution2 precision = 0.00022817
inline float Solution2(float n)
{
    float r0, r1, r2, r3;

    n *= 0.62344438f;
    r0 = n += -0.64401865f;
    r1 = n += 0.05837815f;
    n *= -0.83444875f;
    n += 1.98457634f;
    r2 = n += 1.12899745f;
    n *= 1.22308266f;
    r3 = n += 1.20638609f;
    n += r0;
    r0 = n *= 0.39367670f;
    n += -1.88857448f;
    n *= -0.00086800f;
    n *= -7.73293781f;
    n *= 2.56044841f;
    n += r1;
    n *= r2;
    n += -1.57036257f;
    n += -1.10852611f;
    n *= 0.18810990f;
    r2 = n += -0.05422062f;
    n *= -0.78702623f;
    n += -1.24862933f;
    r1 = n *= -1.69952655f;
    n *= r1;
    n = r0 += n;
    n *= r0;
    n += -3.37061882f;
    n *= r2;
    n += 1.45063555f;
    n += r3;
    n *= -0.32358497f;
    n += 1.12320304f;
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
