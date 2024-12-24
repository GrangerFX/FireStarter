#pragma once
#include "FireSinSim.h"
#include "CUDADefines.h"

GPU_FUNCTION void TestNeuron(FireStarterNetwork& network, const unsigned int index)
{
    // Process a single nuron by adding the weighted connections.
    FireStarterNeuron& theNeuron = network.neuron[index];
    float value = theNeuron.addValue;
    for (unsigned int i = 0; i < NEURON_COUNT; i++)
        value += theNeuron.connection[i] * network.neuron[i].oldValue;
    theNeuron.newValue = value;
}  // TestNeuron

GPU_FUNCTION float TestNetwork(FireStarterNetwork& network, float inputData)
{
    // Process a single input data and compare the result to the target data.
    network.neuron[0].oldValue = inputData;
    for (unsigned int j = 1; j < NEURON_COUNT; j++)
        TestNeuron(network, j);
    for (unsigned int i = 0; i < NEURON_COUNT; i++)
        network.neuron[i].oldValue = network.neuron[i].newValue;
    return network.neuron[NEURON_COUNT - 1].newValue;
}  // TestNetwork

GPU_FUNCTION void InitNetwork(FireStarterNetwork& network)
{
    for (unsigned int i = 0; i < NEURON_COUNT; i++) {
        network.neuron[i].addValue = 0.0f;
        network.neuron[i].oldValue = 0.0f;
        network.neuron[i].newValue = 0.0f;
        for (unsigned int j = 0; j < NEURON_COUNT; j++)
            network.neuron[i].connection[j] = 1.0f / NEURON_COUNT;
    }
} // InitNetwork

GPU_FUNCTION void EvolveNetwork(FireStarterNetwork& network, float grade, unsigned long long& seed)
{
    // Copy the current new neurons into the old neurons.
    for (unsigned int i = 0; i < NEURON_COUNT; i++)
        network.neuron[i].oldValue = network.neuron[i].newValue = 0.0f;

    // Change something randomly.
    unsigned int neuron = RANDOMSEED(seed) % NEURON_COUNT;
    if (neuron) {
        unsigned int connection = RANDOMSEED(seed) % NEURON_COUNT;
        network.neuron[neuron].connection[connection] += grade * EVOLVE_WIEGHT * RANDOMFACTOR(seed);
    } else {
        neuron = RANDOMSEED(seed) % NEURON_COUNT;
        network.neuron[neuron].addValue += grade * EVOLVE_WIEGHT * RANDOMFACTOR(seed);
    }
} // EvolveNetwork

GPU_GLOBAL void SinSim(float* results, FireStarterNetwork* networks, const unsigned int variation, const unsigned long long generation, const unsigned long long seed, const unsigned int passes, const unsigned int populationSize)
{
    // Determine the member to be optimized.
    unsigned int member = blockIdx.x * blockDim.x + threadIdx.x;
    if (member >= populationSize)
        return;

    // Evolve the program registers for each variation.
    unsigned long long memberSeed = seed + SEED1(member);   // Unique seed for the member

    // The first generation is initalized with random numbers.
    FireStarterNetwork network;
    if (generation)
        network = networks[member];
    else
        InitNetwork(network);
    FireStarterNetwork bestNetwork = network;
    float bestGrade = BAD_VALUE;

    // Perform all the passes on the GPU.
    for (unsigned int pass = 0; pass < passes; pass++) {
        // Iterate to evolve the data.
        float oldGrade = BAD_VALUE;
        float grade = BAD_VALUE;
        FireStarterNetwork oldNetwork = network;

        for (unsigned int i = 0; i < FIRESTARTER_SINSIM_ITERATIONS; i++) {
            EvolveNetwork(network, grade, memberSeed);
            grade = 0.0f;

#if 1
            for (unsigned int s = 0; s < FIRESTARTER_SINSIM_SAMPLES; s++) {
                float input = cosf(s * (TARGET_PI * 2.0f) / DATA_FREQUENCY);
                float sample = TestNetwork(network, input);
                float target = sinf((s + 15) * (TARGET_PI * 2.0f) / DATA_FREQUENCY) + 10.0f;
                float difference = sample - target;
                grade += fabsf(difference) * (1.0f / FIRESTARTER_SINSIM_SAMPLES);
            }

#else
            float t = TARGET_MIN;
            for (unsigned int s = 0; s < FIRESTARTER_SINSIM_SAMPLES; s++) {
                float sample = TestNetwork(network, t);
                float target = Target(t, variation);
                float difference = sample - target;
                grade += fabsf(difference) * (1.0f / FIRESTARTER_SINSIM_SAMPLES);
                t += (TARGET_MAX - TARGET_MIN) / FIRESTARTER_SINSIM_SAMPLES;
            }
#endif

            if (grade < oldGrade) {
                oldNetwork = network;
                oldGrade = grade;
            } else {
                network = oldNetwork;
                grade = oldGrade;
            }
        }

        // Did the results improve?
        if (grade < bestGrade) {
            // If the result was better, save the network.
            bestNetwork = network;
            bestGrade = grade;
        }
    }

    // Return the optimized best code.
    networks[member] = bestNetwork;

    // Return the array of results or the entire population data.
    results[member] = bestGrade;
} // SinSim
