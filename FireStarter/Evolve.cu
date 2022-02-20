#include "FireStarterResults.h"
#include "FireStarterTarget.h"

GPU_GLOBAL void Evolve(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int population, const unsigned int iterations, const unsigned int precision, const unsigned int generation)
{
    const unsigned int member = blockIdx.x;
    if (member >= population)
        return;
    const unsigned int thread = threadIdx.x;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);
    unsigned int threadSeed = RANDOMHASH(RANDOMHASH(member * blockDim.x + thread) + generation);

    GPU_SHARED FireStarterInstructions instructions;
    float oldResult;
    if (!generation) {
        // The first generation's instructions are random.
        for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
            instructions.i[i].Random(i, memberSeed);
        oldResult = START_RESULT;
    } else
        // Later generations randomize one instruction.
        instructions = oldResults->results[member].instructions;

    unsigned int oldIndex = RANDOMSEED(memberSeed) % PROGRAM_INSTRUCTIONS;
    FireStarterInstruction oldInstruction = instructions.i[oldIndex];
    instructions.i[oldIndex].Random(oldIndex, memberSeed);
    oldResult = oldResults->results[member].maxResult;

    // Evolve the program data for each variation.
    GPU_SHARED FireStarterData threadData[BLOCK_THREADS];
    FireStarterData& data = threadData[thread];
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < TARGET_VARIATIONS; v++) {
        float result = START_RESULT;
        if (generation) {
            data = oldResults->results[member].data[v];
        } else {
            for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
                data.d[i] = RANDOMFACTOR(threadSeed);
        }
        if (maxResult <= oldResult) {
            for (unsigned int p = 0; p < iterations; p++) {
                unsigned int d = RANDOMSEED(threadSeed) % PROGRAM_INSTRUCTIONS;
                const float oldData = data.d[d];
                data.d[d] = oldData + (EVOLUTION_FACTOR * RANDOMFACTOR(threadSeed) * result);
                float curResult = 0.0f;
                for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
                    const float theta = SAMPLE_MIN + i * ((SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1));
                    curResult = fmaxf(fabsf(instructions.Execute(data, theta) - Target(theta, v)), curResult);
                }
                if (curResult < result)
                    result = curResult;
                else
                    data.d[d] = oldData;
            }
        }

        // Find the best result among all the warp threads.
        GPU_SHARED float threadResults[BLOCK_THREADS];
        threadResults[thread] = result;

        GPU_SYNCTHREADS();
        unsigned int minIndex = 0;
        float minResult = threadResults[0];
        for (int i = 1; i < BLOCK_THREADS; i++) {
            if (threadResults[i] < minResult) {
                minIndex = i;
                minResult = threadResults[i];
            }
        }
        if (thread == minIndex) {
            newResults->results[member].data[v] = data;
            newResults->results[member].minResult[v] = minResult;
        }
        maxResult = fmaxf(maxResult, minResult);
    }

    // Only read and write memory in a single thread.
    GPU_SYNCTHREADS();
    if (thread == 0) {
        if (!generation || (maxResult < oldResult)) {
            // Save the improved results.
            newResults->results[member].instructions = instructions;
            newResults->results[member].maxResult = maxResult;
            newResults->results[member].test = member;
        } else {
            // Restore the old instruction.
            instructions.i[oldIndex] = oldInstruction;

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
            newResults->results[member].test = bestIndex;
        }
    }
} // Evolve