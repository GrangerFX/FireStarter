#pragma once
#include "FireStarterInstructions.h"

typedef struct {
    FireStarterInstructions instructions;
    FireStarterData data[PROGRAM_VARIATIONS];
    float minResult[PROGRAM_VARIATIONS];
    float maxResult;
    float padding;
} FireStarterResult;

class FireStarterResults {
private:
    FireStarterResult results[1];
public:
    inline FireStarterInstructions* Instructions(unsigned int member)
    {
        return &results[member].instructions;
    } // Instructions

    inline FireStarterData* Data(unsigned int member, unsigned int variation)
    {
        return &results[member].data[variation];
    } // Data

    inline float* MinResult(unsigned int member)
    {
        return results[member].minResult;
    } // MinResult

    inline float* MaxResult(unsigned int member)
    {
        return &results[member].maxResult;
    } // MaxResult

    inline FireStarterResult* Result(unsigned int member)
    {
        return &results[member];
    } // Result
}; // FireStarterResults
