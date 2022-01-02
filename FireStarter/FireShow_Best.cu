#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = -1.996099;
    data.d[1] = -0.725305;
    data.d[2] = 0.712897;
    data.d[3] = -0.752101;
    data.d[4] = 0.758639;
    data.d[5] = -0.738824;
    data.d[6] = -0.266144;
    data.d[7] = -0.422683;
    data.d[8] = 0.042230;
    data.d[9] = -1.259224;
    data.d[10] = -0.126536;
    data.d[11] = -0.013196;
    data.d[12] = -0.240949;
    data.d[13] = -0.311024;
    data.d[14] = -2.328160;
    data.d[15] = -0.225942;
    data.d[16] = 1.928127;
    data.d[17] = -0.865736;
    data.d[18] = -1.193279;
    data.d[19] = -1.329905;
    data.d[20] = -0.879688;
    data.d[21] = -0.905066;
    data.d[22] = -0.025823;
    data.d[23] = -0.970465;
    data.d[24] = 0.248883;
    data.d[25] = 0.931408;
    data.d[26] = 1.080467;
    data.d[27] = 1.948375;
    data.d[28] = 0.706312;
    data.d[29] = 0.390082;
    data.d[30] = 0.198679;
    data.d[31] = -0.026516;
    return 0.016765;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = -0.394576;
    data.d[1] = 0.903948;
    data.d[2] = -0.538868;
    data.d[3] = -0.114060;
    data.d[4] = -0.989924;
    data.d[5] = -2.157436;
    data.d[6] = -0.108859;
    data.d[7] = -0.634464;
    data.d[8] = 0.597862;
    data.d[9] = -1.312518;
    data.d[10] = -0.584141;
    data.d[11] = -0.225042;
    data.d[12] = -1.329911;
    data.d[13] = -0.702661;
    data.d[14] = -0.317440;
    data.d[15] = -0.736495;
    data.d[16] = -0.320066;
    data.d[17] = 0.187273;
    data.d[18] = -0.326791;
    data.d[19] = -0.475481;
    data.d[20] = 0.708656;
    data.d[21] = 0.529176;
    data.d[22] = -0.167603;
    data.d[23] = 0.364580;
    data.d[24] = 1.247802;
    data.d[25] = 0.157889;
    data.d[26] = -0.577676;
    data.d[27] = -0.831698;
    data.d[28] = -0.777991;
    data.d[29] = -0.733974;
    data.d[30] = 1.054381;
    data.d[31] = -0.127301;
    return 0.008672;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = data.d[13] += n;
    n = data.d[21] += n;
    n = data.d[8] += n;
    data.d[28] = n;
    n = data.d[17] += n;
    data.d[28] = n;
    data.d[2] = n;
    data.d[17] = n;
    n = data.d[11] += n;
    n = data.d[12] += n;
    n = data.d[29] += n;
    n = data.d[9] += n;
    n = data.d[25] *= n;
    n = data.d[24] *= n;
    data.d[18] = n;
    n = data.d[7] += n;
    n = data.d[8] *= n;
    n = data.d[8] += n;
    data.d[25] = n;
    data.d[5] = n;
    n = data.d[0] += n;
    n = data.d[24] *= n;
    n = data.d[25] *= n;
    n = data.d[2];
    n = data.d[19];
    data.d[16] = n;
    data.d[27] = n;
    n = data.d[0] *= n;
    n = data.d[31] *= n;
    n = data.d[13] *= n;
    n = data.d[18] *= n;
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