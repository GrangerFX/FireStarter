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
    float minResult;
    unsigned int debug;
    unsigned int index;
    float data[FIRESTARTER_REGISTERS];

    static inline size_t ResultSize(size_t registers)
    {
        return (sizeof(FireStarterResult) - sizeof(data)) + (registers) * sizeof(float);
    } // ResultSize

    inline float* MinResult(void)
    {
        return &minResult;
    } // MinResult

    inline float MinResult(void) const
    {
        return minResult;
    } // MinResult

    inline unsigned int* Index(void)
    {
        return &index;
    } // Index

    inline unsigned int Index(void) const
    {
        return index;
    } // Index

    inline unsigned int* Debug(void)
    {
        return &debug;
    } // Debug

    inline unsigned int Debug(void) const
    {
        return debug;
    } // Debug

    inline FireStarterData* Data(void)
    {
        return (FireStarterData*)data;
    } // Data

    inline const FireStarterData* Data(void) const
    {
        return (const FireStarterData*)data;
    } // Data

    inline size_t DataSize(void)
    {
        return FireStarterData::DataSize(dataSize);
    } // DataSize

    inline void Init(unsigned int index, unsigned int registers, float startResult)
    {
        dataSize = registers;
        FireStarterData* data = Data();
        for (unsigned int i = 0; i < registers; i++)
            data->d[i] = 0.0f;
        minResult = startResult;
        index = index;
        debug = 0;
    } // Init

    inline void Init(unsigned int index, unsigned int registers, const FireStarterResult* initResult)
    {
        dataSize = registers;
        minResult = initResult->MinResult();
        index = index;
        debug = 0;

        FireStarterData* data = Data();
        const FireStarterData* srcData = initResult->Data();
        for (unsigned int i = 0; i < registers; i++)
            data->d[i] = srcData->d[i];
    } // Init
} FireStarterResult;

typedef struct FireStarterResults {
    size_t m_registers;
    size_t m_variations;
    size_t m_resultSize;
    size_t m_resultsSize;
    unsigned char m_memory[16];

    static inline size_t ResultsSize(size_t registers, size_t variations)
    {
        return (sizeof(FireStarterResults) - sizeof(m_memory)) + FireStarterResult::ResultSize(registers) * variations;
    } // ResultSize

    inline FireStarterResult* Result(size_t variation)
    {
        return (FireStarterResult*)(m_memory + variation * m_resultSize);
    } // Result

    inline const FireStarterResult* Result(size_t variation) const
    {
        return (const FireStarterResult*)(m_memory + variation * m_resultSize);
    } // Result

    inline float* MinResult(size_t variation)
    {
        return Result(variation)->MinResult();
    } // MinResult

    inline float MinResult(size_t variation) const
    {
        return Result(variation)->MinResult();
    } // MinResult

    inline unsigned int* Index(size_t variation)
    {
        return Result(variation)->Index();
    } // Index

    inline unsigned int Index(size_t variation) const
    {
        return Result(variation)->Index();
    } // Index

    inline unsigned int* Debug(size_t variation)
    {
        return Result(variation)->Debug();
    } // Debug

    inline unsigned int Debug(size_t variation) const
    {
        return Result(variation)->Debug();
    } // Debug

    inline FireStarterData* Data(size_t variation)
    {
        return Result(variation)->Data();
    } // Data

    inline const FireStarterData* Data(size_t variation) const
    {
        return Result(variation)->Data();
    } // Data

    inline size_t DataSize(size_t variation = 0)
    {
        return Result(variation)->DataSize();
    } // DataSize

    inline void InitResults(unsigned int index, unsigned int registers, unsigned int variations, float startResult)
    {
        m_registers = registers;
        m_variations = variations;
        m_resultSize = FireStarterResult::ResultSize(registers);
        m_resultsSize = FireStarterResults::ResultsSize(registers, variations);
        for (unsigned int v = 0; v < m_variations; v++)
            Result(v)->Init(index, registers, startResult);
    } // Init

    inline void InitResults(unsigned int index, unsigned int registers, unsigned int variations, const FireStarterResults* initResults)
    {
        m_registers = registers;
        m_variations = variations;
        m_resultSize = FireStarterResult::ResultSize(registers);
        m_resultsSize = FireStarterResults::ResultsSize(registers, variations);
        for (unsigned int v = 0; v < m_variations; v++)
            Result(v)->Init(index, registers, initResults->Result(v));
    } // Init
} FireStarterResults;

