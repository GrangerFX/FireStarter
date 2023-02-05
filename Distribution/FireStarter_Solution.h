// Run date: 02/04/23 20:02:15 Pacific Standard Time
// Run duration = 75.010640 seconds
// Run count = 551
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
// Solution Generation = 551

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

// Precision = 0.00005615

// Solution0 precision = 0.00002971
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -1.86324990f;
    r1 = n *= 0.42407006f;
    r2 = n += 0.79013592f;
    n += -0.35497913f;
    r3 = n += 1.06613433f;
    n *= r3;
    n += -2.28433156f;
    n *= 0.02658710f;
    n *= 0.05625644f;
    n *= 3.53038311f;
    r3 = n += -0.90745199f;
    n += -1.58198214f;
    n *= 0.96608210f;
    r4 = n += 0.60992843f;
    n += r0;
    n *= r3;
    r3 = n += 0.75830621f;
    n *= 0.02323602f;
    r0 = n *= -0.89140362f;
    r5 = n += 0.25100949f;
    n *= 2.16653466f;
    n += r1;
    n *= r4;
    n *= r0;
    r0 = n += 1.10743082f;
    n *= r0;
    n *= r3;
    r3 = n *= 0.93238634f;
    n *= r5;
    n *= r3;
    n += -0.51224810f;
    n *= r2;
    return n;
} // Solution0

// Solution1 precision = 0.00005615
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.29594302f;
    r1 = n *= -0.15086310f;
    r2 = n += 0.40540236f;
    n += -20.40905952f;
    r3 = n += -23.30914307f;
    n *= r3;
    n += 11.87828159f;
    n *= 0.00000677f;
    n *= -1.33734596f;
    n *= -15.57632065f;
    r3 = n += -0.66895252f;
    n += 10.72127819f;
    n *= 0.00000000f;
    r4 = n += -0.79372257f;
    n += r0;
    n *= r3;
    r3 = n += -1.19689703f;
    n *= -3.99466515f;
    r0 = n *= -0.05393972f;
    r5 = n += 1.81802642f;
    n *= 0.19118671f;
    n += r1;
    n *= r4;
    n *= r0;
    r0 = n += 0.89014769f;
    n *= r0;
    n *= r3;
    r3 = n *= -1.65200818f;
    n *= r5;
    n *= r3;
    n += -0.10214595f;
    n *= r2;
    return n;
} // Solution1

// Solution2 precision = 0.00005417
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.81038308f;
    r1 = n *= -0.38221344f;
    r2 = n += -0.30974436f;
    n += 0.29074723f;
    r3 = n += 0.62361395f;
    n *= r3;
    n += -1.46120477f;
    n *= -0.00048284f;
    n *= -0.04559459f;
    n *= 68.30039215f;
    r3 = n += -0.27698988f;
    n += 0.40642008f;
    n *= 0.16230634f;
    r4 = n += -0.03000739f;
    n += r0;
    n *= r3;
    r3 = n += 0.81538588f;
    n *= 0.09715825f;
    r0 = n *= 1.64619458f;
    r5 = n += -0.28578186f;
    n *= 11.26600838f;
    n += r1;
    n *= r4;
    n *= r0;
    r0 = n += 0.02204248f;
    n *= r0;
    n *= r3;
    r3 = n *= 9738.87890625f;
    n *= r5;
    n *= r3;
    n += 0.15879543f;
    n *= r2;
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
