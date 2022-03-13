#include "FireStarterResults.h"
#include "FireStarterTarget.h"

GPU_GLOBAL void Evolve(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int population, const unsigned int iterations, const unsigned int generation)
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
        oldResult = START_RESULT;
        for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
            instructions.SetRandom(i, memberSeed);
    } else {
        // Later generations randomize one instruction.
        oldResult = oldResults->results[member].maxResult;
        instructions = oldResults->results[member].instructions;

        // Evolve a single program instruction for each generation.
        if (!thread) {
            unsigned int index = RANDOMSEED(memberSeed) % PROGRAM_INSTRUCTIONS;
            instructions.SetRandom(index, memberSeed);
        }
    }

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        FireStarterData data;
        float result = START_RESULT;
        if (!generation)
            for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
                data.d[i] = RANDOMFACTOR(threadSeed);
        else
            data = oldResults->results[member].data[v];
        if (maxResult <= oldResult) {
            float theta = SAMPLE_MIN;
            for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
                result = fmaxf(fabsf(instructions.Execute(data, theta) - Target(theta, v)), result);
                theta += (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);
            }
            if (result <= START_RESULT) {
                float evolutionFactor = EVOLUTION_START_FACTOR;
                for (unsigned int p = 0; p < iterations; p++) {
                    unsigned int d = RANDOMSEED(threadSeed) % PROGRAM_INSTRUCTIONS;
                    const float oldData = data.d[d];
                    data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(threadSeed);
                    float theta = SAMPLE_MIN;
                    float curResult = 0.0f;
                    for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
                        curResult = fmaxf(fabsf(instructions.Execute(data, theta) - Target(theta, v)), curResult);
                        theta += (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);
                    }
                    if (curResult < result) {
                        result = curResult;
                        evolutionFactor = EVOLUTION_FACTOR * result;
                    } else
                        data.d[d] = oldData;
                }
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
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of members.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < EVOLUTION_SAMPLES; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % population;
                float curResult = oldResults->results[index].maxResult;
                if (curResult < oldResult) {
                    newResults->results[member] = oldResults->results[index];
                    newResults->results[member].test = index;
                    return;
                }
            }
            newResults->results[member] = oldResults->results[member];
            newResults->results[member].test = member;
        }
    }
} // Evolve
