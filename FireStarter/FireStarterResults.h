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

class FireStarterOrder {
public:
    unsigned int order[PROGRAM_VARIATIONS];

    inline FireStarterOrder(float* values = nullptr)
    {
        // Sort the variations largest first. This increases the chance that the generation can fail early.
        for (int v = 0; v < PROGRAM_VARIATIONS; v++)
            order[v] = v;
        if (values) {
             for (int v = 0; v < PROGRAM_VARIATIONS; v++) {
                int maxIndex = v;
                float max = values[order[v]];
                for (int i = v + 1; i < PROGRAM_VARIATIONS; i++) {
                    float result = values[order[i]];
                    if (result > max) {
                        max = result;
                        maxIndex = i;
                    }
                }
                int swap = order[maxIndex];
                order[maxIndex] = order[v];
                order[v] = swap;
            }
        }
    } // FireStarterOrder
};
