#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// PROGRAM //
GPU_FUNCTION float Program(const FireStarterInstructions& instructions, FireStarterData data, float n)
{
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
        switch (instructions.i[i].operation) {
        case 0:
            n *= data.d[0];
            data.d[0] = n;
            break;
        case 1:
            n *= data.d[1];
            data.d[1] = n;
            break;
        case 2:
            n *= data.d[2];
            data.d[2] = n;
            break;
        case 3:
            n *= data.d[3];
            data.d[3] = n;
            break;
        case 4:
            n *= data.d[4];
            data.d[4] = n;
            break;
        case 5:
            n *= data.d[5];
            data.d[5] = n;
            break;
        case 6:
            n *= data.d[6];
            data.d[6] = n;
            break;
        case 7:
            n *= data.d[7];
            data.d[7] = n;
            break;
        case 8:
            n *= data.d[8];
            data.d[8] = n;
            break;
        case 9:
            n *= data.d[9];
            data.d[9] = n;
            break;
        case 10:
            n *= data.d[10];
            data.d[10] = n;
            break;
        case 11:
            n *= data.d[11];
            data.d[11] = n;
            break;
        case 12:
            n *= data.d[12];
            data.d[12] = n;
            break;
        case 13:
            n *= data.d[13];
            data.d[13] = n;
            break;
        case 14:
            n *= data.d[14];
            data.d[14] = n;
            break;
        case 15:
            n *= data.d[15];
            data.d[15] = n;
            break;
        case 16:
            n *= data.d[16];
            data.d[16] = n;
            break;
        case 17:
            n *= data.d[17];
            data.d[17] = n;
            break;
        case 18:
            n *= data.d[18];
            data.d[18] = n;
            break;
        case 19:
            n *= data.d[19];
            data.d[19] = n;
            break;
        case 20:
            n *= data.d[20];
            data.d[20] = n;
            break;
        case 21:
            n *= data.d[21];
            data.d[21] = n;
            break;
        case 22:
            n *= data.d[22];
            data.d[22] = n;
            break;
        case 23:
            n *= data.d[23];
            data.d[23] = n;
            break;
        case 24:
            n *= data.d[24];
            data.d[24] = n;
            break;
        case 25:
            n *= data.d[25];
            data.d[25] = n;
            break;
        case 26:
            n *= data.d[26];
            data.d[26] = n;
            break;
        case 27:
            n *= data.d[27];
            data.d[27] = n;
            break;
        case 28:
            n *= data.d[28];
            data.d[28] = n;
            break;
        case 29:
            n *= data.d[29];
            data.d[29] = n;
            break;
        case 30:
            n *= data.d[30];
            data.d[30] = n;
            break;
        case 31:
            n *= data.d[31];
            data.d[31] = n;
            break;
        case 32:
            n += data.d[0];
            data.d[0] = n;
            break;
        case 33:
            n += data.d[1];
            data.d[1] = n;
            break;
        case 34:
            n += data.d[2];
            data.d[2] = n;
            break;
        case 35:
            n += data.d[3];
            data.d[3] = n;
            break;
        case 36:
            n += data.d[4];
            data.d[4] = n;
            break;
        case 37:
            n += data.d[5];
            data.d[5] = n;
            break;
        case 38:
            n += data.d[6];
            data.d[6] = n;
            break;
        case 39:
            n += data.d[7];
            data.d[7] = n;
            break;
        case 40:
            n += data.d[8];
            data.d[8] = n;
            break;
        case 41:
            n += data.d[9];
            data.d[9] = n;
            break;
        case 42:
            n += data.d[10];
            data.d[10] = n;
            break;
        case 43:
            n += data.d[11];
            data.d[11] = n;
            break;
        case 44:
            n += data.d[12];
            data.d[12] = n;
            break;
        case 45:
            n += data.d[13];
            data.d[13] = n;
            break;
        case 46:
            n += data.d[14];
            data.d[14] = n;
            break;
        case 47:
            n += data.d[15];
            data.d[15] = n;
            break;
        case 48:
            n += data.d[16];
            data.d[16] = n;
            break;
        case 49:
            n += data.d[17];
            data.d[17] = n;
            break;
        case 50:
            n += data.d[18];
            data.d[18] = n;
            break;
        case 51:
            n += data.d[19];
            data.d[19] = n;
            break;
        case 52:
            n += data.d[20];
            data.d[20] = n;
            break;
        case 53:
            n += data.d[21];
            data.d[21] = n;
            break;
        case 54:
            n += data.d[22];
            data.d[22] = n;
            break;
        case 55:
            n += data.d[23];
            data.d[23] = n;
            break;
        case 56:
            n += data.d[24];
            data.d[24] = n;
            break;
        case 57:
            n += data.d[25];
            data.d[25] = n;
            break;
        case 58:
            n += data.d[26];
            data.d[26] = n;
            break;
        case 59:
            n += data.d[27];
            data.d[27] = n;
            break;
        case 60:
            n += data.d[28];
            data.d[28] = n;
            break;
        case 61:
            n += data.d[29];
            data.d[29] = n;
            break;
        case 62:
            n += data.d[30];
            data.d[30] = n;
            break;
        case 63:
            n += data.d[31];
            data.d[31] = n;
            break;
        case 64:
            n += fabsf(data.d[0]);
            data.d[0] = n;
            break;
        case 65:
            n += fabsf(data.d[1]);
            data.d[1] = n;
            break;
        case 66:
            n += fabsf(data.d[2]);
            data.d[2] = n;
            break;
        case 67:
            n += fabsf(data.d[3]);
            data.d[3] = n;
            break;
        case 68:
            n += fabsf(data.d[4]);
            data.d[4] = n;
            break;
        case 69:
            n += fabsf(data.d[5]);
            data.d[5] = n;
            break;
        case 70:
            n += fabsf(data.d[6]);
            data.d[6] = n;
            break;
        case 71:
            n += fabsf(data.d[7]);
            data.d[7] = n;
            break;
        case 72:
            n += fabsf(data.d[8]);
            data.d[8] = n;
            break;
        case 73:
            n += fabsf(data.d[9]);
            data.d[9] = n;
            break;
        case 74:
            n += fabsf(data.d[10]);
            data.d[10] = n;
            break;
        case 75:
            n += fabsf(data.d[11]);
            data.d[11] = n;
            break;
        case 76:
            n += fabsf(data.d[12]);
            data.d[12] = n;
            break;
        case 77:
            n += fabsf(data.d[13]);
            data.d[13] = n;
            break;
        case 78:
            n += fabsf(data.d[14]);
            data.d[14] = n;
            break;
        case 79:
            n += fabsf(data.d[15]);
            data.d[15] = n;
            break;
        case 80:
            n += fabsf(data.d[16]);
            data.d[16] = n;
            break;
        case 81:
            n += fabsf(data.d[17]);
            data.d[17] = n;
            break;
        case 82:
            n += fabsf(data.d[18]);
            data.d[18] = n;
            break;
        case 83:
            n += fabsf(data.d[19]);
            data.d[19] = n;
            break;
        case 84:
            n += fabsf(data.d[20]);
            data.d[20] = n;
            break;
        case 85:
            n += fabsf(data.d[21]);
            data.d[21] = n;
            break;
        case 86:
            n += fabsf(data.d[22]);
            data.d[22] = n;
            break;
        case 87:
            n += fabsf(data.d[23]);
            data.d[23] = n;
            break;
        case 88:
            n += fabsf(data.d[24]);
            data.d[24] = n;
            break;
        case 89:
            n += fabsf(data.d[25]);
            data.d[25] = n;
            break;
        case 90:
            n += fabsf(data.d[26]);
            data.d[26] = n;
            break;
        case 91:
            n += fabsf(data.d[27]);
            data.d[27] = n;
            break;
        case 92:
            n += fabsf(data.d[28]);
            data.d[28] = n;
            break;
        case 93:
            n += fabsf(data.d[29]);
            data.d[29] = n;
            break;
        case 94:
            n += fabsf(data.d[30]);
            data.d[30] = n;
            break;
        case 95:
            n += fabsf(data.d[31]);
            data.d[31] = n;
            break;
        }
    }
    return isnan(n) ? 0.0f : n;
} // Program
// END //

