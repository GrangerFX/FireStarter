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
        data.d[0] = 1.580735;
        data.d[1] = 0.758414;
        data.d[2] = -0.648935;
        data.d[3] = 0.166266;
        data.d[4] = -0.509611;
        data.d[5] = 0.947664;
        data.d[6] = 0.210950;
        data.d[7] = 0.600432;
        data.d[8] = -0.079547;
        data.d[9] = 0.148595;
        data.d[10] = -0.075063;
        data.d[11] = 0.434368;
        data.d[12] = -1.194534;
        data.d[13] = -0.986029;
        data.d[14] = -2.469195;
        data.d[15] = 1.982675;
        data.d[16] = -1.122837;
        data.d[17] = -0.317400;
        data.d[18] = -0.307318;
        data.d[19] = 1.146983;
        data.d[20] = 0.459423;
        data.d[21] = -1.125686;
        data.d[22] = -1.183524;
        data.d[23] = -1.360111;
        data.d[24] = 0.251463;
        data.d[25] = 0.278306;
        data.d[26] = -1.041278;
        data.d[27] = -0.804024;
        data.d[28] = -0.684762;
        data.d[29] = -0.095280;
        data.d[30] = 0.173055;
        data.d[31] = 0.563730;
        return 0.000054;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
        data.d[0] = 1.327537;
        data.d[1] = 1.200941;
        data.d[2] = -0.661677;
        data.d[3] = -1.538319;
        data.d[4] = 0.623790;
        data.d[5] = 1.002445;
        data.d[6] = 0.226913;
        data.d[7] = 0.856773;
        data.d[8] = 1.955825;
        data.d[9] = 0.104218;
        data.d[10] = -0.062106;
        data.d[11] = -1.387362;
        data.d[12] = -2.375058;
        data.d[13] = -1.078005;
        data.d[14] = -0.230831;
        data.d[15] = 0.998550;
        data.d[16] = 0.641153;
        data.d[17] = 0.592921;
        data.d[18] = 0.944356;
        data.d[19] = 1.756316;
        data.d[20] = -0.089630;
        data.d[21] = -0.858972;
        data.d[22] = -1.465606;
        data.d[23] = -2.454252;
        data.d[24] = -0.973909;
        data.d[25] = 0.452779;
        data.d[26] = -0.527996;
        data.d[27] = 0.427132;
        data.d[28] = -0.894436;
        data.d[29] = 0.257849;
        data.d[30] = 1.730670;
        data.d[31] = -1.820475;
        return 0.000041;
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
        n = data.d[1] *= n;
        n = data.d[28] *= n;
        n = data.d[18] += n;
        n = data.d[15] += n;
        n = data.d[1] *= n;
        n = data.d[16] += n;
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
GPU_FUNCTION float Evaluate0(FireStarterData data, float n, float t)
{
// Evaluate0 //
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
            result = fmaxf(fabsf(n - target), result);
#endif
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