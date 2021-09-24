#pragma once

#define PROGRAM_EVOLVE 0

#define PROGRAM_DATA 8
#define PROGRAM_INSTRUCTIONS 16
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

#define REPLACMENT_CODE "// PROGRAM //"

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

typedef struct {
    unsigned int a, b, c, d;
} FireStarterInstruction;

typedef struct {
    FireStarterInstruction instructions[PROGRAM_INSTRUCTIONS];
    FireStarterResult result0;
    FireStarterResult result1;
    float maxResult;
    unsigned long long generation;
} FireStarterState;
