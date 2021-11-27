#include "FireStarterDefines.h"
#include "HashRandom.h"

class FireStarterBase {
public:
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
        data.d[0] = -0.057475;
        data.d[1] = 0.330176;
        data.d[2] = 1.352571;
        data.d[3] = -0.190089;
        data.d[4] = -1.046445;
        data.d[5] = -0.336630;
        data.d[6] = -0.265325;
        data.d[7] = -0.712290;
        data.d[8] = 0.298461;
        data.d[9] = -0.645800;
        data.d[10] = 0.410186;
        data.d[11] = 0.639279;
        data.d[12] = 0.987592;
        data.d[13] = -0.679773;
        data.d[14] = -0.853643;
        data.d[15] = 0.437802;
        data.d[16] = 0.190630;
        data.d[17] = -0.168219;
        data.d[18] = 1.149230;
        data.d[19] = -0.441974;
        data.d[20] = -0.009849;
        data.d[21] = 0.978282;
        data.d[22] = 0.590069;
        data.d[23] = -1.217305;
        data.d[24] = 0.060815;
        data.d[25] = -1.464837;
        data.d[26] = -0.705404;
        data.d[27] = -0.732920;
        data.d[28] = -0.279392;
        data.d[29] = 0.933104;
        data.d[30] = 0.000377;
        data.d[31] = -0.196913;
        return 0.207320;
// END //
    } // InitData0

    GPU_FUNCTION float InitData1(FireStarterData &data)
    {
// DATA1 //
        data.d[0] = -0.057475;
        data.d[1] = 0.330176;
        data.d[2] = 1.387075;
        data.d[3] = -0.242042;
        data.d[4] = -1.067610;
        data.d[5] = -0.347033;
        data.d[6] = -0.265325;
        data.d[7] = -0.779285;
        data.d[8] = 0.328630;
        data.d[9] = -0.735442;
        data.d[10] = 0.411000;
        data.d[11] = 0.628302;
        data.d[12] = 0.967639;
        data.d[13] = -0.610049;
        data.d[14] = -0.853643;
        data.d[15] = 0.452134;
        data.d[16] = 0.136096;
        data.d[17] = -0.168219;
        data.d[18] = 1.142390;
        data.d[19] = -0.446179;
        data.d[20] = -0.040486;
        data.d[21] = 0.963508;
        data.d[22] = 0.590069;
        data.d[23] = -1.196800;
        data.d[24] = 0.086973;
        data.d[25] = -1.489458;
        data.d[26] = -0.669065;
        data.d[27] = -0.796497;
        data.d[28] = -0.295778;
        data.d[29] = 0.869636;
        data.d[30] = -0.006840;
        data.d[31] = -0.207930;
        return 0.318712;
// END //
    } // InitData1

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
        n = data.d[23] *= n;
        n = data.d[28] *= n;
        n = data.d[18] += n;
        n = data.d[15] += n;
        n = data.d[1] *= n;
        n = data.d[8] += n;
        n = data.d[10] += n;
        n = data.d[15] += n;
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
}; // clase FireStarterBase

GPU_GLOBAL void FireStarter(FireStarterResults *oldResults, FireStarterResults *newResults, const unsigned int population, const unsigned int dataGeneration, const unsigned int programGeneration, const unsigned int variation)
{
    FireStarterBase fireStarterObject;
    fireStarterObject.FireStarter(oldResults, newResults, population, dataGeneration, programGeneration, variation);
} // FireStarter

GPU_GLOBAL void FireShow(const FireStarterResult bestResult, uchar4 *bufferPixels, const unsigned int bufferWidth, const unsigned int bufferHeight, const unsigned int variation)
{
    FireStarterBase fireStarterObject;
    fireStarterObject.FireShow(bestResult, bufferPixels, bufferWidth, bufferHeight, variation);
} // FireStarter
