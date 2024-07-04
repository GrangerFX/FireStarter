#pragma once
#include "FireStarterSettings.h"
#include "HashRandom.h"
#include "CUDADefines.h"

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

    static inline size_t DataSize(void)
    {
        return sizeof(float) * FIRESTARTER_REGISTERS;
    } // DataSize

    static inline size_t DataSize(unsigned int registers)
    {
        return sizeof(float) * registers;
    } // DataSize

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

    inline void Init()
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[i] = 0.0f;
    } // Init

    inline void Init(unsigned int registers)
    {
        for (unsigned int i = 0; i < registers; i++)
            d[i] = 0.0f;
    } // Init

    inline void Init(unsigned long long& seed, float startScale)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[i] = RANDOMFACTOR(seed) * startScale; // Randomize the active registers.
    } // Init

    inline void Init(unsigned long long& seed, float startScale, unsigned int registers)
    {
        for (unsigned int i = 0; i < registers; i++)
            d[i] = RANDOMFACTOR(seed) * startScale; // Randomize the active registers.
        for (unsigned int i = registers; i < FIRESTARTER_REGISTERS; i++)
            d[i] = 0.0f;                            // Clear the unused registers.
    } // Init

    inline void Init(unsigned long long& seed, float startScale, unsigned int registers, unsigned int maxRegisters)
    {
        for (unsigned int i = 0; i < registers; i++)
            d[i] = RANDOMFACTOR(seed) * startScale; // Randomize the active registers.
        for (unsigned int i = registers; i < maxRegisters; i++)
            d[i] = 0.0f;                            // Clear the unused registers.
    } // Init

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
    float d[FIRESTARTER_REGISTERS * WARP_THREADS];

    inline float& operator[](unsigned int i)
    {
        return d[i * WARP_THREADS + threadIdx.x];
    } // operator[]

    inline void operator=(const FireStarterData& data)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[i * WARP_THREADS + threadIdx.x] = data[i];
    } // operator=

    inline void Copy(const FireStarterData& data)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[i * WARP_THREADS + threadIdx.x] = data[i];
    } // Copy
} FireStarterSharedData;

typedef struct FireStarterCode {
    unsigned int c[FIRESTARTER_INSTRUCTIONS]; // Note: Dynamically allocated!

    inline unsigned int& operator[](unsigned int i)
    {
        return c[i];
    } // operator[]

    inline unsigned int operator[](unsigned int i) const
    {
        return c[i];
    } // operator[]

    static inline size_t CodeSize(void)
    {
        return sizeof(int) * FIRESTARTER_INSTRUCTIONS;
    } // CodeSize

    static inline size_t CodeSize(unsigned int instructions)
    {
        return sizeof(int) * instructions;
    } // CodeSize

    inline void Copy(const FireStarterCode& code)
    {
        for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            c[i] = code[i];
    } // Copy

    inline void Copy(const FireStarterCode& code, unsigned int instructions)
    {
        for (unsigned int i = 0; i < instructions; i++)
            c[i] = code[i];
    } // Copy

    inline void Copy(const FireStarterCode* code)
    {
        for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            c[i] = (*code)[i];
    } // Copy

    inline void Copy(const FireStarterCode* code, unsigned int instructions)
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

    inline void Init()
    {
        for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            c[i] = 0;
    } // Init

    inline void Init(unsigned int registers)
    {
        for (unsigned int i = 0; i < registers; i++)
            c[i] = 0;
    } // Init

    inline void Init(unsigned long long& seed)
    {
        for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            c[i] = (int)RANDOMMOD(seed, FIRESTARTER_REGISTERS * 2); // Randomize the active registers.
    } // Init

    inline float Execute(FireStarterSharedData& data, float& n, unsigned int i)
    {
        if (c[i] < FIRESTARTER_REGISTERS)
            n = data[c[i]] *= n;
        else
            n = data[c[i] - FIRESTARTER_REGISTERS] += n;
    } // Execute

    inline FireStarterCode(const struct FireStarterCode& code)
    {
        Copy(code);
    } // FireStarterData

    inline FireStarterCode(const struct FireStarterCode* code)
    {
        Copy(code);
    } // FireStarterCode

    inline FireStarterCode(void)
    {
    } // FireStarterCode
} FireStarterCode;

