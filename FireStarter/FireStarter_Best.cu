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
        data.d[0] = -0.231094;
        data.d[1] = 0.314978;
        data.d[2] = 0.943753;
        data.d[3] = 1.417527;
        data.d[4] = 1.080765;
        data.d[5] = -0.642088;
        data.d[6] = 0.691657;
        data.d[7] = 0.316426;
        data.d[8] = -0.332182;
        data.d[9] = 0.039344;
        data.d[10] = -0.963899;
        data.d[11] = -0.288712;
        data.d[12] = -0.028155;
        data.d[13] = 0.418761;
        data.d[14] = -1.201987;
        data.d[15] = -0.803047;
        data.d[16] = 2.261042;
        data.d[17] = -0.424711;
        data.d[18] = 1.701531;
        data.d[19] = 0.789136;
        data.d[20] = 0.330827;
        data.d[21] = 1.091559;
        data.d[22] = -0.780795;
        data.d[23] = -0.106405;
        data.d[24] = 1.761618;
        data.d[25] = 0.756866;
        data.d[26] = -0.840901;
        data.d[27] = -0.722578;
        data.d[28] = -1.469852;
        data.d[29] = -0.696964;
        data.d[30] = -0.157797;
        data.d[31] = -0.632963;
        return 0.000004;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
        data.d[0] = 1.095437;
        data.d[1] = 1.459830;
        data.d[2] = 0.939816;
        data.d[3] = 1.620313;
        data.d[4] = -0.105597;
        data.d[5] = -0.642831;
        data.d[6] = 0.637713;
        data.d[7] = -0.857517;
        data.d[8] = -0.584063;
        data.d[9] = 0.047349;
        data.d[10] = -0.886218;
        data.d[11] = -1.260959;
        data.d[12] = -0.419820;
        data.d[13] = 0.475645;
        data.d[14] = -1.801600;
        data.d[15] = -0.217169;
        data.d[16] = -0.479688;
        data.d[17] = -0.793051;
        data.d[18] = 1.805018;
        data.d[19] = 0.411949;
        data.d[20] = -0.712033;
        data.d[21] = 1.272655;
        data.d[22] = -0.675387;
        data.d[23] = 2.155572;
        data.d[24] = 0.078462;
        data.d[25] = 0.872758;
        data.d[26] = -0.666463;
        data.d[27] = 0.818706;
        data.d[28] = -1.079401;
        data.d[29] = 0.826292;
        data.d[30] = 1.889514;
        data.d[31] = -0.913819;
        return 0.000009;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n, float t)
{
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
    data.d[0] = t;
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
            float n = Evaluate(data, theta[i], target[i]);
            curResult = fmaxf(fabsf(n - target[i]), curResult);
#else
            float theta = FASTRANDOMNUM(seed) * (2.0f * 3.14159265f);
            float target = Target(theta, variation);
            float n = Evaluate(data, theta, target);
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
            float n = Evaluate(data, theta[i], target[i]);
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
        y = (int)(center + Evaluate(bestResult.data, theta, target) * yScale);
        if ((y >= 0) && (y < bufferHeight)) {
            uchar4 &pixel(bufferPixels[y * bufferWidth + x]);
            pixel.x = pixel.y = pixel.z = 255;
        };
    }
} // FireShow

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
#if PROGRAM_RANDOM_SAMPLES
    float theta[SAMPLE_ITERATIONS];
    float target[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
        theta[i] = FASTRANDOMNUM(seed) * (2.0f * 3.14159265f);
        target[i] = Target(theta[i], variation);
    }
#endif

    FireStarterData data;
    float result;
    data = oldResults->results[member].data;
    result = oldResults->results[member].result;

    float oldResult = result;
    for (int p = 0; p < PROGRAM_ITERATIONS; p++) {
        result = 0.0f;
        for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
#if PROGRAM_RANDOM_SAMPLES
            float n = Evaluate0(data, theta[i], target[i]);
            result += fabsf(n - target[i]);
#else
            float theta = FASTRANDOMNUM(seed) * (2.0f * 3.14159265f);
            float target = Target(theta, variation);
            float n = Evaluate0(data, theta, target);
            result += fabsf(n - target);
#endif
        }
    }
    result /= SAMPLE_ITERATIONS;

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