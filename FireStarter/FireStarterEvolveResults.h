#pragma once
#include "FireStarterInstructions.h"

typedef struct {
    FireStarterInstructions instructions;
    FireStarterData data[PROGRAM_VARIATIONS];
    float minResult[PROGRAM_VARIATIONS];
    float maxResult;
    unsigned int test;
} FireStarterEvolveResult;

typedef struct {
    FireStarterEvolveResult results[1];
} FireStarterEvolveResults;
