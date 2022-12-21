// Run date: 12/20/22 20:31:00 Pacific Standard Time
// Run duration = 417.579695 seconds
// Run count = 17
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_EVOLVE;
// Run units = 10;
// Run processes = 10;
// Run population = 69632;
// Run iterations = 256;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 0;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 17

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

// Precision = 0.00003776

// Solution0 precision = 0.00001901
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.55390757f;
    r1 = n *= -0.20326017f;
    r2 = n += 0.52596676f;
    n *= 0.82590318f;
    n += 0.43441942f;
    n *= -0.89543676f;
    n = r0 *= n;
    r3 = n *= 0.09379546f;
    r4 = n += -4.36736107f;
    n += -0.68150753f;
    r5 = n *= -0.85340321f;
    r6 = n *= 0.64207244f;
    n *= -0.32547358f;
    n = r0 *= n;
    n += -0.91482610f;
    n *= r4;
    r4 = n += -28.05801010f;
    n = r6 += n;
    n += 23.16477394f;
    n += -64.68282318f;
    n += r3;
    n *= 0.58979243f;
    n += r5;
    n *= r6;
    n *= r2;
    n *= r4;
    n *= 0.02054681f;
    n *= r0;
    n *= -0.08333381f;
    n *= 0.09956814f;
    n += 0.52600276f;
    n += r1;
    return n;
} // Solution0

// Solution1 precision = 0.00000322
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += -0.29365754f;
    r1 = n *= -0.40897262f;
    r2 = n += 1.14388442f;
    n *= -0.55951315f;
    n += -0.64004326f;
    n *= 0.40975603f;
    n = r0 *= n;
    r3 = n *= -0.04146275f;
    r4 = n += 0.95451581f;
    n += 0.47043562f;
    r5 = n *= 1.45936406f;
    r6 = n *= 0.36760876f;
    n *= -0.68307501f;
    n = r0 *= n;
    n += 1.44242394f;
    n *= r4;
    r4 = n += 0.83460212f;
    n = r6 += n;
    n += -3.81835151f;
    n += 5.50820303f;
    n += r3;
    n *= 0.23826449f;
    n += r5;
    n *= r6;
    n *= r2;
    n *= r4;
    n *= 0.36408263f;
    n *= r0;
    n *= -0.57184142f;
    n *= -0.68563783f;
    n += 1.02578843f;
    n += r1;
    return n;
} // Solution1

// Solution2 precision = 0.00003776
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    r0 = n += 0.34060708f;
    r1 = n *= 0.33433059f;
    r2 = n += -0.98915821f;
    n *= -0.35113424f;
    n += 0.34731907f;
    n *= -0.82151830f;
    n = r0 *= n;
    r3 = n *= 0.09534935f;
    r4 = n += -0.66539425f;
    n += -2.68416786f;
    r5 = n *= 1.09115183f;
    r6 = n *= 0.29779264f;
    n *= -0.60439950f;
    n = r0 *= n;
    n += -1.23693562f;
    n *= r4;
    r4 = n += 0.80926508f;
    n = r6 += n;
    n += -1.12783360f;
    n += -7.32690668f;
    n += r3;
    n *= -0.16299465f;
    n += r5;
    n *= r6;
    n *= r2;
    n *= r4;
    n *= 6.75823975f;
    n *= r0;
    n *= -1.86308849f;
    n *= 0.09845143f;
    n += -0.46557358f;
    n += r1;
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