GPU_GLOBAL void Evolve(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int precision, const unsigned int generation, const unsigned int variation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int seed = RANDOMHASH(RANDOMHASH(member) + generation);

    FireStarterInstructions instructions = oldResults->instructions;
    FireStarterData data;
    float result, oldResult;
    if (generation) {
        data = oldResults->results[member].data;
        result = oldResult = oldResults->results[member].result;
    }
    else {
        for (int i = 0; i < dataSize; i++)
            data.d[i] = RANDOMFACTOR(seed);
        result = oldResult = START_RESULT;
    }

    float theta[SAMPLE_ITERATIONS];
    float target[SAMPLE_ITERATIONS];
    float sampleStep = (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);
    for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
        theta[i] = SAMPLE_MIN + i * sampleStep;
        target[i] = Target(theta[i], variation);
    }

    for (unsigned int p = 0; p < iterations; p++) {
        unsigned int d = RANDOMSEED(seed) % dataSize;
        float oldData = data.d[d];
        data.d[d] = oldData + (EVOLUTION_FACTOR * RANDOMFACTOR(seed) * result);
        float curResult = 0.0f;
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            curResult = fmaxf(fabsf(Program(instructions, data, theta[i]) - target[i]), curResult);
        if (curResult < result)
            result = curResult;
        else
            data.d[d] = oldData;
    }

    // Calculate a more accure estimate of the result.
    float precisionStep = (SAMPLE_MAX - SAMPLE_MIN) / (precision - 1);
    for (int i = 0; i < precision; i++) {
        float theta = SAMPLE_MIN + i * precisionStep;
        float target = Target(theta, variation);
        result = fmaxf(fabsf(Program(instructions, data, theta) - target), result);
    }
    if (generation && (result >= oldResult)) {
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
        result = START_RESULT;
    }
    newResults->instructions = instructions;
    newResults->results[member].data = data;
    newResults->results[member].result = result;
} // Evolve