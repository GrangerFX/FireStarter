#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float Target(unsigned int variation, float n)
{
    switch (variation) {
        case 0:
            return sinf(n);
        case 1:
            return sinf(n * 1.2f) + n * 0.2f;
        case 2:
            return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
    }
} // Target

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = data.d[24] *= n;
    n = data.d[4] *= n;
    n = data.d[10] += n;
    n = data.d[11] += n;
    n = data.d[9] *= n;
    n = data.d[13] += n;
    n = data.d[17] *= n;
    n = data.d[11] *= n;
    n = data.d[16] += n;
    n = data.d[30] += n;
    n = data.d[6] *= n;
    n = data.d[16] *= n;
    n = data.d[27] *= n;
    n = data.d[9] *= n;
    n = data.d[23] *= n;
    n = data.d[13] *= n;
    n = data.d[13] += n;
    n = data.d[23] *= n;
    n = data.d[25] *= n;
    n = data.d[19] *= n;
    n = data.d[18] += n;
    n = data.d[22] += n;
    n = data.d[26] += n;
    n = data.d[27] *= n;
    n = data.d[10] *= n;
    n = data.d[14] += n;
    n = data.d[13] *= n;
    n = data.d[21] += n;
    n = data.d[7] *= n;
    n = data.d[22] += n;
    n = data.d[2] *= n;
    n = data.d[7] *= n;
// END //
    return n;
} // Evaluate

GPU_FUNCTION float Evolve(FireStarterData data, float n)
{
// EVOLVE //
    return n;
} // Evolve

GPU_GLOBAL void FireStarter(FireStarterResults *results0, FireStarterResults *results1, const unsigned int population, const unsigned int dataGeneration, const unsigned int programGeneration, const unsigned int variation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;

    unsigned int seed = RANDOMHASH(RANDOMHASH(RANDOMHASH(programGeneration) + dataGeneration) + member);
    float target[SAMPLE_ITERATIONS];
    float theta[SAMPLE_ITERATIONS];
    for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
#if 0
        // Randomize the theta samples.
        theta[i] = (i + RANDOMNUM(seed)) * ((2.0f * 3.14159265f) / SAMPLE_ITERATIONS);
#else
        // Fixed theta samples.
        theta[i] = i * ((2.0f * 3.14159265f) / (SAMPLE_ITERATIONS - 1));
#endif
        target[i] = Target(variation, theta[i]);
    }

    FireStarterResults *oldResults = dataGeneration & 1 ? results0 : results1;
    FireStarterResults *newResults = dataGeneration & 1 ? results1 : results0;
    FireStarterData data;
    float result;
    if (!dataGeneration) {
        for (int i = 0; i < PROGRAM_DATA; i++)
            data.d[i] = 1.0f;
        result = START_RESULT;
    } else {
        data = oldResults->results[member].data;
        result = oldResults->results[member].result;
    }
    float oldResult = result;
    for (int p = 0; p < PROGRAM_ITERATIONS; p++) {
        unsigned int d = RANDOMSEED(seed) % PROGRAM_DATA;
        float oldData = data.d[d];
        data.d[d] = oldData + (SMART_RANDOM_FACTOR * RANDOMFACTOR(seed) * result);
        float curResult = 0.0f;
        for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
            float delta = fabsf(Evaluate(data, theta[i]) - target[i]);
            curResult = delta > curResult ? delta : curResult;
        }
        if (curResult < result)
            result = curResult;
        else
            data.d[d] = oldData;
    }
    if (result == oldResult) {
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
        float theta = (x - bufferWidth * 0.5f) * (3.14159265f / xScale) + 3.14159265f;
        float center = bufferHeight * 0.66f;
        float target = Target(variation, theta);
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