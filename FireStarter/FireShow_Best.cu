#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = -2.310234;
    data.d[1] = 0.601897;
    data.d[2] = -0.098959;
    data.d[3] = 0.426510;
    data.d[4] = -1.535018;
    data.d[5] = 1.087220;
    data.d[6] = 0.725451;
    data.d[7] = -0.435711;
    data.d[8] = 0.510383;
    data.d[9] = -0.419991;
    data.d[10] = 0.621678;
    data.d[11] = -0.454493;
    data.d[12] = -0.759549;
    data.d[13] = -1.004263;
    data.d[14] = -0.553937;
    data.d[15] = -1.028133;
    data.d[16] = -1.794570;
    data.d[17] = -1.091912;
    data.d[18] = 1.288938;
    data.d[19] = 0.705844;
    data.d[20] = -0.091631;
    data.d[21] = 0.247754;
    data.d[22] = 0.144443;
    data.d[23] = -1.002270;
    data.d[24] = 1.121598;
    data.d[25] = -0.039230;
    data.d[26] = -0.249579;
    data.d[27] = -0.572308;
    data.d[28] = -0.280764;
    data.d[29] = -0.855803;
    data.d[30] = -0.208383;
    data.d[31] = 0.277948;
    return 0.000001;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.035599;
    data.d[1] = -0.331224;
    data.d[2] = 0.539861;
    data.d[3] = 0.101065;
    data.d[4] = -0.179460;
    data.d[5] = 2.176852;
    data.d[6] = 0.609927;
    data.d[7] = 0.120400;
    data.d[8] = -0.769232;
    data.d[9] = -0.128250;
    data.d[10] = -0.656644;
    data.d[11] = -0.788178;
    data.d[12] = -0.227171;
    data.d[13] = 0.318505;
    data.d[14] = -0.577295;
    data.d[15] = 0.239227;
    data.d[16] = 2.208187;
    data.d[17] = 0.367337;
    data.d[18] = -1.464232;
    data.d[19] = 0.875706;
    data.d[20] = 1.238961;
    data.d[21] = 1.424240;
    data.d[22] = 0.157423;
    data.d[23] = -0.181829;
    data.d[24] = -0.959594;
    data.d[25] = 0.432515;
    data.d[26] = -0.425149;
    data.d[27] = 0.341537;
    data.d[28] = -0.164645;
    data.d[29] = -0.279521;
    data.d[30] = -0.072421;
    data.d[31] = 0.461892;
    return 0.000056;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = data.d[8] *= n;
    n = data.d[26] += n;
    n = data.d[13] *= n;
    n = data.d[6] += n;
    n = data.d[24] *= n;
    n = data.d[13] += n;
    n = data.d[24] *= n;
    n = data.d[17] += n;
    n = data.d[5] *= n;
    n = data.d[23] += n;
    n = data.d[1] *= n;
    n = data.d[1] += n;
    n = data.d[12] *= n;
    n = data.d[17] += n;
    n = data.d[31] *= n;
    n = data.d[9] += n;
    n = data.d[5] *= n;
    n = data.d[11] += n;
    n = data.d[20] *= n;
    n = data.d[15] += n;
    n = data.d[19] *= n;
    n = data.d[20] += n;
    n = data.d[10] *= n;
    n = data.d[27] += n;
    n = data.d[23] *= n;
    n = data.d[31] += n;
    n = data.d[2] *= n;
    n = data.d[27] += n;
    n = data.d[31] *= n;
    n = data.d[29] += n;
    n = data.d[10] *= n;
    n = data.d[19] += n;
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