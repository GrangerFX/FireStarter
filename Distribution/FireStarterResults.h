#pragma once
#include "CUDADefines.h"
#include "FireStarterSettings.h"
#include "HashRandom.h"
#ifndef __CUDACC__
#include "Checksum.h"
#include <vector>
#endif

typedef struct FireStarterData {
    float d[FIRESTARTER_REGISTERS]; // Note: Dynamically allocated!

    inline float& operator[](unsigned int i)
    {
        return d[i];
    } // operator[]

    inline float operator[](unsigned int i) const
    {
        return d[i];
    } // operator[]

    inline bool operator==(const FireStarterData& other) const
    {
        for (int i = 0; i < FIRESTARTER_REGISTERS; i++)
            if (d[i] != other[i])
                return false;
        return true;
    } // operator==

    inline bool operator!=(const FireStarterData& other) const
    {
        for (int i = 0; i < FIRESTARTER_REGISTERS; i++)
            if (d[i] != other[i])
                return true;
        return false;
    } // operator!=

    static inline size_t DataSize(void)
    {
        return sizeof(FireStarterData);
    } // DataSize

    static inline size_t DataSize(unsigned int registers)
    {
        return sizeof(float) * registers;
    } // DataSize

    static inline size_t DataSize(const FireStarterSettings& settings)
    {
        return sizeof(float) * settings.m_registers;
    } // DataSize

    inline void RandomData(unsigned long long& seed, float scale, unsigned int registers = FIRESTARTER_REGISTERS)
    {
        unsigned int i = RANDOMMOD(seed, registers);
        d[i] += RANDOMFACTOR(seed) * scale;
    } // RandomData

    inline void Copy(const FireStarterData& data)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[i] = data[i];
    } // Copy

    inline void Copy(const FireStarterData& data, unsigned int registers)
    {
        for (unsigned int i = 0; i < registers; i++)
            d[i] = data[i];
    } // Copy

    inline void Copy(const FireStarterData* data)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[i] = (*data)[i];
    } // Copy

    inline void Copy(const FireStarterData* data, unsigned int registers)
    {
        for (unsigned int i = 0; i < registers; i++)
            d[i] = (*data)[i];
    } // Copy

    inline void operator=(const FireStarterData& data)
    {
        Copy(data);
    } // operator=

    inline void operator=(const FireStarterData* data)
    {
        Copy(data);
    } // operator=

    inline void Clear(unsigned int registers = FIRESTARTER_REGISTERS)
    {
        for (unsigned int i = 0; i < registers; i++)
            d[i] = 0.0f; // Clear all the registers
    } // Init

    inline void InitData(unsigned long long& seed, unsigned int uniqueRegisters = FIRESTARTER_REGISTERS, float startScale = FIRESTARTER_START_SCALE, unsigned int registers = FIRESTARTER_REGISTERS)
    {
        for (unsigned int i = 0; i < registers; i++)
            d[i] = i < uniqueRegisters ? RANDOMFACTOR(seed) * startScale : 0; // Randomize the active registers and clear the unused registers
    } // InitData

    inline FireStarterData(const struct FireStarterData& data)
    {
        Copy(data);
    } // FireStarterData

    inline FireStarterData(const struct FireStarterData* data)
    {
        Copy(data);
    } // FireStarterData

    inline FireStarterData(void)
    {
    } // FireStarterData
} FireStarterData;

