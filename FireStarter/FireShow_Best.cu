#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData& data)
{
    // DATA0 //
    data.d[0] = -2.565936;
    data.d[1] = -0.414878;
    data.d[2] = -0.260024;
    data.d[3] = 0.082467;
    data.d[4] = -0.731964;
    data.d[5] = -0.769724;
    data.d[6] = 1.107640;
    data.d[7] = -1.259022;
    data.d[8] = 1.257741;
    data.d[9] = -0.328947;
    data.d[10] = 1.388998;
    data.d[11] = -0.285556;
    data.d[12] = 4.148570;
    data.d[13] = -1.033612;
    data.d[14] = -4.981372;
    data.d[15] = 2.373589;
    data.d[16] = 1.596620;
    data.d[17] = 0.071248;
    data.d[18] = 0.653411;
    data.d[19] = 0.105763;
    data.d[20] = 0.516136;
    data.d[21] = 0.625334;
    data.d[22] = 1.052780;
    data.d[23] = 1.027601;
    data.d[24] = -1.994995;
    data.d[25] = -0.128492;
    data.d[26] = -5.207252;
    data.d[27] = -2.789170;
    data.d[28] = 0.265129;
    data.d[29] = -1.194432;
    data.d[30] = 0.336862;
    data.d[31] = -2.505444;
    return 1.263852;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData& data)
{
    // DATA1 //
    data.d[0] = -2.691010;
    data.d[1] = -0.667313;
    data.d[2] = -0.260024;
    data.d[3] = -0.177653;
    data.d[4] = -0.706624;
    data.d[5] = -0.783213;
    data.d[6] = 0.825438;
    data.d[7] = -0.633722;
    data.d[8] = 1.160021;
    data.d[9] = -0.328947;
    data.d[10] = 1.364126;
    data.d[11] = -0.780550;
    data.d[12] = 3.303582;
    data.d[13] = -1.109630;
    data.d[14] = -4.889441;
    data.d[15] = 3.119972;
    data.d[16] = 1.372947;
    data.d[17] = -0.127868;
    data.d[18] = 0.653411;
    data.d[19] = 0.043080;
    data.d[20] = 0.516136;
    data.d[21] = 0.625334;
    data.d[22] = 1.052780;
    data.d[23] = 1.721016;
    data.d[24] = -1.227822;
    data.d[25] = -0.128492;
    data.d[26] = -5.763767;
    data.d[27] = -2.945814;
    data.d[28] = 0.265129;
    data.d[29] = -0.566949;
    data.d[30] = 0.524738;
    data.d[31] = -3.211099;
    return 1.234998;
// END //
} // InitData1

GPU_FUNCTION float Evaluate0(FireStarterData data, float n, float t)
{
// EVALUATE0 //
    n = data.d[25] *= n;
    n = data.d[22] += n;
    n = data.d[18] += n;
    n = data.d[25] += n;
    n = data.d[9] *= n;
    n = data.d[13] += n;
    n = data.d[5] += n;
    data.d[11] = n;
    n = data.d[28] *= n;
    n = data.d[2] += n;
    n = data.d[21] *= n;
    n = data.d[21] += n;
    data.d[16] = n;
    n = data.d[13] *= n;
    n = data.d[13] *= n;
    n = data.d[11] *= n;
    n = data.d[26];
    n = data.d[6] += n;
    n = data.d[11];
    n = data.d[20] += n;
    data.d[14] = n;
    n = data.d[10];
    n = data.d[22] += n;
    n = data.d[10] += n;
    n = data.d[14] += n;
    n = data.d[19] *= n;
    n = data.d[13] *= n;
    data.d[27] = n;
    n = data.d[11] *= n;
    n = data.d[26] += n;
    data.d[14] = n;
    n = data.d[13] *= n;
// END //
    data.d[0] = t;
    return n;
} // Evaluate0

