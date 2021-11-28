#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float Target(float n, unsigned int variation)
{
    switch (variation) {
        default:
        case 0:
            return sinf(n);
        case 1:
            return sinf(n * 1.2f) + n * 0.2f;
        case 2:
            return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
    }
} // Target

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
        data.d[0] = -0.302952;
        data.d[1] = -0.045682;
        data.d[2] = 0.364455;
        data.d[3] = -0.053453;
        data.d[4] = -0.926373;
        data.d[5] = -0.103711;
        data.d[6] = 0.506644;
        data.d[7] = -1.074336;
        data.d[8] = 0.499834;
        data.d[9] = -0.394667;
        data.d[10] = 0.362385;
        data.d[11] = 1.112116;
        data.d[12] = 0.868508;
        data.d[13] = -0.478864;
        data.d[14] = -0.681381;
        data.d[15] = -0.808189;
        data.d[16] = 0.872491;
        data.d[17] = -0.649825;
        data.d[18] = 0.690025;
        data.d[19] = 0.870107;
        data.d[20] = 0.060746;
        data.d[21] = 0.545741;
        data.d[22] = 0.878196;
        data.d[23] = -0.158199;
        data.d[24] = -0.281253;
        data.d[25] = -0.049422;
        data.d[26] = -2.904499;
        data.d[27] = -1.186254;
        data.d[28] = -0.695671;
        data.d[29] = 0.526069;
        data.d[30] = 0.055949;
        data.d[31] = -0.186876;
        return 0.058177;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
        data.d[0] = -0.307807;
        data.d[1] = -0.056093;
        data.d[2] = 0.322406;
        data.d[3] = -0.011991;
        data.d[4] = -0.848718;
        data.d[5] = -0.082054;
        data.d[6] = 0.514989;
        data.d[7] = -1.109476;
        data.d[8] = 0.429500;
        data.d[9] = -0.402574;
        data.d[10] = 0.238194;
        data.d[11] = 1.150396;
        data.d[12] = 0.921705;
        data.d[13] = -0.478632;
        data.d[14] = -0.751642;
        data.d[15] = -0.693335;
        data.d[16] = 0.863437;
        data.d[17] = -0.718155;
        data.d[18] = 0.666358;
        data.d[19] = 0.846057;
        data.d[20] = 0.109534;
        data.d[21] = 0.555137;
        data.d[22] = 0.826053;
        data.d[23] = -0.040649;
        data.d[24] = -0.205941;
        data.d[25] = -0.050874;
        data.d[26] = -2.906187;
        data.d[27] = -1.132533;
        data.d[28] = -0.724195;
        data.d[29] = 0.525016;
        data.d[30] = 0.028682;
        data.d[31] = -0.185736;
        return 0.064621;
// END //
} // InitData1

// UNITS //
GPU_FUNCTION float Evaluate0(FireStarterData data, float n, float t)
{
    // UNITS //
    n = data.d[25] *= n;
    n = data.d[22] += n;
    n = data.d[18] += n;
    n = data.d[25] += n;
    n = data.d[9] *= n;
    n = data.d[13] += n;
    n = data.d[5] += n;
    data.d[11] = n;
    n = data.d[28] *= n;
    n = data.d[2] += n;
    n = data.d[21] *= n;
    n = data.d[21] += n;
    data.d[16] = n;
    n = data.d[13] *= n;
    n = data.d[13] *= n;
    n = data.d[11] *= n;
    n = data.d[26];
    n = data.d[6] += n;
    n = data.d[11];
    n = data.d[20] += n;
    data.d[14] = n;
    n = data.d[10];
    n = data.d[22] += n;
    n = data.d[10] += n;
    n = data.d[14] += n;
    n = data.d[19] *= n;
    n = data.d[13] *= n;
    data.d[27] = n;
    n = data.d[11] *= n;
    n = data.d[26] += n;
    data.d[14] = n;
    n = data.d[13] *= n;
    // END //
    data.d[0] = t;
    return n;
} // Evaluate0

GPU_GLOBAL void FireStarter0(FireStarterResults* oldResults, FireStarterResults* newResults, const unsigned int population, const unsigned int dataGeneration, const unsigned int programGeneration, const unsigned int variation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;

    unsigned int seed = RANDOMHASH(RANDOMHASH(RANDOMHASH(programGeneration) + dataGeneration) + member);
#if PROGRAM_RANDOM_SAMPLES
    float theta[SAMPLE_ITERATIONS];
    float target[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
        theta[i] = FASTRANDOMNUM(seed) * (2.0f * 3.14159265f);
        target[i] = Target(theta[i], variation);
    }
#endif

    FireStarterData data;
    float result;
    data = oldResults->results[member].data;
    result = oldResults->results[member].result;

    float oldResult = result;
    for (int p = 0; p < PROGRAM_ITERATIONS; p++) {
        result = 0.0f;
        for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
#if PROGRAM_RANDOM_SAMPLES
            float n = Evaluate0(data, theta[i], target[i]);
            result += fabsf(n - target[i]);
#else
            float theta = FASTRANDOMNUM(seed) * (2.0f * 3.14159265f);
            float target = Target(theta, variation);
            float n = Evaluate0(data, theta, target);
            result += fabsf(n - target);
#endif
        }
    }
    result /= SAMPLE_ITERATIONS;

    if (result >= oldResult) {
        // The genetic part of genetic programming and a major optimization:
        // Copy the best data from among a random set of members.
        unsigned int bestIndex = member;
        float bestResult = oldResult;
        for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
            unsigned int index = RANDOMSEED(seed) % population;
            float curResult = oldResults->results[index].result;
            if (curResult < bestResult) {
                bestResult = curResult;
                bestIndex = index;
            }
        }
        data = oldResults->results[bestIndex].data;
        unsigned int d = RANDOMSEED(seed) % PROGRAM_DATA;
        data.d[d] += (SMART_RANDOM_FACTOR * RANDOMFACTOR(seed) * bestResult);
        result = START_RESULT;
    }
    newResults->results[member].data = data;
    newResults->results[member].result = result;
} // FireStarter0

GPU_GLOBAL void FireShow0(const FireStarterResult bestResult, uchar4 *bufferPixels, const unsigned int bufferWidth, const unsigned int bufferHeight, const unsigned int variation)
{
    int x = blockDim.x * blockIdx.x + threadIdx.x;
    int xScale = bufferHeight / 8;
    int yScale = bufferHeight / 16;
    if (x < bufferHeight) {
        int x0 = (bufferWidth / 2) - xScale;
        int x1 = (bufferWidth / 2) + xScale;
        if (x0 >= 0) {
            uchar4& pixel(bufferPixels[x * bufferWidth + x0]);
            pixel.x = 64;
            pixel.y = 128;
            pixel.z = 64;
        };
        if (x1 < bufferWidth) {
            uchar4& pixel(bufferPixels[x * bufferWidth + x1]);
            pixel.x = 64;
            pixel.y = 128;
            pixel.z = 64;
        };
    }
    if (x < bufferWidth) {
        FireStarterData data;
        if (variation)
            InitData1(data);
        else
            InitData0(data);
        float theta = (x - bufferWidth * 0.5f) * (3.14159265f / xScale) + 3.14159265f;
        float center = bufferHeight * 0.66f;
        float target = Target(theta, variation);
        int y = (int)(center + target * yScale);
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4& pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = 255;
            pixel.y = 128;
        };
        y = (int)(center + Evaluate0(bestResult.data, theta, target) * yScale);
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4& pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = pixel.y = pixel.z = 255;
        };
    }
} // FireShow0
// END // 