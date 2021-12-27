#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = 1.293759;
    data.d[1] = -0.516760;
    data.d[2] = -0.842637;
    data.d[3] = -0.786169;
    data.d[4] = 0.508749;
    data.d[5] = -0.443906;
    data.d[6] = -0.965659;
    data.d[7] = 0.927801;
    data.d[8] = -0.870430;
    data.d[9] = -0.169319;
    data.d[10] = -0.732393;
    data.d[11] = 0.301068;
    data.d[12] = 1.220358;
    data.d[13] = 0.466019;
    data.d[14] = 0.315140;
    data.d[15] = 0.019379;
    data.d[16] = 0.327900;
    data.d[17] = -0.526290;
    data.d[18] = 0.321797;
    data.d[19] = 0.791873;
    data.d[20] = -0.332401;
    data.d[21] = 2.442431;
    data.d[22] = 0.704273;
    data.d[23] = 0.989307;
    data.d[24] = 2.518142;
    data.d[25] = -0.112858;
    data.d[26] = -0.520728;
    data.d[27] = -1.819036;
    data.d[28] = 0.549818;
    data.d[29] = -0.881253;
    data.d[30] = 0.596456;
    data.d[31] = 0.872431;
    return 0.000259;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.934808;
    data.d[1] = 0.856429;
    data.d[2] = -0.561239;
    data.d[3] = -0.228570;
    data.d[4] = 0.362067;
    data.d[5] = -0.822048;
    data.d[6] = -0.898982;
    data.d[7] = 0.782153;
    data.d[8] = -0.749237;
    data.d[9] = 1.494599;
    data.d[10] = 0.522906;
    data.d[11] = 0.046932;
    data.d[12] = -3.113853;
    data.d[13] = -1.172451;
    data.d[14] = 1.024844;
    data.d[15] = 1.207583;
    data.d[16] = -0.344583;
    data.d[17] = -0.420133;
    data.d[18] = 0.310579;
    data.d[19] = -2.070754;
    data.d[20] = 1.218463;
    data.d[21] = 0.334459;
    data.d[22] = 0.202581;
    data.d[23] = 0.366179;
    data.d[24] = 1.170124;
    data.d[25] = 1.173316;
    data.d[26] = -0.050869;
    data.d[27] = 0.370813;
    data.d[28] = 0.236582;
    data.d[29] = -1.449761;
    data.d[30] = -0.156822;
    data.d[31] = -1.382325;
    return 0.000834;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = data.d[11] += n;
    n = data.d[18] *= n;
    n = data.d[10] *= n;
    n = data.d[9] += n;
    n = data.d[10] *= n;
    n = data.d[30] += n;
    n = data.d[6] += n;
    n = data.d[0] *= n;
    n = data.d[5] *= n;
    n = data.d[22] += n;
    n = data.d[5] += n;
    n = data.d[30] += n;
    n = data.d[1] += n;
    n = data.d[11] *= n;
    n = data.d[7] *= n;
    n = data.d[29] *= n;
    n = data.d[2] += n;
    n = data.d[20] *= n;
    n = data.d[2] += n;
    n = data.d[0] += n;
    n = data.d[23] *= n;
    n = data.d[19] *= n;
    n = data.d[1] *= n;
    n = data.d[9] += n;
    n = data.d[31] *= n;
    n = data.d[3] *= n;
    n = data.d[22] *= n;
    n = data.d[22] *= n;
    n = data.d[21] *= n;
    n = data.d[8] += n;
    n = data.d[28] *= n;
    n = data.d[26] += n;
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