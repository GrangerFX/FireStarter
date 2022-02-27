#pragma once
#include "FireStarterData.h"

typedef struct {
    FireStarterData data;
    float minResult;
    unsigned int test;
} FireStarterOptimizeResult;

typedef struct {
    FireStarterOptimizeResult results[1];
} FireStarterOptimizeResults;
