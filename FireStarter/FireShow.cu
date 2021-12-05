#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float InitData0(FireStarterData& data)
{
    // DATA0 //
    data.d[0] = 0.927622;
    data.d[1] = -0.019519;
    data.d[2] = -0.613796;
    data.d[3] = 0.772795;
    data.d[4] = -0.869031;
    data.d[5] = -0.999986;
    data.d[6] = 0.265807;
    data.d[7] = -0.340821;
    data.d[8] = 0.184753;
    data.d[9] = 0.092929;
    data.d[10] = -0.704486;
    data.d[11] = 1.366664;
    data.d[12] = -1.119227;
    data.d[13] = 0.788228;
    data.d[14] = 0.390716;
    data.d[15] = 1.354912;
    data.d[16] = 0.000528;
    data.d[17] = 0.500048;
    data.d[18] = 0.480474;
    data.d[19] = 0.689613;
    data.d[20] = -1.119500;
    data.d[21] = 0.956548;
    data.d[22] = -0.613120;
    data.d[23] = 0.920774;
    data.d[24] = -1.537065;
    data.d[25] = -0.730224;
    data.d[26] = -0.932235;
    data.d[27] = 0.042150;
    data.d[28] = 0.613801;
    data.d[29] = -1.154581;
    data.d[30] = 0.891486;
    data.d[31] = -1.485052;
    return 0.000001;
    // END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData& data)
{
    // DATA1 //
    data.d[0] = 1.132334;
    data.d[1] = -0.634421;
    data.d[2] = -0.639973;
    data.d[3] = 0.054430;
    data.d[4] = 0.216692;
    data.d[5] = -0.982720;
    data.d[6] = -0.196895;
    data.d[7] = -1.726521;
    data.d[8] = -2.640679;
    data.d[9] = 0.126899;
    data.d[10] = -0.687082;
    data.d[11] = 0.636036;
    data.d[12] = -0.297008;
    data.d[13] = 0.975595;
    data.d[14] = -0.153143;
    data.d[15] = 1.265803;
    data.d[16] = 0.268154;
    data.d[17] = -2.228866;
    data.d[18] = 0.791172;
    data.d[19] = 0.550411;
    data.d[20] = -1.567142;
    data.d[21] = 0.994826;
    data.d[22] = -0.631285;
    data.d[23] = -0.357125;
    data.d[24] = -0.111860;
    data.d[25] = -1.479260;
    data.d[26] = -0.671718;
    data.d[27] = 2.997513;
    data.d[28] = 0.481037;
    data.d[29] = -0.294268;
    data.d[30] = 1.163771;
    data.d[31] = -0.940212;
    return 0.000009;
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