#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
    data.d[0] = 0.756908;
    data.d[1] = -0.684662;
    data.d[2] = 0.020977;
    data.d[3] = -0.467154;
    data.d[4] = 1.023636;
    data.d[5] = -0.434920;
    data.d[6] = 0.705632;
    data.d[7] = 0.927184;
    data.d[8] = 0.878087;
    data.d[9] = -0.952493;
    data.d[10] = 0.135920;
    data.d[11] = -0.791475;
    data.d[12] = -1.146503;
    data.d[13] = 0.194744;
    data.d[14] = 1.152732;
    data.d[15] = -1.471425;
    data.d[16] = 0.950403;
    data.d[17] = 0.254735;
    data.d[18] = 0.068418;
    data.d[19] = 0.227004;
    data.d[20] = -0.418878;
    data.d[21] = -1.708042;
    data.d[22] = 0.044901;
    data.d[23] = -0.917722;
    data.d[24] = 0.714902;
    data.d[25] = -1.560055;
    data.d[26] = 0.185353;
    data.d[27] = -0.033628;
    data.d[28] = 1.272107;
    data.d[29] = -0.568865;
    data.d[30] = -2.741373;
    data.d[31] = -1.599887;
    return 0.000152;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = -0.176281;
    data.d[1] = 1.775881;
    data.d[2] = -1.945102;
    data.d[3] = -1.752299;
    data.d[4] = 0.218397;
    data.d[5] = 0.940951;
    data.d[6] = 1.151277;
    data.d[7] = 1.313326;
    data.d[8] = 0.939118;
    data.d[9] = -0.059581;
    data.d[10] = 1.730539;
    data.d[11] = -0.881467;
    data.d[12] = -0.053114;
    data.d[13] = 0.991419;
    data.d[14] = 0.574088;
    data.d[15] = 2.020001;
    data.d[16] = -0.165072;
    data.d[17] = 0.417121;
    data.d[18] = -0.880133;
    data.d[19] = -0.520093;
    data.d[20] = 0.367023;
    data.d[21] = -0.663077;
    data.d[22] = 0.733362;
    data.d[23] = -0.875619;
    data.d[24] = -1.173129;
    data.d[25] = 2.466939;
    data.d[26] = -1.218150;
    data.d[27] = -0.226226;
    data.d[28] = -0.671813;
    data.d[29] = 0.235083;
    data.d[30] = -1.661086;
    data.d[31] = -0.051782;
    return 0.000287;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = data.d[2] += n;
    n = data.d[19] += n;
    n = data.d[0] += n;
    n = data.d[6] += n;
    n = data.d[22] += n;
    n = data.d[20] += n;
    n = data.d[17] *= n;
    n = data.d[9] += n;
    n = data.d[5] *= n;
    n = data.d[12] *= n;
    n = data.d[11] += n;
    n = data.d[12] += n;
    n = data.d[27] *= n;
    n = data.d[9] *= n;
    n = data.d[19] *= n;
    n = data.d[12] += n;
    n = data.d[27] += n;
    n = data.d[27] += n;
    n = data.d[17] += n;
    n = data.d[23] += n;
    n = data.d[29] *= n;
    n = data.d[29] += n;
    n = data.d[18] *= n;
    n = data.d[12] += n;
    n = data.d[14] += n;
    n = data.d[7] *= n;
    n = data.d[23] *= n;
    n = data.d[15] += n;
    n = data.d[25] *= n;
    n = data.d[17] *= n;
    n = data.d[11] *= n;
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