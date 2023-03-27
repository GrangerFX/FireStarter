// Run date: 03/26/23 23:46:15 Pacific Daylight Time
// Run duration = 2778.297815 seconds
// Run generation = 94
// Run result = 0.00097883
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 5

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
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

// Solution0 result = 0.00095204
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.34690332f;
    r1 = n *= 1.51434004f;
    r2 = n *= -0.48801839f;
    r3 = n *= 0.53781939f;
    r4 = n *= 0.94935369f;
    n *= -0.66545427f;
    n *= 1.43885505f;
    n *= 0.85698611f;
    n *= 1.73617661f;
    r5 = n += -1.39184105f;
    n += -0.39353672f;
    n *= -0.87221789f;
    r6 = n *= -0.60368657f;
    n *= r1;
    n = r6 *= n;
    n += r4;
    n += 0.53404379f;
    n += 1.00334692f;
    r4 = n *= -2.27465439f;
    r1 = n *= -0.50502723f;
    n = r0 *= n;
    n *= r5;
    n *= -0.97589105f;
    n *= r2;
    n *= r4;
    n *= r3;
    n *= 1.27663207f;
    n += r1;
    n += r0;
    n += r6;
    n *= 0.69697225f;
    n += -1.23129237f;
    return n;
} // Solution0

// Solution1 result = 0.00097883
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= 0.20781083f;
    r1 = n *= 1.80215371f;
    r2 = n *= 1.07621408f;
    r3 = n *= 0.87965834f;
    r4 = n *= -0.80134583f;
    n *= -0.73983288f;
    n *= -0.37339380f;
    n *= 0.86540943f;
    n *= -0.44973287f;
    r5 = n += -0.98883206f;
    n += 0.75434971f;
    n *= 5.19063616f;
    r6 = n *= -0.69866031f;
    n *= r1;
    n = r6 *= n;
    n += r4;
    n += 1.17442346f;
    n += 1.15378010f;
    r4 = n *= 0.84984469f;
    r1 = n *= 0.38676915f;
    n = r0 *= n;
    n *= r5;
    n *= 0.75758451f;
    n *= r2;
    n *= r4;
    n *= r3;
    n *= 2.20377684f;
    n += r1;
    n += r0;
    n += r6;
    n *= 1.51392353f;
    n += -0.30725414f;
    return n;
} // Solution1

// Solution2 result = 0.00097252
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n *= -2.20404506f;
    r1 = n *= -0.87687224f;
    r2 = n *= 0.19490573f;
    r3 = n *= -1.06396186f;
    r4 = n *= 1.03893089f;
    n *= -0.18466802f;
    n *= -0.25442976f;
    n *= -13.04081631f;
    n *= -0.89872247f;
    r5 = n += 1.42032623f;
    n += 0.46258169f;
    n *= -0.83470452f;
    r6 = n *= 0.52254832f;
    n *= r1;
    n = r6 *= n;
    n += r4;
    n += 1.40255058f;
    n += 2.48903680f;
    r4 = n *= -0.22712934f;
    r1 = n *= 0.43958449f;
    n = r0 *= n;
    n *= r5;
    n *= 2.43440771f;
    n *= r2;
    n *= r4;
    n *= r3;
    n *= -0.63412446f;
    n += r1;
    n += r0;
    n += r6;
    n *= 0.68319672f;
    n += 0.26642585f;
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
