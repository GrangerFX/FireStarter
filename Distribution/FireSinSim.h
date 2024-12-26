#pragma once
#include "CUDADefines.h"
#include "FireStarterSettings.h"
#include "HashRandom.h"

#define SINSIM_NEURON_COUNT    4
#define SINSIM_NETWORK_MAXAGE  100
#define SINSIM_EVOLVE_WIEGHT   0.75f
#define SINSIM_BAD_VALUE       10.0f
#define SINSIM_DATA_FREQUENCY  111.2f

typedef struct {
    float connection[SINSIM_NEURON_COUNT];
    float addValue;
    float value;
} SinSimNeuron;

typedef struct {
    SinSimNeuron neuron[SINSIM_NEURON_COUNT];
    float grade;
    unsigned int age;
} SinSimNetwork;

GPU_FUNCTION float SinSimInputSample(unsigned int s)
{
    return cosf(s * (TARGET_PI * 2.0f) / SINSIM_DATA_FREQUENCY);
} // SinSimInputSample

GPU_FUNCTION float SinSimTargetSample(unsigned int s)
{
    return sinf((s + 15) * (TARGET_PI * 2.0f) / SINSIM_DATA_FREQUENCY) + 10.0f;
} // SinSimInputSample

GPU_FUNCTION float SinSimTestNeuron(SinSimNetwork& network, const unsigned int index)
{
    // Process a single nuron by adding the weighted connections.
    SinSimNeuron& theNeuron = network.neuron[index];
    float newValue = theNeuron.addValue;
    for (unsigned int i = 0; i < SINSIM_NEURON_COUNT; i++)
        newValue += theNeuron.connection[i] * network.neuron[i].value;
    return newValue;
} // SinSimTestNeuron

GPU_FUNCTION float SinSimTestNetwork(SinSimNetwork& network, float inputData)
{
    // Process a single input data and compare the result to the target data.
    network.neuron[0].value = inputData;
    float newValues[SINSIM_NEURON_COUNT];
    for (unsigned int i = 1; i < SINSIM_NEURON_COUNT; i++)
        newValues[i] = SinSimTestNeuron(network, i);
    for (unsigned int i = 0; i < SINSIM_NEURON_COUNT; i++)
        network.neuron[i].value = newValues[i];
    return newValues[SINSIM_NEURON_COUNT - 1];
} // SinSimTestNetwork

GPU_FUNCTION void SinSimInitNetwork(SinSimNetwork& network, unsigned long long& seed)
{
    for (unsigned int i = 0; i < SINSIM_NEURON_COUNT; i++) {
        for (unsigned int j = 0; j < SINSIM_NEURON_COUNT; j++)
            network.neuron[i].connection[j] = 1.0f / SINSIM_NEURON_COUNT;
        network.neuron[i].addValue = 0.0f;
        network.neuron[i].value = 0.0f;
        network.grade = SINSIM_BAD_VALUE;
        network.age = 0;
    }
} // SinSimInitNetwork

GPU_FUNCTION void SinSimEvolveNetwork(SinSimNetwork& network, unsigned long long& seed)
{
    // Copy the current new neurons into the old neurons.
    for (unsigned int i = 0; i < SINSIM_NEURON_COUNT; i++)
        network.neuron[i].value = 0.0f;

    // Change something randomly.
    unsigned int neuron = RANDOMSEED(seed) % SINSIM_NEURON_COUNT;
    if (neuron) {
        unsigned int connection = RANDOMSEED(seed) % SINSIM_NEURON_COUNT;
        network.neuron[neuron].connection[connection] += network.grade * SINSIM_EVOLVE_WIEGHT * RANDOMFACTOR(seed);
    }
    else {
        neuron = RANDOMSEED(seed) % SINSIM_NEURON_COUNT;
        network.neuron[neuron].addValue += network.grade * SINSIM_EVOLVE_WIEGHT * RANDOMFACTOR(seed);
    }
} // SinSimEvolveNetwork
