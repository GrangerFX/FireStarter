// Run date: 04/02/23 22:48:01 Pacific Daylight Time
// Run duration = 2530.595126 seconds
// Run generation = 482
// Run result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 28
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 1
// Run seeds = 1
// Run mode = FIRESTARTER_OPTIMIZE
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.14159274f;
    r1 = n *= 0.97225857f;
    r2 = n *= 0.41955829f;
    n += r0;
    n *= 2.65304136f;
    n *= r2;
    n += -1.94220436f;
    n *= 0.00439128f;
    r2 = n *= 2.54622889f;
    r0 = n += -0.65631795f;
    r3 = n += -1.33462775f;
    n = r1 *= n;
    r4 = n *= 0.12422499f;
    n *= r1;
    n = r2 += n;
    r1 = n *= 0.05462429f;
    r5 = n += -4.06164694f;
    n *= r1;
    n += -1.38488138f;
    n += r2;
    n += -1.84722602f;
    n *= r5;
    n *= r3;
    n *= r0;
    n *= r4;
    r4 = n += 1.08747506f;
    n += 0.27673244f;
    n *= 0.93577325f;
    n *= -0.82459205f;
    n += 0.26007789f;
    n += -0.29488787f;
    n += r4;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -3.09065914f;
    r1 = n *= 0.08882347f;
    r2 = n *= -0.24798967f;
    n += r0;
    n *= 0.38408193f;
    n *= r2;
    n += 1.29173589f;
    n *= 1.26703918f;
    r2 = n *= -1.56431305f;
    r0 = n += 1.44009459f;
    r3 = n += 0.69990206f;
    n = r1 *= n;
    r4 = n *= 0.51700670f;
    n *= r1;
    n = r2 += n;
    r1 = n *= -1.68266201f;
    r5 = n += 1.32718623f;
    n *= r1;
    n += -0.84721315f;
    n += r2;
    n += 0.39551517f;
    n *= r5;
    n *= r3;
    n *= r0;
    n *= r4;
    r4 = n += 0.02437381f;
    n += -0.10983635f;
    n *= 0.00571465f;
    n *= 1.78574252f;
    n += -0.33652008f;
    n += 0.19488615f;
    n += r4;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.61799359f;
    r1 = n *= 0.45499933f;
    r2 = n *= 1.61754072f;
    n += r0;
    n *= 0.09124961f;
    n *= r2;
    n += -0.90687501f;
    n *= -2.67408609f;
    r2 = n *= -0.20329906f;
    r0 = n += -2.18050170f;
    r3 = n += -1.09142768f;
    n = r1 *= n;
    r4 = n *= 0.05648920f;
    n *= r1;
    n = r2 += n;
    r1 = n *= 0.01658365f;
    r5 = n += -1.04422379f;
    n *= r1;
    n += 0.45738733f;
    n += r2;
    n += -0.96463376f;
    n *= r5;
    n *= r3;
    n *= r0;
    n *= r4;
    r4 = n += -0.12724718f;
    n += 0.31205747f;
    n *= -0.01483903f;
    n *= 1.09534335f;
    n += -0.25860709f;
    n += 0.91245693f;
    n += r4;
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
