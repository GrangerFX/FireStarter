#pragma once
#include "CUDADefines.h"
#include "FireStarterSettings.h"
#include "HashRandom.h"

#define NEURON_COUNT    4
#define EVOLVE_WIEGHT   0.75f
#define INIT_WEIGHT     10.0f
#define BAD_VALUE       10.0f
#define DATA_FREQUENCY  111.2f

typedef struct {
    float connection[NEURON_COUNT];
    float addValue;
    float value;
} FireStarterNeuron;

typedef struct {
    FireStarterNeuron neuron[NEURON_COUNT];
} FireStarterNetwork;
