#pragma once
#include "FireStarterData.h"

typedef struct FireStarterResult {
    float maxResult;
    unsigned int dataSize;
    float data[FIRESTARTER_INSTRUCTIONS * FIRESTARTER_VARIATIONS];

    static inline size_t DataSize(unsigned int instructions)
    {
        return sizeof(float) * instructions;
    } // DataSize

    static inline size_t VariationsSize(unsigned int instructions, unsigned int variations)
    {
        return sizeof(float) * instructions * variations;
    } // DataSize

    static inline size_t ResultSize(unsigned int instructions, unsigned int variations)
    {
        return sizeof(float) + sizeof(unsigned int) + VariationsSize(instructions, variations) + sizeof(float) * variations;
    } // ResultSize

    inline float* MinResult(unsigned int variation)
    {
        return &data[variation * dataSize + (dataSize - 1)];
    } // MinResult

    inline FireStarterData* Data(unsigned int variation)
    {
        return (FireStarterData*)&data[variation * dataSize];
    } // Data

    inline void Init(unsigned int numInstructions, unsigned int numVariations, float startResult)
    {
        maxResult = startResult;
        dataSize = numInstructions + 1;
        for (unsigned int v = 0; v < numVariations; v++) {
            FireStarterData* data = Data(v);
            for (unsigned int i = 0; i < numInstructions; i++)
                data->d[i] = 1.0f;
            *MinResult(v) = startResult;
        }
    } // Init
} FireStarterResult;

typedef struct FireStarterResults {
    size_t m_members;
    size_t m_instructions;
    size_t m_variations;
    size_t m_instructionsSize;
    size_t m_dataSize;
    size_t m_variationsSize;
    size_t m_resultSize;
    size_t m_resultsSize;
    unsigned char m_memory[16];

    static inline size_t ResultsSize(unsigned int members, unsigned int instructions, unsigned int variations)
    {
        return (sizeof(FireStarterResults) - 16) + members * FireStarterResult::ResultSize(instructions, variations);
    } // ResultsSize

    inline FireStarterResult* Result(unsigned int member)
    {
        return (FireStarterResult*)(m_memory + member * m_resultSize);
    } // Result

    inline FireStarterData* Data(unsigned int member, unsigned int variation)
    {
        return Result(member)->Data(variation);
    } // Data

    inline float* MinResult(unsigned int member, unsigned int variation)
    {
        return Result(member)->MinResult(variation);
    } // MinResult

    inline float* MaxResult(unsigned int member)
    {
        return &Result(member)->maxResult;
    } // MaxResult

    inline void InitResults(unsigned int members, unsigned int instructions, unsigned int variations, float startResult)
    {
        m_members = members;
        m_instructions = instructions;
        m_variations = variations;
        m_dataSize = FireStarterResult::DataSize(instructions);
        m_variationsSize = FireStarterResult::VariationsSize(instructions, variations);
        m_resultSize = FireStarterResult::ResultSize(instructions, variations);
        m_resultsSize = ResultsSize(members, instructions, variations);
        for (unsigned int i = 0; i < members; i++)
            Result(i)->Init(instructions, variations, startResult);
    } // FireStarterResults
} FireStarterResults;
