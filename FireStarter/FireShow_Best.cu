#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = 0.402357;
    data.d[1] = 0.037733;
    data.d[2] = 0.117441;
    data.d[3] = -0.374976;
    data.d[4] = 2.945794;
    data.d[5] = -0.606858;
    data.d[6] = -0.845856;
    data.d[7] = -0.620938;
    data.d[8] = -0.185852;
    data.d[9] = -0.411937;
    data.d[10] = 0.087643;
    data.d[11] = 0.182299;
    data.d[12] = -0.790592;
    data.d[13] = -1.362298;
    data.d[14] = 1.260035;
    data.d[15] = -0.465258;
    return 0.000054;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.146398;
    data.d[1] = -0.953959;
    data.d[2] = 0.214839;
    data.d[3] = -0.050149;
    data.d[4] = 4.347890;
    data.d[5] = 0.615094;
    data.d[6] = -0.365576;
    data.d[7] = -0.194042;
    data.d[8] = 0.594539;
    data.d[9] = -0.621390;
    data.d[10] = 0.969140;
    data.d[11] = 0.237709;
    data.d[12] = -0.246855;
    data.d[13] = -0.975461;
    data.d[14] = 0.482587;
    data.d[15] = 1.645161;
    return 0.000063;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = data.d[0] *= n;
    n = data.d[12] += n;
    n = data.d[1] *= n;
    n = data.d[10] += n;
    n = data.d[12] *= n;
    n = data.d[7] += n;
    n = data.d[6] *= n;
    n = data.d[11] += n;
    n = data.d[11] *= n;
    n = data.d[10] += n;
    n = data.d[12] *= n;
    n = data.d[0] += n;
    n = data.d[1] *= n;
    n = data.d[13] += n;
    n = data.d[13] *= n;
    n = data.d[7] += n;
    n = data.d[3] *= n;
    n = data.d[15] += n;
    n = data.d[8] *= n;
    n = data.d[14] += n;
    n = data.d[5] *= n;
    n = data.d[0] += n;
    n = data.d[7] *= n;
    n = data.d[10] += n;
    n = data.d[6] *= n;
    n = data.d[1] += n;
    n = data.d[0] *= n;
    n = data.d[5] += n;
    n = data.d[5] *= n;
    n = data.d[9] += n;
    n = data.d[14] *= n;
    n = data.d[9] += n;
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