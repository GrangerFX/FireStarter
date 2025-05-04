// Run date: 05/04/25 10:29:13 Pacific Daylight Time
// Run duration = 243.213716 seconds
// Run test = 0
// Run generation = 21
// Run evolution = 3
// Run precision  = 0.00000008
// Run max result = 0.00005072
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 16
// Run population = 262144
// Run generations = 0
// Run passes = 512
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

#define SOLUTION_VARIATIONS 3
#define SOLUTION_VARIATION 0

#ifndef __CUDACC__
#include <cmath>
#endif

#define SOLUTION_PI 3.14159265f
#define SOLUTION_MIN 0.0f
#define SOLUTION_MAX (2.0f * SOLUTION_PI)

inline float SolutionTarget(float n, unsigned int variation = 0)
{
    switch (variation & 3) {
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

inline float Solution0(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.62471938f;
    r1 = n *= 0.12531450f;
    n += -2.13213491f;
    r2 = n *= 0.51247901f;
    r3 = n *= -1.48865223f;
    r4 = n += -2.31281471f;
    n *= r3;
    n = r2 *= n;
    n = r1 *= n;
    r3 = n *= 0.01346126f;
    r5 = n += 1.24963057f;
    n *= 2.87249231f;
    n *= r3;
    r3 = n += 0.74303132f;
    n *= r1;
    n *= r4;
    n *= 1.41305995f;
    n += 0.69365859f;
    n *= r0;
    n *= 0.88563794f;
    n += r3;
    n = r2 *= n;
    n *= -0.57544893f;
    n *= 2.90537763f;
    n *= 8.78585720f;
    n *= -0.80290109f;
    n *= r2;
    n += -3.15106344f;
    n *= r5;
    n *= -0.25432023f;
    n += 5.08266926f;
    n *= 0.16440453f;
    return n;
} // Solution0

inline float Solution1(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -2.89528942f;
    r1 = n *= -0.02730179f;
    n += -2.11226487f;
    r2 = n *= 2.46331525f;
    r3 = n *= 0.18482699f;
    r4 = n += 1.54840803f;
    n *= r3;
    n = r2 *= n;
    n = r1 *= n;
    r3 = n *= 3.96873999f;
    r5 = n += 0.06528239f;
    n *= 0.80179071f;
    n *= r3;
    r3 = n += -2.26779842f;
    n *= r1;
    n *= r4;
    n *= 7.06979275f;
    n += -0.26955169f;
    n *= r0;
    n *= 0.05422249f;
    n += r3;
    n = r2 *= n;
    n *= -0.18669158f;
    n *= 7.12751436f;
    n *= 8.93919182f;
    n *= 0.15487222f;
    n *= r2;
    n += 1.32749963f;
    n *= r5;
    n *= -0.23404905f;
    n += -0.70360827f;
    n *= 0.18299437f;
    return n;
} // Solution1

inline float Solution2(float n)
{
    float r0, r1, r2, r3, r4, r5;

    r0 = n += -0.84228468f;
    r1 = n *= 0.11537356f;
    n += -1.94973183f;
    r2 = n *= -0.30604506f;
    r3 = n *= 1.74463809f;
    r4 = n += -1.48446846f;
    n *= r3;
    n = r2 *= n;
    n = r1 *= n;
    r3 = n *= 3.27954268f;
    r5 = n += 0.16767935f;
    n *= -0.43283796f;
    n *= r3;
    r3 = n += -2.07483363f;
    n *= r1;
    n *= r4;
    n *= 2.65957570f;
    n += 0.44638923f;
    n *= r0;
    n *= -1.88750041f;
    n += r3;
    n = r2 *= n;
    n *= -6.07442284f;
    n *= -5.32412195f;
    n *= 1.70321774f;
    n *= -0.25101888f;
    n *= r2;
    n += 3.32521343f;
    n *= r5;
    n *= -2.53726554f;
    n += 1.08243167f;
    n *= 0.63908625f;
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