typedef struct FireStarterResult {
    float m_resultMin;
    unsigned int m_resultAge;
    FireStarterData m_data; // Note: Dynamically allocated!
#if FIRESTARTER_EVOLVE_GPU
    FireStarterCode m_code; // Note: Dynamically allocated!
#endif

    static inline size_t ResultSize(void)
    {
#if FIRESTARTER_EVOLVE_GPU
        return (sizeof(FireStarterResult) - (sizeof(m_data) + sizeof(m_code))) + FireStarterData::DataSize() + FireStarterCode::CodeSize();
#else
        return (sizeof(FireStarterResult) - sizeof(m_data)) + FireStarterData::DataSize();
#endif
    } // ResultSize

    static inline size_t ResultSize(unsigned int registers, unsigned int instructions)
    {
#if FIRESTARTER_EVOLVE_GPU
        return (sizeof(FireStarterResult) - (sizeof(m_data) + sizeof(m_code))) + FireStarterData::DataSize(registers) + FireStarterCode::CodeSize(instructions);
#else
        return (sizeof(FireStarterResult) - sizeof(m_data)) + FireStarterData::DataSize(registers);
#endif
    } // ResultSize

    inline float* MinResult(void)
    {
        return &m_resultMin;
    } // MinResult

    inline float MinResult(void) const
    {
        return m_resultMin;
    } // MinResult

    inline unsigned int* Age(void)
    {
        return &m_resultAge;
    } // Age

    inline unsigned int Age(void) const
    {
        return m_resultAge;
    } // Age

    inline FireStarterData* Data(void)
    {
        return &m_data;
    } // Data

    inline const FireStarterData* Data(void) const
    {
        return &m_data;
    } // Data

#if FIRESTARTER_EVOLVE_GPU
    inline FireStarterCode* Code(void)
    {
        return &m_code;
    } // Code

    inline const FireStarterCode* Code(void) const
    {
        return &m_code;
    } // Code
#endif

    inline void Init(unsigned int age = 0)
    {
        m_data.Init();
#if FIRESTARTER_EVOLVE_GPU
        m_code.Init();
#endif
        m_resultMin = FIRESTARTER_START_RESULT;
        m_resultAge = age;
    } // Init

    inline void Init(const FireStarterSettings& settings, unsigned int age = 0)
    {
        m_data.Init(settings.m_registers);
#if FIRESTARTER_EVOLVE_GPU
        m_code.Init(settings.m_instructions);
#endif
        m_resultMin = settings.m_startResult;
        m_resultAge = age;
    } // Init

    inline void Init(unsigned long long& seed, unsigned int registers, unsigned int age = 0)
    {
        m_data.Init(seed, FIRESTARTER_START_SCALE, registers);
#if FIRESTARTER_EVOLVE_GPU
        m_code.Init();
#endif
        m_resultMin = FIRESTARTER_START_RESULT;
        m_resultAge = age;
    } // Init

    inline void Init(const FireStarterSettings& settings, unsigned long long& seed, unsigned int registers, unsigned int age = 0)
    {
        m_data.Init(seed, settings.m_startScale, registers, settings.m_registers);
#if FIRESTARTER_EVOLVE_GPU
        m_code.Init(settings.m_instructions);
#endif
        m_resultMin = settings.m_startResult;
        m_resultAge = age;
    } // Init

    inline void Init(float resultMin, const FireStarterData& data, unsigned int age = 0)
    {
        m_data.Copy(data);
#if FIRESTARTER_EVOLVE_GPU
        m_code.Init();
#endif
        m_resultMin = resultMin;
        m_resultAge = age;
    } // Init

    inline void Init(const FireStarterSettings& settings, float resultMin, const FireStarterData& data, unsigned int age = 0)
    {
        m_data.Copy(data, settings.m_registers);
#if FIRESTARTER_EVOLVE_GPU
        m_code.Init(settings.m_instructions);
#endif
        m_resultMin = resultMin;
        m_resultAge = age;
    } // Init

    inline void Init(float resultMin, const FireStarterData* data, unsigned int age = 0)
    {
        m_data.Copy(data);
#if FIRESTARTER_EVOLVE_GPU
        m_code.Init();
#endif
        m_resultMin = resultMin;
        m_resultAge = age;
    } // Init

    inline void Init(const FireStarterSettings& settings, float resultMin, const FireStarterData* data, unsigned int age = 0)
    {
        m_data.Copy(data, settings.m_registers);
#if FIRESTARTER_EVOLVE_GPU
        m_code.Init(settings.m_instructions);
#endif
        m_resultMin = resultMin;
        m_resultAge = age;
    } // Init

#if FIRESTARTER_EVOLVE_GPU
    inline void Init(float resultMin, const FireStarterData& data, const FireStarterCode& code, unsigned int age = 0)
    {
        m_data.Copy(data);
        m_code.Copy(code);
        m_resultMin = resultMin;
        m_resultAge = age;
    } // Init

    inline void Init(float resultMin, const FireStarterData* data, const FireStarterCode* code, unsigned int age = 0)
    {
        m_data.Copy(data);
        m_code.Copy(code);
        m_resultMin = resultMin;
        m_resultAge = age;
    } // Init

    inline void Init(const FireStarterSettings& settings, float resultMin, const FireStarterData* data, const FireStarterCode* code, unsigned int age = 0)
    {
        m_data.Copy(data, settings.m_registers);
        m_code.Copy(code, settings.m_instructions);
        m_resultMin = resultMin;
        m_resultAge = age;
    } // Init
#endif

    inline void Init(const FireStarterSettings& settings, const FireStarterResult* initResult, unsigned int age = 0)
    {
        m_data.Copy(initResult->Data(), settings.m_registers);
#if FIRESTARTER_EVOLVE_GPU
        m_code.Copy(initResult->Code(), settings.m_instructions);
#endif
        m_resultMin = initResult->MinResult();
        m_resultAge = age;
    } // Init

    inline void Init(const FireStarterResult* initResult, unsigned int age = 0)
    {
        m_data.Copy(initResult->Data());
#if FIRESTARTER_EVOLVE_GPU
        m_code.Copy(initResult->Code());
#endif
        m_resultMin = initResult->MinResult();
        m_resultAge = age;
    } // Init
} FireStarterResult;

