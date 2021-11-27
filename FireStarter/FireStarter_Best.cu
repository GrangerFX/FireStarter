#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float Target(float n, unsigned int variation)
{
    switch (variation) {
        default:
        case 0:
            return sinf(n);
        case 1:
            return sinf(n * 1.2f) + n * 0.2f;
        case 2:
            return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
    }
} // Target

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //
        data.d[0] = -0.453363;
        data.d[1] = 0.160246;
        data.d[2] = -0.101989;
        data.d[3] = -0.162948;
        data.d[4] = -1.137801;
        data.d[5] = -0.009399;
        data.d[6] = 0.293289;
        data.d[7] = -0.982129;
        data.d[8] = 0.342953;
        data.d[9] = -0.473192;
        data.d[10] = 1.588537;
        data.d[11] = 0.646244;
        data.d[12] = 0.879873;
        data.d[13] = -0.199574;
        data.d[14] = -0.345954;
        data.d[15] = -0.159410;
        data.d[16] = 0.411471;
        data.d[17] = -0.997955;
        data.d[18] = 0.563808;
        data.d[19] = -0.623502;
        data.d[20] = 0.312260;
        data.d[21] = 0.544296;
        data.d[22] = 1.216803;
        data.d[23] = -0.488163;
        data.d[24] = -0.601462;
        data.d[25] = 0.016387;
        data.d[26] = -0.991953;
        data.d[27] = -0.749502;
        data.d[28] = -0.682352;
        data.d[29] = 0.520723;
        data.d[30] = -0.092384;
        data.d[31] = 0.003609;
        return 0.572442;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
        data.d[0] = -0.424654;
        data.d[1] = 0.183745;
        data.d[2] = -0.009871;
        data.d[3] = -0.100392;
        data.d[4] = -1.051391;
        data.d[5] = -0.018687;
        data.d[6] = 0.260942;
        data.d[7] = -1.029153;
        data.d[8] = 0.346052;
        data.d[9] = -0.473192;
        data.d[10] = 1.588537;
        data.d[11] = 0.628405;
        data.d[12] = 0.879873;
        data.d[13] = -0.063761;
        data.d[14] = -0.285724;
        data.d[15] = -0.179255;
        data.d[16] = 0.430686;
        data.d[17] = -0.997955;
        data.d[18] = 0.560540;
        data.d[19] = -0.639050;
        data.d[20] = 0.251312;
        data.d[21] = 0.551717;
        data.d[22] = 1.163627;
        data.d[23] = -0.439451;
        data.d[24] = -0.569533;
        data.d[25] = -0.037889;
        data.d[26] = -0.938731;
        data.d[27] = -0.788200;
        data.d[28] = -0.682352;
        data.d[29] = 0.530236;
        data.d[30] = -0.127723;
        data.d[31] = 0.040544;
        return 0.583413;
// END //
} // InitData1

// UNITS //
GPU_FUNCTION float Evaluate0(FireStarterData data, float n, float t)
{
    // UNITS //
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

GPU_GLOBAL void FireStarter0(FireStarterResults* oldResults, FireStarterResults* newResults, const unsigned int population, const unsigned int dataGeneration, const unsigned int programGeneration, const unsigned int variation)
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

    FireStarterData data;
    float result;
    data = oldResults->results[member].data;
    result = oldResults->results[member].result;

    float oldResult = result;
    for (int p = 0; p < PROGRAM_ITERATIONS; p++) {
        result = 0.0f;
        for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
            float n = Evaluate0(data, theta.s[i], target.s[i]);
            result = fmaxf(fabsf(n - target.s[i]), result);
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
} // FireStarter0

GPU_GLOBAL void FireShow0(const FireStarterResult bestResult, uchar4 *bufferPixels, const unsigned int bufferWidth, const unsigned int bufferHeight, const unsigned int variation)
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
        FireStarterData data;
        if (variation)
            InitData1(data);
        else
            InitData0(data);
        float theta = (x - bufferWidth * 0.5f) * (3.14159265f / xScale) + 3.14159265f;
        float center = bufferHeight * 0.66f;
        float target = Target(theta, variation);
        int y = (int)(center + target * yScale);
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4& pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = 255;
            pixel.y = 128;
        };
        y = (int)(center + Evaluate0(bestResult.data, theta, target) * yScale);
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4& pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = pixel.y = pixel.z = 255;
        };
    }
} // FireShow0
// END // 