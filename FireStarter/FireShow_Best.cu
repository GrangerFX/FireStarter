#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = -1.692558;
    data.d[1] = -0.262403;
    data.d[2] = -0.474319;
    data.d[3] = 0.274112;
    data.d[4] = -1.003223;
    data.d[5] = -1.311024;
    data.d[6] = -0.813425;
    data.d[7] = -0.544802;
    data.d[8] = 0.350601;
    data.d[9] = -0.470212;
    data.d[10] = -1.215569;
    data.d[11] = -0.229262;
    data.d[12] = -1.001167;
    data.d[13] = -0.554601;
    data.d[14] = 0.958792;
    data.d[15] = -1.108884;
    data.d[16] = -0.815992;
    data.d[17] = 0.288056;
    data.d[18] = -0.879327;
    data.d[19] = -0.044129;
    data.d[20] = -0.506785;
    data.d[21] = 0.342789;
    data.d[22] = -0.128828;
    data.d[23] = 0.878758;
    data.d[24] = -0.528856;
    data.d[25] = 0.255075;
    data.d[26] = 0.061376;
    data.d[27] = -0.521410;
    data.d[28] = 0.177251;
    data.d[29] = -0.095488;
    data.d[30] = 0.752111;
    data.d[31] = -0.318954;
    return 0.000042;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 1.319746;
    data.d[1] = 0.005139;
    data.d[2] = -0.763969;
    data.d[3] = -1.368064;
    data.d[4] = 0.723547;
    data.d[5] = 1.540252;
    data.d[6] = -0.075081;
    data.d[7] = -0.557392;
    data.d[8] = -0.759740;
    data.d[9] = 0.083733;
    data.d[10] = 1.129560;
    data.d[11] = 0.259255;
    data.d[12] = 0.765395;
    data.d[13] = -0.501361;
    data.d[14] = 0.836863;
    data.d[15] = 0.352457;
    data.d[16] = 0.077540;
    data.d[17] = -0.175330;
    data.d[18] = -0.356097;
    data.d[19] = 0.683181;
    data.d[20] = 0.145185;
    data.d[21] = 0.791379;
    data.d[22] = 0.151331;
    data.d[23] = -0.781825;
    data.d[24] = 0.033080;
    data.d[25] = -0.936413;
    data.d[26] = -1.950122;
    data.d[27] = -0.971878;
    data.d[28] = 0.135473;
    data.d[29] = 0.550429;
    data.d[30] = -0.463224;
    data.d[31] = -0.691270;
    return 0.000027;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = data.d[17] *= n;
    n = data.d[6] += n;
    n = data.d[14] *= n;
    n = data.d[31] += n;
    n = data.d[17] *= n;
    n = data.d[27] += n;
    n = data.d[19] *= n;
    n = data.d[2] += n;
    n = data.d[19] *= n;
    n = data.d[18] += n;
    n = data.d[4] *= n;
    n = data.d[23] += n;
    n = data.d[16] *= n;
    n = data.d[28] += n;
    n = data.d[28] *= n;
    n = data.d[3] += n;
    n = data.d[25] *= n;
    n = data.d[19] += n;
    n = data.d[28] *= n;
    n = data.d[29] += n;
    n = data.d[9] *= n;
    n = data.d[6] += n;
    n = data.d[9] *= n;
    n = data.d[15] += n;
    n = data.d[19] *= n;
    n = data.d[16] += n;
    n = data.d[15] *= n;
    n = data.d[22] += n;
    n = data.d[2] *= n;
    n = data.d[28] += n;
    n = data.d[21] *= n;
    n = data.d[30] += n;
    n = data.d[27] *= n;
    n = data.d[19] += n;
    n = data.d[16] *= n;
    n = data.d[18] += n;
    n = data.d[15] *= n;
    n = data.d[20] += n;
    n = data.d[12] *= n;
    n = data.d[20] += n;
    n = data.d[1] *= n;
    n = data.d[7] += n;
    n = data.d[17] *= n;
    n = data.d[11] += n;
    n = data.d[11] *= n;
    n = data.d[23] += n;
    n = data.d[25] *= n;
    n = data.d[17] += n;
    n = data.d[17] *= n;
    n = data.d[8] += n;
    n = data.d[13] *= n;
    n = data.d[17] += n;
    n = data.d[30] *= n;
    n = data.d[29] += n;
    n = data.d[24] *= n;
    n = data.d[31] += n;
    n = data.d[19] *= n;
    n = data.d[24] += n;
    n = data.d[7] *= n;
    n = data.d[18] += n;
    n = data.d[25] *= n;
    n = data.d[15] += n;
    n = data.d[24] *= n;
    n = data.d[13] += n;
// END //
    return isnan(n) ? 0.0f : n;
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