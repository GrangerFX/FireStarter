#pragma once
#include "CUDADefines.h"

#define FIRESTARTER_EVOLVE   0
#define FIRESTARTER_OPTIMIZE 1
#define FIRESTARTER_TEST     2
#define FIRESTARTER_DEBUG    3
#define FIRESTARTER_SOLUTION 4
#define FIRESTARTER_MODE     FIRESTARTER_EVOLVE

#define PROGRAM_UNITS 16
#define PROGRAM_DATA 32
#if FIRESTARTER_MODE == FIRESTARTER_EVOLVE
#define PROGRAM_GENERATIONS 10  // Must be even!
#else
#define PROGRAM_GENERATIONS 100 // Must be even!
#endif
#define PROGRAM_ITERATIONS 1000
#define PROGRAM_POPULATION 4352
#define PROGRAM_LOAD_STORE 0
#define PROGRAM_SEED 0

#define SAMPLE_MIN 0.0f
#define SAMPLE_MAX (2.0f * 3.14159265f)
#define SAMPLE_ITERATIONS 15
#define EVOLUTION_FACTOR 0.1f
#define EVOLUTION_SAMPLES 16
#define START_RESULT 10.0f

#define VARIATION0 0
#if (FIRESTARTER_MODE == FIRESTARTER_EVOLVE)
#define VARIATION1 1
#else
#define VARIATION1 2
#endif

#define OPERATIONS_CODE "// OPERATIONS //"
#define EVALUATE_CODE   "// EVALUATE //"
#define TARGET_CODE     "// TARGET //"
#define DATA0_CODE      "// DATA0 //"
#define DATA1_CODE      "// DATA1 //"
#define END_CODE        "// END //"

typedef struct FireStarterData {
    float d[PROGRAM_DATA];
} FireStarterData;

typedef struct {
    FireStarterData data;
    float result;
} FireStarterResult;

typedef struct {
    FireStarterResult results[1];
} FireStarterResults;
