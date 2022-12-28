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
    unsigned int dataSize;  
    float maxResult;
    float data[FIRESTARTER_VARIATIONS * (FIRESTARTER_REGISTERS + 4)];   // + 4 for index, minResult, debug1 and debug2

    static inline size_t ResultSize(size_t registers, size_t variations)
    {
        return (sizeof(FireStarterResult) - sizeof(data)) + variations * (registers + 2) * sizeof(float);
    } // ResultSize

    inline float* MinResult(unsigned int variation)
    {
        return &data[variation * dataSize + (dataSize - 1)];
    } // MinResult

    inline float MinResult(unsigned int variation) const
    {
        return data[variation * dataSize + (dataSize - 1)];
    } // MinResult

    inline unsigned int* Index(unsigned int variation)
    {
        return (unsigned int*)&data[variation * dataSize + (dataSize - 2)];
    } // Index

    inline unsigned int Index(unsigned int variation) const
    {
        return *(unsigned int*)&data[variation * dataSize + (dataSize - 2)];
    } // Index

    inline unsigned int* Debug1(unsigned int variation)
    {
        return (unsigned int*)&data[variation * dataSize + (dataSize - 3)];
    } // Debug1

    inline unsigned int Debug1(unsigned int variation) const
    {
        return *(unsigned int*)&data[variation * dataSize + (dataSize - 3)];
    } // Debug1

    inline unsigned int* Debug2(unsigned int variation)
    {
        return (unsigned int*)&data[variation * dataSize + (dataSize - 4)];
    } // Debug2

    inline unsigned int Debug2(unsigned int variation) const
    {
        return *(unsigned int*)&data[variation * dataSize + (dataSize - 4)];
    } // Debug2

    inline FireStarterData* Data(unsigned int variation)
    {
        return (FireStarterData*)&data[variation * dataSize];
    } // Data

    inline const FireStarterData* Data(unsigned int variation) const
    {
        return (const FireStarterData*)&data[variation * dataSize];
    } // Data

    inline size_t DataSize(void)
    {
        return FireStarterData::DataSize(dataSize - 2);
    } // DataSize

    inline void InitVariation(unsigned int index, unsigned int registers, unsigned int variation, float startResult)
    {
        FireStarterData* data = Data(variation);
        for (unsigned int i = 0; i < registers; i++)
            data->d[i] = 0.0f;
        *MinResult(variation) = startResult;
        *Index(variation) = index;
        *Debug1(variation) = 0;
        *Debug2(variation) = 0;
    } // InitVariation

    inline void Init(unsigned int index, unsigned int registers, unsigned int variations, float startResult)
    {
        maxResult = startResult;
        dataSize = registers + 2;
        for (unsigned int v = 0; v < variations; v++)
            InitVariation(index, registers, v, startResult);
    } // Init

    inline void Init(unsigned int index, unsigned int registers, unsigned int variations, const FireStarterResult* initResult)
    {
        maxResult = initResult->maxResult;
        dataSize = registers + 2;
        for (unsigned int v = 0; v < variations; v++) {
            FireStarterData* data = Data(v);
            const FireStarterData* srcData = initResult->Data(v);
            for (unsigned int i = 0; i < registers; i++)
                data->d[i] = srcData->d[i];
            *MinResult(v) = initResult->MinResult(v);
            *Index(v) = index;
            *Debug1(v) = 0;
            *Debug2(v) = 0;
        }
    } // Init
} FireStarterResult;

typedef struct FireStarterResults {
    size_t m_members;
    size_t m_registers;
    size_t m_variations;
    size_t m_resultSize;
    unsigned char m_memory[16];

    static inline size_t ResultsSize(size_t members, size_t registers, size_t variations)
    {
        return (sizeof(FireStarterResults) - sizeof(m_memory)) + members * FireStarterResult::ResultSize(registers, variations);
    } // ResultsSize

    inline size_t MemorySize(size_t members)
    {
        return members * FireStarterResult::ResultSize(m_registers, m_variations);
    } // MemorySize

    inline FireStarterResult* Result(unsigned int member)
    {
        return (FireStarterResult*)(m_memory + member * m_resultSize);
    } // Result

    inline const FireStarterResult* Result(unsigned int member) const
    {
        return (const FireStarterResult*)(m_memory + member * m_resultSize);
    } // Result

    inline size_t ResultSize(void)
    {
        return FireStarterResult::ResultSize(m_registers, m_variations);
    } // ResultsSize

    inline FireStarterData* Data(unsigned int member, unsigned int variation)
    {
        return Result(member)->Data(variation);
    } // Data

    inline const FireStarterData* Data(unsigned int member, unsigned int variation) const
    {
        return Result(member)->Data(variation);
    } // Data

    inline size_t DataSize(void)
    {
        return FireStarterData::DataSize(m_registers);
    } // DataSize

    inline float* MinResult(unsigned int member, unsigned int variation)
    {
        return Result(member)->MinResult(variation);
    } // MinResult

    inline float MinResult(unsigned int member, unsigned int variation) const
    {
        return Result(member)->MinResult(variation);
    } // MinResult

    inline float* MaxResult(unsigned int member)
    {
        return &Result(member)->maxResult;
    } // MaxResult

    inline const float* MaxResult(unsigned int member) const
    {
        return &Result(member)->maxResult;
    } // MaxResult

    inline unsigned int* Index(unsigned int member, unsigned int variation)
    {
        return Result(member)->Index(variation);
    } // SourceMember

    inline unsigned int Index(unsigned int member, unsigned int variation) const
    {
        return Result(member)->Index(variation);
    } // SourceMember

    inline unsigned int* Debug1(unsigned int member, unsigned int variation)
    {
        return Result(member)->Debug1(variation);
    } // Debug1

    inline unsigned int* Debug2(unsigned int member, unsigned int variation)
    {
        return Result(member)->Debug2(variation);
    } // Debug2

    inline void InitResults(unsigned int members, unsigned int registers, unsigned int variations, float startResult)
    {
        m_members = members;
        m_registers = registers;
        m_variations = variations;
        m_resultSize = FireStarterResult::ResultSize(registers, variations);
        for (unsigned int i = 0; i < members; i++)
            Result(i)->Init(i, registers, variations, startResult);
    } // InitResults

    inline void InitResults(unsigned int members, unsigned int registers, unsigned int variations, const FireStarterResult* initResult)
    {
        m_members = members;
        m_registers = registers;
        m_variations = variations;
        m_resultSize = FireStarterResult::ResultSize(registers, variations);
        for (unsigned int i = 0; i < members; i++)
            Result(i)->Init(i, registers, variations, initResult);
    } // InitResults
} FireStarterResults;
