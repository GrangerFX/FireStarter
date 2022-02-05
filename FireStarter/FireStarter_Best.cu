#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

// Reference: https://stackoverflow.com/questions/17399119/how-do-i-use-atomicmax-on-floating-point-values-in-cuda
GPU_FUNCTION float atomicMin(float* addr, float value)
{
    return (value >= 0) ? __int_as_float(atomicMin((int*)addr, __float_as_int(value))) : __uint_as_float(atomicMax((unsigned int*)addr, __float_as_uint(value)));
} // atomicMin

GPU_FUNCTION float atomicMax(float* addr, float value)
{
    return (value >= 0) ? __int_as_float(atomicMax((int*)addr, __float_as_int(value))) : __uint_as_float(atomicMin((unsigned int*)addr, __float_as_uint(value)));
} // atomicMax

// PROGRAM //
GPU_FUNCTION float Program(const FireStarterInstructions& instructions, FireStarterData data, float n)
{
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
        switch (instructions.i[i].operation) {
        case 0:
            n *= data.d[0];
        case 1:
            n *= data.d[1];
        case 2:
            n *= data.d[2];
        case 3:
            n *= data.d[3];
        case 4:
            n *= data.d[4];
        case 5:
            n *= data.d[5];
        case 6:
            n *= data.d[6];
        case 7:
            n *= data.d[7];
        case 8:
            n *= data.d[8];
        case 9:
            n *= data.d[9];
        case 10:
            n *= data.d[10];
        case 11:
            n *= data.d[11];
        case 12:
            n *= data.d[12];
        case 13:
            n *= data.d[13];
        case 14:
            n *= data.d[14];
        case 15:
            n *= data.d[15];
        case 16:
            n *= data.d[16];
        case 17:
            n *= data.d[17];
        case 18:
            n *= data.d[18];
        case 19:
            n *= data.d[19];
        case 20:
            n *= data.d[20];
        case 21:
            n *= data.d[21];
        case 22:
            n *= data.d[22];
        case 23:
            n *= data.d[23];
        case 24:
            n *= data.d[24];
        case 25:
            n *= data.d[25];
        case 26:
            n *= data.d[26];
        case 27:
            n *= data.d[27];
        case 28:
            n *= data.d[28];
        case 29:
            n *= data.d[29];
        case 30:
            n *= data.d[30];
        case 31:
            n *= data.d[31];
        case 32:
            n += data.d[0];
        case 33:
            n += data.d[1];
        case 34:
            n += data.d[2];
        case 35:
            n += data.d[3];
        case 36:
            n += data.d[4];
        case 37:
            n += data.d[5];
        case 38:
            n += data.d[6];
        case 39:
            n += data.d[7];
        case 40:
            n += data.d[8];
        case 41:
            n += data.d[9];
        case 42:
            n += data.d[10];
        case 43:
            n += data.d[11];
        case 44:
            n += data.d[12];
        case 45:
            n += data.d[13];
        case 46:
            n += data.d[14];
        case 47:
            n += data.d[15];
        case 48:
            n += data.d[16];
        case 49:
            n += data.d[17];
        case 50:
            n += data.d[18];
        case 51:
            n += data.d[19];
        case 52:
            n += data.d[20];
        case 53:
            n += data.d[21];
        case 54:
            n += data.d[22];
        case 55:
            n += data.d[23];
        case 56:
            n += data.d[24];
        case 57:
            n += data.d[25];
        case 58:
            n += data.d[26];
        case 59:
            n += data.d[27];
        case 60:
            n += data.d[28];
        case 61:
            n += data.d[29];
        case 62:
            n += data.d[30];
        case 63:
            n += data.d[31];
        case 64:
            n += fabsf(data.d[0]);
        case 65:
            n += fabsf(data.d[1]);
        case 66:
            n += fabsf(data.d[2]);
        case 67:
            n += fabsf(data.d[3]);
        case 68:
            n += fabsf(data.d[4]);
        case 69:
            n += fabsf(data.d[5]);
        case 70:
            n += fabsf(data.d[6]);
        case 71:
            n += fabsf(data.d[7]);
        case 72:
            n += fabsf(data.d[8]);
        case 73:
            n += fabsf(data.d[9]);
        case 74:
            n += fabsf(data.d[10]);
        case 75:
            n += fabsf(data.d[11]);
        case 76:
            n += fabsf(data.d[12]);
        case 77:
            n += fabsf(data.d[13]);
        case 78:
            n += fabsf(data.d[14]);
        case 79:
            n += fabsf(data.d[15]);
        case 80:
            n += fabsf(data.d[16]);
        case 81:
            n += fabsf(data.d[17]);
        case 82:
            n += fabsf(data.d[18]);
        case 83:
            n += fabsf(data.d[19]);
        case 84:
            n += fabsf(data.d[20]);
        case 85:
            n += fabsf(data.d[21]);
        case 86:
            n += fabsf(data.d[22]);
        case 87:
            n += fabsf(data.d[23]);
        case 88:
            n += fabsf(data.d[24]);
        case 89:
            n += fabsf(data.d[25]);
        case 90:
            n += fabsf(data.d[26]);
        case 91:
            n += fabsf(data.d[27]);
        case 92:
            n += fabsf(data.d[28]);
        case 93:
            n += fabsf(data.d[29]);
        case 94:
            n += fabsf(data.d[30]);
        case 95:
            n += fabsf(data.d[31]);
        default: break;
        }
    }
    return isnan(n) ? 0.0f : n;
} // Program
// END //

