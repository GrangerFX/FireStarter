#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = 0.410788;
    data.d[1] = -0.775134;
    data.d[2] = 0.786147;
    data.d[3] = -0.446035;
    data.d[4] = 0.406613;
    data.d[5] = 1.053889;
    data.d[6] = 1.083477;
    data.d[7] = 0.474442;
    data.d[8] = -0.003831;
    data.d[9] = -0.715770;
    data.d[10] = 1.074049;
    data.d[11] = 0.887717;
    data.d[12] = 0.186361;
    data.d[13] = 0.167669;
    data.d[14] = 0.981315;
    data.d[15] = -0.607781;
    data.d[16] = 0.585056;
    data.d[17] = 1.754811;
    data.d[18] = -1.933699;
    data.d[19] = -1.144925;
    data.d[20] = -1.437143;
    data.d[21] = -1.519742;
    data.d[22] = 0.432905;
    data.d[23] = 0.339039;
    data.d[24] = 0.234371;
    data.d[25] = 1.361312;
    data.d[26] = -0.413983;
    data.d[27] = -1.602302;
    data.d[28] = -0.729617;
    data.d[29] = 0.061631;
    data.d[30] = 0.569957;
    data.d[31] = 0.232503;
    return 0.000537;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 1.219618;
    data.d[1] = -0.802932;
    data.d[2] = 0.740889;
    data.d[3] = -0.944257;
    data.d[4] = -0.706551;
    data.d[5] = -1.039560;
    data.d[6] = -0.811387;
    data.d[7] = -2.440565;
    data.d[8] = -0.279156;
    data.d[9] = 0.602424;
    data.d[10] = 0.651892;
    data.d[11] = 1.124602;
    data.d[12] = -0.671475;
    data.d[13] = 0.910189;
    data.d[14] = 0.679302;
    data.d[15] = -0.882319;
    data.d[16] = -0.857032;
    data.d[17] = -0.742340;
    data.d[18] = -2.261270;
    data.d[19] = -0.723713;
    data.d[20] = 0.167562;
    data.d[21] = -1.112516;
    data.d[22] = 0.871136;
    data.d[23] = -0.596419;
    data.d[24] = 0.482080;
    data.d[25] = -0.927812;
    data.d[26] = 0.308952;
    data.d[27] = 0.393223;
    data.d[28] = 0.856720;
    data.d[29] = -0.031663;
    data.d[30] = 1.007901;
    data.d[31] = -0.458225;
    return 0.000619;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = data.d[19] += n;
    n = data.d[2] *= n;
    n = data.d[28] *= n;
    n = data.d[14] *= n;
    n = data.d[20] += n;
    n = data.d[28] *= n;
    n = data.d[4] *= n;
    n = data.d[0] += n;
    n = data.d[20] *= n;
    n = data.d[2] += n;
    n = data.d[10] *= n;
    n = data.d[13] += n;
    n = data.d[15] *= n;
    n = data.d[2] += n;
    n = data.d[2] += n;
    n = data.d[19] += n;
    n = data.d[31] *= n;
    n = data.d[0] += n;
    n = data.d[1] *= n;
    n = data.d[30] *= n;
    n = data.d[6] += n;
    n = data.d[17] *= n;
    n = data.d[30] *= n;
    n = data.d[25] *= n;
    n = data.d[21] *= n;
    n = data.d[5] *= n;
    n = data.d[27] *= n;
    n = data.d[17] *= n;
    n = data.d[19] += n;
    n = data.d[15] += n;
    n = data.d[3] *= n;
    n = data.d[24] += n;
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