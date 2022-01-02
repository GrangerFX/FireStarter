#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = 0.737819;
    data.d[1] = -0.087963;
    data.d[2] = 0.537573;
    data.d[3] = -0.915568;
    data.d[4] = 0.347099;
    data.d[5] = -0.806650;
    data.d[6] = 1.228301;
    data.d[7] = -0.559145;
    data.d[8] = 0.149948;
    data.d[9] = 0.542751;
    data.d[10] = -0.013391;
    data.d[11] = 0.198032;
    data.d[12] = -0.483046;
    data.d[13] = 0.580887;
    data.d[14] = -0.229632;
    data.d[15] = 0.579401;
    data.d[16] = -1.151370;
    data.d[17] = 0.826118;
    data.d[18] = 0.866531;
    data.d[19] = -0.363955;
    data.d[20] = 0.728722;
    data.d[21] = -1.088768;
    data.d[22] = -0.068016;
    data.d[23] = 0.452337;
    data.d[24] = 0.568114;
    data.d[25] = 0.477589;
    data.d[26] = 1.868059;
    data.d[27] = -0.423485;
    data.d[28] = -0.708966;
    data.d[29] = 3.782798;
    data.d[30] = -2.133165;
    data.d[31] = 1.589167;
    return 0.000007;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = -0.775062;
    data.d[1] = 0.169462;
    data.d[2] = -0.660823;
    data.d[3] = -0.926474;
    data.d[4] = -1.082009;
    data.d[5] = -0.718616;
    data.d[6] = 1.018319;
    data.d[7] = -1.433067;
    data.d[8] = -0.371671;
    data.d[9] = 0.646869;
    data.d[10] = 1.162214;
    data.d[11] = -0.790226;
    data.d[12] = -1.000151;
    data.d[13] = -0.549604;
    data.d[14] = -0.494523;
    data.d[15] = 0.153905;
    data.d[16] = -0.309868;
    data.d[17] = -1.029263;
    data.d[18] = -0.638590;
    data.d[19] = 0.222575;
    data.d[20] = 0.502069;
    data.d[21] = 1.758595;
    data.d[22] = -1.429375;
    data.d[23] = -0.764334;
    data.d[24] = -0.246695;
    data.d[25] = -0.251116;
    data.d[26] = 1.202256;
    data.d[27] = 1.133765;
    data.d[28] = 0.941718;
    data.d[29] = -0.746276;
    data.d[30] = 1.672338;
    data.d[31] = -0.410889;
    return 0.000024;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = data.d[0] *= n;
    n = data.d[1] += n;
    n = data.d[2] *= n;
    n = data.d[3] += n;
    n = data.d[4] *= n;
    n = data.d[2] += n;
    n = data.d[4] *= n;
    n = data.d[5] += n;
    n = data.d[6] *= n;
    n = data.d[7] += n;
    n = data.d[8] *= n;
    n = data.d[8] += n;
    n = data.d[9] *= n;
    n = data.d[5] += n;
    n = data.d[10] *= n;
    n = data.d[11] += n;
    n = data.d[6] *= n;
    n = data.d[12] += n;
    n = data.d[13] *= n;
    n = data.d[14] += n;
    n = data.d[15] *= n;
    n = data.d[13] += n;
    n = data.d[16] *= n;
    n = data.d[17] += n;
    n = data.d[7] *= n;
    n = data.d[10] += n;
    n = data.d[18] *= n;
    n = data.d[17] += n;
    n = data.d[10] *= n;
    n = data.d[19] += n;
    n = data.d[16] *= n;
    n = data.d[15] += n;
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