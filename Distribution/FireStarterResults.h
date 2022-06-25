#pragma once
#include "FireStarterSettings.h"

typedef struct FireStarterData {
    float d[FIRESTARTER_REGISTERS];

    static inline size_t DataSize(size_t registers)
    {
        return sizeof(float) * registers;
    } // DataSize
} FireStarterData;

typedef struct FireStarterResult {
    float maxResult;
    unsigned short evolveRegister;
    unsigned short dataSize;
    float data[FIRESTARTER_REGISTERS * FIRESTARTER_VARIATIONS];

    static inline size_t VariationsSize(unsigned int instructions, unsigned int variations)
    {
        return sizeof(float) * instructions * variations;
    } // DataSize

    static inline size_t ResultSize(unsigned int instructions, unsigned int variations)
    {
        return sizeof(float) + sizeof(unsigned short) + sizeof(unsigned short) + VariationsSize(instructions, variations) + sizeof(float) * variations;
    } // ResultSize

    inline float* MinResult(unsigned int variation)
    {
        return &data[variation * dataSize + (dataSize - 1)];
    } // MinResult

    inline const float* ConstMinResult(unsigned int variation) const
    {
        return &data[variation * dataSize + (dataSize - 1)];
    } // ConstMinResult

    inline FireStarterData* Data(unsigned int variation)
    {
        return (FireStarterData*)&data[variation * dataSize];
    } // Data

    inline const FireStarterData* ConstData(unsigned int variation) const
    {
        return (const FireStarterData*)&data[variation * dataSize];
    } // ConstData

    inline void Init(unsigned int numInstructions, unsigned int numVariations, float startResult)
    {
        maxResult = startResult;
        evolveRegister = 0;
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

    inline const FireStarterResult* ConstResult(unsigned int member) const
    {
        return (const FireStarterResult*)(m_memory + member * m_resultSize);
    } // ConstResult

    inline FireStarterData* Data(unsigned int member, unsigned int variation)
    {
        return Result(member)->Data(variation);
    } // Data

    inline const FireStarterData* ConstData(unsigned int member, unsigned int variation) const
    {
        return ConstResult(member)->ConstData(variation);
    } // Data

    inline float* MinResult(unsigned int member, unsigned int variation)
    {
        return Result(member)->MinResult(variation);
    } // MinResult

    inline const float* ConstMinResult(unsigned int member, unsigned int variation) const
    {
        return ConstResult(member)->ConstMinResult(variation);
    } // ConstMinResult

    inline float* MaxResult(unsigned int member)
    {
        return &Result(member)->maxResult;
    } // MaxResult

    inline const float* ConstMaxResult(unsigned int member) const
    {
        return &ConstResult(member)->maxResult;
    } // ConstMaxResult

    inline void InitResults(unsigned int members, unsigned int instructions, unsigned int variations, float startResult)
    {
        m_members = members;
        m_instructions = instructions;
        m_variations = variations;
        m_dataSize = FireStarterData::DataSize(instructions);
        m_variationsSize = FireStarterResult::VariationsSize(instructions, variations);
        m_resultSize = FireStarterResult::ResultSize(instructions, variations);
        m_resultsSize = ResultsSize(members, instructions, variations);
        for (unsigned int i = 0; i < members; i++)
            Result(i)->Init(instructions, variations, startResult);
    } // FireStarterResults
} FireStarterResults;
