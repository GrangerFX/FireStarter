#pragma once
#include "CUDADefines.h"

#define EVOLVE 1

#define PROGRAM_UNITS 0
#define PROGRAM_DATA 32
#define PROGRAM_INSTRUCTIONS 32
#define PROGRAM_GENERATIONS 100
#define PROGRAM_ITERATIONS 1024
#define PROGRAM_POPULATION 4352
#define PROGRAM_LOAD_STORE 0
#define PROGRAM_SEED 0
#define PROGRAM_RANDOM_SAMPLES 1
#define SAMPLE_ITERATIONS 15
#define SMART_RANDOM_FACTOR 0.1f
#define EVOLUTION_SAMPLES 16
#define START_RESULT 10.0f
#define SMART_EVOLVE_AGE 10
#define SMART_DEVOLVE_AGE 50

#define OPERATIONS_CODE "// OPERATIONS //"
#define EVALUATE_CODE   "// EVALUATE //"
#define UNITS_CODE      "// UNITS //"
#define BEST_CODE       "// BEST //"
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

typedef enum {
    Operation_add,
    Operation_multiply,
#if PROGRAM_LOAD_STORE
    Operation_load,
    Operation_store,
#endif
    PROGRAM_OPCODES
} FireStarterOpcode;

#define PROGRAM_OPERATIONS (PROGRAM_OPCODES * PROGRAM_INSTRUCTIONS * PROGRAM_DATA)

typedef struct {
    unsigned int instructions[PROGRAM_INSTRUCTIONS];
    unsigned long long generation;
} FireStarterProgram;
