#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = 0.135509;
    data.d[1] = -0.008065;
    data.d[2] = 0.759827;
    data.d[3] = -1.022437;
    data.d[4] = -0.412418;
    data.d[5] = 0.211364;
    data.d[6] = -0.950983;
    data.d[7] = -0.812977;
    data.d[8] = -0.073789;
    data.d[9] = -0.493751;
    data.d[10] = 0.143981;
    data.d[11] = 0.975852;
    data.d[12] = 0.771900;
    data.d[13] = -0.952487;
    data.d[14] = -0.217571;
    data.d[15] = -1.590719;
    data.d[16] = 0.710459;
    data.d[17] = 0.559066;
    data.d[18] = -0.162267;
    data.d[19] = -0.406709;
    data.d[20] = 0.943891;
    data.d[21] = 0.910275;
    data.d[22] = -1.708117;
    data.d[23] = -0.710923;
    data.d[24] = 0.627226;
    data.d[25] = -2.691236;
    data.d[26] = 1.103740;
    data.d[27] = 0.859745;
    data.d[28] = 0.912159;
    data.d[29] = -0.630900;
    data.d[30] = 0.754516;
    data.d[31] = 1.147630;
    return 0.000239;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 1.103613;
    data.d[1] = 1.169052;
    data.d[2] = -0.817093;
    data.d[3] = -0.679481;
    data.d[4] = -0.385091;
    data.d[5] = -1.709860;
    data.d[6] = 0.405826;
    data.d[7] = -0.756673;
    data.d[8] = 0.003515;
    data.d[9] = 0.728435;
    data.d[10] = 0.860597;
    data.d[11] = 0.332663;
    data.d[12] = -0.280752;
    data.d[13] = -0.586117;
    data.d[14] = 0.177817;
    data.d[15] = 0.631594;
    data.d[16] = -0.616785;
    data.d[17] = 1.018392;
    data.d[18] = -0.589305;
    data.d[19] = 0.104504;
    data.d[20] = -0.057400;
    data.d[21] = -0.621962;
    data.d[22] = -2.658392;
    data.d[23] = 0.410915;
    data.d[24] = -0.402254;
    data.d[25] = 0.795799;
    data.d[26] = 1.129401;
    data.d[27] = 1.504204;
    data.d[28] = 1.034147;
    data.d[29] = -0.508388;
    data.d[30] = -1.073485;
    data.d[31] = 1.356175;
    return 0.000222;
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
    if (dataGeneration) {
        data = oldResults->results[member].data;
        result = oldResults->results[member].result;
    } else {
        if (variation == 0)
            result = InitData0(data);
        else if (variation == 1)
            result = InitData1(data);
        else {
            for (int i = 0; i < PROGRAM_DATA; i++)
                data.d[i] = RANDOMFACTOR(seed);
            result = START_RESULT;
        }
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