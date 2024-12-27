#pragma once
#include "FireSinSim.h"
#include "CUDADefines.h"

GPU_GLOBAL void SinSim(SinSimNetwork* networks, const unsigned int variation, const unsigned long long generation, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= populationSize)
        return;

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED1(member) + SEED2(generation);   // Unique seed for the member

    // The first generation is initalized with random numbers.
    SinSimNetwork network;
    if (generation)
        network = networks[member];
    else
        SinSimInitNetwork(network, memberSeed);
    SinSimNetwork bestNetwork = network;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Iterate to evolve the data.
        if (network.age > SINSIM_NETWORK_MAXAGE)
            SinSimInitNetwork(network, memberSeed);
        SinSimNetwork oldNetwork = network;

        for (unsigned int i = 0; i < FIRESTARTER_SINSIM_ITERATIONS; i++) {
            // Randomize something in the network.
            SinSimEvolveNetwork(network, memberSeed);

            // Grade the network.
            network.grade = 0.0f;
            for (unsigned int s = 0; s < FIRESTARTER_SINSIM_SAMPLES; s++) {
                float input = SinSimInputSample(s);
                float sample = SinSimTestNetwork(network, input);
                float target = SinSimTargetSample(s);
                float difference = sample - target;
                network.grade += fabsf(difference) * (1.0f / FIRESTARTER_SINSIM_SAMPLES);
                if (network.grade >= oldNetwork.grade)
                    break;
            }

            // Did the grade improve?
            if (network.grade < oldNetwork.grade) {
                // If the grade improved, save the network.
                network.age = 0;
                oldNetwork = network;
            } else {
                // If not, restore the old network.
                oldNetwork.age++;
                network = oldNetwork;
            }
        }

        // Did the results improve?
        if (network.grade < bestNetwork.grade)
            // If the result was better, save the network.
            bestNetwork = network;
        else
            bestNetwork.age += FIRESTARTER_SINSIM_ITERATIONS;
    }

    // Return the optimized best code.
    networks[member] = bestNetwork;
} // SinSim
