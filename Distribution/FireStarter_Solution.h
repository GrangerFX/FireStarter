// Run date: 08/27/23 17:33:47 Pacific Daylight Time
// Run duration = 1452.132679 seconds
// Run generation = 284
// Run evolution = 3
// Run result = 0.00000018
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.14159274f;
    r0 = n *= -1.54299748f;
    r1 = n *= 0.93102115f;
    n *= r1;
    n *= -1.24329770f;
    r1 = n *= -0.35647401f;
    n += -1.72923815f;
    n *= -0.00845101f;
    n += 1.69003236f;
    n *= 0.77211958f;
    r2 = n *= 1.18163848f;
    n *= 0.34013727f;
    n = r2 *= n;
    n *= -0.24686593f;
    r3 = n *= 4.66228151f;
    n *= -2.20783234f;
    n += -2.20190048f;
    r4 = n *= 1.01809204f;
    r5 = n += 0.95310342f;
    n *= 0.35256740f;
    n *= r0;
    r0 = n *= 0.37470508f;
    n *= r2;
    n = r5 *= n;
    n *= r0;
    n += r1;
    n += -8.81366539f;
    n += r4;
    n *= r5;
    n *= r3;
    n += 0.15480489f;
    n += -0.15480489f;
    return n;
} // Solution0

// Solution1 result = 0.00000012
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -3.09065843f;
    r0 = n *= -0.01664839f;
    r1 = n *= -1.20333505f;
    n *= r1;
    n *= 25.63336563f;
    r1 = n *= 35.69173813f;
    n += -1.07570386f;
    n *= 0.01626852f;
    n += -1.08356476f;
    n *= 0.56965739f;
    r2 = n *= -0.71028233f;
    n *= -1.96582615f;
    n = r2 *= n;
    n *= 0.69219047f;
    r3 = n *= 0.45507568f;
    n *= 42.94824219f;
    n += 15.65277576f;
    r4 = n *= -0.14757626f;
    r5 = n += 8.33866501f;
    n *= 3.38730025f;
    n *= r0;
    r0 = n *= 1.48853099f;
    n *= r2;
    n = r5 *= n;
    n *= r0;
    n += r1;
    n += 7.42730713f;
    n += r4;
    n *= r5;
    n *= r3;
    n += -0.49724004f;
    n += 0.37910834f;
    return n;
} // Solution1

// Solution2 result = 0.00000018
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    n += -2.61799359f;
    r0 = n *= -0.89010733f;
    r1 = n *= -0.73704892f;
    n *= r1;
    n *= 0.33082828f;
    r1 = n *= -3.33966613f;
    n += 4.26670122f;
    n *= -0.06776535f;
    n += -1.44731331f;
    n *= -1.87657332f;
    r2 = n *= -0.37172279f;
    n *= -0.94159555f;
    n = r2 *= n;
    n *= 0.34676641f;
    r3 = n *= 1.57464421f;
    n *= 12.67976475f;
    n += 3.36897326f;
    r4 = n *= -0.00149431f;
    r5 = n += 0.64276701f;
    n *= -0.48049760f;
    n *= r0;
    r0 = n *= -1.66831207f;
    n *= r2;
    n = r5 *= n;
    n *= r0;
    n += r1;
    n += 3.15392923f;
    n += r4;
    n *= r5;
    n *= r3;
    n += 0.32731470f;
    n += 0.19628398f;
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
