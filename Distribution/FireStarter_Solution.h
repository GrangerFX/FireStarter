// Run date: 10/07/23 19:45:13 Pacific Daylight Time
// Run duration = 1112.631705 seconds
// Run generation = 39
// Run evolution = 6
// Run result = 0.00000083
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 1
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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
    float r0, r1, r2, r3, r4;

    r0 = n += -3.14159274f;
    n *= -0.82555246f;
    n *= -0.43019411f;
    r1 = n *= -0.89838403f;
    r2 = n *= -1.55298638f;
    n = r0 += n;
    n *= 3.79851437f;
    n = r0 += n;
    n *= r1;
    r1 = n += 5.25584507f;
    n *= -0.41714701f;
    n *= 1.62715983f;
    r3 = n *= -0.01651741f;
    n += 1.53980613f;
    r4 = n += -0.00853950f;
    n *= r3;
    n = r4 += n;
    n *= r4;
    r4 = n += -1.15976417f;
    n = r4 += n;
    n += 1.64741206f;
    n += r1;
    n *= -0.00732578f;
    n *= 0.89748150f;
    n += -0.53475577f;
    n *= r4;
    n = r2 *= n;
    n += -0.04716030f;
    n += r0;
    n *= -0.14767301f;
    n *= -0.00000014f;
    n += r2;
    return n;
} // Solution0

// Solution1 result = 0.00000024
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -3.09065843f;
    n *= 0.41186333f;
    n *= -1.55814052f;
    r1 = n *= 0.06875782f;
    r2 = n *= -0.70502537f;
    n = r0 += n;
    n *= -0.11683203f;
    n = r0 += n;
    n *= r1;
    r1 = n += -0.40327221f;
    n *= 0.64607489f;
    n *= 0.33928692f;
    r3 = n *= 1.36391795f;
    n += 0.24397264f;
    r4 = n += 1.99287999f;
    n *= r3;
    n = r4 += n;
    n *= r4;
    r4 = n += -1.23695207f;
    n = r4 += n;
    n += 1.28619051f;
    n += r1;
    n *= -1.17373061f;
    n *= 1.12393928f;
    n += -0.91163021f;
    n *= r4;
    n = r2 *= n;
    n += 13.29428864f;
    n += r0;
    n *= -3.81419277f;
    n *= 0.00232970f;
    n += r2;
    return n;
} // Solution1

// Solution2 result = 0.00000083
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4;

    r0 = n += -2.61799359f;
    n *= -0.25045568f;
    n *= 1.28077888f;
    r1 = n *= 2.44108534f;
    r2 = n *= 0.05576028f;
    n = r0 += n;
    n *= -0.62335432f;
    n = r0 += n;
    n *= r1;
    r1 = n += 0.61051804f;
    n *= 0.23561822f;
    n *= -2.69686604f;
    r3 = n *= -0.12014708f;
    n += 5.94668484f;
    r4 = n += -4.66131401f;
    n *= r3;
    n = r4 += n;
    n *= r4;
    r4 = n += 0.00374979f;
    n = r4 += n;
    n += 4.69302511f;
    n += r1;
    n *= 1.52710056f;
    n *= 1.47326970f;
    n += -14.77343941f;
    n *= r4;
    n = r2 *= n;
    n += -50.77246475f;
    n += r0;
    n *= -0.12153596f;
    n *= 0.08485270f;
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
