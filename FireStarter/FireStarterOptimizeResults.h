#pragma once
#include "FireStarterData.h"

typedef struct {
    FireStarterData data[PROGRAM_VARIATIONS];
    float minResult[PROGRAM_VARIATIONS];
    float maxResult;
    unsigned int test;
} FireStarterOptimizeResult;

typedef struct {
    FireStarterOptimizeResult results[1];
} FireStarterOptimizeResults;
