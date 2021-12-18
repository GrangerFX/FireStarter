#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = 0.715929;
    data.d[1] = 0.005845;
    data.d[2] = 0.642531;
    data.d[3] = -1.689173;
    data.d[4] = 0.782002;
    data.d[5] = -0.009061;
    data.d[6] = 1.022372;
    data.d[7] = 0.800189;
    data.d[8] = -0.810062;
    data.d[9] = -0.681934;
    data.d[10] = 1.040280;
    data.d[11] = 0.610147;
    data.d[12] = -1.690166;
    data.d[13] = -0.839327;
    data.d[14] = 0.675701;
    data.d[15] = -0.762186;
    data.d[16] = 0.435900;
    data.d[17] = -0.193146;
    data.d[18] = 0.519708;
    data.d[19] = -2.764863;
    data.d[20] = 1.173102;
    data.d[21] = 0.322202;
    data.d[22] = -0.374265;
    data.d[23] = 0.780962;
    data.d[24] = -0.310930;
    data.d[25] = 0.313597;
    data.d[26] = -0.337441;
    data.d[27] = -0.793812;
    data.d[28] = 0.392829;
    data.d[29] = 0.380387;
    data.d[30] = -0.220867;
    data.d[31] = 0.496860;
    return 0.000633;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.501104;
    data.d[1] = 0.027241;
    data.d[2] = -1.230296;
    data.d[3] = -0.487206;
    data.d[4] = -0.421901;
    data.d[5] = -1.508025;
    data.d[6] = -1.430565;
    data.d[7] = 1.005460;
    data.d[8] = -0.463230;
    data.d[9] = -0.049628;
    data.d[10] = -0.044506;
    data.d[11] = 0.065382;
    data.d[12] = -0.529138;
    data.d[13] = 0.727513;
    data.d[14] = 1.299716;
    data.d[15] = 1.303394;
    data.d[16] = -0.917315;
    data.d[17] = -0.586057;
    data.d[18] = 0.292562;
    data.d[19] = -1.279279;
    data.d[20] = -3.277565;
    data.d[21] = -0.214144;
    data.d[22] = 0.730213;
    data.d[23] = -0.448962;
    data.d[24] = -0.300083;
    data.d[25] = 2.261994;
    data.d[26] = -0.248239;
    data.d[27] = 0.401760;
    data.d[28] = 0.437009;
    data.d[29] = -1.714598;
    data.d[30] = 0.304943;
    data.d[31] = 0.820894;
    return 0.000311;
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
    n = data.d[15] *= n;
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