// Run date: 01/02/23 10:18:31 Pacific Standard Time
// Run duration = 12.009163 seconds
// Run count = 28
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_TEST
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
// Solution Generation = 28

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

// Precision = 0.00012410

// Solution0 precision = 0.00006473
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.69106126f;
    n += -1.14024222f;
    r0 = n += -1.31016433f;
    n += -0.83917868f;
    r1 = n += 0.83895212f;
    n *= r1;
    r1 = n += -9.86977005f;
    n += 6.12478495f;
    r2 = n *= -0.00546004f;
    r3 = n *= 1.15380836f;
    r4 = n += 0.60494280f;
    n *= r4;
    r4 = n += 0.04782112f;
    r5 = n *= 3.06847048f;
    r6 = n += -0.55415374f;
    n += -5.95375061f;
    n += 3.17578197f;
    n *= r2;
    n += 0.02826506f;
    n += 0.28832805f;
    n *= -0.27536336f;
    n *= r3;
    n = r4 *= n;
    n += r4;
    n = r5 += n;
    n *= r5;
    n *= r0;
    n *= r1;
    n *= -1.99715686f;
    n *= r6;
    n += -0.00406863f;
    n *= -0.03421782f;
    return n;
} // Solution0

// Solution1 precision = 0.00008273
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.46318471f;
    n += 1.12969506f;
    r0 = n += -2.75671601f;
    n += 0.63237399f;
    r1 = n += -0.63316190f;
    n *= r1;
    r1 = n += -28.60196114f;
    n += 22.02443695f;
    r2 = n *= 0.00731759f;
    r3 = n *= 1.06252432f;
    r4 = n += -1.76981032f;
    n *= r4;
    r4 = n += -1.18462098f;
    r5 = n *= -0.46694762f;
    r6 = n += 0.69489515f;
    n += 0.40324953f;
    n += 0.64060229f;
    n *= r2;
    n += -0.40647468f;
    n += 1.00475979f;
    n *= 0.13786013f;
    n *= r3;
    n = r4 *= n;
    n += r4;
    n = r5 += n;
    n *= r5;
    n *= r0;
    n *= r1;
    n *= 0.74682564f;
    n *= r6;
    n += 0.70258760f;
    n *= -0.16741045f;
    return n;
} // Solution1

// Solution2 precision = 0.00012410
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -1.61594582f;
    n += -1.90313041f;
    r0 = n += 0.90146226f;
    n += 1.61775434f;
    r1 = n += -1.61857927f;
    n *= r1;
    r1 = n += -4.98306036f;
    n += 1.18868518f;
    r2 = n *= 0.03362138f;
    r3 = n *= 0.54957408f;
    r4 = n += -0.92488134f;
    n *= r4;
    r4 = n += -0.00437222f;
    r5 = n *= -0.85237318f;
    r6 = n += -3.01251245f;
    n += 2.01322985f;
    n += 2.97036576f;
    n *= r2;
    n += 0.30909368f;
    n += -3.55067635f;
    n *= -0.01482143f;
    n *= r3;
    n = r4 *= n;
    n += r4;
    n = r5 += n;
    n *= r5;
    n *= r0;
    n *= r1;
    n *= -0.21164104f;
    n *= r6;
    n += 1.52795768f;
    n *= 0.34300533f;
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
