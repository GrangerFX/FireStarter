#pragma once
#include "FireStarterInstructions.h"

typedef struct {
    FireStarterInstructions instructions;
    FireStarterData data[TARGET_VARIATIONS];
    float minResult[TARGET_VARIATIONS];
    float maxResult;
} FireStarterResult;

typedef struct {
    FireStarterResult results[1];
} FireStarterResults;
