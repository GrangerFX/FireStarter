#pragma once

#include "FireStarterModes.h"
#ifndef FIRESTARTER_MODE
#define FIRESTARTER_MODE FIRESTARTER_SINSIM
#endif
#include "FireStarterSettings.h"
#include "FireSinSim.h"
#include "CUDADefines.h"

// This is an improved GPU implementation of the original CPU SinSim neural network from around 2008.
// It uses just four neurons and successfully matches the target function with an average error close to six digits of accuracy over the evaluated sample sequence.
// That does not mean that the evolved code will be able to achieve close to six digits of accuracy for all values of theta or even all the individual samples.
// The Sin() simulation initializes the neuron weights and then runs the simulation over 256 warmup samples and 4096 error calculation samples.
// The input is Cos(theta) and the target function is Sin(theta) where theta is offset 45 samples or about 36.42 degrees.
// This version runs using CUDA on the GPU with a population size of 65536.

GPU_GLOBAL void SinSim(SinSimNetwork* networks, const unsigned int variation, const unsigned long long generation, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
{
    // Check if the user is trying to abort and quit the application.
    if (SetSharedKillSwitch())
        return;

    // Determine the member to be evolved.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= populationSize)
        return;

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED0(member) + SEED2(generation);   // Unique seed for the member

    // The first generation is initalized with random numbers.
    SinSimNetwork bestNetwork;
    if (generation)
        bestNetwork = networks[member];
    else
        bestNetwork.SinSimInitNetwork(memberSeed);

    // Perform all the passes on the GPU.
    SinSimNetwork passNetwork = bestNetwork;
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Check if the user is trying to abort and quit the application.
        if (SetSharedKillSwitch(pass, 0xFF))
            return;

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
            for (unsigned int s = 0; s < FIRESTARTER_SINSIM_WARMUP + FIRESTARTER_SINSIM_SAMPLES; s++) {
                float input = SinSimNetwork::SinSimInputSample(s);
                float sample = network.SinSimTestNetwork(input);

                // Grade the candidate samples.
                if (s >= FIRESTARTER_SINSIM_WARMUP) {
                    float target = SinSimNetwork::SinSimTargetSample(s);
                    float difference = sample - target;
                    network.grade += fabsf(difference) * (1.0f / FIRESTARTER_SINSIM_SAMPLES);
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
