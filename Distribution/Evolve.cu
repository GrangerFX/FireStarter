#pragma once

#include "FireStarterInstructions.h"
#include "FireStarterResults.h"
#include "FireStarterTarget.h"

GPU_GLOBAL void Evolve(FireStarterEvolutions* newEvolutions, FireStarterEvolutions* oldEvolutions, FireStarterResults* newResults, FireStarterResults* oldResults, const FireStarterSettings settings, const unsigned int seed, const unsigned int init)
{
    const unsigned int member = blockIdx.x;
    if (member >= settings.m_evolvePopulation)
        return;
    const unsigned int thread = threadIdx.x;
    unsigned int memberSeed = RANDOM(RANDOM(member) + seed);
    unsigned int threadSeed = RANDOM(RANDOM(member * blockDim.x + thread) + seed);

    GPU_SHARED FireStarterInstructions instructions;
    float oldResult;
    if (init) {
        // The first generation's instructions are random.
        oldResult = settings.m_evolveStartResult;
        instructions.Randomize(memberSeed, settings.m_instructions, settings.m_opcodes);
    } else {
        // Later generations randomize one instruction.
        oldResult = *oldResults->MaxResult(member);
        instructions = *oldEvolutions->Instructions(member);

        // Evolve a single program instruction for each generation.
        if (!thread) {
            unsigned int index = RANDOMMOD(memberSeed, settings.m_instructions);
            instructions.SetRandom(index, memberSeed, settings.m_instructions, settings.m_opcodes);
        }
    }

    // Evolve the program data for each variation.
    float maxResult = 0.0f;
    for (unsigned int v = 0; v < settings.m_variations; v++) {
        FireStarterData data;
        float result = settings.m_evolveStartResult;
        if (init)
            for (int i = 0; i < settings.m_instructions; i++)
                data.d[i] = RANDOMFACTOR(threadSeed);
        else
            data = *oldResults->Data(member, v);
        if (maxResult <= oldResult) {
            // Initial check for bad results.
            float theta = settings.m_sampleMin;
            float sampleStep = (settings.m_sampleMax - settings.m_sampleMin) / (settings.m_samples - 1);
            for (int i = 0; i < settings.m_samples; i++) {
                result = fmaxf(fabsf(instructions.Execute(data, theta, settings.m_instructions) - Target(theta, v)), result);
                theta += sampleStep;
            }
            if (result <= settings.m_evolveStartResult) {
                // Evolve the data.
                float evolutionFactor = settings.m_evolveStartFactor;
                for (unsigned int p = 0; p < settings.m_evolveIterations; p++) {
                    unsigned int d = RANDOMSEED(threadSeed) % settings.m_instructions;
                    const float oldData = data.d[d];
                    data.d[d] = oldData + evolutionFactor * RANDOMFACTOR(threadSeed);
                    theta = settings.m_sampleMin;
                    float curResult = 0.0f;
                    for (int i = 0; i < settings.m_samples; i++) {
                        curResult = fmaxf(fabsf(instructions.Execute(data, theta, settings.m_instructions) - Target(theta, v)), curResult);
                        theta += sampleStep;
                    }
                    if (curResult < result) {
                        result = curResult;
                        evolutionFactor = settings.m_evolveFactor * result;
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
            *newResults->Data(member, v) = data;
            *newResults->MinResult(member, v) = minResult;
        }
        maxResult = fmaxf(maxResult, minResult);
    }

    // Only read and write memory in a single thread.
    GPU_SYNCTHREADS();
    if (thread == 0) {
        if (init || (maxResult < oldResult) || !settings.m_evolution) {
            // Save the improved results.
            *newEvolutions->Instructions(member) = instructions;
            *newResults->MaxResult(member) = maxResult;
        } else {
            // The genetic part of genetic programming and a major optimization:
            // Copy the best data from among a random set of candidates.
            unsigned int bestIndex = member;
            float bestResult = oldResult;
            for (int i = 0; i < settings.m_evolveCandidates; i++) {
                unsigned int index = RANDOMSEED(memberSeed) % settings.m_evolvePopulation;
                float curResult = *oldResults->MaxResult(index);
                if (curResult < bestResult) {
                    bestIndex = index;
                    bestResult = curResult;
                }
            }
            *newEvolutions->Instructions(member) = *oldEvolutions->Instructions(bestIndex);
            for (unsigned int v = 0; v < settings.m_variations; v++) {
                *newResults->Data(member, v) = *oldResults->Data(bestIndex, v);
                *newResults->MinResult(member, v) = *oldResults->MinResult(bestIndex, v);
            }
            *newResults->MaxResult(member) = *oldResults->MaxResult(bestIndex);
        }
    }
} // Evolve
