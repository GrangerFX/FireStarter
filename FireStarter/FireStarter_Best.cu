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
        data.d[0] = -0.047413;
        data.d[1] = -0.172950;
        data.d[2] = 1.137443;
        data.d[3] = -0.319418;
        data.d[4] = -0.350191;
        data.d[5] = -0.349302;
        data.d[6] = 0.349313;
        data.d[7] = -0.651887;
        data.d[8] = 0.872630;
        data.d[9] = -0.199789;
        data.d[10] = 1.467049;
        data.d[11] = 0.920469;
        data.d[12] = 0.628332;
        data.d[13] = -0.428038;
        data.d[14] = -0.612336;
        data.d[15] = -0.402026;
        data.d[16] = 0.951027;
        data.d[17] = -0.730916;
        data.d[18] = 0.481330;
        data.d[19] = 0.271608;
        data.d[20] = -0.016240;
        data.d[21] = 0.624669;
        data.d[22] = 0.672601;
        data.d[23] = -0.185965;
        data.d[24] = -0.166179;
        data.d[25] = -0.319746;
        data.d[26] = -0.715004;
        data.d[27] = -0.866829;
        data.d[28] = -0.834491;
        data.d[29] = 0.592777;
        data.d[30] = -0.198296;
        data.d[31] = -0.267569;
        return 0.347876;
// END //
} // InitData0

GPU_FUNCTION float InitData1(FireStarterData &data)
{
// DATA1 //
        data.d[0] = -0.047413;
        data.d[1] = -0.172950;
        data.d[2] = 1.167042;
        data.d[3] = -0.319418;
        data.d[4] = -0.322093;
        data.d[5] = -0.373075;
        data.d[6] = 0.322315;
        data.d[7] = -0.672631;
        data.d[8] = 0.861074;
        data.d[9] = -0.234361;
        data.d[10] = 1.362526;
        data.d[11] = 0.920469;
        data.d[12] = 0.622801;
        data.d[13] = -0.425306;
        data.d[14] = -0.589229;
        data.d[15] = -0.402026;
        data.d[16] = 0.931271;
        data.d[17] = -0.722145;
        data.d[18] = 0.524104;
        data.d[19] = 0.244486;
        data.d[20] = -0.038326;
        data.d[21] = 0.648227;
        data.d[22] = 0.681991;
        data.d[23] = -0.185965;
        data.d[24] = -0.288163;
        data.d[25] = -0.277479;
        data.d[26] = -0.715004;
        data.d[27] = -0.831675;
        data.d[28] = -0.809437;
        data.d[29] = 0.641106;
        data.d[30] = -0.198296;
        data.d[31] = -0.197822;
        return 0.332074;
// END //
} // InitData1

// XUNITS //
#define FIRESTARTERUNIT FireStarterUnit0
#define FIRESTARTER FireStarter0
#define FIRESHOW FireShow0

class FIRESTARTERUNIT {
public:
    GPU_FUNCTION float Evaluate(FireStarterData data, float n, float t)
    {
// UNITS //
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
        n = data.d[14] += n;
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
// END //
        data.d[0] = t;
        return n;
    } // Evaluate

    GPU_FUNCTION void FireStarter(FireStarterResults *oldResults, FireStarterResults *newResults, const unsigned int population, const unsigned int dataGeneration, const unsigned int programGeneration, const unsigned int variation)
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

        FireStarterData data;
        float result;
        data = oldResults->results[member].data;
        result = oldResults->results[member].result;

        float oldResult = result;
        for (int p = 0; p < PROGRAM_ITERATIONS; p++) {
            result = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
                float n = Evaluate(data, theta.s[i], target.s[i]);
                result = fmaxf(fabsf(n - target.s[i]), result);
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
    } // FireStarter

    GPU_FUNCTION void FireShow(const FireStarterResult bestResult, uchar4 *bufferPixels, const unsigned int bufferWidth, const unsigned int bufferHeight, const unsigned int variation)
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
}; // clase FIRESTARTERUNIT

GPU_GLOBAL void FIRESTARTER(FireStarterResults *oldResults, FireStarterResults *newResults, const unsigned int population, const unsigned int dataGeneration, const unsigned int programGeneration, const unsigned int variation)
{
    FIRESTARTERUNIT fireStarterObject;
    fireStarterObject.FireStarter(oldResults, newResults, population, dataGeneration, programGeneration, variation);
} // FIRESTARTER

GPU_GLOBAL void FIRESHOW(const FireStarterResult bestResult, uchar4 *bufferPixels, const unsigned int bufferWidth, const unsigned int bufferHeight, const unsigned int variation)
{
    FIRESTARTERUNIT fireStarterObject;
    fireStarterObject.FireShow(bestResult, bufferPixels, bufferWidth, bufferHeight, variation);
} // FIRESHOW

// XEND // 