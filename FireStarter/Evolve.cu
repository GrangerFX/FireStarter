#include "FireStarterDefines.h"
#include "FireStarterTarget.h"

inline float Program(const FireStarterInstructions& instructions, FireStarterData data, float n)
{
#if 1
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
        FireStarterInstruction instruction = instructions.i[i];
        switch (instruction.reg) {
        case 0:
            instruction.Execute(data.d[0], n);
            break;
        case 1:
            instruction.Execute(data.d[1], n);
            break;
        case 2:
            instruction.Execute(data.d[2], n);
            break;
        case 3:
            instruction.Execute(data.d[3], n);
            break;
        case 4:
            instruction.Execute(data.d[4], n);
            break;
        case 5:
            instruction.Execute(data.d[5], n);
            break;
        case 6:
            instruction.Execute(data.d[6], n);
            break;
        case 7:
            instruction.Execute(data.d[7], n);
            break;
        case 8:
            instruction.Execute(data.d[8], n);
            break;
        case 9:
            instruction.Execute(data.d[9], n);
            break;
        case 10:
            instruction.Execute(data.d[10], n);
            break;
        case 11:
            instruction.Execute(data.d[11], n);
            break;
        case 12:
            instruction.Execute(data.d[12], n);
            break;
        case 13:
            instruction.Execute(data.d[13], n);
            break;
        case 14:
            instruction.Execute(data.d[14], n);
            break;
        case 15:
            instruction.Execute(data.d[15], n);
            break;
        case 16:
            instruction.Execute(data.d[16], n);
            break;
        case 17:
            instruction.Execute(data.d[17], n);
            break;
        case 18:
            instruction.Execute(data.d[18], n);
            break;
        case 19:
            instruction.Execute(data.d[19], n);
            break;
        case 20:
            instruction.Execute(data.d[20], n);
            break;
        case 21:
            instruction.Execute(data.d[21], n);
            break;
        case 22:
            instruction.Execute(data.d[22], n);
            break;
        case 23:
            instruction.Execute(data.d[23], n);
            break;
        case 24:
            instruction.Execute(data.d[24], n);
            break;
        case 25:
            instruction.Execute(data.d[25], n);
            break;
        case 26:
            instruction.Execute(data.d[26], n);
            break;
        case 27:
            instruction.Execute(data.d[27], n);
            break;
        case 28:
            instruction.Execute(data.d[28], n);
            break;
        case 29:
            instruction.Execute(data.d[29], n);
            break;
        case 30:
            instruction.Execute(data.d[30], n);
            break;
        case 31:
            instruction.Execute(data.d[31], n);
            break;
        }
    }
#else
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
        instructions.i[i].Execute(data, n);
#endif
    return isnan(n) ? 0.0f : n;
} // Program

GPU_GLOBAL void Evolve(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int population, const unsigned int iterations, const unsigned int precision, const unsigned int generation)
{
    const unsigned int member = blockIdx.x;
    if (member >= population)
        return;
    const unsigned int thread = threadIdx.x;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);
    unsigned int threadSeed = RANDOMHASH(RANDOMHASH(member * blockDim.x + thread) + generation);

    GPU_SHARED float threadResults[EVOLVE_THREADS];
    for (int i = 0; i < EVOLVE_THREADS; i++)
        threadResults[i] = START_RESULT;

    GPU_SHARED FireStarterInstructions instructions;
    float oldResult;
    if (thread == 0)
        if (!generation) {
            // The first generation's instructions are random.
            for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
                instructions.i[i].Random(i, memberSeed);
            oldResult = START_RESULT;
        } else {
            // Later generations randomize one instruction.
            instructions = oldResults->results[member].instructions;
            unsigned int i = RANDOMSEED(memberSeed) % PROGRAM_INSTRUCTIONS;
            instructions.i[i].Random(i, memberSeed);
            oldResult = oldResults->results[member].maxResult;
        }
    GPU_SYNCTHREADS();

    float theta[SAMPLE_ITERATIONS];
    float sampleStep = (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * sampleStep;

    // Evolve the program data for each variation.
    GPU_SHARED FireStarterData threadData[EVOLVE_THREADS];
    FireStarterData& data = threadData[thread];
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < TARGET_VARIATIONS; v++) {
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], v);
        float lastResult;
        for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
            data.d[i] = RANDOMFACTOR(threadSeed);
            lastResult = START_RESULT;
        }
        float result = lastResult;
        for (unsigned int p = 0; p < iterations; p++) {
            unsigned int d = RANDOMSEED(threadSeed) % PROGRAM_INSTRUCTIONS;
            float oldData = data.d[d];
            data.d[d] = oldData + (EVOLUTION_FACTOR * RANDOMFACTOR(threadSeed) * result);
            float curResult = 0.0f;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++)
                curResult = fmaxf(fabsf(Program(instructions, data, theta[i]) - target[i]), curResult);
            if (curResult < result)
                result = curResult;
            else
                data.d[d] = oldData;
        }

#if 0
        // This is probably not needed when evolving the code.
        // Calculate a more accure estimate of the result.
        if (result < lastResult) {
            float precisionStep = (SAMPLE_MAX - SAMPLE_MIN) / (precision - 1);
            result = 0.0f;
            for (int i = 0; i < precision; i++) {
                float theta = SAMPLE_MIN + i * precisionStep;
                float target = Target(theta, variation);
                result = fmaxf(fabsf(Program(instructions, data, theta) - target), result);
            }
        }
#endif

        // Find the best result among all the warp threads.
        threadResults[thread] = result;

        GPU_SYNCTHREADS();
        unsigned int minIndex = 0;
        float minResult = threadResults[0];
        for (int i = 1; i < EVOLVE_THREADS; i++) {
            if (threadResults[i] < minResult) {
                minIndex = i;
                minResult = threadResults[i];
            }
        }
        if ((thread == minIndex) && (!generation || (minResult < lastResult))) {
            newResults->results[member].data[v] = data;
            newResults->results[member].minResult[v] = minResult;
        }
        maxResult = fmaxf(maxResult, minResult);
//        if (generation && (maxResult > oldResult))
//            break;
    }

    // Only read and write memory in a single thread.
    GPU_SYNCTHREADS();
    if (thread == 0) {
        if (!generation || (maxResult < oldResult)) {
            // Save the improved results.
            newResults->results[member].instructions = instructions;
            newResults->results[member].maxResult = maxResult;
        } else {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].maxResult;
                if (curResult < bestResult) {
                    bestResult = curResult;
                    bestIndex = index;
                }
            }
            newResults->results[member] = oldResults->results[bestIndex];
        }
    }
} // Evolve