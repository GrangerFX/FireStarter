
class FIRESTARTERUNIT {
public:
    GPU_FUNCTION float Evaluate(FireStarterData data, float n, float t)
    {
        // UNITS //
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
        data.d[0] = t;
        return n;
    } // Evaluate

    GPU_FUNCTION void FireStarter(FireStarterResults* oldResults, FireStarterResults* newResults, const unsigned int population, const unsigned int dataGeneration, const unsigned int programGeneration, const unsigned int variation)
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

    GPU_FUNCTION void FireShow(const FireStarterResult bestResult, uchar4* bufferPixels, const unsigned int bufferWidth, const unsigned int bufferHeight, const unsigned int variation)
    {
        int x = blockDim.x * blockIdx.x + threadIdx.x;
        int xScale = bufferHeight / 8;
        int yScale = bufferHeight / 16;
        if (x < bufferHeight) {
            int x0 = (bufferWidth / 2) - xScale;
            int x1 = (bufferWidth / 2) + xScale;
            if (x0 >= 0) {
                uchar4& pixel(bufferPixels[x * bufferWidth + x0]);
                pixel.x = 64;
                pixel.y = 128;
                pixel.z = 64;
            };
            if (x1 < bufferWidth) {
                uchar4& pixel(bufferPixels[x * bufferWidth + x1]);
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
                uchar4& pixel(bufferPixels[y * bufferWidth + x]);
                pixel.x = 255;
                pixel.y = 128;
            };
            y = (int)(center + Evaluate(bestResult.data, theta, target) * yScale);
            if ((y >= 0) && (y < bufferHeight)) {
                uchar4& pixel(bufferPixels[y * bufferWidth + x]);
                pixel.x = pixel.y = pixel.z = 255;
            };
        }
    } // FireShow
}; // clase FIRESTARTERUNIT

GPU_GLOBAL void FIRESTARTER(FireStarterResults* oldResults, FireStarterResults* newResults, const unsigned int population, const unsigned int dataGeneration, const unsigned int programGeneration, const unsigned int variation)
{
    FIRESTARTERUNIT fireStarterObject;
    fireStarterObject.FireStarter(oldResults, newResults, population, dataGeneration, programGeneration, variation);
} // FIRESTARTER

GPU_GLOBAL void FIRESHOW(const FireStarterResult bestResult, uchar4* bufferPixels, const unsigned int bufferWidth, const unsigned int bufferHeight, const unsigned int variation)
{
    FIRESTARTERUNIT fireStarterObject;
    fireStarterObject.FireShow(bestResult, bufferPixels, bufferWidth, bufferHeight, variation);
} // FIRESHOW