typedef struct FireStarterSharedData {
    float d[FIRESTARTER_REGISTERS * FIRESTARTER_WARP_THREADS];

    inline unsigned int index(unsigned int i, unsigned int t = threadIdx.x) const
    {
        return i * FIRESTARTER_WARP_THREADS + t;
    } // index

    inline float& operator[](unsigned int i)
    {
        return d[index(i)];
    } // operator[]

    inline float operator[](unsigned int i) const
    {
        return d[index(i)];
    } // operator[]

    inline void operator=(const FireStarterData& data)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[index(i)] = data[i];
    } // operator=

    inline void operator=(const FireStarterData* data)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[index(i)] = (*data)[i];
    } // operator=

    inline void Data(FireStarterData& data, unsigned int t = threadIdx.x)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[index(i)] = data[i];
    } // Copy

    inline void Data(FireStarterData* data, unsigned int t = threadIdx.x)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            (*data)[i] = d[index(i, t)];
    } // Copy

    inline void Copy(const FireStarterData& data)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[index(i)] = data[i];
    } // Copy

    inline void Copy(const FireStarterData* data)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[index(i)] = (*data)[i];
    } // Copy

    inline void GetData(FireStarterData& data) const
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            data[i] = d[index(i)];
    } // GetData

    inline void GetData(FireStarterData* data) const
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            (*data)[i] = d[index(i)];
    } // GetData

    inline FireStarterSharedData(const FireStarterData& data)
    {
        Copy(data);
    } // FireStarterSharedData

    inline FireStarterSharedData(const FireStarterData* data)
    {
        Copy(data);
    } // FireStarterSharedData

    inline FireStarterSharedData(void)
    {
    } // FireStarterSharedData
} FireStarterSharedData;

typedef struct FireStarterCodeInstruction {
    FireStarterOpcode op = (FireStarterOpcode)0;
    unsigned short reg = 0;

    inline void RandomInstruction(unsigned long long& seed, unsigned int registers = FIRESTARTER_REGISTERS, unsigned int opcodes = FIRESTARTER_OPCODES)
    {
        reg = RANDOMMOD(seed, registers);
#if FIRESTARTER_MADD
        op = i & 1 ? Operation_add : Operation_multiply;
#else
        op = fireStarterOpcodes[RANDOMMOD(seed, opcodes)];
#endif
    } // RandomInstruction

    inline float Evaluate(float& data, float &n) const
    {
#if FIRESTARTER_FIRSTLIGHT
        switch (op) {
            case Operation_noop:
                break;

            case Operation_store:
                data = n;
                break;

            case Operation_square:
                n *= n;
                break;

            case Operation_multiply:
                n *= data;
                break;

            case Operation_divide:
                n /= data;
                break;

            case Operation_add:
                n += data;
                break;

            case Operation_subtract:
                n -= data;
                break;

            case Operation_min:
                n = data < n ? data : n;
                break;

            case Operation_max:
                n = data > n ? data : n;
                break;
        }
#else
        n = op == Operation_multiply ? data *= n : data += n;
#endif
        return n;
    } // Evaluate
} FireStarterCodeInstruction;

