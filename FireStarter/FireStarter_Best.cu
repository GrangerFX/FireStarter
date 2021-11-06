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
// DATA0 //    data.d[0] = -0.211381;
    data.d[1] = -1.182487;
    data.d[2] = 0.886450;
    data.d[3] = 0.319841;
    data.d[4] = 0.207466;
    data.d[5] = -0.546187;
    data.d[6] = 0.025999;
    data.d[7] = -2.228291;
    data.d[8] = -0.514347;
    data.d[9] = 0.923823;
    data.d[10] = -0.625583;
    data.d[11] = -0.096603;
    data.d[12] = -0.052112;
    data.d[13] = -0.223963;
    data.d[14] = 1.087283;
    data.d[15] = -1.398868;
    data.d[16] = -0.102123;
    data.d[17] = -0.797429;
    data.d[18] = 0.261427;
    data.d[19] = -1.444963;
    data.d[20] = 0.925561;
    data.d[21] = -0.902201;
    data.d[22] = -0.864216;
    data.d[23] = -1.305764;
    data.d[24] = -0.199257;
    data.d[25] = -0.148581;
    data.d[26] = 0.440928;
    data.d[27] = 0.317048;
    data.d[28] = 1.142240;
    data.d[29] = -1.015648;
    data.d[30] = 1.333673;
    data.d[31] = 0.759174;
    return 0.000011;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //    data.d[0] = -0.166160;
    data.d[1] = -2.278813;
    data.d[2] = 0.859754;
    data.d[3] = 0.340734;
    data.d[4] = 0.209370;
    data.d[5] = -0.587915;
    data.d[6] = 0.108803;
    data.d[7] = -2.287449;
    data.d[8] = 0.471762;
    data.d[9] = 1.325801;
    data.d[10] = -0.522359;
    data.d[11] = -0.082557;
    data.d[12] = -0.651909;
    data.d[13] = -0.160432;
    data.d[14] = 1.212057;
    data.d[15] = -1.943312;
    data.d[16] = 1.789149;
    data.d[17] = -0.601891;
    data.d[18] = 0.140887;
    data.d[19] = -1.345948;
    data.d[20] = -0.581739;
    data.d[21] = -0.763631;
    data.d[22] = -0.865605;
    data.d[23] = -1.312771;
    data.d[24] = -0.019846;
    data.d[25] = 1.329434;
    data.d[26] = 0.343681;
    data.d[27] = 0.286991;
    data.d[28] = 2.600456;
    data.d[29] = -1.012977;
    data.d[30] = 0.583097;
    data.d[31] = -0.124195;
    return 0.000015;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //    n = data.d[22] += n;
    n = data.d[4] *= n;
    n = data.d[10] += n;
    n = data.d[11] += n;
    n = data.d[9] *= n;
    n = data.d[13] += n;
    n = data.d[17] *= n;
    n = data.d[11] *= n;
    n = data.d[14] += n;
    n = data.d[5] += n;
    n = data.d[6] *= n;
    n = data.d[3] += n;
    n = data.d[4] += n;
    n = data.d[3] *= n;
    n = data.d[23] *= n;
    n = data.d[13] *= n;
    n = data.d[13] += n;
    n = data.d[26] += n;
    n = data.d[18] *= n;
    n = data.d[27] += n;
    n = data.d[9] += n;
    n = data.d[22] += n;
    n = data.d[9] += n;
    n = data.d[27] *= n;
    n = data.d[2] += n;
    n = data.d[14] += n;
    n = data.d[14] *= n;
    n = data.d[9] += n;
    n = data.d[7] *= n;
    n = data.d[22] += n;
    n = data.d[27] *= n;
    n = data.d[26] *= n;
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