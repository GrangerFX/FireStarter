#pragma once
#include "CUDADefines.h"
#include "FireStarterSettings.h"
#include "HashRandom.h"

#define SINSIM_NEURON_COUNT    4
#define SINSIM_NETWORK_MAXAGE  100
#define SINSIM_EVOLVE_WIEGHT   0.75f
#define SINSIM_INIT_GRADE      10.0f
#define SINSIM_DATA_FREQUENCY  222.4f

typedef struct SinSimNeuron {
    float connection[SINSIM_NEURON_COUNT];
    float addValue = 0.0f;
    float value = 0.0f;

    inline SinSimNeuron(void)
    {
        for (unsigned int j = 0; j < SINSIM_NEURON_COUNT; j++)
            connection[j] = 1.0f / SINSIM_NEURON_COUNT;
    } // SinSimNeuron
} SinSimNeuron;

typedef struct SinSimNetwork {
    SinSimNeuron neuron[SINSIM_NEURON_COUNT];
    float grade = SINSIM_INIT_GRADE;
    unsigned int age = 0;

#if 0
    static inline float SinSimInputSample(unsigned int s)
    {
        return TARGET_PI * RANDOMNUM(s);
    } // SinSimInputSample

    static inline float SinSimTargetSample(unsigned int s)
    {
        return sinf(SinSimInputSample(s));
    } // SinSimInputSample
#else
    static inline float SinSimInputSample(unsigned int s)
    {
        return cosf(s * TARGET_PI / SINSIM_DATA_FREQUENCY);
    } // SinSimInputSample

    static inline float SinSimTargetSample(unsigned int s)
    {
        return sinf((s + 45) * TARGET_PI / SINSIM_DATA_FREQUENCY);
    } // SinSimTargetSample
#endif

    inline void SinSimTestNeuron(const unsigned int index)
    {
        // Process a single nuron by adding the weighted connections.
        // This version calculates each connection in series.
        SinSimNeuron& theNeuron = neuron[index];
        theNeuron.value = theNeuron.addValue;
        for (unsigned int i = 0; i < SINSIM_NEURON_COUNT; i++)
            theNeuron.value += theNeuron.connection[i] * neuron[i].value;
    } // SinSimTestNeuron

    inline float SinSimTestNetwork(float inputData)
    {
        // Process a single input data and compare the result to the target data.
        // This version calculates each neuron in series.
        neuron[SINSIM_NEURON_COUNT - 1].value = inputData;
        for (unsigned int i = 1; i < SINSIM_NEURON_COUNT; i++)
            SinSimTestNeuron(i);
        return neuron[SINSIM_NEURON_COUNT - 1].value;
    } // SinSimTestNetwork

    inline void SinSimInitNetwork(unsigned long long& seed)
    {
        for (unsigned int i = 0; i < SINSIM_NEURON_COUNT; i++) {
            for (unsigned int j = 0; j < SINSIM_NEURON_COUNT; j++)
                neuron[i].connection[j] = RANDOMFACTOR(seed);
            neuron[i].addValue = RANDOMFACTOR(seed);
            neuron[i].value = 0.0f;
            grade = SINSIM_INIT_GRADE;
            age = 0;
        }
    } // SinSimInitNetwork

    inline void SinSimInitNetwork(void)
    {
        for (unsigned int i = 0; i < SINSIM_NEURON_COUNT; i++) {
            for (unsigned int j = 0; j < SINSIM_NEURON_COUNT; j++)
                neuron[i].connection[j] = 1.0f / SINSIM_NEURON_COUNT;
            neuron[i].addValue = 0.0f;
            neuron[i].value = 0.0f;
        }
        grade = SINSIM_INIT_GRADE;
        age = 0;
    } // SinSimInitNetwork

    inline void SinSimEvolveNetwork( unsigned long long& seed)
    {
        // Copy the current new neurons into the old neurons.
        for (unsigned int i = 0; i < SINSIM_NEURON_COUNT; i++)
            neuron[i].value = 0.0f;

        // Change something randomly.
        unsigned int n = RANDOMSEED(seed) % SINSIM_NEURON_COUNT;
        if (n) {
            unsigned int connection = RANDOMSEED(seed) % SINSIM_NEURON_COUNT;
            neuron[n].connection[connection] += grade * SINSIM_EVOLVE_WIEGHT * RANDOMFACTOR(seed);
        } else {
            n = RANDOMSEED(seed) % SINSIM_NEURON_COUNT;
            neuron[n].addValue += grade * SINSIM_EVOLVE_WIEGHT * RANDOMFACTOR(seed);
        }
    } // SinSimEvolveNetwork

    inline SinSimNetwork(void)
    {
    } // SinSimNetwork
} SinSimNetwork;