// EVALUATE //
GPU_FUNCTION float Evaluate(FireStarterData data, float n)
{
    n += data.d[0];
    data.d[0] = n;
    n += data.d[1];
    data.d[1] = n;
    n += data.d[2];
    data.d[2] = n;
    n *= data.d[1];
    data.d[1] = n;
    n *= data.d[3];
    data.d[3] = n;
    n += fabsf(data.d[1]);
    data.d[1] = n;
    n *= data.d[4];
    data.d[4] = n;
    n += data.d[5];
    data.d[5] = n;
    n *= data.d[1];
    n *= data.d[6];
    n += data.d[7];
    data.d[7] = n;
    n *= data.d[8];
    data.d[8] = n;
    n += data.d[2];
    n *= data.d[8];
    data.d[8] = n;
    n *= data.d[7];
    n *= data.d[9];
    n *= data.d[10];
    n *= data.d[11];
    n *= data.d[0];
    data.d[0] = n;
    n += fabsf(data.d[12]);
    n += data.d[13];
    n += data.d[8];
    data.d[8] = n;
    n *= data.d[14];
    n += data.d[15];
    n += data.d[5];
    n *= data.d[0];
    n += data.d[4];
    n *= data.d[3];
    n *= data.d[16];
    data.d[16] = n;
    n += data.d[17];
    n += data.d[16];
    n *= data.d[8];
    return isnan(n) ? 0.0f : n;
} // Evaluate
// END //

GPU_GLOBAL void FireStarter(FireStarterResults* newResults, FireStarterResults *oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation, const unsigned int variation)
{
    unsigned int member = blockDim.x * blockIdx.x + threadIdx.x;
    if (member >= population)
        return;
    unsigned int seed = RANDOMHASH(RANDOMHASH(member) + generation);

    FireStarterData data;
    float result, oldResult;
    if (generation) {
        data = oldResults->results[member].data;
        result = oldResult = oldResults->results[member].result;
    } else {
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

    for (unsigned int p = 0; p < iterations; p ++) {
        unsigned int d = RANDOMSEED(seed) % dataSize;
        float oldData = data.d[d];
        data.d[d] = oldData + (EVOLUTION_FACTOR * RANDOMFACTOR(seed) * result);
        float curResult = 0.0f;
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            curResult = fmaxf(fabsf(Evaluate(data, theta[i]) - target[i]), curResult);
        if (curResult < result)
            result = curResult;
        else
            data.d[d] = oldData;
    }

    // Calculate a more accure estimate of the result.
    float precisionStep = (SAMPLE_MAX - SAMPLE_MIN) / (PRECISION_ITERATIONS - 1);
    for (int i = 0; i < PRECISION_ITERATIONS; i++) {
        float theta = SAMPLE_MIN + i * precisionStep;
        float target = Target(theta, variation);
        result = fmaxf(fabsf(Evaluate(data, theta) - target), result);
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
    newResults->results[member].data = data;
    newResults->results[member].result = result;
} // FireStarter

GPU_GLOBAL void FireStarter2(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int dataSize, const unsigned int population, const unsigned int iterations, const unsigned int generation, const unsigned int variation)
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
    float precisionStep = (SAMPLE_MAX - SAMPLE_MIN) / (PRECISION_ITERATIONS - 1);
    for (int i = 0; i < PRECISION_ITERATIONS; i++) {
        float theta = SAMPLE_MIN + i * precisionStep;
        float target = Target(theta, variation);
        result = fmaxf(fabsf(Evaluate(data, theta) - target), result);
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
} // FireStarter2