GPU_FUNCTION float Evaluate1(FireStarterData data, float n, float t)
{
// EVALUATE0 //
    n = data.d[25] *= n;
    n = data.d[22] += n;
    n = data.d[18] += n;
    n = data.d[25] += n;
    n = data.d[9] *= n;
    n = data.d[13] += n;
    n = data.d[5] += n;
    data.d[11] = n;
    n = data.d[28] *= n;
    n = data.d[2] += n;
    n = data.d[21] *= n;
    n = data.d[21] += n;
    data.d[16] = n;
    n = data.d[13] *= n;
    n = data.d[13] *= n;
    n = data.d[11] *= n;
    n = data.d[26];
    n = data.d[6] += n;
    n = data.d[11];
    n = data.d[20] += n;
    data.d[14] = n;
    n = data.d[10];
    n = data.d[22] += n;
    n = data.d[10] += n;
    n = data.d[14] += n;
    n = data.d[19] *= n;
    n = data.d[13] *= n;
    data.d[27] = n;
    n = data.d[11] *= n;
    n = data.d[26] += n;
    data.d[14] = n;
    n = data.d[13] *= n;
// END //
    data.d[0] = t;
    return n;
} // Evaluate1

GPU_GLOBAL void FireStarter(FireStarterResults *oldResults, FireStarterResults *newResults, const unsigned int population, const unsigned int dataGeneration, const unsigned int programGeneration, const unsigned int variation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;

    unsigned int seed = RANDOMHASH(RANDOMHASH(RANDOMHASH(programGeneration) + dataGeneration) + member);
#if PROGRAM_RANDOM_SAMPLES
    float theta[SAMPLE_ITERATIONS];
    float target[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
        theta[i] = FASTRANDOMNUM(seed) * (2.0f * 3.14159265f);
        target[i] = Target(theta[i], variation);
    }
#endif

    FireStarterData data = oldResults->results[member].data;
    float result = oldResults->results[member].result;
    float oldResult = result;
    if (variation == 0) {
        for (int p = 0; p < PROGRAM_ITERATIONS; p++) {
            result = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
#if PROGRAM_RANDOM_SAMPLES
                float n = Evaluate0(data, theta[i], target[i]);
                result = fmaxf(fabsf(n - target[i]), result);
#else
                float theta = FASTRANDOMNUM(seed) * (2.0f * 3.14159265f);
                float target = Target(theta, variation);
                float n = Evaluate(data, theta, target);
                result = fmaxf(fabsf(n - target), result);
#endif
            }
        }
    } else {
        for (int p = 0; p < PROGRAM_ITERATIONS; p++) {
            result = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
#if PROGRAM_RANDOM_SAMPLES
                float n = Evaluate1(data, theta[i], target[i]);
                result = fmaxf(fabsf(n - target[i]), result);
#else
                float theta = FASTRANDOMNUM(seed) * (2.0f * 3.14159265f);
                float target = Target(theta, variation);
                float n = Evaluate(data, theta, target);
                result = fmaxf(fabsf(n - target), result);
#endif
            }
        }
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

GPU_GLOBAL void FireShow(uchar4* bufferPixels, const unsigned int bufferWidth, const unsigned int bufferHeight)
{
    int x = blockDim.x * blockIdx.x + threadIdx.x;
    int xScale = bufferHeight / 8;
    int yScale = bufferHeight / 16;
    if (x < bufferHeight) {
        int x0 = (bufferWidth / 2) - xScale;
        int x1 = (bufferWidth / 2) + xScale;
        if (x0 >= 0) {
            uchar4& pixel(bufferPixels[x * bufferWidth + x0]);
            pixel.x = 64;
            pixel.y = 128;
            pixel.z = 64;
        };
        if (x1 < bufferWidth) {
            uchar4& pixel(bufferPixels[x * bufferWidth + x1]);
            pixel.x = 64;
            pixel.y = 128;
            pixel.z = 64;
        };
    }
    if (x < bufferWidth) {
        FireStarterData data0;
        FireStarterData data1;
        InitData0(data0);
        InitData1(data1);
        float theta = (x - bufferWidth * 0.5f) * (3.14159265f / xScale) + 3.14159265f;
        float center = bufferHeight * 0.66f;
        float target0 = Target(theta, 0);
        int y = (int)(center + target0 * yScale);
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4& pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = 255;
            pixel.y = 128;
        };
        float target1 = Target(theta, 1);
        y = (int)(center + target1 * yScale);
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4& pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = 255;
            pixel.y = 128;
        };
        y = (int)(center + Evaluate0(data0, theta, target0) * yScale);
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4& pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = pixel.y = pixel.z = 255;
        };
        y = (int)(center + Evaluate1(data1, theta, target1) * yScale);
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4& pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = pixel.y = pixel.z = 255;
        };
    }
} // FireShow