#pragma once

#define FS2_PROGRAM_EVOLVE 0

#define FS2_VARIATION 0
#define FS2_PROGRAM_DATA 8
#define FS2_PROGRAM_INSTRUCTIONS 16
#define FS2_PROGRAM_GENERATIONS 100
#define FS2_PROGRAM_ITERATIONS 1000
#define FS2_PROGRAM_POPULATION 4352
#define FS2_PROGRAM_SEED 0
#define FS2_SAMPLE_ITERATIONS 15
#define FS2_SMART_RANDOM_FACTOR 0.1f
#define FS2_EVOLUTION_SAMPLES 16
#define FS2_START_RESULT 10.0f
#define FS2_SMART_EVOLVE_AGE 10
#define FS2_SMART_DEVOLVE_AGE 50

#define FS2_REPLACMENT_CODE "// FS2_PROGRAM //"

typedef struct FireStarter2Data {
    float d[FS2_PROGRAM_DATA];
} FireStarter2Data;

typedef struct {
    FireStarter2Data data;
    float result;
} FireStarter2Result;

typedef struct {
    FireStarter2Result results[1];
} FireStarter2Results;

typedef struct {
    unsigned int a, b, c, d;
} FireStarter2Instruction;

typedef struct {
    FireStarter2Instruction instructions[FS2_PROGRAM_INSTRUCTIONS];
    FireStarter2Result result0;
    FireStarter2Result result1;
    float maxResult;
    unsigned long long generation;
} FireStarter2State;
