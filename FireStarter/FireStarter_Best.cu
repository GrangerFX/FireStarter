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
    data.d[0] = -0.753786;
    data.d[1] = 0.006190;
    data.d[2] = -0.808708;
    data.d[3] = -0.438331;
    data.d[4] = 0.767616;
    data.d[5] = -0.009481;
    data.d[6] = 1.047643;
    data.d[7] = 0.808086;
    data.d[8] = -0.815543;
    data.d[9] = -0.687167;
    data.d[10] = 1.140393;
    data.d[11] = 0.593325;
    data.d[12] = -0.920134;
    data.d[13] = -0.899221;
    data.d[14] = 0.691583;
    data.d[15] = -1.080889;
    data.d[16] = 0.317902;
    data.d[17] = -0.216614;
    data.d[18] = 0.532751;
    data.d[19] = -1.858813;
    data.d[20] = -0.861451;
    data.d[21] = 0.249389;
    data.d[22] = -0.369743;
    data.d[23] = 0.696195;
    data.d[24] = -0.029772;
    data.d[25] = -1.913625;
    data.d[26] = -0.337449;
    data.d[27] = -0.793281;
    data.d[28] = 1.259142;
    data.d[29] = -1.136866;
    data.d[30] = -0.222723;
    data.d[31] = 0.499975;
    return 0.000328;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
    data.d[0] = 0.803713;
    data.d[1] = 0.022742;
    data.d[2] = -0.954521;
    data.d[3] = 0.087380;
    data.d[4] = -0.425922;
    data.d[5] = -1.540219;
    data.d[6] = -1.441884;
    data.d[7] = 1.008355;
    data.d[8] = -0.501951;
    data.d[9] = -0.049030;
    data.d[10] = -2.551413;
    data.d[11] = 0.089759;
    data.d[12] = -1.323171;
    data.d[13] = 0.742815;
    data.d[14] = 1.294191;
    data.d[15] = 1.096024;
    data.d[16] = -0.941633;
    data.d[17] = -0.594833;
    data.d[18] = 0.294803;
    data.d[19] = -0.944740;
    data.d[20] = -1.160265;
    data.d[21] = 0.506940;
    data.d[22] = 0.725080;
    data.d[23] = -0.437814;
    data.d[24] = -0.344004;
    data.d[25] = -1.100226;
    data.d[26] = -0.243252;
    data.d[27] = 0.402999;
    data.d[28] = 0.785281;
    data.d[29] = -0.694529;
    data.d[30] = 0.308439;
    data.d[31] = 0.827267;
    return 0.000475;
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
    n = data.d[1] += n;
    n = data.d[4] *= n;
    n = data.d[31] += n;
    n = data.d[11] += n;
    n = data.d[9] *= n;
    n = data.d[13] += n;
    n = data.d[17] *= n;
    n = data.d[11] *= n;
    n = data.d[5] *= n;
    n = data.d[30] += n;
    n = data.d[6] *= n;
    n = data.d[16] *= n;
    n = data.d[15] *= n;
    n = data.d[8] *= n;
    n = data.d[23] *= n;
    n = data.d[13] *= n;
    n = data.d[13] += n;
    n = data.d[26] += n;
    n = data.d[18] *= n;
    n = data.d[27] += n;
    n = data.d[18] += n;
    n = data.d[22] += n;
    n = data.d[1] *= n;
    n = data.d[27] *= n;
    n = data.d[14] += n;
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

GPU_FUNCTION float Sample(const FireStarterData &data, const FireStarterSamples &theta, const FireStarterSamples &target)
{
    float result = 0.0f;
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        result = fmaxf(fabsf(Evaluate(data, theta.s[i]) - target.s[i]), result);
    return result;
} // Sample

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