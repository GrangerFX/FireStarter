#include "FireStarterDefines.h"
#include "HashRandom.h"

GPU_FUNCTION float Target(float n, unsigned int variation)
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

GPU_FUNCTION float InitData0(FireStarterData &data)
{
// DATA0 //    data.d[0] = -0.269465;
    data.d[1] = 0.798406;
    data.d[2] = -0.589992;
    data.d[3] = 0.665461;
    data.d[4] = 0.313603;
    data.d[5] = 0.075117;
    data.d[6] = -0.837847;
    data.d[7] = 1.007507;
    data.d[8] = 0.350943;
    data.d[9] = 0.539726;
    data.d[10] = -0.028696;
    data.d[11] = -1.001607;
    data.d[12] = 1.654057;
    data.d[13] = 0.515918;
    data.d[14] = 0.476668;
    data.d[15] = -1.359412;
    data.d[16] = 1.101149;
    data.d[17] = -1.015693;
    data.d[18] = 0.533769;
    data.d[19] = -1.908772;
    data.d[20] = 1.683354;
    data.d[21] = -1.422214;
    data.d[22] = 0.036719;
    data.d[23] = -0.793249;
    data.d[24] = -0.462454;
    data.d[25] = -0.813669;
    data.d[26] = -0.968666;
    data.d[27] = 1.019670;
    data.d[28] = 0.005695;
    data.d[29] = -0.948230;
    data.d[30] = -1.023012;
    data.d[31] = 0.010756;
    return 0.000134;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //    data.d[0] = -1.344192;
    data.d[1] = -0.178845;
    data.d[2] = 0.091488;
    data.d[3] = 1.775664;
    data.d[4] = -0.196164;
    data.d[5] = -0.650333;
    data.d[6] = 0.834983;
    data.d[7] = 1.551695;
    data.d[8] = -1.081689;
    data.d[9] = 0.654316;
    data.d[10] = 0.387349;
    data.d[11] = 0.177690;
    data.d[12] = 0.010509;
    data.d[13] = -0.382297;
    data.d[14] = 1.760216;
    data.d[15] = -1.283759;
    data.d[16] = 1.860924;
    data.d[17] = -1.056211;
    data.d[18] = 2.157203;
    data.d[19] = -0.955790;
    data.d[20] = -0.768384;
    data.d[21] = -0.790856;
    data.d[22] = -2.593318;
    data.d[23] = -0.392374;
    data.d[24] = 0.543830;
    data.d[25] = 0.262670;
    data.d[26] = 0.676585;
    data.d[27] = 0.001969;
    data.d[28] = -1.591794;
    data.d[29] = -0.636301;
    data.d[30] = -0.753889;
    data.d[31] = -0.275359;
    return 0.000062;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //    n = data.d[29] += n;
    n = data.d[4] *= n;
    n = data.d[26] += n;
    n = data.d[11] += n;
    n = data.d[9] *= n;
    n = data.d[13] += n;
    n = data.d[17] *= n;
    n = data.d[11] *= n;
    n = data.d[5] *= n;
    n = data.d[30] += n;
    n = data.d[6] *= n;
    n = data.d[16] *= n;
    n = data.d[4] += n;
    n = data.d[9] *= n;
    n = data.d[23] *= n;
    n = data.d[13] *= n;
    n = data.d[13] += n;
    n = data.d[26] += n;
    n = data.d[18] *= n;
    n = data.d[27] += n;
    n = data.d[18] += n;
    n = data.d[22] += n;
    n = data.d[29] *= n;
    n = data.d[23] *= n;
    n = data.d[10] *= n;
    n = data.d[14] += n;
    n = data.d[13] *= n;
    n = data.d[9] += n;
    n = data.d[7] *= n;
    n = data.d[22] += n;
    n = data.d[27] *= n;
    n = data.d[7] *= n;
// END //
    return n;
} // Evaluate

GPU_FUNCTION float Sample(FireStarterData data, FireStarterSamples theta, FireStarterSamples target)
{
    float result = 0.0f;
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        result = fmaxf(fabsf(Evaluate(data, theta.s[i]) - target.s[i]), result);
    return result;
} // Sample

GPU_FUNCTION float Evolve(FireStarterData data, float n)
{
// EVOLVE //
    n = data.d[30] *= n;
    n = data.d[4] *= n;
    n = data.d[26] += n;
    n = data.d[11] += n;
    n = data.d[9] *= n;
    n = data.d[13] += n;
    n = data.d[23] *= n;
    n = data.d[11] *= n;
    n = data.d[16] += n;
    n = data.d[30] += n;
    n = data.d[21] *= n;
    n = data.d[16] *= n;
    n = data.d[15] *= n;
    n = data.d[8] *= n;
    n = data.d[13] *= n;
    n = data.d[13] *= n;
    n = data.d[13] += n;
    n = data.d[26] += n;
    n = data.d[18] *= n;
    n = data.d[27] += n;
    n = data.d[7] += n;
    n = data.d[22] += n;
    n = data.d[1] *= n;
    n = data.d[24] += n;
    n = data.d[10] *= n;
    n = data.d[2] += n;
    n = data.d[26] += n;
    n = data.d[9] += n;
    n = data.d[7] *= n;
    n = data.d[22] += n;
    n = data.d[13] += n;
    n = data.d[7] *= n;
// END //
    return n;
} // Evolve

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
    if (dataGeneration) {
        data = oldResults->results[member].data;
        result = oldResults->results[member].result;
    } else {
#if EVALUATE_EVOLVE
        for (int i = 0; i < PROGRAM_DATA; i++)
            data.d[i] = RANDOMFACTOR(seed);
        result = START_RESULT;
#else
        if (variation == 0)
            result = InitData0(data);
        else if (variation == 1)
            result = InitData1(data);
        else {
            for (int i = 0; i < PROGRAM_DATA; i++)
                data.d[i] = RANDOMFACTOR(seed);
            result = START_RESULT;
        }
#endif
    }

    float oldResult = result;
#if EVOLVE_EVOLVE
    for (int p = 0; p < PROGRAM_ITERATIONS; p++) {
        for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
            float curResult = fabsf(Evaluate(data, theta.s[i]) - target.s[i]);
            Evolve(data, curResult);
        }
    }
    result = Sample(data, theta, target);
#else
    for (int p = 0; p < PROGRAM_ITERATIONS; p++) {
        unsigned int d = RANDOMSEED(seed) % PROGRAM_DATA;
        float oldData = data.d[d];
        data.d[d] = oldData + (SMART_RANDOM_FACTOR * RANDOMFACTOR(seed) * result);
        float curResult = Sample(data, theta, target);
        if (curResult < result)
            result = curResult;
        else
            data.d[d] = oldData;
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
#if EVALUATE_EVOLVE
        FireStarterData data(bestResult.data);
#else
        FireStarterData data;
        if (variation)
            InitData1(data);
        else
            InitData0(data);
#endif
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