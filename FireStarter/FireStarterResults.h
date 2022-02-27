#pragma once
#include "FireStarterInstructions.h"

typedef struct {
    FireStarterInstructions instructions;
    FireStarterData data[TARGET_VARIATIONS];
    float minResult[TARGET_VARIATIONS];
    float maxResult;
    unsigned int test;
} FireStarterEvolveResult;

typedef struct {
    FireStarterEvolveResult results[1];
} FireStarterEvolveResults;

typedef struct {
    FireStarterInstructions instructions;
    FireStarterData data;
    float minResult;
    unsigned int test;
} FireStarterOptimizeResult;

typedef struct {
    FireStarterOptimizeResult results[1];
} FireStarterOptimizeResults;
