// Run date: 08/27/22 16:52:56 Pacific Daylight Time
// Run duration = 1.582233 seconds
// Run count = 12
// Run variations = 3;
// Run samples = 15;
// Run instructions = 32;
// Run registers = 32;
// Run opcodes = 2;

// Run targetMin = 0.000000f;
// Run targetMax = 6.283185f;

// Run mode = FIRESTARTER_OPTIMIZE;
// Run units = 1;
// Run process = 0;
// Run population = 69632;
// Run iterations = 512;
// Run candidates = 16;
// Run generations = 100;
// Run precision = 256;
// Run evolve = FIRESTARTER_EVOLVE_BEST;
// Run attempts = 32;
// Run seed = 0;
// Run scale = 0.100000f;
// Run startScale = 4.000000f;
// Run startResult = 10.000000f;
// Solution Generation = 1200

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

// Precision = 0.00828838

// Solution0 precision = 0.00226301
inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -0.12282069f;
    r0 = n += -0.43541071f;
    r1 = n += 0.36879084f;
    r2 = n *= -0.32029158f;
    r3 = n += 0.87409252f;
    n += 0.84986889f;
    r4 = n *= 0.84250021f;
    r5 = n += 0.24506745f;
    r6 = n += 0.47348753f;
    n *= -0.14346512f;
    n += -1.05413187f;
    n *= r6;
    n *= -0.77911127f;
    n = r1 *= n;
    n *= 0.60761046f;
    n *= 1.04329884f;
    n *= -0.94827253f;
    n *= -0.32583648f;
    n *= 0.74364060f;
    n *= r2;
    n += r3;
    n *= 0.79217654f;
    n *= 0.79036218f;
    n *= -1.60807693f;
    n *= r0;
    n *= -0.57780904f;
    n += r4;
    n *= r1;
    n *= r5;
    n += 0.95741564f;
    n *= -0.22016209f;
    n *= -0.88889819f;
    return n;
} // Solution0

// Solution1 precision = 0.00828838
inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += -11.88603401f;
    r0 = n += 5.40728760f;
    r1 = n += -1.27600932f;
    r2 = n *= 0.76007313f;
    r3 = n += -0.91374433f;
    n += 0.42288387f;
    r4 = n *= -0.44708377f;
    r5 = n += -1.90510356f;
    r6 = n += -1.35047638f;
    n *= 1.58683944f;
    n += -0.86511922f;
    n *= r6;
    n *= 1.24156284f;
    n = r1 *= n;
    n *= -113.49062347f;
    n *= 0.25395647f;
    n *= 0.09089047f;
    n *= 1.92548668f;
    n *= -0.01112755f;
    n *= r2;
    n += r3;
    n *= 2.15908337f;
    n *= 0.82173967f;
    n *= 1.09918010f;
    n *= r0;
    n *= -0.01630452f;
    n += r4;
    n *= r1;
    n *= r5;
    n += -3.32779002f;
    n *= 0.08493651f;
    n *= -0.75074667f;
    return n;
} // Solution1

// Solution2 precision = 0.00441957
inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5, r6;

    n += 0.41439325f;
    r0 = n += -0.53363198f;
    r1 = n += -0.40993953f;
    r2 = n *= 0.34545091f;
    r3 = n += -0.89204395f;
    n += -0.44710612f;
    r4 = n *= 0.76123995f;
    r5 = n += -0.15233801f;
    r6 = n += -0.80722147f;
    n *= 0.77641177f;
    n += -0.95516092f;
    n *= r6;
    n *= -0.36095133f;
    n = r1 *= n;
    n *= -0.96444082f;
    n *= -0.62724650f;
    n *= 0.82617491f;
    n *= -1.10558796f;
    n *= 0.87539589f;
    n *= r2;
    n += r3;
    n *= -0.39074188f;
    n *= -1.73301029f;
    n *= -0.87700361f;
    n *= r0;
    n *= -0.82962406f;
    n += r4;
    n *= r1;
    n *= r5;
    n += -1.50931823f;
    n *= 0.41630635f;
    n *= -1.10898268f;
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
