#pragma once

#define EVALUATE_EVOLVE 0
#define EVOLVE_EVOLVE 1
#define EVOLVE (EVALUATE_EVOLVE | EVOLVE_EVOLVE)

#define PROGRAM_DATA 32
#define PROGRAM_INSTRUCTIONS 32
#define PROGRAM_GENERATIONS 100
#define PROGRAM_ITERATIONS 1000
#define PROGRAM_POPULATION 4352
#define PROGRAM_SEED 0
#define SAMPLE_ITERATIONS 15
#define SMART_RANDOM_FACTOR 0.1f
#define EVOLUTION_SAMPLES 16
#define START_RESULT 10.0f
#define SMART_EVOLVE_AGE 10
#define SMART_DEVOLVE_AGE 50

#define EVALUATE_CODE   "// EVALUATE //"
#define EVOLVE_CODE     "// EVOLVE //"
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

typedef enum {
    Operation_add,
    Operation_multiply,
    PROGRAM_OPCODES
} FireStarterOpcode;

typedef struct {
    FireStarterOpcode opcode;
    unsigned int data;
} FireStarterInstruction;

typedef struct {
    FireStarterInstruction instructions[PROGRAM_INSTRUCTIONS];
    unsigned long long generation;
} FireStarterProgram;

typedef struct {
    FireStarterProgram program;
    FireStarterResult result0;
    FireStarterResult result1;
    float maxResult;
} FireStarterState;