typedef struct FireStarterResults {
    unsigned int m_registers;
    unsigned int m_instructions;
    unsigned int m_variations;
    unsigned int m_resultSize;
    FireStarterResult m_memory[FIRESTARTER_VARIATIONS]; // Note: Dynamically allocated!

    static inline size_t ResultsSize(void)
    {
        return (sizeof(FireStarterResults) - sizeof(m_memory)) + FireStarterResult::ResultSize() * FIRESTARTER_VARIATIONS;
    } // ResultSize

    static inline size_t ResultsSize(unsigned int registers, unsigned int instructions, unsigned int variations)
    {
        return (sizeof(FireStarterResults) - sizeof(m_memory)) + FireStarterResult::ResultSize(registers, instructions) * variations;
    } // ResultSize

    inline FireStarterResult* Result(unsigned int variation)
    {
        return (FireStarterResult*)((unsigned char*)m_memory + variation * m_resultSize);
    } // Result

    inline const FireStarterResult* Result(unsigned int variation) const
    {
        return (const FireStarterResult*)((unsigned char*)m_memory + variation * m_resultSize);
    } // Result

    inline float* MinResult(unsigned int variation)
    {
        return Result(variation)->MinResult();
    } // MinResult

    inline float MinResult(unsigned int variation) const
    {
        return Result(variation)->MinResult();
    } // MinResult

    inline unsigned int* Age(unsigned int variation)
    {
        return Result(variation)->Age();
    } // Age

    inline unsigned int Age(unsigned int variation) const
    {
        return Result(variation)->Age();
    } // Age

    inline FireStarterData* Data(unsigned int variation)
    {
        return Result(variation)->Data();
    } // Data

    inline const FireStarterData* Data(unsigned int variation) const
    {
        return Result(variation)->Data();
    } // Data

    inline void InitResults(const FireStarterSettings& settings, const FireStarterResults* initResults = nullptr)
    {
        m_registers = settings.m_registers;
        m_instructions = settings.m_instructions;
        m_variations = settings.m_variations;
        m_resultSize = (unsigned int)FireStarterResult::ResultSize(m_registers, m_instructions);
        if (initResults && (m_registers == initResults->m_registers) && (m_variations == initResults->m_variations))
            for (unsigned int v = 0; v < m_variations; v++)
                Result(v)->Init(settings, initResults->Result(v));
        else
            for (unsigned int v = 0; v < m_variations; v++)
                Result(v)->Init(settings);
    } // Init
} FireStarterResults;

