#pragma once
#include "FireSinSim.h"
#include "CUDADefines.h"

GPU_FUNCTION float TestNeuron(FireStarterNetwork& network, const unsigned int index)
{
    // Process a single nuron by adding the weighted connections.
    FireStarterNeuron& theNeuron = network.neuron[index];
    float newValue = theNeuron.addValue;
    for (unsigned int i = 0; i < NEURON_COUNT; i++)
        newValue += theNeuron.connection[i] * network.neuron[i].value;
    return newValue;
}  // TestNeuron

GPU_FUNCTION float TestNetwork(FireStarterNetwork& network, float inputData)
{
    // Process a single input data and compare the result to the target data.
    network.neuron[0].value = inputData;
    float newValues[NEURON_COUNT];
    for (unsigned int i = 1; i < NEURON_COUNT; i++)
        newValues[i] = TestNeuron(network, i);
    for (unsigned int i = 0; i < NEURON_COUNT; i++)
        network.neuron[i].value = newValues[i];
    return newValues[NEURON_COUNT - 1];
}  // TestNetwork

GPU_FUNCTION void InitNetwork(FireStarterNetwork& network, unsigned long long& seed)
{
    for (unsigned int i = 0; i < NEURON_COUNT; i++) {
        for (unsigned int j = 0; j < NEURON_COUNT; j++)
            network.neuron[i].connection[j] = 1.0f / NEURON_COUNT;
        network.neuron[i].addValue = 0.0f;
        network.neuron[i].value = 0.0f;
        network.grade = BAD_VALUE;
        network.age = 0;
    }
} // InitNetwork

GPU_FUNCTION void EvolveNetwork(FireStarterNetwork& network, unsigned long long& seed)
{
    // Copy the current new neurons into the old neurons.
    for (unsigned int i = 0; i < NEURON_COUNT; i++)
        network.neuron[i].value = 0.0f;

    // Change something randomly.
    unsigned int neuron = RANDOMSEED(seed) % NEURON_COUNT;
    if (neuron) {
        unsigned int connection = RANDOMSEED(seed) % NEURON_COUNT;
        network.neuron[neuron].connection[connection] += network.grade * EVOLVE_WIEGHT * RANDOMFACTOR(seed);
    } else {
        neuron = RANDOMSEED(seed) % NEURON_COUNT;
        network.neuron[neuron].addValue += network.grade * EVOLVE_WIEGHT * RANDOMFACTOR(seed);
    }
} // EvolveNetwork

GPU_GLOBAL void SinSim(FireStarterNetwork* networks, const unsigned int variation, const unsigned long long generation, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= populationSize)
        return;

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED1(member) + SEED2(generation);   // Unique seed for the member

    // The first generation is initalized with random numbers.
    FireStarterNetwork network;
    if (generation)
        network = networks[member];
    else
        InitNetwork(network, memberSeed);
    FireStarterNetwork bestNetwork = network;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Iterate to evolve the data.
        if (network.age > NETWORK_MAXAGE)
            InitNetwork(network, memberSeed);
        FireStarterNetwork oldNetwork = network;

        for (unsigned int i = 0; i < FIRESTARTER_SINSIM_ITERATIONS; i++) {
            EvolveNetwork(network, memberSeed);

            // Grade the network.
            network.grade = 0.0f;
            for (unsigned int s = 0; s < FIRESTARTER_SINSIM_SAMPLES; s++) {
                float input = cosf(s * (TARGET_PI * 2.0f) / DATA_FREQUENCY);
                float sample = TestNetwork(network, input);
                float target = sinf((s + 15) * (TARGET_PI * 2.0f) / DATA_FREQUENCY) + 10.0f;
                float difference = sample - target;
                network.grade += fabsf(difference) * (1.0f / FIRESTARTER_SINSIM_SAMPLES);
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
