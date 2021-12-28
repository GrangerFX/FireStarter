#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = -3.813634;
    data.d[1] = 1.092158;
    data.d[2] = 0.886926;
    data.d[3] = 1.066821;
    data.d[4] = 0.346802;
    data.d[5] = 0.534681;
    data.d[6] = -1.075907;
    data.d[7] = -0.794757;
    data.d[8] = 0.562224;
    data.d[9] = -1.402311;
    data.d[10] = 0.028674;
    data.d[11] = 0.389186;
    data.d[12] = 0.933810;
    data.d[13] = -0.923409;
    data.d[14] = -0.945883;
    data.d[15] = -0.233012;
    data.d[16] = 1.393801;
    data.d[17] = 1.626354;
    data.d[18] = 1.186687;
    data.d[19] = -0.985902;
    data.d[20] = 0.459945;
    data.d[21] = 1.367409;
    data.d[22] = 0.500670;
    data.d[23] = 0.239980;
    data.d[24] = -0.411064;
    data.d[25] = -0.228823;
    data.d[26] = -0.766611;
    data.d[27] = 2.658476;
    data.d[28] = -0.812580;
    data.d[29] = -1.208140;
    data.d[30] = -1.615497;
    data.d[31] = -0.196413;
    return 0.000071;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = -0.218704;
    data.d[1] = -0.682220;
    data.d[2] = 1.127146;
    data.d[3] = -0.248139;
    data.d[4] = -0.688993;
    data.d[5] = -0.973456;
    data.d[6] = 0.381372;
    data.d[7] = -1.579433;
    data.d[8] = -0.514248;
    data.d[9] = -0.102784;
    data.d[10] = -0.136369;
    data.d[11] = 0.867975;
    data.d[12] = 0.724599;
    data.d[13] = 1.766290;
    data.d[14] = -1.396315;
    data.d[15] = 1.061610;
    data.d[16] = -0.711204;
    data.d[17] = 0.924804;
    data.d[18] = 1.287065;
    data.d[19] = 0.467615;
    data.d[20] = -1.653820;
    data.d[21] = -0.822227;
    data.d[22] = -1.288828;
    data.d[23] = -0.117811;
    data.d[24] = -0.985808;
    data.d[25] = 0.684331;
    data.d[26] = -2.686556;
    data.d[27] = 2.919066;
    data.d[28] = -0.508740;
    data.d[29] = -0.486672;
    data.d[30] = -1.116479;
    data.d[31] = 0.554581;
    return 0.000071;
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
    n = data.d[12] += n;
    n = data.d[11] *= n;
    n = data.d[2] += n;
    n = data.d[12] += n;
    n = data.d[10] *= n;
    n = data.d[29] *= n;
    n = data.d[11] += n;
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