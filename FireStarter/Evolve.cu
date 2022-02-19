#include "FireStarterDefines.h"
#include "HashRandom.h"
#include "FireStarterTarget.h"

inline float Program(const FireStarterInstructions& instructions, FireStarterData data, float n)
{
    for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
       instructions.i[i].Execute(data, n);
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

    FireStarterInstructions instructions;
    float oldResult;
    if (!generation) {
        // The first generation's instructions are random.
        for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
#if PROGRAM_RANDOM_INSTRUCTIONS
            instructions.i[i] = FireStarterInstruction(fireStarterOpcodes[RANDOMSEED(memberSeed) % PROGRAM_OPCODES], RANDOMSEED(memberSeed) % PROGRAM_INSTRUCTIONS);
#else
            instructions.i[i] = FireStarterInstruction(fireStarterOpcodes[i % PROGRAM_OPCODES], RANDOMSEED(memberSeed) % PROGRAM_INSTRUCTIONS);
#endif
        }
        oldResult = START_RESULT;
    } else {
        // Later generations randomize one instruction.
        instructions = oldResults->results[member].instructions;
        unsigned int i = RANDOMSEED(memberSeed) % PROGRAM_INSTRUCTIONS;
#if PROGRAM_RANDOM_INSTRUCTIONS
        instructions.i[i].SetOperation(fireStarterOpcodes[RANDOMSEED(memberSeed) % PROGRAM_OPCODES], RANDOMSEED(memberSeed) % PROGRAM_INSTRUCTIONS);
#else
        instructions.i[i].SetRegister(RANDOMSEED(memberSeed) % PROGRAM_INSTRUCTIONS);
#endif
        oldResult = oldResults->results[member].maxResult;
    }

    float theta[SAMPLE_ITERATIONS];
    float sampleStep = (SAMPLE_MAX - SAMPLE_MIN) / (SAMPLE_ITERATIONS - 1);
    for (int i = 0; i < SAMPLE_ITERATIONS; i++)
        theta[i] = SAMPLE_MIN + i * sampleStep;

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < TARGET_VARIATIONS; v++) {
        float target[SAMPLE_ITERATIONS];
        for (int i = 0; i < SAMPLE_ITERATIONS; i++)
            target[i] = Target(theta[i], v);
        FireStarterData data;
        float lastResult;
        if (generation) {
            data = oldResults->results[member].data[v];
            lastResult = oldResults->results[member].minResult[v];
        } else for (int i = 0; i < PROGRAM_INSTRUCTIONS; i++) {
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