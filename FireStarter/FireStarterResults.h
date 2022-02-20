#pragma once
#include "FireStarterInstructions.h"

typedef struct {
    FireStarterInstructions instructions;
    FireStarterData data[TARGET_VARIATIONS];
    float minResult[TARGET_VARIATIONS];
    float maxResult;
    unsigned int test;
} FireStarterResult;

typedef struct {
    FireStarterResult results[1];
} FireStarterResults;
