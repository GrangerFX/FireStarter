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
// DATA0 //
    data.d[0] = 0.100153;
    data.d[1] = 0.487945;
    data.d[2] = -1.419902;
    data.d[3] = -0.325843;
    data.d[4] = 0.260278;
    data.d[5] = 0.165664;
    data.d[6] = -0.434887;
    data.d[7] = -1.127798;
    data.d[8] = 1.158658;
    data.d[9] = 0.307317;
    data.d[10] = -0.631682;
    data.d[11] = -0.504768;
    data.d[12] = -0.488875;
    data.d[13] = -0.720084;
    data.d[14] = -0.211651;
    data.d[15] = 0.628084;
    data.d[16] = -0.448725;
    data.d[17] = -0.039377;
    data.d[18] = 0.341084;
    data.d[19] = -1.827547;
    data.d[20] = -0.736292;
    data.d[21] = 0.721134;
    data.d[22] = 0.816500;
    data.d[23] = -0.684617;
    data.d[24] = 0.428595;
    data.d[25] = -0.005273;
    data.d[26] = 0.000043;
    data.d[27] = 1.118789;
    data.d[28] = -0.765138;
    data.d[29] = -1.056316;
    data.d[30] = -1.390087;
    data.d[31] = -2.028860;
    return 0.000015;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.012655;
    data.d[1] = -0.925922;
    data.d[2] = -1.216603;
    data.d[3] = -1.056480;
    data.d[4] = 0.376226;
    data.d[5] = -0.222696;
    data.d[6] = -0.408317;
    data.d[7] = -1.076391;
    data.d[8] = -1.930611;
    data.d[9] = 0.564753;
    data.d[10] = 0.351879;
    data.d[11] = 0.833126;
    data.d[12] = -0.718220;
    data.d[13] = -0.220563;
    data.d[14] = -0.487900;
    data.d[15] = 0.795376;
    data.d[16] = -0.771463;
    data.d[17] = -1.152840;
    data.d[18] = 0.403695;
    data.d[19] = -0.877808;
    data.d[20] = -0.787888;
    data.d[21] = 0.972398;
    data.d[22] = 0.884714;
    data.d[23] = -0.962597;
    data.d[24] = 0.826173;
    data.d[25] = 0.464649;
    data.d[26] = -0.935345;
    data.d[27] = -0.276157;
    data.d[28] = -0.709282;
    data.d[29] = -1.009900;
    data.d[30] = -0.982744;
    data.d[31] = 1.065102;
    return 0.000021;
// END //
} // InitData1

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
    n = data.d[1] += n;
    n = data.d[4] *= n;
    n = data.d[29] += n;
    n = data.d[2] *= n;
    n = data.d[28] *= n;
    n = data.d[22] *= n;
    n = data.d[16] += n;
    n = data.d[28] *= n;
    n = data.d[18] *= n;
    n = data.d[30];
    n = data.d[2] += n;
    n = data.d[9] *= n;
    n = data.d[14];
    n = data.d[29] += n;
    n = data.d[30] *= n;
    n = data.d[0] *= n;
    n = data.d[13] += n;
    n = data.d[0] += n;
    n = data.d[6] += n;
    n = data.d[16] += n;
    n = data.d[18] += n;
    n = data.d[9] += n;
    n = data.d[29] *= n;
    data.d[27] = n;
    n = data.d[20] *= n;
    n = data.d[29] *= n;
    n = data.d[13] *= n;
    n = data.d[9] += n;
    n = data.d[10] += n;
    n = data.d[29] *= n;
    n = data.d[24] += n;
    n = data.d[16] += n;
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