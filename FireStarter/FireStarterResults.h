#pragma once
#include "FireStarterInstructions.h"

typedef struct FireStarterResult {
    FireStarterInstructions instructions;
    float maxResult;
    unsigned int dataSize;
    float data[1];

    static inline size_t InstructionsSize(unsigned int instructions)
    {
        return sizeof(FireStarterInstruction) * instructions;
    } // InstructionsSize

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
        return InstructionsSize(instructions) + VariationsSize(instructions, variations) + sizeof(float) * variations + sizeof(float) + sizeof(unsigned int);
    } // ResultSize

    inline float* MinResult(unsigned int variation)
    {
        return &data[variation * dataSize + (dataSize - 1)];
    } // MinResult

    inline FireStarterData* Data(unsigned int variation)
    {
        return (FireStarterData*)&data[variation * dataSize];
    } // Data

    inline void Init(unsigned int numInstructions, unsigned int numVariations)
    {
        maxResult = START_RESULT;
        dataSize = numInstructions + 1;
        for (unsigned int v = 0; v < numVariations; v++) {
            FireStarterData* data = Data(v);
            for (unsigned int i = 0; i < numInstructions; i++)
                data->d[i] = 1.0f;
            *MinResult(v) = START_RESULT;
        }
    } // Init
} FireStarterResult;

typedef struct FireStarterResults {
    size_t m_members;
    size_t m_instructions;
    size_t m_variations;
    size_t m_instructionSize;
    size_t m_dataSize;
    size_t m_variationsSize;
    size_t m_resultSize;
    size_t m_resultsSize;
    unsigned char m_memory[16];

    static inline size_t ResultsSize(unsigned int members, unsigned int instructions, unsigned int variations)
    {
        return sizeof(FireStarterResults) + FireStarterResult::ResultSize(instructions, variations) * members - 16;
    } // ResultsSize

    inline FireStarterResult* Result(unsigned int member)
    {
        return (FireStarterResult*)(m_memory + member * m_resultSize);
    } // Result

    inline FireStarterInstructions* Instructions(unsigned int member)
    {
        return &Result(member)->instructions;
    } // Instructions

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

    void InitResults(unsigned int members, unsigned int instructions, unsigned int variations)
    {
        m_members = members;
        m_instructions = instructions;
        m_variations = variations;
        m_instructionSize = FireStarterResult::InstructionsSize(instructions);
        m_dataSize = FireStarterResult::DataSize(instructions);
        m_variationsSize = FireStarterResult::VariationsSize(instructions, variations);
        m_resultSize = FireStarterResult::ResultSize(instructions, variations);
        m_resultsSize = ResultsSize(members, instructions, variations);
        for (unsigned int i = 0; i < members; i++)
            Result(i)->Init(instructions, variations);
    } // FireStarterResults
} FireStarterResults;
