#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData& data)
{
    // DATA0 //
    data.d[0] = -0.192969;
    data.d[1] = 0.252335;
    data.d[2] = -0.250584;
    data.d[3] = 0.509592;
    data.d[4] = -0.252211;
    data.d[5] = -0.260685;
    data.d[6] = 1.735384;
    data.d[7] = -0.191221;
    data.d[8] = 2.608808;
    data.d[9] = -0.312074;
    data.d[10] = 0.674817;
    data.d[11] = 1.433515;
    data.d[12] = 0.337447;
    data.d[13] = -1.090707;
    data.d[14] = -0.555363;
    data.d[15] = -1.190062;
    data.d[16] = 0.689527;
    data.d[17] = -1.528088;
    data.d[18] = 0.611035;
    data.d[19] = 0.918571;
    data.d[20] = 0.123735;
    data.d[21] = 0.595337;
    data.d[22] = 0.754835;
    data.d[23] = -0.264760;
    data.d[24] = -1.425724;
    data.d[25] = -0.079278;
    data.d[26] = -3.231502;
    data.d[27] = -0.175515;
    data.d[28] = 0.265129;
    data.d[29] = 0.202861;
    data.d[30] = -0.726082;
    data.d[31] = 0.375894;
    return 0.872889;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData& data)
{
    // DATA1 //
    data.d[0] = 0.044042;
    data.d[1] = -0.802690;
    data.d[2] = 1.151759;
    data.d[3] = -0.670691;
    data.d[4] = 0.218735;
    data.d[5] = -0.836452;
    data.d[6] = 0.285239;
    data.d[7] = -0.875054;
    data.d[8] = 1.448197;
    data.d[9] = -0.460524;
    data.d[10] = 1.087251;
    data.d[11] = 0.855509;
    data.d[12] = 0.987104;
    data.d[13] = -0.428119;
    data.d[14] = -0.173114;
    data.d[15] = 0.827016;
    data.d[16] = -0.084370;
    data.d[17] = -1.219372;
    data.d[18] = 0.453580;
    data.d[19] = -0.765766;
    data.d[20] = 0.571945;
    data.d[21] = 0.813121;
    data.d[22] = 0.623714;
    data.d[23] = -0.236578;
    data.d[24] = 0.711891;
    data.d[25] = -0.269517;
    data.d[26] = -2.083058;
    data.d[27] = 0.143856;
    data.d[28] = 0.286597;
    data.d[29] = 0.695847;
    data.d[30] = -0.169623;
    data.d[31] = -1.834661;
    return 0.769035;
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