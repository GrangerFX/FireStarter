#include "FireStarter2Defines.h"
#include "HashRandom.h"

GPU_FUNCTION float Target(float n)
{
   return sinf(n);
} // Target

GPU_FUNCTION float Target1(float n)
{
   return sinf(n * 1.3f) + n * 0.1f;
} // Target1

GPU_FUNCTION float Evaluate(const FireStarter2Data &workData, float n)
{
    FireStarter2Data data(workData);
    float power = n;
    data.d[0][0] *= power;
    for (int i = 1; i < FS2_PROGRAM_DATA; i++) {
        power *= n;
        float sum = data.d[i][i] * power;
        for (int j = 0; j < i; j++)
            sum += data.d[i][j] * data.d[j][0];
        data.d[i][0] = sum;
    }
    float result = data.d[FS2_PROGRAM_DATA - 1][0];
    return isnan(result) ? 0.0f : result;
} // Evaluate

GPU_GLOBAL void FireStarter2(FireStarter2Results *results0, FireStarter2Results *results1, const unsigned int population, const unsigned int generation, const unsigned int variation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;

    float target[FS2_SAMPLE_ITERATIONS];
    float theta[FS2_SAMPLE_ITERATIONS];
    for (int i = 0; i < FS2_SAMPLE_ITERATIONS; i++) {
        theta[i] = i * ((2.0f * 3.14159265f) / (FS2_SAMPLE_ITERATIONS - 1));
        target[i] = variation ? Target1(theta[i]) : Target(theta[i]);
    }

    FireStarter2Results *oldResults = generation & 1 ? results0 : results1;
    FireStarter2Results *newResults = generation & 1 ? results1 : results0;
    FireStarter2Data data(oldResults->results[member].data);
    float result = oldResults->results[member].result;
    for (unsigned int g = 0; g < FS2_PROGRAM_GENERATIONS; g++) {
        unsigned int seed = RANDOMHASH(RANDOMHASH(generation + g) + member);
        float oldResult = result;
        for (int p = 0; p < FS2_PROGRAM_ITERATIONS; p++) {
            unsigned int di = RANDOMSEED(seed) % FS2_PROGRAM_DATA;
            unsigned int dj = RANDOMSEED(seed) % (di + 1);
            float oldData = data.d[di][dj];
            data.d[di][dj] = oldData + (FS2_SMART_RANDOM_FACTOR * RANDOMFACTOR(seed) * result);
            float curResult = 0.0f;
            for (int i = 0; i < FS2_SAMPLE_ITERATIONS; i++) {
                float delta = fabsf(Evaluate(data, theta[i]) - target[i]);
                curResult = delta > curResult ? delta : curResult;
            }
            if (curResult < result)
                result = curResult;
            else
                data.d[di][dj] = oldData;
        }
        if (result < oldResult) {
            newResults->results[member].data = data;
            newResults->results[member].result = result;
        }
        unsigned int bestIndex = member;
        float bestResult = result;
        for (int i = 0; i < FS2_EVOLUTION_SAMPLES; i++) {
            unsigned int index = RANDOMSEED(seed) % population;
            float curResult = oldResults->results[index].result;
            if (curResult < bestResult) {
                bestResult = curResult;
                bestIndex = index;
            }
        }
        if (bestResult < result) {
            data = oldResults->results[bestIndex].data;
            result = FS2_START_RESULT;
        }
        GPU_THREADFENCE();
        FireStarter2Results* tempResults = oldResults;
        oldResults = newResults;
        newResults = tempResults;
    }
} // FireStarter2

GPU_GLOBAL void FireShow(const FireStarter2Result bestResult, uchar4 *bufferPixels, unsigned int bufferWidth, unsigned int bufferHeight, const unsigned int variation)
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
        float target = variation ? Target1(theta) : Target(theta);
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
} // FireShow;