#pragma once
#include "FireStarterSettings.h"
#include "HashRandom.h"

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

    inline void RandomData(unsigned long long& seed, float scale)
    {
        unsigned int i = RANDOMMOD(seed, FIRESTARTER_REGISTERS);
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
    float d[FIRESTARTER_REGISTERS * FIRESTARTER_WARP_THREADS];

#ifdef __CUDACC__
    inline unsigned int index(unsigned int i) const
    {
        return i * FIRESTARTER_WARP_THREADS + threadIdx.x;
    } // index
#else
    inline unsigned int index(unsigned int i) const
    {
        return i * FIRESTARTER_WARP_THREADS;
    } // index
#endif

    inline unsigned int index(unsigned int i, unsigned int t) const
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

    inline void Get(FireStarterData& data, unsigned int t)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            data[i] = d[index(i, t)];
    } // Get

    inline void Get(FireStarterData* data, unsigned int t)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            (*data)[i] = d[index(i, t)];
    } // Get

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
    unsigned short op = 0;
    unsigned short reg = 0;
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

    inline float Evaluate(FireStarterData& data, float n) const
    {
        for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            n = c[i].op ? data[c[i].reg] += n : data[c[i].reg] *= n;
        return n;
    } // Evaluate

    inline float Evaluate(FireStarterSharedData& data, float n) const
    {
        for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            n = c[i].op ? data[c[i].reg] += n : data[c[i].reg] *= n;
        return n;
    } // Evaluate

    inline void RandomInstruction(unsigned long long& seed, unsigned int i)
    {
        c[i].reg = RANDOMMOD(seed, FIRESTARTER_REGISTERS);
        c[i].op = RANDOMMOD(seed, FIRESTARTER_OPCODES);
    } // RandomInstruction

    inline void RandomInstruction(unsigned long long& seed)
    {
        unsigned int i = RANDOMMOD(seed, FIRESTARTER_INSTRUCTIONS);
        RandomInstruction(seed, i);
    } // RandomInstruction

    inline void Init()
    {
        for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            c[i] = FireStarterCodeInstruction();
    } // Init

    inline void Init(unsigned int registers)
    {
        for (unsigned int i = 0; i < registers; i++)
            c[i] = FireStarterCodeInstruction();
    } // Init

    inline void Init(unsigned long long& seed)
    {
        for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            RandomInstruction(seed, i);
    } // Init

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
        return (sizeof(FireStarterResult) - sizeof(m_data)) + FireStarterData::DataSize(settings.m_registers);
    } // ResultSize

    inline float* MinResult(void)
    {
        return &m_resultMin;
    } // MinResult

    inline float MinResult(void) const
    {
        return m_resultMin;
    } // MinResult

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

    inline void Init(unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        m_data.Init();
        m_resultMin = FIRESTARTER_START_RESULT;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // Init

    inline void Init(const FireStarterSettings& settings, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        m_data.Init(settings.m_registers);
        m_resultMin = settings.m_startResult;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // Init

    inline void Init(unsigned long long& seed, unsigned int registers, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        m_data.Init(seed, FIRESTARTER_START_SCALE, registers);
        m_resultMin = FIRESTARTER_START_RESULT;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // Init

    inline void Init(const FireStarterSettings& settings, unsigned long long& seed, unsigned int registers, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        m_data.Init(seed, settings.m_startScale, registers, settings.m_registers);
        m_resultMin = settings.m_startResult;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // Init

    inline void Init(const FireStarterData& data, float resultMin, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        m_data.Copy(data);
        m_resultMin = resultMin;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // Init

    inline void Init(const FireStarterData* data, float resultMin, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        if (data)
            m_data.Copy(data);
        else
            m_data.Init();
        m_resultMin = resultMin;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // Init

    inline void Init(const FireStarterData& data, const FireStarterSettings& settings, float resultMin, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        m_data.Copy(data, settings.m_registers);
        m_resultMin = resultMin;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // Init

    inline void Init(const FireStarterData* data, const FireStarterSettings& settings, float resultMin, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        if (data)
            m_data.Copy(data, settings.m_registers);
        else
            m_data.Init(settings.m_registers);
        m_resultMin = resultMin;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // Init

    inline void Init(const FireStarterResult* initResult)
    {
        m_data.Copy(initResult->Data());
        m_resultMin = initResult->MinResult();
        m_evolveAge1 = initResult->EvolveAge1();
        m_evolveAge2 = initResult->EvolveAge2();
    } // Init

    inline void Init(const FireStarterResult* initResult, const FireStarterSettings& settings)
    {
        m_data.Copy(initResult->Data(), settings.m_registers);
        m_resultMin = initResult->MinResult();
        m_evolveAge1 = initResult->EvolveAge1();
        m_evolveAge2 = initResult->EvolveAge2();
    } // Init
} FireStarterResult;

typedef struct FireStarterResults {
    FireStarterResult m_results[FIRESTARTER_VARIATIONS]; // Note: Dynamically allocated!
    FireStarterCode m_code; // Note: Dynamically allocated!

    static inline size_t ResultsSize(void)
    {
        return sizeof(FireStarterResults);
    } // ResultSize

    static inline size_t ResultsSize(const FireStarterSettings &settings)
    {
        return (sizeof(FireStarterResults) - (sizeof(m_results) + sizeof(m_code))) + FireStarterResult::ResultSize(settings) * settings.m_variations + FireStarterCode::CodeSize(settings.m_instructions);
    } // ResultSize

    inline FireStarterResult* Result(unsigned int variation = 0, unsigned int registers = FIRESTARTER_REGISTERS)
    {
        return (FireStarterResult*)((unsigned char*)m_results + variation * FireStarterResult::ResultSize(registers));
    } // Result

    inline const FireStarterResult* Result(unsigned int variation = 0, unsigned int registers = FIRESTARTER_REGISTERS) const
    {
        return (const FireStarterResult*)((unsigned char*)m_results + variation * FireStarterResult::ResultSize(registers));
    } // Result

    inline FireStarterCode* Code(unsigned int variations = FIRESTARTER_VARIATIONS, unsigned int registers = FIRESTARTER_REGISTERS)
    {
        return (FireStarterCode*)((char*)&m_results + FireStarterResult::ResultSize(registers) * variations);
    } // Code

    inline const FireStarterCode* Code(unsigned int variations = FIRESTARTER_VARIATIONS, unsigned int registers = FIRESTARTER_REGISTERS) const
    {
        return (const FireStarterCode*)((const char*)&m_results + FireStarterResult::ResultSize(registers) * variations);
    } // Code

    inline FireStarterCode* Code(const FireStarterSettings& settings)
    {
        return (FireStarterCode*)((char*)&m_results + FireStarterResult::ResultSize(settings) * settings.m_variations);
    } // Code

    inline const FireStarterCode* Code(const FireStarterSettings& settings) const
    {
        return (const FireStarterCode*)((const char*)&m_results + FireStarterResult::ResultSize(settings) * settings.m_variations);
    } // Code

    inline float* MinResult(unsigned int variation = 0)
    {
        return Result(variation)->MinResult();
    } // MinResult

    inline float MinResult(unsigned int variation = 0) const
    {
        return Result(variation)->MinResult();
    } // MinResult

    inline unsigned short* EvolveAge1(unsigned int variation = 0)
    {
        return Result(variation)->EvolveAge1();
    } // EvolveAge1

    inline unsigned short EvolveAge1(unsigned int variation = 0) const
    {
        return Result(variation)->EvolveAge1();
    } // EvolveAge1

    inline unsigned short* EvolveAge2(unsigned int variation = 0)
    {
        return Result(variation)->EvolveAge2();
    } // EvolveAge2

    inline unsigned short EvolveAge2(unsigned int variation = 0) const
    {
        return Result(variation)->EvolveAge2();
    } // EvolveAge2

    inline FireStarterData* Data(unsigned int variation = 0, unsigned int registers = FIRESTARTER_REGISTERS)
    {
        return Result(variation, registers)->Data();
    } // Data

    inline const FireStarterData* Data(unsigned int variation = 0, unsigned int registers = FIRESTARTER_REGISTERS) const
    {
        return Result(variation, registers)->Data();
    } // Data

    inline FireStarterData* Data(const FireStarterSettings& settings, unsigned int variation = 0)
    {
        return Result(variation, settings.m_registers)->Data();
    } // Data

    inline const FireStarterData* Data(const FireStarterSettings& settings, unsigned int variation = 0) const
    {
        return Result(variation, settings.m_registers)->Data();
    } // Data

    inline void InitResults(const FireStarterSettings& settings)
    {
        for (unsigned int v = 0; v < settings.m_variations; v++)
            Result(v, settings.m_registers)->Init(settings);
        m_code.Init();
    } // Init
} FireStarterResults;

typedef struct FireStarterPopulation {
    FireStarterResults m_population[FIRESTARTER_POPULATION]; // Note: Dynamically allocated.

    static inline size_t DataSize(void)
    {
        return FireStarterData::DataSize();
    } // DataSize

    static inline size_t DataSize(const FireStarterSettings& settings)
    {
        return FireStarterData::DataSize(settings.m_registers);
    } // DataSize

    static inline size_t CodeSize(void)
    {
        return FireStarterCode::CodeSize();
    } // CodeSize

    static inline size_t CodeSize(const FireStarterSettings& settings)
    {
        return FireStarterCode::CodeSize(settings.m_instructions);
    } // CodeSize

    static inline size_t ResultSize(void)
    {
        return FireStarterResult::ResultSize();
    } // ResultSize

    static inline size_t ResultSize(const FireStarterSettings& settings)
    {
        return FireStarterResult::ResultSize(settings);
    } // ResultSize

    static inline size_t ResultsSize(void)
    {
        return FireStarterResults::ResultsSize();
    } // ResultSize

    static inline size_t ResultsSize(const FireStarterSettings& settings)
    {
        return FireStarterResults::ResultsSize(settings);
    } // ResultsSize

    static inline size_t PopulationSize(void)
    {
        return sizeof(FireStarterPopulation);
    } // PopulationSize

    static inline size_t PopulationSize(const FireStarterSettings& settings)
    {
        return settings.m_population * ResultsSize(settings);
    } // PopulationSize

    inline FireStarterResults* Results(unsigned int member)
    {
        return (FireStarterResults*)((unsigned char*)m_population + member * ResultsSize());
    } // Results

    inline const FireStarterResults* Results(unsigned int member) const
    {
        return (const FireStarterResults*)((unsigned char*)m_population + member * ResultsSize());
    } // Results

    inline FireStarterResults* Results(const FireStarterSettings& settings, unsigned int member)
    {
        return (FireStarterResults*)((unsigned char*)m_population + member * ResultsSize(settings));
    } // Results

    inline const FireStarterResults* Results(const FireStarterSettings& settings, unsigned int member) const
    {
        return (const FireStarterResults*)((unsigned char*)m_population + member * ResultsSize(settings));
    } // Results

    inline FireStarterResult* Result(unsigned int member, unsigned int variation = 0)
    {
        return Results(member)->Result(variation);
    } // Result

    inline const FireStarterResult* Result(unsigned int member, unsigned int variation = 0) const
    {
        return Results(member)->Result(variation);
    } // Result

    inline FireStarterResult* Result(const FireStarterSettings& settings, unsigned int member, unsigned int variation = 0)
    {
        return Results(settings, member)->Result(variation, settings.m_registers);
    } // Result

    inline const FireStarterResult* Result(const FireStarterSettings& settings, unsigned int member, unsigned int variation = 0) const
    {
        return Results(settings, member)->Result(variation, settings.m_registers);
    } // Result

    inline FireStarterData* Data(unsigned int member, unsigned int variation = 0)
    {
        return Result(member, variation)->Data();
    } // Data

    inline const FireStarterData* Data(unsigned int member, unsigned int variation = 0) const
    {
        return Result(member, variation)->Data();
    } // Data

    inline FireStarterData* Data(const FireStarterSettings& settings, unsigned int member, unsigned int variation = 0)
    {
        return Result(settings, member, variation)->Data();
    } // Data

    inline const FireStarterData* Data(const FireStarterSettings& settings, unsigned int member, unsigned int variation = 0) const
    {
        return Result(settings, member, variation)->Data();
    } // Data

    inline FireStarterCode* Code(unsigned int member)
    {
        return Results(member)->Code();
    } // Code

    inline const FireStarterCode* Code(unsigned int member) const
    {
        return Results(member)->Code();
    } // Code

    inline FireStarterCode* Code(const FireStarterSettings& settings, unsigned int member)
    {
        return Results(settings, member)->Code(settings.m_variations, settings.m_registers);
    } // Code

    inline const FireStarterCode* Code(const FireStarterSettings& settings, unsigned int member) const
    {
        return Results(settings, member)->Code(settings.m_variations, settings.m_registers);
    } // Code

    inline float* MinResult(unsigned int member, unsigned int variation = 0)
    {
        return Result(member, variation)->MinResult();
    } // MinResult

    inline float* MinResult(const FireStarterSettings& settings, unsigned int member, unsigned int variation = 0)
    {
        return Result(settings, member, variation)->MinResult();
    } // MinResult

    inline float MinResult(unsigned int member, unsigned int variation = 0) const
    {
        return Result(member, variation)->MinResult();
    } // MinResult

    inline float MinResult(const FireStarterSettings& settings, unsigned int member, unsigned int variation = 0) const
    {
        return Result(settings, member, variation)->MinResult();
    } // MinResult

    inline unsigned short* EvolveAge1(unsigned int member, unsigned int variation = 0)
    {
        return Result(member, variation)->EvolveAge1();
    } // EvolveAge1

    inline unsigned short* EvolveAge1(const FireStarterSettings& settings, unsigned int member, unsigned int variation = 0)
    {
        return Result(settings, member, variation)->EvolveAge1();
    } // EvolveAge1

    inline unsigned short EvolveAge1(unsigned int member, unsigned int variation = 0) const
    {
        return Result(member, variation)->EvolveAge1();
    } // EvolveAge1

    inline unsigned short EvolveAge1(const FireStarterSettings& settings, unsigned int member, unsigned int variation = 0) const
    {
        return Result(settings, member, variation)->EvolveAge1();
    } // EvolveAge1

    inline unsigned short* EvolveAge2(unsigned int member, unsigned int variation = 0)
    {
        return Result(member, variation)->EvolveAge2();
    } // EvolveAge2

    inline unsigned short* EvolveAge2(const FireStarterSettings& settings, unsigned int member, unsigned int variation = 0)
    {
        return Result(settings, member, variation)->EvolveAge2();
    } // EvolveAge2

    inline unsigned short EvolveAge2(unsigned int member, unsigned int variation = 0) const
    {
        return Result(member, variation)->EvolveAge2();
    } // EvolveAge2

    inline unsigned short EvolveAge2(const FireStarterSettings& settings, unsigned int member, unsigned int variation = 0) const
    {
        return Result(settings, member, variation)->EvolveAge2();
    } // EvolveAge2

    inline void InitMemberResult(const FireStarterData& data, unsigned int member, float resultMin, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        Result(member)->Init(&data, resultMin, evolveAge1, evolveAge2);
    } // InitMemberResult

    inline void InitMemberResult(const FireStarterData* data, unsigned int member, float resultMin, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        Result(member)->Init(data, resultMin, evolveAge1, evolveAge2);
    } // InitMemberResult

    inline void InitMemberResult(const FireStarterData& data, const FireStarterSettings& settings, unsigned int member, float resultMin, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        Result(settings, member)->Init(&data, settings, resultMin, evolveAge1, evolveAge2);
    } // InitMemberResult

    inline void InitMemberResult(const FireStarterData* data, const FireStarterSettings& settings, unsigned int member, float resultMin, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        Result(settings, member)->Init(data, settings, resultMin, evolveAge1, evolveAge2);
    } // InitMemberResult

    inline void InitMemberResult(const FireStarterData& data, unsigned int member, unsigned int variation, float resultMin, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        Result(member, variation)->Init(&data, resultMin, evolveAge1, evolveAge2);
    } // InitMemberResult

    inline void InitMemberResult(const FireStarterData* data, unsigned int member, unsigned int variation, float resultMin, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        Result(member, variation)->Init(data, resultMin, evolveAge1, evolveAge2);
    } // InitMemberResult

    inline void InitMemberResult(const FireStarterData& data, const FireStarterSettings& settings, unsigned int member, unsigned int variation, float resultMin, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        Result(settings, member, variation)->Init(&data, settings, resultMin, evolveAge1, evolveAge2);
    } // InitMemberResult

    inline void InitMemberResult(const FireStarterData* data, const FireStarterSettings& settings, unsigned int member, unsigned int variation, float resultMin, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        Result(settings, member, variation)->Init(data, settings, resultMin, evolveAge1, evolveAge2);
    } // InitMemberResult
} FireStarterPopulation;
