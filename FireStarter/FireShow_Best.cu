#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = -0.627201;
    data.d[1] = -0.585427;
    data.d[2] = -1.467915;
    data.d[3] = -0.238955;
    data.d[4] = -0.404117;
    data.d[5] = 0.265393;
    data.d[6] = 0.614629;
    data.d[7] = 0.888635;
    data.d[8] = -0.518788;
    data.d[9] = 1.084132;
    data.d[10] = 1.775390;
    data.d[11] = 0.900070;
    data.d[12] = -0.437464;
    data.d[13] = 0.725017;
    data.d[14] = -0.549189;
    data.d[15] = -1.963383;
    data.d[16] = -1.174472;
    data.d[17] = -0.803048;
    data.d[18] = 1.029550;
    data.d[19] = -0.018061;
    data.d[20] = 0.452241;
    data.d[21] = -1.039341;
    data.d[22] = -1.799680;
    data.d[23] = -0.207336;
    data.d[24] = 0.254009;
    data.d[25] = 1.858037;
    data.d[26] = -0.699439;
    data.d[27] = 1.377242;
    data.d[28] = -0.722471;
    data.d[29] = 0.040705;
    data.d[30] = -1.205571;
    data.d[31] = 0.018045;
    return 0.000099;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.669223;
    data.d[1] = -0.371072;
    data.d[2] = -1.259524;
    data.d[3] = -1.264354;
    data.d[4] = 0.421002;
    data.d[5] = 0.533590;
    data.d[6] = 0.969230;
    data.d[7] = 1.339801;
    data.d[8] = -0.200899;
    data.d[9] = 1.487150;
    data.d[10] = 1.050758;
    data.d[11] = -0.476394;
    data.d[12] = 1.347858;
    data.d[13] = -1.269423;
    data.d[14] = 0.045723;
    data.d[15] = 0.780779;
    data.d[16] = -0.589666;
    data.d[17] = -0.542365;
    data.d[18] = 0.888793;
    data.d[19] = -0.110846;
    data.d[20] = 0.868162;
    data.d[21] = -1.049950;
    data.d[22] = 0.589760;
    data.d[23] = 0.257976;
    data.d[24] = -0.590168;
    data.d[25] = 0.477683;
    data.d[26] = 0.754311;
    data.d[27] = -0.306869;
    data.d[28] = 0.398050;
    data.d[29] = 1.582336;
    data.d[30] = -1.308378;
    data.d[31] = -0.549055;
    return 0.000199;
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
    n = data.d[16] *= n;
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
    n = data.d[29] *= n;
    n = data.d[14] += n;
    n = data.d[14] += n;
    n = data.d[13] *= n;
    n = data.d[9] += n;
    n = data.d[7] *= n;
    n = data.d[2] += n;
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