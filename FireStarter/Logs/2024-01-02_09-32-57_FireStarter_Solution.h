// Run date: 01/02/24 09:32:57 Pacific Standard Time
// Run duration = 6994.412494 seconds
// Run generation = 13
// Run evolution = 10
// Run max result = 0.00000012
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

    n += -0.80619115f;
    r0 = n += -2.33540130f;
    n *= 1.28842974f;
    r1 = n *= -0.07998741f;
    n += 1.83040261f;
    r2 = n += -1.83040249f;
    n = r1 *= n;
    r3 = n *= 0.83245939f;
    n *= -1.05495012f;
    r4 = n *= -0.28317204f;
    n += -0.01154227f;
    n = r1 *= n;
    n *= r1;
    n *= 1.95581651f;
    n += 1.42586267f;
    n *= -1.51791537f;
    r1 = n += 0.34078136f;
    n = r3 += n;
    n = r3 *= n;
    n *= -3.27608013f;
    n *= r4;
    n += 0.80891776f;
    n = r3 *= n;
    n += r1;
    n *= r0;
    n *= r3;
    n += -0.19171582f;
    n *= 0.15007104f;
    n *= -2.56455612f;
    n += -0.08609290f;
    n += 0.01230810f;
    n += r2;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    n += -0.66881830f;
    r0 = n += -2.42184258f;
    n *= 0.07694367f;
    r1 = n *= -0.60728455f;
    n += 1.35895371f;
    r2 = n += -1.35895407f;
    n = r1 *= n;
    r3 = n *= 2.88590193f;
    n *= -1.05672455f;
    r4 = n *= -1.01084983f;
    n += -1.12250102f;
    n = r1 *= n;
    n *= r1;
    n *= 0.40641373f;
    n += 2.04455280f;
    n *= -1.27123916f;
    r1 = n += 0.79465228f;
    n = r3 += n;
    n = r3 *= n;
    n *= 3.19143057f;
    n *= r4;
    n += -1.12667835f;
    n = r3 *= n;
    n += r1;
    n *= r0;
    n *= r3;
    n += 3.16918206f;
    n *= 0.25097001f;
    n *= -0.20902376f;
    n += 0.44686896f;
    n += -0.39875171f;
    n += r2;
    return n;
} // Solution1

// Solution2 result = 0.00000012
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    n += 0.16827464f;
    r0 = n += -2.78626800f;
    n *= -0.25671282f;
    r1 = n *= 0.98034543f;
    n += 1.65763438f;
    r2 = n += -1.65763402f;
    n = r1 *= n;
    r3 = n *= -0.17327809f;
    n *= -1.13251150f;
    r4 = n *= 1.92700982f;
    n += 1.53152001f;
    n = r1 *= n;
    n *= r1;
    n *= 3.73409843f;
    n += -5.33959961f;
    n *= -0.00023314f;
    r1 = n += 1.48854625f;
    n = r3 += n;
    n = r3 *= n;
    n *= 0.66302174f;
    n *= r4;
    n += -0.81581199f;
    n = r3 *= n;
    n += r1;
    n *= r0;
    n *= r3;
    n += 0.14566448f;
    n *= 0.87023556f;
    n *= -1.48001897f;
    n += 0.18520576f;
    n += 0.52600378f;
    n += r2;
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
