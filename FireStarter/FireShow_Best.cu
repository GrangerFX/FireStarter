#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = 0.032745;
    data.d[1] = -0.028128;
    data.d[2] = 0.603820;
    data.d[3] = -0.930623;
    data.d[4] = 0.932925;
    data.d[5] = -1.229092;
    data.d[6] = 1.196321;
    data.d[7] = 1.017672;
    data.d[8] = -0.152707;
    data.d[9] = -1.217952;
    data.d[10] = 0.432048;
    data.d[11] = 1.783931;
    data.d[12] = 0.352522;
    data.d[13] = 1.270451;
    data.d[14] = 0.473046;
    data.d[15] = -0.106801;
    data.d[16] = 2.306719;
    data.d[17] = -1.010249;
    data.d[18] = -1.333893;
    data.d[19] = 0.059408;
    data.d[20] = -0.398195;
    data.d[21] = -2.776183;
    data.d[22] = 1.387607;
    data.d[23] = -1.284894;
    data.d[24] = 1.712587;
    data.d[25] = 0.195442;
    data.d[26] = -1.106674;
    data.d[27] = -0.965685;
    data.d[28] = -1.410072;
    data.d[29] = -1.604067;
    data.d[30] = -0.418177;
    data.d[31] = -0.694800;
    return 0.000136;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 1.035867;
    data.d[1] = 1.118243;
    data.d[2] = 1.420425;
    data.d[3] = -0.558055;
    data.d[4] = -1.701794;
    data.d[5] = -1.181348;
    data.d[6] = 0.956908;
    data.d[7] = -0.780570;
    data.d[8] = -0.146923;
    data.d[9] = 0.525518;
    data.d[10] = 0.239357;
    data.d[11] = -1.534849;
    data.d[12] = 0.072934;
    data.d[13] = -0.267709;
    data.d[14] = 0.272427;
    data.d[15] = -0.258154;
    data.d[16] = 0.533077;
    data.d[17] = 1.816961;
    data.d[18] = 0.757113;
    data.d[19] = -0.126697;
    data.d[20] = 1.159852;
    data.d[21] = 0.024039;
    data.d[22] = 0.517278;
    data.d[23] = -0.284861;
    data.d[24] = 0.968044;
    data.d[25] = 0.508402;
    data.d[26] = -1.176386;
    data.d[27] = -1.795683;
    data.d[28] = 0.584509;
    data.d[29] = -1.155872;
    data.d[30] = -0.901469;
    data.d[31] = 1.070210;
    return 0.000017;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = data.d[31] *= n;
    n = data.d[27] *= n;
    n = data.d[29] += n;
    n = data.d[22] *= n;
    n = data.d[31] += n;
    n = data.d[27] *= n;
    n = data.d[24] *= n;
    n = data.d[7] *= n;
    n = data.d[5] *= n;
    n = data.d[11] *= n;
    n = data.d[17] *= n;
    n = data.d[6] *= n;
    n = data.d[6] += n;
    n = data.d[9] *= n;
    n = data.d[8] += n;
    n = data.d[11] *= n;
    n = data.d[12] *= n;
    n = data.d[15] *= n;
    n = data.d[28] *= n;
    n = data.d[27] *= n;
    n = data.d[0] *= n;
    n = data.d[15] += n;
    n = data.d[15] += n;
    n = data.d[16] += n;
    n = data.d[14] += n;
    n = data.d[6] += n;
    n = data.d[14] *= n;
    n = data.d[22] += n;
    n = data.d[1] *= n;
    n = data.d[2] *= n;
    n = data.d[9] += n;
    n = data.d[19] *= n;
// END //
    return n;
} // Evaluate

GPU_GLOBAL void FireStarter(FireStarterResults *results0, FireStarterResults *results1, const unsigned int population, const unsigned int generation, const unsigned int variation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;

    unsigned int seed = RANDOMHASH(RANDOMHASH(generation) + member);
    FireStarterSamples theta;
    FireStarterSamples target;
    for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
        theta.s[i] = RANDOMNUM(seed) * (2.0f * 3.14159265f);
        target.s[i] = Target(theta.s[i], variation);
    }

    FireStarterResults *oldResults = generation & 1 ? results0 : results1;
    FireStarterResults *newResults = generation & 1 ? results1 : results0;
    FireStarterData data;
    float result;
    if (generation) {
        data = oldResults->results[member].data;
        result = oldResults->results[member].result;
    } else {
        for (int i = 0; i < PROGRAM_DATA; i++)
            data.d[i] = RANDOMFACTOR(seed);
        result = START_RESULT;
    }

    float oldResult = result;
    for (int p = 0; p < PROGRAM_ITERATIONS; p++) {
        unsigned int d = RANDOMSEED(seed) % PROGRAM_DATA;
        float oldData = data.d[d];
        data.d[d] = oldData + (SMART_RANDOM_FACTOR * RANDOMFACTOR(seed) * result);
        float curResult = 0.0f;
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            curResult = fmaxf(fabsf(Evaluate(data, theta.s[i]) - target.s[i]), curResult);
        if (curResult < result)
            result = curResult;
        else
            data.d[d] = oldData;
    }
    if (generation && (result >= oldResult)) {
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
} // FireStarter

GPU_GLOBAL void FireShow(const FireStarterResult bestResult, uchar4 *bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, const unsigned int variation)
{
    int x = blockDim.x * blockIdx.x + threadIdx.x;
    int xScale = bufferHeight / 8;
    int yScale = bufferHeight / 16;
    if (x < bufferHeight) {
        int x0 = (bufferWidth / 2) - xScale;
        int x1 = (bufferWidth / 2) + xScale;
        if (x0 >= 0) {
            uchar4 &pixel(bufferPixels[x * bufferWidth + x0]);
            pixel.x = 64;
            pixel.y = 128;
            pixel.z = 64;
        };
        if (x1 < bufferWidth) {
            uchar4 &pixel(bufferPixels[x * bufferWidth + x1]);
            pixel.x = 64;
            pixel.y = 128;
            pixel.z = 64;
        };
    }
    if (x < bufferWidth) {
        FireStarterData data;
        switch (variation) {
            case 0:
                InitData0(data);
                break;
            case 1:
                InitData1(data);
                break;
            case 2:
                data = bestResult.data;
                break;
        }
        float theta = (x - bufferWidth * 0.5f) * (3.14159265f / xScale) + 3.14159265f;
        float center = bufferHeight * 0.66f;
        float target = Target(theta, variation);
        int y = (int)(center + target * yScale);
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = 255;
            pixel.y = 128;
        };
        y = (int)(center + Evaluate(bestResult.data, theta) * yScale);
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = pixel.y = pixel.z = 255;
        };
    }
} // FireShow