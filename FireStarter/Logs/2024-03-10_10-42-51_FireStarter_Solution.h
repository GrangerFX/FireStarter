// Run date: 03/10/24 10:42:51 Pacific Daylight Time
// Run duration = 1102.955924 seconds
// Run generation = 83
// Run evolution = 14
// Run max result = 0.00000042
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
// Run optimizeSeed = 1
// Run tests = 1
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
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

// Solution0 result = 0.00000009
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    r1 = n *= 0.27975056f;
    n *= 2.76661730f;
    n *= -1.09358633f;
    n = r0 *= n;
    n += 2.42263579f;
    n *= -0.02373913f;
    r2 = n += -0.73476517f;
    r3 = n *= 1.02623534f;
    r4 = n += -1.48794711f;
    r5 = n *= 0.10229423f;
    n *= -3.26869607f;
    n = r1 *= n;
    r6 = n *= 0.56208718f;
    n *= r1;
    n += r4;
    r4 = n *= -2.28072572f;
    n *= 1.14763927f;
    n += -0.76532888f;
    n += r0;
    n *= -0.22705767f;
    n = r5 *= n;
    n *= r4;
    n += r3;
    n += r5;
    n *= -380.68963623f;
    n *= -0.00520475f;
    n += 3.34895086f;
    n *= r2;
    n = r6 *= n;
    n += 0.00000000f;
    n += r6;
    return n;
} // Solution0

// Solution1 result = 0.00000042
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065866f;
    r1 = n *= 1.32961845f;
    n *= 4.08589268f;
    n *= 0.18895081f;
    n = r0 *= n;
    n += -1.93326867f;
    n *= -0.00755691f;
    r2 = n += 2.16354036f;
    r3 = n *= -0.29589313f;
    r4 = n += 0.51610500f;
    r5 = n *= -0.47538894f;
    n *= 0.33631992f;
    n = r1 *= n;
    r6 = n *= 1.28149438f;
    n *= r1;
    n += r4;
    r4 = n *= -6.07379246f;
    n *= -0.46180570f;
    n += -0.25827980f;
    n += r0;
    n *= 0.89382416f;
    n = r5 *= n;
    n *= r4;
    n += r3;
    n += r5;
    n *= -106.68683624f;
    n *= -0.05758901f;
    n += -2.89036226f;
    n *= r2;
    n = r6 *= n;
    n += -0.11813183f;
    n += r6;
    return n;
} // Solution1

// Solution2 result = 0.00000024
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799359f;
    r1 = n *= 0.91766357f;
    n *= -1.46283960f;
    n *= -0.86496425f;
    n = r0 *= n;
    n += -5.44440937f;
    n *= 0.05404697f;
    r2 = n += -2.67890429f;
    r3 = n *= 1.36183012f;
    r4 = n += -0.30311596f;
    r5 = n *= -0.44470981f;
    n *= -0.17589448f;
    n = r1 *= n;
    r6 = n *= 0.30826366f;
    n *= r1;
    n += r4;
    r4 = n *= 1.76738775f;
    n *= 1.66046882f;
    n += -1.21683562f;
    n += r0;
    n *= -1.30968797f;
    n = r5 *= n;
    n *= r4;
    n += r3;
    n += r5;
    n *= 0.05861704f;
    n *= 0.19678511f;
    n += 1.03738749f;
    n *= r2;
    n = r6 *= n;
    n += 0.52359867f;
    n += r6;
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
