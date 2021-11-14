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
    data.d[0] = 0.927622;
    data.d[1] = -0.019519;
    data.d[2] = -0.613796;
    data.d[3] = 0.772795;
    data.d[4] = -0.869031;
    data.d[5] = -0.999986;
    data.d[6] = 0.265807;
    data.d[7] = -0.340821;
    data.d[8] = 0.184753;
    data.d[9] = 0.092929;
    data.d[10] = -0.704486;
    data.d[11] = 1.366664;
    data.d[12] = -1.119227;
    data.d[13] = 0.788228;
    data.d[14] = 0.390716;
    data.d[15] = 1.354912;
    data.d[16] = 0.000528;
    data.d[17] = 0.500048;
    data.d[18] = 0.480474;
    data.d[19] = 0.689613;
    data.d[20] = -1.119500;
    data.d[21] = 0.956548;
    data.d[22] = -0.613120;
    data.d[23] = 0.920774;
    data.d[24] = -1.537065;
    data.d[25] = -0.730224;
    data.d[26] = -0.932235;
    data.d[27] = 0.042150;
    data.d[28] = 0.613801;
    data.d[29] = -1.154581;
    data.d[30] = 0.891486;
    data.d[31] = -1.485052;
    return 0.000001;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 1.132334;
    data.d[1] = -0.634421;
    data.d[2] = -0.639973;
    data.d[3] = 0.054430;
    data.d[4] = 0.216692;
    data.d[5] = -0.982720;
    data.d[6] = -0.196895;
    data.d[7] = -1.726521;
    data.d[8] = -2.640679;
    data.d[9] = 0.126899;
    data.d[10] = -0.687082;
    data.d[11] = 0.636036;
    data.d[12] = -0.297008;
    data.d[13] = 0.975595;
    data.d[14] = -0.153143;
    data.d[15] = 1.265803;
    data.d[16] = 0.268154;
    data.d[17] = -2.228866;
    data.d[18] = 0.791172;
    data.d[19] = 0.550411;
    data.d[20] = -1.567142;
    data.d[21] = 0.994826;
    data.d[22] = -0.631285;
    data.d[23] = -0.357125;
    data.d[24] = -0.111860;
    data.d[25] = -1.479260;
    data.d[26] = -0.671718;
    data.d[27] = 2.997513;
    data.d[28] = 0.481037;
    data.d[29] = -0.294268;
    data.d[30] = 1.163771;
    data.d[31] = -0.940212;
    return 0.000009;
// END //
} // InitData1

GPU_FUNCTION float Operation(FireStarterData &data, unsigned int operation, float n)
{
// OPERATIONS //
    switch (operation) {
        case 0: return data.d[0] += n;
        case 1: return data.d[0] *= n;
        case 2: return data.d[1] += n;
        case 3: return data.d[1] *= n;
        case 4: return data.d[2] += n;
        case 5: return data.d[2] *= n;
        case 6: return data.d[3] += n;
        case 7: return data.d[3] *= n;
        case 8: return data.d[4] += n;
        case 9: return data.d[4] *= n;
        case 10: return data.d[5] += n;
        case 11: return data.d[5] *= n;
        case 12: return data.d[6] += n;
        case 13: return data.d[6] *= n;
        case 14: return data.d[7] += n;
        case 15: return data.d[7] *= n;
        case 16: return data.d[8] += n;
        case 17: return data.d[8] *= n;
        case 18: return data.d[9] += n;
        case 19: return data.d[9] *= n;
        case 20: return data.d[10] += n;
        case 21: return data.d[10] *= n;
        case 22: return data.d[11] += n;
        case 23: return data.d[11] *= n;
        case 24: return data.d[12] += n;
        case 25: return data.d[12] *= n;
        case 26: return data.d[13] += n;
        case 27: return data.d[13] *= n;
        case 28: return data.d[14] += n;
        case 29: return data.d[14] *= n;
        case 30: return data.d[15] += n;
        case 31: return data.d[15] *= n;
        case 32: return data.d[16] += n;
        case 33: return data.d[16] *= n;
        case 34: return data.d[17] += n;
        case 35: return data.d[17] *= n;
        case 36: return data.d[18] += n;
        case 37: return data.d[18] *= n;
        case 38: return data.d[19] += n;
        case 39: return data.d[19] *= n;
        case 40: return data.d[20] += n;
        case 41: return data.d[20] *= n;
        case 42: return data.d[21] += n;
        case 43: return data.d[21] *= n;
        case 44: return data.d[22] += n;
        case 45: return data.d[22] *= n;
        case 46: return data.d[23] += n;
        case 47: return data.d[23] *= n;
        case 48: return data.d[24] += n;
        case 49: return data.d[24] *= n;
        case 50: return data.d[25] += n;
        case 51: return data.d[25] *= n;
        case 52: return data.d[26] += n;
        case 53: return data.d[26] *= n;
        case 54: return data.d[27] += n;
        case 55: return data.d[27] *= n;
        case 56: return data.d[28] += n;
        case 57: return data.d[28] *= n;
        case 58: return data.d[29] += n;
        case 59: return data.d[29] *= n;
        case 60: return data.d[30] += n;
        case 61: return data.d[30] *= n;
        case 62: return data.d[31] += n;
        case 63: return data.d[31] *= n;
    }
// END //
    return n;
} // Operation

GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
// EVALUATE //
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
    return n;
} // Evaluate

GPU_FUNCTION float Sample(const FireStarterData &data, const FireStarterSamples &theta, const FireStarterSamples &target)
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