typedef struct FireStarterCode {
    FireStarterCodeInstruction c[FIRESTARTER_INSTRUCTIONS]; // Note: Dynamically allocated!

    inline FireStarterCodeInstruction& operator[](unsigned int i)
    {
        return c[i];
    } // operator[]

    inline FireStarterCodeInstruction operator[](unsigned int i) const
    {
        return c[i];
    } // operator[]

    inline FireStarterCodeInstruction& Instruction(unsigned int index)
    {
        return c[index];
    } // Instruction

    inline const FireStarterCodeInstruction& Instruction(unsigned int index) const
    {
        return c[index];
    } // Instruction

    inline FireStarterOpcode& Operation(unsigned int index)
    {
        return c[index].op;
    } // Operation

    inline FireStarterOpcode Operation(unsigned int index) const
    {
        return c[index].op;
    } // Operation

    inline unsigned short& Register(unsigned int index)
    {
        return c[index].reg;
    } // Register

    inline unsigned short Register(unsigned int index) const
    {
        return c[index].reg;
    } // Register

    inline void SetOperation(unsigned int index, FireStarterOpcode op, unsigned short reg)
    {
        c[index].op = op;
        c[index].reg = reg;
    } // SetOperation

    static inline size_t CodeSize(void)
    {
        return sizeof(FireStarterCode);
    } // CodeSize

    static inline size_t CodeSize(unsigned int instructions)
    {
        return sizeof(FireStarterCodeInstruction) * instructions;
    } // CodeSize

    static inline size_t CodeSize(const FireStarterSettings& settings)
    {
        return sizeof(FireStarterCodeInstruction) * settings.m_instructions;
    } // CodeSize

    inline void Copy(const FireStarterCode& code, unsigned int instructions = FIRESTARTER_INSTRUCTIONS)
    {
        for (unsigned int i = 0; i < instructions; i++)
            c[i] = code[i];
    } // Copy

    inline void Copy(const FireStarterCode* code, unsigned int instructions = FIRESTARTER_INSTRUCTIONS)
    {
        for (unsigned int i = 0; i < instructions; i++)
            c[i] = (*code)[i];
    } // Copy

    inline void operator=(const FireStarterCode& code)
    {
        Copy(code);
    } // operator=

    inline void operator=(const FireStarterCode* code)
    {
        Copy(code);
    } // operator=

    inline float Evaluate(FireStarterData& data, float n, unsigned int instructions = FIRESTARTER_INSTRUCTIONS) const
    {
#if FIRESTARTER_MADD
        for (unsigned int i = 0; i < instructions; i += 2) {
            n = data[c[i].reg] *= n;
            n = data[c[i + 1].reg] += n;
        }
#else
        for (unsigned int i = 0; i < instructions; i++)
            c[i].Evaluate(data[c[i].reg], n);
#endif
        return n;
    } // Evaluate

    inline float Evaluate(FireStarterSharedData& data, float n, unsigned int instructions = FIRESTARTER_INSTRUCTIONS) const
    {
#if FIRESTARTER_MADD
        for (unsigned int i = 0; i < instructions; i += 2) {
            n = data[c[i].reg] *= n;
            n = data[c[i + 1].reg] += n;
        }
#else
        for (unsigned int i = 0; i < instructions; i++)
            c[i].Evaluate(data[c[i].reg], n);
#endif
        return n;
    } // Evaluate

    inline void RandomInstruction(unsigned long long& seed, unsigned int instructions = FIRESTARTER_INSTRUCTIONS, unsigned int registers = FIRESTARTER_REGISTERS, unsigned int opcodes = FIRESTARTER_OPCODES)
    {
        unsigned int i = RANDOMMOD(seed, instructions);
        c[i].RandomInstruction(seed, registers, opcodes);
    } // RandomInstruction

    static inline FireStarterCode* Member(FireStarterCode* codes, const FireStarterSettings& settings, unsigned int index)
    {
        return (FireStarterCode*)((char*)codes + CodeSize(settings) * index);
    } // Member

    static inline const FireStarterCode* Member(const FireStarterCode* codes, const FireStarterSettings& settings, unsigned int index)
    {
        return (FireStarterCode*)((char*)codes + CodeSize(settings) * index);
    } // Member

    inline FireStarterCode* Member(const FireStarterSettings& settings, unsigned int index)
    {
        return Member(this, settings, index);
    } // Member

    inline const FireStarterCode* Member(const FireStarterSettings& settings, unsigned int index) const
    {
        return Member(this, settings, index);
    } // Member

    inline unsigned int Optimize(unsigned int instructions = FIRESTARTER_INSTRUCTIONS, unsigned int registers = FIRESTARTER_REGISTERS)
    {
        // Sort and count the used registers.
#ifdef __CUDACC__
        unsigned int regCount[FIRESTARTER_REGISTERS] = {};
#else
        std::vector<unsigned int> regCount(registers, 0);
#endif
        unsigned short uniqueRegisters = 0;
        for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++) {
            unsigned int r = c[i].reg;
            int index = regCount[r];
            if (index == 0)
                index = regCount[r] = ++uniqueRegisters;
            c[i].reg = index - 1;
        }
        return uniqueRegisters;
    } // Optimize

    inline unsigned int Optimize(const FireStarterSettings& settings)
    {
        return Optimize(settings.m_instructions, settings.m_registers);
    } // Optimize

    inline void InitCode(unsigned int instructions = FIRESTARTER_INSTRUCTIONS)
    {
        for (unsigned int i = 0; i < instructions; i++)
            c[i] = FireStarterCodeInstruction();
    } // InitCode

    inline void InitCode(unsigned long long& seed, unsigned int instructions = FIRESTARTER_INSTRUCTIONS, unsigned int registers = FIRESTARTER_REGISTERS, unsigned int opcodes = FIRESTARTER_OPCODES)
    {
        for (unsigned int i = 0; i < instructions; i++)
            c[i].RandomInstruction(seed, registers, opcodes);
    } // InitCode

    inline FireStarterCode(const struct FireStarterCode& code)
    {
        Copy(code);
    } // FireStarterCode

    inline FireStarterCode(const struct FireStarterCode* code)
    {
        Copy(code);
    } // FireStarterCode

    inline FireStarterCode(void)
    {
    } // FireStarterCode
} FireStarterCode;

