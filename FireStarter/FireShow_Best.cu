#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = -0.041647;
    data.d[1] = 0.002277;
    data.d[2] = -1.164948;
    data.d[3] = -0.002760;
    data.d[4] = 0.496169;
    data.d[5] = 0.630597;
    data.d[6] = -0.743542;
    data.d[7] = -0.640956;
    data.d[8] = -1.804699;
    data.d[9] = 1.219300;
    data.d[10] = -0.100312;
    data.d[11] = -0.657121;
    data.d[12] = -0.831048;
    data.d[13] = 0.321305;
    data.d[14] = 3.632987;
    data.d[15] = 0.949350;
    data.d[16] = 0.708920;
    data.d[17] = -0.201723;
    data.d[18] = 0.455742;
    data.d[19] = -1.460825;
    data.d[20] = -1.479806;
    data.d[21] = 2.190904;
    data.d[22] = 0.664401;
    data.d[23] = -0.006643;
    data.d[24] = 0.831154;
    data.d[25] = -2.952336;
    data.d[26] = 0.756045;
    data.d[27] = -0.890116;
    data.d[28] = 0.690756;
    data.d[29] = -0.088246;
    data.d[30] = 0.126507;
    data.d[31] = -0.907413;
    return 0.000452;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.925324;
    data.d[1] = 0.010423;
    data.d[2] = 0.131548;
    data.d[3] = -0.399096;
    data.d[4] = 0.360938;
    data.d[5] = 1.459214;
    data.d[6] = 0.843512;
    data.d[7] = -1.366665;
    data.d[8] = -0.067197;
    data.d[9] = -1.332026;
    data.d[10] = 1.700986;
    data.d[11] = -1.398757;
    data.d[12] = -0.317510;
    data.d[13] = -1.346738;
    data.d[14] = 1.076492;
    data.d[15] = -0.269758;
    data.d[16] = 0.230913;
    data.d[17] = -0.793434;
    data.d[18] = 0.475763;
    data.d[19] = 0.506572;
    data.d[20] = 2.323239;
    data.d[21] = 1.307988;
    data.d[22] = -0.112839;
    data.d[23] = -0.467979;
    data.d[24] = 0.632613;
    data.d[25] = -0.109085;
    data.d[26] = 0.783696;
    data.d[27] = -0.561007;
    data.d[28] = -2.357720;
    data.d[29] = -1.198607;
    data.d[30] = -1.086331;
    data.d[31] = -0.217904;
    return 0.000319;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = data.d[1] += n;
    n = data.d[4] *= n;
    n = data.d[31] += n;
    n = data.d[11] += n;
    n = data.d[9] *= n;
    n = data.d[13] += n;
    n = data.d[17] *= n;
    n = data.d[11] *= n;
    n = data.d[5] *= n;
    n = data.d[30] += n;
    n = data.d[6] *= n;
    n = data.d[16] *= n;
    n = data.d[27] *= n;
    n = data.d[8] *= n;
    n = data.d[23] *= n;
    n = data.d[13] *= n;
    n = data.d[13] += n;
    n = data.d[26] += n;
    n = data.d[18] *= n;
    n = data.d[27] += n;
    n = data.d[18] += n;
    n = data.d[22] += n;
    n = data.d[1] *= n;
    n = data.d[27] *= n;
    n = data.d[14] += n;
    n = data.d[14] += n;
    n = data.d[13] *= n;
    n = data.d[9] += n;
    n = data.d[7] *= n;
    n = data.d[22] += n;
    n = data.d[27] *= n;
    n = data.d[7] *= n;
// END //
    return n;
} // Evaluate

GPU_GLOBAL void FireStarter(FireStarterResults *results0, FireStarterResults *results1, const unsigned int population, const unsigned int dataGeneration, const unsigned int programGeneration, const unsigned int variation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;

    unsigned int seed = RANDOMHASH(RANDOMHASH(RANDOMHASH(programGeneration) + dataGeneration) + member);
    FireStarterSamples theta;
    FireStarterSamples target;
    for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
        theta.s[i] = RANDOMNUM(seed) * (2.0f * 3.14159265f);
        target.s[i] = Target(theta.s[i], variation);
    }

    FireStarterResults *oldResults = dataGeneration & 1 ? results0 : results1;
    FireStarterResults *newResults = dataGeneration & 1 ? results1 : results0;
    FireStarterData data;
    float result;
    if (variation == 0)
        result = InitData0(data);
    else if (variation == 1)
        result = InitData1(data);
    else {
        if (dataGeneration) {
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