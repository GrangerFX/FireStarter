#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = -0.105910;
    data.d[1] = -0.049897;
    data.d[2] = 0.384565;
    data.d[3] = 0.346369;
    data.d[4] = -0.930872;
    data.d[5] = 0.359332;
    data.d[6] = 1.137393;
    data.d[7] = -0.842367;
    data.d[8] = 1.070280;
    data.d[9] = -1.122743;
    data.d[10] = -2.994244;
    data.d[11] = -1.685769;
    data.d[12] = 0.321212;
    data.d[13] = -1.439632;
    data.d[14] = 1.350019;
    data.d[15] = 0.528831;
    data.d[16] = 0.276268;
    data.d[17] = 1.270994;
    data.d[18] = 1.437814;
    data.d[19] = 0.159184;
    data.d[20] = -0.079627;
    data.d[21] = -1.113473;
    data.d[22] = -0.144441;
    data.d[23] = 1.172049;
    data.d[24] = -1.225704;
    data.d[25] = 1.655456;
    data.d[26] = 0.221815;
    data.d[27] = 0.652390;
    data.d[28] = -0.780749;
    data.d[29] = -0.569810;
    data.d[30] = 0.471387;
    data.d[31] = -1.161094;
    return 0.000121;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.967736;
    data.d[1] = 1.226940;
    data.d[2] = 1.104911;
    data.d[3] = -0.033384;
    data.d[4] = -2.019752;
    data.d[5] = 0.229510;
    data.d[6] = -1.750857;
    data.d[7] = -1.190419;
    data.d[8] = 0.994320;
    data.d[9] = -0.923770;
    data.d[10] = 0.456532;
    data.d[11] = 1.390611;
    data.d[12] = 0.910451;
    data.d[13] = -1.944719;
    data.d[14] = -0.628896;
    data.d[15] = 0.041927;
    data.d[16] = 0.713355;
    data.d[17] = 0.736401;
    data.d[18] = 1.570726;
    data.d[19] = -0.679030;
    data.d[20] = -0.920880;
    data.d[21] = 1.709853;
    data.d[22] = -0.422091;
    data.d[23] = -2.450059;
    data.d[24] = 0.373929;
    data.d[25] = -1.443171;
    data.d[26] = -0.267216;
    data.d[27] = -0.267431;
    data.d[28] = 0.501226;
    data.d[29] = 0.008613;
    data.d[30] = -0.720806;
    data.d[31] = -1.924554;
    return 0.000024;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = data.d[31] *= n;
    n = data.d[27] *= n;
    n = data.d[29] += n;
    n = data.d[22] *= n;
    n = data.d[21] += n;
    n = data.d[27] *= n;
    n = data.d[24] *= n;
    n = data.d[7] *= n;
    n = data.d[18] *= n;
    n = data.d[11] *= n;
    n = data.d[17] *= n;
    n = data.d[6] *= n;
    n = data.d[6] += n;
    n = data.d[9] *= n;
    n = data.d[8] += n;
    n = data.d[11] *= n;
    n = data.d[12] *= n;
    n = data.d[15] *= n;
    n = data.d[28] *= n;
    n = data.d[27] *= n;
    n = data.d[0] *= n;
    n = data.d[15] += n;
    n = data.d[15] += n;
    n = data.d[16] += n;
    n = data.d[14] += n;
    n = data.d[6] += n;
    n = data.d[14] *= n;
    n = data.d[22] += n;
    n = data.d[1] *= n;
    n = data.d[2] *= n;
    n = data.d[9] += n;
    n = data.d[19] *= n;
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