#include "FireStarterResults.h"
#include "FireStarterTarget.h"

#if 1
// Test code to measure performance of shared memory vs global memory. Also compares performance with the actuall code.
GPU_GLOBAL void Evolve(FireStarterResults* newResults, FireStarterResults* oldResults, const unsigned int population, const unsigned int iterations, const unsigned int generation)
{
    const unsigned int member = blockIdx.x;
    if (member >= population)
        return;
    const unsigned int thread = threadIdx.x;
    unsigned int memberSeed = RANDOMHASH(RANDOMHASH(member) + generation);
    unsigned int threadSeed = RANDOMHASH(RANDOMHASH(member * blockDim.x + thread) + generation);

    FireStarterInstructions instructions;
    for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
        instructions.SetRandom(i, threadSeed);

    float evolveData[PROGRAM_INSTRUCTIONS];
    GPU_SHARED float data[PROGRAM_INSTRUCTIONS * BLOCK_THREADS];
    unsigned int registers[PROGRAM_INSTRUCTIONS];
    for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
#if 1
        registers[i] = instructions.Register(i) * BLOCK_THREADS + thread;
#else
        registers[i] = instructions.Register(i) + thread * BLOCK_THREADS;
#endif

    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
            evolveData[i] = data[registers[i]] = RANDOMFACTOR(threadSeed);

        float maxResult = 0.0f;
        float minResult = 10000.0f;
        for (unsigned int p = 0; p < iterations; p++) {
            float t = RANDOMFACTOR(threadSeed);
            int index = thread * PROGRAM_INSTRUCTIONS;
            for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
                data[index++] = evolveData[i];
            for (int s = 0; s < SAMPLE_ITERATIONS; s++) {
                float n = t;
                for (int r = 0; r < PROGRAM_INSTRUCTIONS; r+=2) {
                    n = data[registers[r]] *= n;
                    n = data[registers[r + 1]] += n;
                }
                float result = fabsf(n);
                minResult = fminf(minResult, result);
                maxResult = fmaxf(maxResult, result);
                t += 1.0f / SAMPLE_ITERATIONS;
            }
        }
        for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
            newResults->results[member].data[v].d[i] = evolveData[i];
        newResults->results[member].minResult[v] = minResult;
        newResults->results[member].instructions = instructions;
        newResults->results[member].maxResult = maxResult;
        newResults->results[member].test = member;
    }
} // Evolve
#else
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
            for (unsigned int p = 0; p < iterations; p++) {
                unsigned int d = RANDOMSEED(threadSeed) % PROGRAM_INSTRUCTIONS;
                const float oldData = data.d[d];
                data.d[d] = oldData + (EVOLUTION_FACTOR * RANDOMFACTOR(threadSeed) * result);
                float curResult = 0.0f;
                float theta = SAMPLE_MIN;
                for (int i = 0; i < SAMPLE_ITERATIONS; i++) {
                    curResult = fmaxf(fabsf(instructions.Execute(data, theta) - Target(theta, v)), curResult);
                    theta += (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);
                }
                if (curResult < result)
                    result = curResult;
                else
                    data.d[d] = oldData;
            }

#if 1
            // Calculate a more accure estimate of the result.
            result = 0.0f;
            for (int i = 0; i < PROGRAM_PRECISION; i++) {
                float theta = SAMPLE_MIN + i * (SAMPLE_MAX - SAMPLE_MIN) / (PROGRAM_PRECISION - 1);
                result = fmaxf(fabsf(instructions.Execute(data, theta) - Target(theta, v)), result);
            }
#endif
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
                curResult -= EVOLUTION_LUCK * RANDOMNUM(memberSeed) * curResult;
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
#endif