typedef struct FireStarterPopulation {
    FireStarterResult m_memory[64]; // Note: Dynamically allocated.

    static inline size_t DataSize(void)
    {
        return FireStarterData::DataSize();
    } // DataSize

    static inline size_t DataSize(const FireStarterSettings& settings)
    {
        return FireStarterData::DataSize(settings.m_registers);
    } // DataSize

    static inline size_t ResultSize(void)
    {
        return FireStarterResult::ResultSize();
    } // ResultsSize

    static inline size_t ResultSize(const FireStarterSettings& settings)
    {
        return FireStarterResult::ResultSize(settings.m_registers, settings.m_instructions);
    } // ResultsSize

    static inline size_t VariationSize(const FireStarterSettings& settings)
    {
        return settings.m_population * ResultSize(settings);
    } // VariationSize

    static inline size_t VariationSize(void)
    {
        return FIRESTARTER_POPULATION * ResultSize();
    } // VariationSize

    static inline size_t PopulationSize(const FireStarterSettings& settings)
    {
        return settings.m_variations * VariationSize(settings);
    } // PopulationSize

    inline FireStarterResult* Result(const FireStarterSettings& settings, unsigned int member, unsigned int variation)
    {
        return (FireStarterResult*)((unsigned char*)m_memory + variation * VariationSize(settings) + member * ResultSize(settings));
    } // Result

    inline const FireStarterResult* Result(const FireStarterSettings& settings, unsigned int member, unsigned int variation) const
    {
        return (const FireStarterResult*)((unsigned char*)m_memory + variation * VariationSize(settings) + member * ResultSize(settings));
    } // Result

    inline FireStarterResult* Result(unsigned int member, unsigned int variation)
    {
        return (FireStarterResult*)((unsigned char*)m_memory + variation * VariationSize() + member * ResultSize());
    } // Result

    inline const FireStarterResult* Result(unsigned int member, unsigned int variation) const
    {
        return (const FireStarterResult*)((unsigned char*)m_memory + variation * VariationSize() + member * ResultSize());
    } // Result

    inline FireStarterData* Data(unsigned int member, unsigned int variation)
    {
        return Result(member, variation)->Data();
    } // Data

    inline FireStarterData* Data(const FireStarterSettings& settings, unsigned int member, unsigned int variation)
    {
        return Result(settings, member, variation)->Data();
    } // Data

    inline const FireStarterData* Data(unsigned int member, unsigned int variation) const
    {
        return Result(member, variation)->Data();
    } // Data

    inline const FireStarterData* Data(const FireStarterSettings& settings, unsigned int member, unsigned int variation) const
    {
        return Result(settings, member, variation)->Data();
    } // Data

    inline float* MinResult(unsigned int member, unsigned int variation)
    {
        return Result(member, variation)->MinResult();
    } // MinResult

    inline float* MinResult(const FireStarterSettings& settings, unsigned int member, unsigned int variation)
    {
        return Result(settings, member, variation)->MinResult();
    } // MinResult

    inline float MinResult(unsigned int member, unsigned int variation) const
    {
        return Result(member, variation)->MinResult();
    } // MinResult

    inline float MinResult(const FireStarterSettings& settings, unsigned int member, unsigned int variation) const
    {
        return Result(settings, member, variation)->MinResult();
    } // MinResult

    inline unsigned int* Age(unsigned int member, unsigned int variation)
    {
        return Result( member, variation)->Age();
    } // Age

    inline unsigned int* Age(const FireStarterSettings& settings, unsigned int member, unsigned int variation)
    {
        return Result(settings, member, variation)->Age();
    } // Age

    inline unsigned int Age(unsigned int member, unsigned int variation) const
    {
        return Result(member, variation)->Age();
    } // Age

    inline unsigned int Age(const FireStarterSettings& settings, unsigned int member, unsigned int variation) const
    {
        return Result(settings, member, variation)->Age();
    } // Age

    inline void InitMemberResult(unsigned int member, unsigned int variation, unsigned int age, float resultMin, const FireStarterData& data)
    {
        Result(member, variation)->Init(resultMin, data, age);
    } // InitMemberResult

    inline void InitMemberResult(const FireStarterSettings& settings, unsigned int member, unsigned int variation, unsigned int age, float resultMin, const FireStarterData& data)
    {
        Result(settings, member, variation)->Init(settings, resultMin, data, age);
    } // InitMemberResult

    inline void InitMemberResult(unsigned int member, unsigned int variation, unsigned int age, float resultMin, const FireStarterData* data)
    {
        Result(member, variation)->Init(resultMin, data, age);
    } // InitMemberResult

    inline void InitMemberResult(const FireStarterSettings& settings, unsigned int member, unsigned int variation, unsigned int age, float resultMin, const FireStarterData* data)
    {
        Result(settings, member, variation)->Init(settings, resultMin, data, age);
    } // InitMemberResult
} FireStarterPopulation;
