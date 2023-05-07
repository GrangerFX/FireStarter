// Run date: 05/06/23 17:22:39 Pacific Daylight Time
// Run duration = 1266.411347 seconds
// Run generation = 397
// Run result = 0.00000036
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

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

// Solution0 result = 0.00000012
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.14159274f;
    n *= 0.22789113f;
    r1 = n *= 0.22939114f;
    n *= 13.57359695f;
    n *= -0.02495022f;
    r2 = n *= 12.10960770f;
    n += r2;
    n = r1 *= n;
    r2 = n *= 1.97024202f;
    r3 = n *= 0.87833112f;
    r4 = n += 1.70531714f;
    n *= r1;
    n += 0.67540562f;
    n += r3;
    r3 = n *= -0.00916499f;
    r1 = n += -5.61107683f;
    n += -0.60794139f;
    r5 = n *= -1.21993804f;
    r6 = n += -1.94266558f;
    n = r1 += n;
    n *= r2;
    n += 0.10138799f;
    r2 = n *= 9.30921936f;
    n += r1;
    n *= r0;
    n *= r4;
    n *= 2.39036965f;
    n *= r2;
    n *= r3;
    n *= r5;
    n *= r6;
    n += 0.00000001f;
    return n;
} // Solution0

// Solution1 result = 0.00000036
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -3.09065866f;
    n *= 4.04868984f;
    r1 = n *= -1.98297691f;
    n *= -1.37095690f;
    n *= 0.02302661f;
    r2 = n *= 0.01037247f;
    n += r2;
    n = r1 *= n;
    r2 = n *= 1.62031007f;
    r3 = n *= 0.21690626f;
    r4 = n += 0.37871358f;
    n *= r1;
    n += 3.40285778f;
    n += r3;
    r3 = n *= -0.11627209f;
    r1 = n += -3.53525352f;
    n += -1.61855948f;
    r5 = n *= -0.89313823f;
    r6 = n += -0.46242607f;
    n = r1 += n;
    n *= r2;
    n += 1.01571786f;
    r2 = n *= 0.87505317f;
    n += r1;
    n *= r0;
    n *= r4;
    n *= 0.25539300f;
    n *= r2;
    n *= r3;
    n *= r5;
    n *= r6;
    n += -0.11813187f;
    return n;
} // Solution1

// Solution2 result = 0.00000030
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -2.61799383f;
    n *= 1.10845113f;
    r1 = n *= -0.33376282f;
    n *= -0.44018373f;
    n *= 2.03447604f;
    r2 = n *= 0.04754995f;
    n += r2;
    n = r1 *= n;
    r2 = n *= -2.54628444f;
    r3 = n *= -1.17125154f;
    r4 = n += 0.17323883f;
    n *= r1;
    n += 1.01705360f;
    n += r3;
    r3 = n *= 0.07979084f;
    r1 = n += 0.22413519f;
    n += 0.83145857f;
    r5 = n *= -2.07405424f;
    r6 = n += 0.85254699f;
    n = r1 += n;
    n *= r2;
    n += 1.94942188f;
    r2 = n *= 1.81887841f;
    n += r1;
    n *= r0;
    n *= r4;
    n *= -2.40978909f;
    n *= r2;
    n *= r3;
    n *= r5;
    n *= r6;
    n += 0.52359885f;
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
