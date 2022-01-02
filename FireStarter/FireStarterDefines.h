#pragma once
#include "CUDADefines.h"

#define EVOLVE 0
#define TEST 1
#define DEBUG 0

#define PROGRAM_DATA 16
#if EVOLVE
#define PROGRAM_GENERATIONS 10 // Must be even!
#else
#define PROGRAM_GENERATIONS 100 // Must be even!
#endif
#define PROGRAM_ITERATIONS 1000
#define PROGRAM_POPULATION 4352
#define PROGRAM_LOAD_STORE 0
#define PROGRAM_SEED 0

#define SAMPLE_ITERATIONS 15
#define SMART_RANDOM_FACTOR 0.1f
#define EVOLUTION_SAMPLES 16
#define START_RESULT 10.0f
#define SMART_EVOLVE_AGE 20
#define SMART_DEVOLVE_AGE 50

#define VARIATION0 0
#if EVOLVE
#define VARIATION1 1
#else
#define VARIATION1 2
#endif

#define OPERATIONS_CODE "// OPERATIONS //"
#define EVALUATE_CODE   "// EVALUATE //"
#define DATA0_CODE      "// DATA0 //"
#define DATA1_CODE      "// DATA1 //"
#define END_CODE        "// END //"

typedef struct FireStarterData {
    float d[PROGRAM_DATA];
} FireStarterData;

typedef struct FireStarterSamples {
    float s[SAMPLE_ITERATIONS];
} FireStarterSamples;

typedef struct {
    FireStarterData data;
    float result;
} FireStarterResult;

typedef struct {
    FireStarterResult results[1];
} FireStarterResults;

GPU_FUNCTION float Target(float n, unsigned int variation)
{
    switch (variation) {
        default:
        case 0:
            return sinf(n);
        case 1:
            return sinf(n * 1.2f) + n * 0.2f;
        case 2:
            return sinf((n + 0.4f) * 0.9f) - n * 0.2f + 0.5f;
    }
} // Target
