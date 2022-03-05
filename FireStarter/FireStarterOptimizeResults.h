#pragma once
#include "FireStarterData.h"

typedef struct {
    FireStarterData data[TARGET_VARIATIONS];
    float minResult[TARGET_VARIATIONS];
    float maxResult;
    unsigned int test;
} FireStarterOptimizeResult;

typedef struct {
    FireStarterOptimizeResult results[1];
} FireStarterOptimizeResults;