typedef struct FireStarterPopulation {
    size_t m_members;
    size_t m_registers;
    size_t m_variations;
    size_t m_resultSize;
    size_t m_variationSize;
    size_t m_variationsSize;
    unsigned char m_memory[16];

    static inline size_t PopulationSize(size_t members, size_t registers, size_t variations)
    {
        return (sizeof(FireStarterPopulation) - sizeof(m_memory)) + variations * members * FireStarterResult::ResultSize(registers);
    } // PopulationSize

    inline size_t MemorySize(size_t members) const
    {
        return members * FireStarterResult::ResultSize(m_registers);
    } // MemorySize

    inline size_t VariationSize(void) const
    {
        return m_variationSize;
    } // VariationSize

    inline size_t VariationsSize(void) const
    {
        return m_variationsSize;
    } // DataSize

    inline FireStarterResult* Result(unsigned int member, unsigned int variation)
    {
        return (FireStarterResult*)(m_memory + variation * VariationSize() + member * m_resultSize);
    } // Result

    inline const FireStarterResult* Result(unsigned int member, unsigned int variation) const
    {
        return (const FireStarterResult*)(m_memory + variation * VariationSize() + member * m_resultSize);
    } // Result

    inline size_t ResultSize(void)
    {
        return FireStarterResult::ResultSize(m_registers);
    } // ResultsSize

    inline FireStarterData* Data(unsigned int member, unsigned int variation)
    {
        return Result(member, variation)->Data();
    } // Data

    inline const FireStarterData* Data(unsigned int member, unsigned int variation) const
    {
        return Result(member, variation)->Data();
    } // Data

    inline size_t DataSize(void)
    {
        return FireStarterData::DataSize(m_registers);
    } // DataSize

    inline float* MinResult(unsigned int member, unsigned int variation)
    {
        return Result(member, variation)->MinResult();
    } // MinResult

    inline float MinResult(unsigned int member, unsigned int variation) const
    {
        return Result(member, variation)->MinResult();
    } // MinResult

    inline unsigned int* Index(unsigned int member, unsigned int variation)
    {
        return Result(member, variation)->Index();
    } // SourceMember

    inline unsigned int Index(unsigned int member, unsigned int variation) const
    {
        return Result(member, variation)->Index();
    } // SourceMember

    inline unsigned int* Debug(unsigned int member, unsigned int variation)
    {
        return Result(member, variation)->Debug();
    } // Debug

    inline unsigned int Debug(unsigned int member, unsigned int variation) const
    {
        return Result(member, variation)->Debug();
    } // Debug

    inline void InitPopulation(unsigned int members, unsigned int registers, unsigned int variations, float startResult)
    {
        m_members = members;
        m_registers = registers;
        m_variations = variations;
        m_resultSize = FireStarterResult::ResultSize(m_registers);
        m_variationSize = m_members * m_resultSize;
        m_variationsSize = m_variations * m_variationSize;
        for (unsigned int v = 0; v < variations; v++)
            for (unsigned int i = 0; i < members; i++)
                Result(i, v)->Init(i, registers, startResult);
    } // InitPopulation

    inline void InitPopulation(unsigned int members, unsigned int registers, unsigned int variations, const FireStarterResults* initResults)
    {
        m_members = members;
        m_registers = registers;
        m_variations = variations;
        m_resultSize = FireStarterResult::ResultSize(registers);
        m_variationSize = m_members * FireStarterResult::ResultSize(m_registers);
        m_variationsSize = m_variations * m_variationSize;
        for (unsigned int v = 0; v < variations; v++)
            for (unsigned int i = 0; i < members; i++)
                Result(i, v)->Init(i, registers, initResults->Result(v));
    } // InitPopulation
} FireStarterPopulation;
