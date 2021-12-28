#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = 1.516105;
    data.d[1] = 0.935332;
    data.d[2] = 0.277656;
    data.d[3] = 0.846986;
    data.d[4] = 0.630685;
    data.d[5] = 1.078979;
    data.d[6] = 0.565081;
    data.d[7] = 0.270592;
    data.d[8] = 0.801422;
    data.d[9] = -0.659890;
    data.d[10] = 1.354314;
    data.d[11] = 0.661069;
    data.d[12] = -0.873120;
    data.d[13] = -0.955125;
    data.d[14] = -0.400987;
    data.d[15] = 0.233652;
    data.d[16] = 1.871007;
    data.d[17] = 0.882627;
    data.d[18] = -0.343926;
    data.d[19] = 1.446751;
    data.d[20] = -0.651657;
    data.d[21] = -0.684166;
    data.d[22] = 0.358717;
    data.d[23] = -0.499490;
    data.d[24] = 0.174226;
    data.d[25] = -1.397933;
    data.d[26] = 0.269992;
    data.d[27] = 1.018132;
    data.d[28] = 1.240025;
    data.d[29] = 0.796353;
    data.d[30] = -2.025746;
    data.d[31] = -0.781246;
    return 0.000036;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = -1.838254;
    data.d[1] = -0.599436;
    data.d[2] = 0.030009;
    data.d[3] = 1.663695;
    data.d[4] = 1.298825;
    data.d[5] = 0.970859;
    data.d[6] = 0.281807;
    data.d[7] = -1.643244;
    data.d[8] = 2.198504;
    data.d[9] = 0.626310;
    data.d[10] = 1.323242;
    data.d[11] = 1.343482;
    data.d[12] = 0.908086;
    data.d[13] = 1.127207;
    data.d[14] = -0.213803;
    data.d[15] = 1.140388;
    data.d[16] = -0.910188;
    data.d[17] = 0.604222;
    data.d[18] = -0.781110;
    data.d[19] = -0.149789;
    data.d[20] = -0.613501;
    data.d[21] = -0.484005;
    data.d[22] = 1.878953;
    data.d[23] = 0.095608;
    data.d[24] = 1.372757;
    data.d[25] = 0.215800;
    data.d[26] = 1.428757;
    data.d[27] = 0.138088;
    data.d[28] = -0.828918;
    data.d[29] = 0.298126;
    data.d[30] = -0.540361;
    data.d[31] = 1.372763;
    return 0.000670;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = data.d[21] *= n;
    n = data.d[18] += n;
    n = data.d[29] += n;
    n = data.d[15] *= n;
    n = data.d[21] += n;
    n = data.d[23] *= n;
    n = data.d[14] += n;
    n = data.d[9] += n;
    n = data.d[24] *= n;
    n = data.d[11] *= n;
    n = data.d[2] += n;
    n = data.d[12] += n;
    n = data.d[10] *= n;
    n = data.d[29] *= n;
    n = data.d[16] += n;
    n = data.d[7] += n;
    n = data.d[2] *= n;
    n = data.d[7] *= n;
    n = data.d[12] *= n;
    n = data.d[17] *= n;
    n = data.d[16] += n;
    n = data.d[1] *= n;
    n = data.d[19] *= n;
    n = data.d[15] += n;
    n = data.d[17] *= n;
    n = data.d[9] *= n;
    n = data.d[8] += n;
    n = data.d[20] += n;
    n = data.d[28] *= n;
    n = data.d[4] += n;
    n = data.d[23] += n;
    n = data.d[25] += n;
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