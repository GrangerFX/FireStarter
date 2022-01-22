#pragma once
#include "CUDADefines.h"

#define PROGRAM_DATA 32
#define PROGRAM_ITERATIONS 1024
#define PROGRAM_POPULATION 4352

#define SAMPLE_MIN 0.0f
#define SAMPLE_MAX (2.0f * 3.14159265f)
#define SAMPLE_ITERATIONS 15
#define EVOLUTION_FACTOR 0.1f
#define EVOLUTION_SAMPLES 16
#define START_RESULT 10.0f

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
