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
// DATA0 //    data.d[0] = -0.337220;
    data.d[1] = -0.127229;
    data.d[2] = -0.302102;
    data.d[3] = -0.833672;
    data.d[4] = 0.771003;
    data.d[5] = -0.094546;
    data.d[6] = -0.538713;
    data.d[7] = -0.655370;
    data.d[8] = 0.883021;
    data.d[9] = -0.992215;
    data.d[10] = 0.880311;
    data.d[11] = 0.680229;
    data.d[12] = -0.322745;
    data.d[13] = 0.105938;
    data.d[14] = 0.345092;
    data.d[15] = 0.938742;
    data.d[16] = 0.205617;
    data.d[17] = 0.704369;
    data.d[18] = 0.170157;
    data.d[19] = 0.109533;
    data.d[20] = 0.375438;
    data.d[21] = -0.850939;
    data.d[22] = -1.018806;
    data.d[23] = -0.741873;
    data.d[24] = 0.439227;
    data.d[25] = -0.760130;
    data.d[26] = 0.351746;
    data.d[27] = 0.530039;
    data.d[28] = 0.348915;
    data.d[29] = -0.689322;
    data.d[30] = 0.099837;
    data.d[31] = 0.610040;
    return 0.356891;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //    data.d[0] = 0.269834;
    data.d[1] = -0.172258;
    data.d[2] = 0.334809;
    data.d[3] = -0.147649;
    data.d[4] = -0.208712;
    data.d[5] = -0.037736;
    data.d[6] = 0.459064;
    data.d[7] = -0.064369;
    data.d[8] = -0.271912;
    data.d[9] = -0.649465;
    data.d[10] = -0.476086;
    data.d[11] = 0.640687;
    data.d[12] = -0.558609;
    data.d[13] = -0.069103;
    data.d[14] = 0.109150;
    data.d[15] = 0.204861;
    data.d[16] = -0.344943;
    data.d[17] = 0.894434;
    data.d[18] = 0.277514;
    data.d[19] = -0.393075;
    data.d[20] = -0.841112;
    data.d[21] = 0.893529;
    data.d[22] = -0.965265;
    data.d[23] = -0.051932;
    data.d[24] = 0.107575;
    data.d[25] = 0.128336;
    data.d[26] = 0.783648;
    data.d[27] = 0.608352;
    data.d[28] = -0.168361;
    data.d[29] = -0.135213;
    data.d[30] = -0.270703;
    data.d[31] = -0.701585;
    return 0.443544;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //    n = data.d[1] += n;
    n = data.d[4] *= n;
    n = data.d[31];
    n = data.d[11];
    n = data.d[31] *= n;
    n = data.d[13] += n;
    n = data.d[23] *= n;
    data.d[11] = n;
    n = data.d[5] *= n;
    n = data.d[30];
    n = data.d[6] *= n;
    n = data.d[16] *= n;
    n = data.d[4];
    n = data.d[8] *= n;
    data.d[23] = n;
    n = data.d[13] *= n;
    n = data.d[13];
    n = data.d[26];
    n = data.d[18] += n;
    n = data.d[27];
    n = data.d[18] += n;
    n = data.d[22];
    n = data.d[20] += n;
    n = data.d[21] *= n;
    n = data.d[14] += n;
    n = data.d[14];
    n = data.d[13] *= n;
    n = data.d[9] += n;
    data.d[7] = n;
    n = data.d[22];
    data.d[2] = n;
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
    n = data.d[12] *= n;
    n = data.d[5];
    n = data.d[6] += n;
    n = data.d[2] += n;
    n = data.d[9] *= n;
    n = data.d[11] *= n;
    data.d[17] = n;
    n = data.d[6] += n;
    data.d[28] = n;
    n = data.d[30] *= n;
    n = data.d[29];
    n = data.d[6];
    n = data.d[4];
    n = data.d[9] *= n;
    data.d[23] = n;
    n = data.d[13] *= n;
    n = data.d[13];
    n = data.d[26];
    n = data.d[18] *= n;
    n = data.d[27];
    data.d[17] = n;
    n = data.d[16] *= n;
    n = data.d[29] *= n;
    data.d[27] = n;
    n = data.d[15];
    n = data.d[6];
    n = data.d[13] *= n;
    n = data.d[28] += n;
    data.d[7] = n;
    data.d[24] = n;
    data.d[27] = n;
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
#if EVOLVE
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
#if EVOLVE_EVOLVE || TEST_EVOLVE
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