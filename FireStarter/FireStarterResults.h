#pragma once
#include "FireStarterInstructions.h"

typedef struct {
    FireStarterInstructions instructions;
    FireStarterData data[PROGRAM_VARIATIONS];
    float minResult[PROGRAM_VARIATIONS];
    float maxResult;
    unsigned int test;
} FireStarterResult;

typedef struct {
    FireStarterResult results[1];
} FireStarterResults;
