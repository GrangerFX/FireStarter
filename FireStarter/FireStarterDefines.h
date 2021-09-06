#pragma once
#include <vector>

#define FS1_VARIATION 0
#define PROGRAM_DATA 6
#define PROGRAM_ITERATIONS 4000
#define PROGRAM_POPULATION 4352 * 32
#define SAMPLE_ITERATIONS 15
#define MAX_RESULTS 16384
#define SMART_RANDOM_FACTOR 0.1f
#define SMART_AGE_FACTOR 0.01f
#define SMART_EVOLVE_AGE 10
#define SMART_DEVOLVE_AGE 50
#define START_RESULT 10.0f
#define BLOCK_SIZE 32

typedef struct FireStarterData {
    float d[PROGRAM_DATA];
} FireStarterData;

typedef struct {
    FireStarterData data;
    float result;
    unsigned int member;
} FireStarterResult;

typedef struct {
    unsigned int numResults;
    float minResult;
    float curResult;
    float startResult;
    FireStarterData bestData;
    FireStarterResult results[1];
} FireStarterResults;

typedef struct {
    int a, b, c;
} FireStarterInstruction;

typedef struct FireStarterInstructions {
    FireStarterInstruction d[PROGRAM_DATA];
} FireStarterInstructions;

typedef struct {
    FireStarterInstructions instructions;
    FireStarterData data;
    float result;
} FireStarterState;

typedef std::vector<FireStarterState> FireStarterStates;
