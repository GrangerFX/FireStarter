#pragma once
#include "CUDADefines.h"
#include "FireStarterSettings.h"
#include "HashRandom.h"

#define NEURON_COUNT    4
#define NETWORK_MAXAGE  100
#define EVOLVE_WIEGHT   0.75f
#define BAD_VALUE       10.0f
#define DATA_FREQUENCY  111.2f

typedef struct {
    float connection[NEURON_COUNT];
    float addValue;
    float value;
} FireStarterNeuron;

typedef struct {
    FireStarterNeuron neuron[NEURON_COUNT];
    float grade;
    unsigned int age;
} FireStarterNetwork;
