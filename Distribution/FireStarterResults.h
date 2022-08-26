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
    unsigned int index;     // Index result was copied from.
    unsigned int debug;     // Debug info.
    float maxResult;
    float data[FIRESTARTER_VARIATIONS * (FIRESTARTER_REGISTERS + 1)];

    static inline size_t ResultSize(size_t registers, size_t variations)
    {
        return sizeof(unsigned int) * 3 + sizeof(float) + variations * (registers + 1) * sizeof(float);
    } // ResultSize

    inline float* MinResult(unsigned int variation)
    {
        return &data[variation * dataSize + (dataSize - 1)];
    } // MinResult

    inline const float* MinResult(unsigned int variation) const
    {
        return &data[variation * dataSize + (dataSize - 1)];
    } // MinResult

    inline FireStarterData* Data(unsigned int variation)
    {
        return (FireStarterData*)&data[variation * dataSize];
    } // Data

    inline const FireStarterData* Data(unsigned int variation) const
    {
        return (const FireStarterData*)&data[variation * dataSize];
    } // Data

    inline void Init(unsigned int i, unsigned int registers, unsigned int variations, float startResult)
    {
        maxResult = startResult;
        dataSize = registers + 1;
        index = index;
        debug = 0;
        for (unsigned int v = 0; v < variations; v++) {
            FireStarterData* data = Data(v);
            for (unsigned int i = 0; i < registers; i++)
                data->d[i] = 0.0f;
            *MinResult(v) = startResult;
        }
    } // Init

    inline void Init(unsigned int i, unsigned int registers, unsigned int variations, const FireStarterResult* initResult)
    {
        maxResult = initResult->maxResult;
        dataSize = registers + 1;
        index = i;
        debug = 0;
        for (unsigned int v = 0; v < variations; v++) {
            FireStarterData* data = Data(v);
            const FireStarterData* srcData = initResult->Data(v);
            for (unsigned int i = 0; i < registers; i++)
                data->d[i] = srcData->d[i];
            *MinResult(v) = *initResult->MinResult(v);
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
        return (sizeof(FireStarterResults) - 16) + members * FireStarterResult::ResultSize(registers, variations);
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

    inline FireStarterData* Data(unsigned int member, unsigned int variation)
    {
        return Result(member)->Data(variation);
    } // Data

    inline const FireStarterData* Data(unsigned int member, unsigned int variation) const
    {
        return Result(member)->Data(variation);
    } // Data

    inline float* MinResult(unsigned int member, unsigned int variation)
    {
        return Result(member)->MinResult(variation);
    } // MinResult

    inline const float* MinResult(unsigned int member, unsigned int variation) const
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

    inline unsigned int* Index(unsigned int member)
    {
        return &Result(member)->index;
    } // SourceMember

    inline unsigned int* Debug(unsigned int member)
    {
        return &Result(member)->debug;
    } // Debug

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
