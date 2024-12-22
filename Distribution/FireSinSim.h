#pragma once
#include "CUDADefines.h"
#include "FireStarterSettings.h"

#define NEURON_COUNT    4
#define EVOLVE_WIEGHT   0.75f
#define BAD_VALUE       10.0f

typedef struct {
    float connection[NEURON_COUNT];
    float addValue;
    float oldValue;
    float newValue;
} FireStarterNeuron;

typedef struct {
    FireStarterNeuron neuron[NEURON_COUNT];
} FireStarterNetwork;
