#pragma once
#include "FireSinSim.h"
#include "CUDADefines.h"

GPU_GLOBAL void SinSimShow(float* targets, float* results, unsigned int size, SinSimNetwork* data)
{
    // Determine the member to be optimized.
    unsigned int index = blockIdx.x * blockDim.x + threadIdx.x;
    if (index > 0)
        return;

    // Generate the test data.
    if (results && data) {
        SinSimNetwork network(*data);
        for (unsigned int s = 0; s < size; s++) {
            float input = SinSimNetwork::SinSimInputSample(s);
            float target = SinSimNetwork::SinSimTargetSample(s);
            float sample = network.SinSimTestNetwork(input);
            targets[s] = target;
            results[s] = sample;
        }
    }
} // SinSimShow

GPU_GLOBAL void SinSim(SinSimNetwork* networks, const unsigned int variation, const unsigned long long generation, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= populationSize)
        return;

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED1(member) + SEED2(generation);   // Unique seed for the member

    // The first generation is initalized with random numbers.
    SinSimNetwork bestNetwork;
    if (generation)
        bestNetwork = networks[member];
    else
        bestNetwork.SinSimInitNetwork(memberSeed);

    // Perform all the passes on the GPU.
    SinSimNetwork passNetwork = bestNetwork;
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Iterate to evolve the data.
        if (passNetwork.age > SINSIM_NETWORK_MAXAGE)
            passNetwork.SinSimInitNetwork(memberSeed);

        for (unsigned int i = 0; i < FIRESTARTER_SINSIM_ITERATIONS; i++) {
            // Randomize something in the network.
            SinSimNetwork newNetwork = passNetwork;
            newNetwork.SinSimEvolveNetwork(memberSeed);

            // Test and grade the network.
            SinSimNetwork network = newNetwork;
            network.grade = 0.0f;
            for (unsigned int s = 0; s < FIRESTARTER_SINSIM_SAMPLES; s++) {
                float input = SinSimNetwork::SinSimInputSample(s);
                float sample = network.SinSimTestNetwork(input);

                // Grade the candidate samples.
                if (s >= FIRESTARTER_SINSIM_SAMPLES - FIRESTARTER_SINSIM_WARMUP) {
                    float target = SinSimNetwork::SinSimTargetSample(s);
                    float difference = sample - target;
                    network.grade += fabsf(difference) * (1.0f / (FIRESTARTER_SINSIM_SAMPLES - FIRESTARTER_SINSIM_WARMUP));
                }
            }

            // Did the grade improve?
            if (network.grade < passNetwork.grade) {
                // If the grade improved, save the new network.
                passNetwork = newNetwork;
                passNetwork.grade = network.grade;
                passNetwork.age = 0;
            } else
                // If not, restore the old network.
                passNetwork.age++;
        }

        // Did the results improve?
        if (passNetwork.grade < bestNetwork.grade)
            // If the result was better, save the network.
            bestNetwork = passNetwork;
        else
            bestNetwork.age += FIRESTARTER_SINSIM_ITERATIONS;
    }

    // Return the optimized best code.
    networks[member] = bestNetwork;
} // SinSim