typedef struct FireStarterResult {
    float m_maxResult;
    unsigned short m_evolveAge1;
    unsigned short m_evolveAge2;
    FireStarterData m_data; // Note: Dynamically allocated!

    static inline size_t ResultSize(void)
    {
        return sizeof(FireStarterResult);
    } // ResultSize

    static inline size_t ResultSize(unsigned int registers)
    {
        return (sizeof(FireStarterResult) - sizeof(m_data)) + FireStarterData::DataSize(registers);
    } // ResultSize

    static inline size_t ResultSize(const FireStarterSettings& settings)
    {
        return ResultSize(settings.m_registers);
    } // ResultSize

    inline float* MaxResult(void)
    {
        return &m_maxResult;
    } // MaxResult

    inline float MaxResult(void) const
    {
        return m_maxResult;
    } // MaxResult

    inline unsigned short* EvolveAge1(void)
    {
        return &m_evolveAge1;
    } // EvolveAge1

    inline unsigned short EvolveAge1(void) const
    {
        return m_evolveAge1;
    } // EvolveAge1

    inline unsigned short* EvolveAge2(void)
    {
        return &m_evolveAge2;
    } // EvolveAge2

    inline unsigned short EvolveAge2(void) const
    {
        return m_evolveAge2;
    } // EvolveAge2

    inline FireStarterData* Data(void)
    {
        return &m_data;
    } // Data

    inline const FireStarterData* Data(void) const
    {
        return &m_data;
    } // Data

    inline void Copy(const FireStarterResult* src)
    {
        memcpy(this, src, ResultSize());
    } // Copy

    inline void Copy(const FireStarterResult* src, unsigned int registers)
    {
        memcpy(this, src, ResultSize(registers));
    } // Copy

    inline void CopyData(const FireStarterResult* src)
    {
        const FireStarterData* srcData = src->Data();
        FireStarterData* dstData = Data();
        memcpy(dstData, srcData, FireStarterData::DataSize());
    } // CopyData

    inline void CopyData(const FireStarterResult* src, const FireStarterSettings& settings)
    {
        const FireStarterData* srcData = src->Data();
        FireStarterData* dstData = Data();
        memcpy(dstData, srcData, FireStarterData::DataSize(settings.m_registers));
    } // CopyData

    inline void InitResult(unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        Data()->Clear();
        m_maxResult = FIRESTARTER_START_RESULT;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // InitResult

    inline void InitResult(const FireStarterSettings& settings, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        Data()->Clear(settings.m_registers);
        m_maxResult = settings.m_startResult;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // InitResult

    inline void InitResult(unsigned long long& seed, unsigned int uniqueRegisters, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        Data()->InitData(seed, uniqueRegisters);
        m_maxResult = FIRESTARTER_START_RESULT;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // InitResult

    inline void InitResult(const FireStarterSettings& settings, unsigned long long& seed, unsigned int uniqueRegisters, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        Data()->InitData(seed, uniqueRegisters, settings.m_startScale, settings.m_registers);
        m_maxResult = settings.m_startResult;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // InitResult

    inline void InitResult(const FireStarterData& data, float maxResult, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        Data()->Copy(data);
        m_maxResult = maxResult;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // InitResult

    inline void InitResult(const FireStarterData* data, float maxResult, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        if (data)
            Data()->Copy(data);
        else
            Data()->Clear();
        m_maxResult = maxResult;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // InitResult

    inline void InitResult(const FireStarterData* data, const FireStarterSettings& settings, float maxResult, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        if (data)
            Data()->Copy(data, settings.m_registers);
        else
            Data()->Clear(settings.m_registers);
        m_maxResult = maxResult;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // InitResult

    inline void InitResult(const FireStarterResult* initResult)
    {
        Data()->Copy(initResult->Data());
        m_maxResult = initResult->MaxResult();
        m_evolveAge1 = initResult->EvolveAge1();
        m_evolveAge2 = initResult->EvolveAge2();
    } // InitResult

    inline void InitResult(const FireStarterResult* initResult, const FireStarterSettings& settings)
    {
        Data()->Copy(initResult->Data(), settings.m_registers);
        m_maxResult = initResult->MaxResult();
        m_evolveAge1 = initResult->EvolveAge1();
        m_evolveAge2 = initResult->EvolveAge2();
    } // InitResult
} FireStarterResult;

typedef struct FireStarterPopulation : public FireStarterResult
{
    static inline FireStarterResult* PopulationResult(FireStarterResult* population, size_t index, unsigned int variation = 0)
    {
        return (FireStarterResult*)((char*)population + ResultSize() * (index * FIRESTARTER_VARIATIONS + variation));
    } // PopulationResult

    static inline const FireStarterResult* PopulationResult(const FireStarterResult* population, size_t index, unsigned int variation = 0)
    {
        return (FireStarterResult*)((char*)population + ResultSize() * (index * FIRESTARTER_VARIATIONS + variation));
    } // Result

    static inline FireStarterResult* PopulationResult(FireStarterResult* population, const FireStarterSettings& settings, size_t index, unsigned int variation = 0)
    {
        return (FireStarterResult*)((char*)population + ResultSize(settings.m_registers) * (index * settings.m_variations + variation));
    } // PopulationResult

    static inline const FireStarterResult* PopulationResult(const FireStarterResult* population, const FireStarterSettings& settings, size_t index, unsigned int variation = 0)
    {
        return (FireStarterResult*)((char*)population + ResultSize(settings.m_registers) * (index * settings.m_variations + variation));
    } // PopulationResult

    static inline float PopulationMaxResult(const FireStarterResult* population, const FireStarterSettings& settings, size_t index, unsigned int variation = 0)
    {
        return PopulationResult(population, settings, index, variation)->MaxResult();
    } // PopulationMaxResult

    static inline float PopulationMaxResults(const FireStarterResult* population, const FireStarterSettings& settings, size_t index)
    {
        float maxResult = PopulationMaxResult(population, settings, index, 0);
        for (unsigned int v = 1; v < settings.m_variations; v++) {
            float result = PopulationMaxResult(population, settings, index, v);
            maxResult = MAX(maxResult, result);
        }
        return maxResult;
    } // PopulationMaxResults

    static inline size_t PopulationSize(const FireStarterSettings& settings)
    {
        return ResultSize(settings.m_registers) * ((size_t)settings.m_variations * (size_t)settings.m_population);
    } // PopulationSize

#ifndef __CUDACC__
    static inline uint64_t PopulationResultChecksum(const FireStarterResult* population, const FireStarterSettings& settings, size_t index, unsigned int variation = 0)
    {
        const FireStarterResult* member = PopulationResult(population, settings, index, variation);
        return Checksum(member, FireStarterResult::ResultSize(settings));
    } // PopulationResultChecksum

    static inline uint64_t PopulationVariationChecksum(const FireStarterResult* population, const FireStarterSettings& settings, unsigned int variation)
    {
        uint64_t checksum = 0;
        for (unsigned int i = 0; i < settings.m_population; i++)
            checksum ^= PopulationResultChecksum(population, settings, i, variation);
        return checksum;
    } // PopulationVariationChecksum

    static inline uint64_t PopulationChecksum(const FireStarterResult* population, const FireStarterSettings& settings)
    {
        uint64_t checksum = 0;
        for (unsigned int v = 0; v < settings.m_variations; v++)
            checksum ^= PopulationVariationChecksum(population, settings, v);
        return checksum;
    } // PopulationChecksum
#endif
} FireStarterPopulation;
