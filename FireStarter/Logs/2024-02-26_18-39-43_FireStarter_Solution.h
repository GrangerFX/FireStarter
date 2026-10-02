// Run date: 02/26/24 18:39:43 Pacific Standard Time
// Run duration = 27414.455626 seconds
// Run generation = 127
// Run evolution = 18
// Run max result = 0.00001907
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
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 128
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

// Solution0 result = 0.00000101
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= -1.08168745f;
    n *= 0.64764464f;
    r1 = n *= -0.27825701f;
    r2 = n += -1.50116909f;
    r3 = n += 0.88877010f;
    r4 = n *= 1.26118982f;
    r5 = n += -0.68520498f;
    n *= 2.17127609f;
    n = r5 += n;
    n += r2;
    n *= 167.49092102f;
    n *= -0.00924144f;
    n *= 0.34306461f;
    n *= r0;
    r0 = n *= 0.00849111f;
    n *= r3;
    n *= 3.95162010f;
    r3 = n *= -0.75629801f;
    n = r1 += n;
    n += -1.22479856f;
    n = r1 *= n;
    n += -13.65348625f;
    n += r5;
    n *= 0.74727017f;
    n *= r0;
    n += r3;
    r3 = n += 2.62937808f;
    n *= r3;
    n += 0.62290335f;
    n *= r1;
    n += -0.00000005f;
    n *= r4;
    return n;
} // Solution0

// Solution1 result = 0.00001907
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 1.36326635f;
    n *= 0.49677390f;
    r1 = n *= 0.39099750f;
    r2 = n += -1.89286888f;
    r3 = n += 1.10294318f;
    r4 = n *= 3.10290813f;
    r5 = n += -2.63300085f;
    n *= 3.42558241f;
    n = r5 += n;
    n += r2;
    n *= 1.38948703f;
    n *= 0.05830691f;
    n *= 1.18684506f;
    n *= r0;
    r0 = n *= 0.01415066f;
    n *= r3;
    n *= -0.00808883f;
    r3 = n *= 208.62579346f;
    n = r1 += n;
    n += -1.67769861f;
    n = r1 *= n;
    n += -1.67130697f;
    n += r5;
    n *= 0.12314201f;
    n *= r0;
    n += r3;
    r3 = n += 1.18186629f;
    n *= r3;
    n += -0.29379857f;
    n *= r1;
    n += -0.34772336f;
    n *= r4;
    return n;
} // Solution1

// Solution2 result = 0.00000477
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n *= 1.56897330f;
    n *= 0.12289387f;
    r1 = n *= -1.84426463f;
    r2 = n += 0.28568393f;
    r3 = n += 1.26297128f;
    r4 = n *= -0.93440396f;
    r5 = n += 1.55239320f;
    n *= -0.51006329f;
    n = r5 += n;
    n += r2;
    n *= 0.37553900f;
    n *= -0.51892543f;
    n *= -1.06071317f;
    n *= r0;
    r0 = n *= -0.09204801f;
    n *= r3;
    n *= -0.01990726f;
    r3 = n *= 21.40361595f;
    n = r1 += n;
    n += 3.31739807f;
    n = r1 *= n;
    n += -4.83568764f;
    n += r5;
    n *= 1.69891977f;
    n *= r0;
    n += r3;
    r3 = n += 1.50443959f;
    n *= r3;
    n += -1.42741609f;
    n *= r1;
    n += 0.00000327f;
    n *= r4;
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
