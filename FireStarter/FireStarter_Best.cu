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
        data.d[0] = -0.144107;
        data.d[1] = -0.339229;
        data.d[2] = 0.965740;
        data.d[3] = 0.364749;
        data.d[4] = -0.340325;
        data.d[5] = -1.382959;
        data.d[6] = 0.301176;
        data.d[7] = -0.900361;
        data.d[8] = 0.980433;
        data.d[9] = -0.382423;
        data.d[10] = -0.887520;
        data.d[11] = -1.240167;
        data.d[12] = 0.083569;
        data.d[13] = -0.093231;
        data.d[14] = 1.212560;
        data.d[15] = -0.877499;
        data.d[16] = -1.411958;
        data.d[17] = -0.325689;
        data.d[18] = 0.600608;
        data.d[19] = -0.342989;
        data.d[20] = -0.229896;
        data.d[21] = -0.960776;
        data.d[22] = 0.029901;
        data.d[23] = 0.273275;
        data.d[24] = 0.784661;
        data.d[25] = -1.766604;
        data.d[26] = 3.318160;
        data.d[27] = -3.585535;
        data.d[28] = 0.800173;
        data.d[29] = 0.658488;
        data.d[30] = 0.000233;
        data.d[31] = -1.283347;
        return 0.000213;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
        data.d[0] = -0.144107;
        data.d[1] = -0.339229;
        data.d[2] = 0.965740;
        data.d[3] = 0.364749;
        data.d[4] = -0.340325;
        data.d[5] = -1.382959;
        data.d[6] = 0.301176;
        data.d[7] = -0.900361;
        data.d[8] = 0.980433;
        data.d[9] = -0.382423;
        data.d[10] = -0.887520;
        data.d[11] = -1.240167;
        data.d[12] = 0.083569;
        data.d[13] = -0.093231;
        data.d[14] = 1.212560;
        data.d[15] = -0.877499;
        data.d[16] = -1.411958;
        data.d[17] = -0.325689;
        data.d[18] = 0.600608;
        data.d[19] = -0.342989;
        data.d[20] = -0.229896;
        data.d[21] = -0.960776;
        data.d[22] = 0.029901;
        data.d[23] = 0.273275;
        data.d[24] = 0.784661;
        data.d[25] = -1.766604;
        data.d[26] = 3.318160;
        data.d[27] = -3.585535;
        data.d[28] = 0.800173;
        data.d[29] = 0.658488;
        data.d[30] = 0.000233;
        data.d[31] = -1.283347;
        return 0.000213;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = data.d[31] += n;
    n = data.d[13] *= n;
    n = data.d[18] += n;
    n = data.d[6] += n;
    n = data.d[24] *= n;
    n = data.d[31] *= n;
    n = data.d[23] += n;
    n = data.d[0] *= n;
    n = data.d[11] *= n;
    n = data.d[15] *= n;
    n = data.d[15] *= n;
    n = data.d[6] *= n;
    n = data.d[5] *= n;
    n = data.d[24] += n;
    n = data.d[17] += n;
    n = data.d[0] += n;
    n = data.d[11] += n;
    n = data.d[7] += n;
    n = data.d[7] += n;
    n = data.d[31] *= n;
    n = data.d[31] += n;
    n = data.d[14] += n;
    n = data.d[23] *= n;
    n = data.d[28] *= n;
    n = data.d[18] += n;
    n = data.d[15] += n;
    n = data.d[1] *= n;
    n = data.d[21] += n;
    n = data.d[10] += n;
    n = data.d[1] *= n;
    n = data.d[4] += n;
    n = data.d[2] += n;
// END //
    return n;
} // Evaluate

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

#if 1
    FireStarterData data;
    float result;
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
        for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
#if PROGRAM_RANDOM_SAMPLES
            float n = Evaluate(data, theta[i]);
            curResult = fmaxf(fabsf(n - target[i]), curResult);
#else
            float theta = FASTRANDOMNUM(seed) * (2.0f * 3.14159265f);
            float target = Target(theta, variation);
            float n = Evaluate(data, theta);
            curResult = fmaxf(fabsf(n - target), curResult);
#endif
        }
        if (curResult < result)
            result = curResult;
        else
            data.d[d] = oldData;
    }
#else
    FireStarterData data = oldResults->results[member].data;
    float result = oldResults->results[member].result;
    float oldResult = result;
    for (int p = 0; p < PROGRAM_ITERATIONS; p++) {
        result = 0.0f;
        for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
#if PROGRAM_RANDOM_SAMPLES
            float n = Evaluate(data, theta[i]);
            result = fmaxf(fabsf(n - target[i]), result);
#else
            float theta = FASTRANDOMNUM(seed) * (2.0f * 3.14159265f);
            float target = Target(theta, variation);
            float n = Evaluate(data, theta, target);
            result = fmaxf(fabsf(n - target), result);
#endif
        }
    }
#endif

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

GPU_GLOBAL void FireShow(const FireStarterResult bestResult, uchar4 *bufferPixels, const unsigned int bufferWidth, const unsigned int bufferHeight, const unsigned int variation)
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
        if (variation)
            InitData1(data);
        else
            InitData0(data);
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

// UNITS //
// END // 