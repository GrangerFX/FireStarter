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

    inline float Evaluate(FireStarterSharedData& data, float n) const
    {
#if 1 // 4.6 then 3.3 seconds
        // Per instruction opcodes are slower to execute but more general.
        for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            n = c[i].op ? data[c[i].reg] += n : data[c[i].reg] *= n;
#endif
#if 0 // 3.7 then 2.5 seconds
        // Fixed multiply/add is faster to execute but likely is more difficult to evolve.
        for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i += 2) {
            n = data[c[i].reg] += n;
            n = data[c[i + 1].reg] *= n;
        }
#endif
#if 0 // 4.1 then 2.5 seconds
        n = data[c[0].reg] += n;
        n = data[c[1].reg] *= n;
        n = data[c[2].reg] += n;
        n = data[c[3].reg] *= n;
        n = data[c[4].reg] *= n;
        n = data[c[5].reg] *= n;
        n = data[c[6].reg] += n;
        n = data[c[7].reg] *= n;
        n = data[c[8].reg] *= n;
        n = data[c[9].reg] *= n;
        n = data[c[10].reg] += n;
        n = data[c[11].reg] *= n;
        n = data[c[12].reg] *= n;
        n = data[c[13].reg] *= n;
        n = data[c[14].reg] += n;
        n = data[c[15].reg] *= n;
        n = data[c[16].reg] += n;
        n = data[c[17].reg] *= n;
        n = data[c[18].reg] *= n;
        n = data[c[19].reg] += n;
        n = data[c[20].reg] += n;
        n = data[c[21].reg] *= n;
        n = data[c[22].reg] *= n;
        n = data[c[23].reg] *= n;
        n = data[c[24].reg] += n;
        n = data[c[25].reg] += n;
        n = data[c[26].reg] *= n;
        n = data[c[27].reg] *= n;
        n = data[c[28].reg] *= n;
        n = data[c[29].reg] += n;
        n = data[c[30].reg] *= n;
        n = data[c[31].reg] += n;
#endif
#if 0 // 2.3 then 1.6 seconds
        n = data[0] += n;
        n = data[1] *= n;
        n = data[1] += n;
        n *= data[2];
        n = data[1] *= n;
        n *= data[3];
        n += data[4];
        n = data[5] *= n;
        n *= data[6];
        n = data[7] *= n;
        n += data[8];
        n = data[7] *= n;
        n *= data[9];
        n = data[10] *= n;
        n += data[11];
        n *= data[5];
        n = data[12] += n;
        n *= data[12];
        n *= data[1];
        n += data[13];
        n += data[10];
        n *= data[14];
        n *= data[15];
        n = data[16] *= n;
        n += data[7];
        n += data[17];
        n *= data[18];
        n *= data[16];
        n *= data[0];
        n += data[19];
        n *= data[20];
        n += data[21];
#endif
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
    unsigned short m_dataAge;
    unsigned short m_codeAge;
    FireStarterData m_data; // Note: Dynamically allocated!
    FireStarterCode m_code; // Note: Dynamically allocated! TODO: m_data and m_code should be backed by a byte data array.

    static inline size_t ResultSize(void)
    {
        return sizeof(FireStarterResult);
    } // ResultSize

    static inline size_t ResultSize(const FireStarterSettings& settings)
    {
        return (sizeof(FireStarterResult) - (sizeof(m_data) + sizeof(m_code))) + FireStarterData::DataSize(settings.m_registers) + FireStarterCode::CodeSize(settings.m_instructions);
    } // ResultSize

    inline float* MinResult(void)
    {
        return &m_resultMin;
    } // MinResult

    inline float MinResult(void) const
    {
        return m_resultMin;
    } // MinResult

    inline unsigned short* DataAge(void)
    {
        return &m_dataAge;
    } // DataAge

    inline unsigned short DataAge(void) const
    {
        return m_dataAge;
    } // DataAge

    inline unsigned short* CodeAge(void)
    {
        return &m_codeAge;
    } // CodeAge

    inline unsigned short CodeAge(void) const
    {
        return m_codeAge;
    } // CodeAge

    inline FireStarterData* Data(void)
    {
        return &m_data;
    } // Data

    inline const FireStarterData* Data(void) const
    {
        return &m_data;
    } // Data

    inline FireStarterCode* Code(void)
    {
        return &m_code;
    } // Code

    inline const FireStarterCode* Code(void) const
    {
        return &m_code;
    } // Code

    inline FireStarterCode* Code(unsigned int registers)
    {
        return (FireStarterCode*)((char*)&m_data + FireStarterData::DataSize(registers));
    } // Code

    inline const FireStarterCode* Code(unsigned int registers) const
    {
        return (const FireStarterCode*)((const char*)&m_data + FireStarterData::DataSize(registers));
    } // Code

    inline void Init(unsigned short dataAge = 0, unsigned short codeAge = 0)
    {
        m_data.Init();
        m_code.Init();
        m_resultMin = FIRESTARTER_START_RESULT;
        m_dataAge = dataAge;
        m_codeAge = codeAge;
    } // Init

    inline void Init(const FireStarterSettings& settings, unsigned short dataAge = 0, unsigned short codeAge = 0)
    {
        m_data.Init(settings.m_registers);
        m_code.Init(settings.m_instructions);
        m_resultMin = settings.m_startResult;
        m_dataAge = dataAge;
        m_codeAge = codeAge;
    } // Init

    inline void Init(unsigned long long& seed, unsigned int registers, unsigned short dataAge = 0, unsigned short codeAge = 0)
    {
        m_data.Init(seed, FIRESTARTER_START_SCALE, registers);
        m_code.Init();
        m_resultMin = FIRESTARTER_START_RESULT;
        m_dataAge = dataAge;
        m_codeAge = codeAge;
    } // Init

    inline void Init(const FireStarterSettings& settings, unsigned long long& seed, unsigned int registers, unsigned short dataAge = 0, unsigned short codeAge = 0)
    {
        m_data.Init(seed, settings.m_startScale, registers, settings.m_registers);
        m_code.Init(settings.m_instructions);
        m_resultMin = settings.m_startResult;
        m_dataAge = dataAge;
        m_codeAge = codeAge;
    } // Init

    inline void Init(const FireStarterData& data, float resultMin, unsigned short dataAge = 0)
    {
        m_data.Copy(data);
        m_code.Init();
        m_resultMin = resultMin;
        m_dataAge = dataAge;
        m_codeAge = 0;
    } // Init

    inline void Init(const FireStarterData& data, const FireStarterCode& code, float resultMin, unsigned short dataAge = 0, unsigned short codeAge = 0)
    {
        m_data.Copy(data);
        m_code.Copy(code);
        m_resultMin = resultMin;
        m_dataAge = dataAge;
        m_codeAge = codeAge;
    } // Init

    inline void Init(const FireStarterData* data, float resultMin, unsigned short dataAge = 0)
    {
        if (data)
            m_data.Copy(data);
        else
            m_data.Init();
        m_code.Init();
        m_resultMin = resultMin;
        m_dataAge = dataAge;
        m_codeAge = 0;
    } // Init

    inline void Init(const FireStarterData* data, const FireStarterCode* code, float resultMin, unsigned short dataAge = 0, unsigned short codeAge = 0)
    {
        if (data)
            m_data.Copy(data);
        else
            m_data.Init();
        if (code)
            m_code.Copy(code);
        else
            m_code.Init();
        m_resultMin = resultMin;
        m_dataAge = dataAge;
        m_codeAge = codeAge;
    } // Init

    inline void Init(const FireStarterData& data, const FireStarterSettings& settings, float resultMin, unsigned short dataAge = 0)
    {
        m_data.Copy(data, settings.m_registers);
        m_code.Init(settings.m_instructions);
        m_resultMin = resultMin;
        m_dataAge = dataAge;
        m_codeAge = 0;
    } // Init


    inline void Init(const FireStarterData& data, const FireStarterCode& code, const FireStarterSettings& settings, float resultMin, unsigned short dataAge = 0, unsigned short codeAge = 0)
    {
        m_data.Copy(data, settings.m_registers);
        m_code.Copy(code, settings.m_instructions);
        m_resultMin = resultMin;
        m_dataAge = dataAge;
        m_codeAge = codeAge;
    } // Init

    inline void Init(const FireStarterData* data, const FireStarterSettings& settings, float resultMin, unsigned short dataAge = 0)
    {
        if (data)
            m_data.Copy(data, settings.m_registers);
        else
            m_data.Init(settings.m_registers);
        m_code.Init(settings.m_instructions);
        m_resultMin = resultMin;
        m_dataAge = dataAge;
        m_codeAge = 0;
    } // Init

    inline void Init(const FireStarterData* data, const FireStarterCode* code, const FireStarterSettings& settings, float resultMin, unsigned short dataAge = 0, unsigned short codeAge = 0)
    {
        if (data)
            m_data.Copy(data, settings.m_registers);
        else
            m_data.Init(settings.m_registers);
        if (code)
            m_code.Copy(code, settings.m_instructions);
        else
            m_code.Init(settings.m_instructions);
        m_resultMin = resultMin;
        m_dataAge = dataAge;
        m_codeAge = codeAge;
    } // Init

    inline void Init(const FireStarterResult* initResult)
    {
        m_data.Copy(initResult->Data());
        m_code.Copy(initResult->Code());
        m_resultMin = initResult->MinResult();
        m_dataAge = initResult->DataAge();
        m_codeAge = initResult->CodeAge();
    } // Init

    inline void Init(const FireStarterResult* initResult, const FireStarterSettings& settings)
    {
        m_data.Copy(initResult->Data(), settings.m_registers);
        m_code.Copy(initResult->Code(settings.m_registers), settings.m_instructions);
        m_resultMin = initResult->MinResult();
        m_dataAge = initResult->DataAge();
        m_codeAge = initResult->CodeAge();
    } // Init
} FireStarterResult;

typedef struct FireStarterResults {
    unsigned int m_registers;
    unsigned int m_instructions;
    unsigned int m_variations;
    unsigned int m_resultSize;
    FireStarterResult m_results[FIRESTARTER_VARIATIONS]; // Note: Dynamically allocated!

    static inline size_t ResultsSize(void)
    {
        return sizeof(FireStarterResults);
    } // ResultSize

    static inline size_t ResultsSize(const FireStarterSettings &settings)
    {
        return (sizeof(FireStarterResults) - sizeof(m_results)) + FireStarterResult::ResultSize(settings) * settings.m_variations;
    } // ResultSize

    inline FireStarterResult* Result(unsigned int variation)
    {
        return (FireStarterResult*)((unsigned char*)m_results + variation * m_resultSize);
    } // Result

    inline const FireStarterResult* Result(unsigned int variation) const
    {
        return (const FireStarterResult*)((unsigned char*)m_results + variation * m_resultSize);
    } // Result

    inline float* MinResult(unsigned int variation)
    {
        return Result(variation)->MinResult();
    } // MinResult

    inline float MinResult(unsigned int variation) const
    {
        return Result(variation)->MinResult();
    } // MinResult

    inline unsigned short* DataAge(unsigned int variation)
    {
        return Result(variation)->DataAge();
    } // DataAge

    inline unsigned short DataAge(unsigned int variation) const
    {
        return Result(variation)->DataAge();
    } // DataAge

    inline FireStarterData* Data(unsigned int variation)
    {
        return Result(variation)->Data();
    } // Data

    inline const FireStarterData* Data(unsigned int variation) const
    {
        return Result(variation)->Data();
    } // Data

    inline FireStarterCode* Code(unsigned int variation)
    {
        return Result(variation)->Code(m_registers);
    } // Code

    inline const FireStarterCode* Code(unsigned int variation) const
    {
        return Result(variation)->Code(m_registers);
    } // Code

    inline void InitResults(const FireStarterSettings& settings)
    {
        m_registers = settings.m_registers;
        m_instructions = settings.m_instructions;
        m_variations = settings.m_variations;
        m_resultSize = (unsigned int)FireStarterResult::ResultSize(settings);
        for (unsigned int v = 0; v < m_variations; v++)
            Result(v)->Init(settings);
    } // Init
} FireStarterResults;

typedef struct FireStarterPopulation {
    FireStarterResult m_population[FIRESTARTER_POPULATION * FIRESTARTER_VARIATIONS]; // Note: Dynamically allocated.

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
        return FireStarterResult::ResultSize(settings);
    } // ResultsSize

    static inline size_t VariationSize(void)
    {
        return FIRESTARTER_POPULATION * ResultSize();
    } // VariationSize

    static inline size_t VariationSize(const FireStarterSettings& settings)
    {
        return settings.m_population * ResultSize(settings);
    } // VariationSize

    static inline size_t PopulationSize(void)
    {
        return sizeof(FireStarterPopulation);
    } // PopulationSize

    static inline size_t PopulationSize(const FireStarterSettings& settings)
    {
        return settings.m_variations * VariationSize(settings);
    } // PopulationSize

    inline FireStarterResult* Result(unsigned int member, unsigned int variation)
    {
        return (FireStarterResult*)((unsigned char*)m_population + variation * VariationSize() + member * ResultSize());
    } // Result

    inline const FireStarterResult* Result(unsigned int member, unsigned int variation) const
    {
        return (const FireStarterResult*)((unsigned char*)m_population + variation * VariationSize() + member * ResultSize());
    } // Result

    inline FireStarterResult* Result(const FireStarterSettings& settings, unsigned int member, unsigned int variation)
    {
        return (FireStarterResult*)((unsigned char*)m_population + variation * VariationSize(settings) + member * ResultSize(settings));
    } // Result

    inline const FireStarterResult* Result(const FireStarterSettings& settings, unsigned int member, unsigned int variation) const
    {
        return (const FireStarterResult*)((unsigned char*)m_population + variation * VariationSize(settings) + member * ResultSize(settings));
    } // Result

    inline FireStarterData* Data(unsigned int member, unsigned int variation)
    {
        return Result(member, variation)->Data();
    } // Data

    inline const FireStarterData* Data(unsigned int member, unsigned int variation) const
    {
        return Result(member, variation)->Data();
    } // Data

    inline FireStarterData* Data(const FireStarterSettings& settings, unsigned int member, unsigned int variation)
    {
        return Result(settings, member, variation)->Data();
    } // Data

    inline const FireStarterData* Data(const FireStarterSettings& settings, unsigned int member, unsigned int variation) const
    {
        return Result(settings, member, variation)->Data();
    } // Data

    inline FireStarterCode* Code(unsigned int member, unsigned int variation)
    {
        return Result(member, variation)->Code();
    } // Code

    inline const FireStarterCode* Code(unsigned int member, unsigned int variation) const
    {
        return Result(member, variation)->Code();
    } // Code

    inline FireStarterCode* Code(const FireStarterSettings& settings, unsigned int member, unsigned int variation)
    {
        return Result(settings, member, variation)->Code(settings.m_registers);
    } // Code

    inline const FireStarterCode* Code(const FireStarterSettings& settings, unsigned int member, unsigned int variation) const
    {
        return Result(settings, member, variation)->Code(settings.m_registers);
    } // Code
#
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

    inline unsigned short* DataAge(unsigned int member, unsigned int variation)
    {
        return Result(member, variation)->DataAge();
    } // DataAge

    inline unsigned short* DataAge(const FireStarterSettings& settings, unsigned int member, unsigned int variation)
    {
        return Result(settings, member, variation)->DataAge();
    } // DataAge

    inline unsigned short DataAge(unsigned int member, unsigned int variation) const
    {
        return Result(member, variation)->DataAge();
    } // DataAge

    inline unsigned short DataAge(const FireStarterSettings& settings, unsigned int member, unsigned int variation) const
    {
        return Result(settings, member, variation)->DataAge();
    } // DataAge

    inline unsigned short* CodeAge(unsigned int member, unsigned int variation)
    {
        return Result(member, variation)->CodeAge();
    } // CodeAge

    inline unsigned short* CodeAge(const FireStarterSettings& settings, unsigned int member, unsigned int variation)
    {
        return Result(settings, member, variation)->CodeAge();
    } // CodeAge

    inline unsigned short CodeAge(unsigned int member, unsigned int variation) const
    {
        return Result(member, variation)->CodeAge();
    } // CodeAge

    inline unsigned short CodeAge(const FireStarterSettings& settings, unsigned int member, unsigned int variation) const
    {
        return Result(settings, member, variation)->CodeAge();
    } // CodeAge

    inline void InitMemberResult(const FireStarterData& data, unsigned int member, unsigned int variation, float resultMin, unsigned short dataAge = 0)
    {
        Result(member, variation)->Init(&data, resultMin, dataAge);
    } // InitMemberResult

    inline void InitMemberResult(const FireStarterData& data, const FireStarterCode& code, unsigned int member, unsigned int variation, float resultMin, unsigned short dataAge = 0, unsigned short codeAge = 0)
    {
        Result(member, variation)->Init(data, code, resultMin, dataAge, codeAge);
    } // InitMemberResult

    inline void InitMemberResult(const FireStarterData* data, unsigned int member, unsigned int variation, float resultMin, unsigned short dataAge = 0)
    {
        Result(member, variation)->Init(data, resultMin, dataAge);
    } // InitMemberResult

    inline void InitMemberResult(const FireStarterData* data, const FireStarterCode* code, unsigned int member, unsigned int variation, float resultMin, unsigned short dataAge = 0, unsigned short codeAge = 0)
    {
        Result(member, variation)->Init(data, code, resultMin, dataAge, codeAge);
    } // InitMemberResult

    inline void InitMemberResult(const FireStarterData& data, const FireStarterSettings& settings, unsigned int member, unsigned int variation, float resultMin, unsigned short dataAge = 0)
    {
        Result(settings, member, variation)->Init(&data, settings, resultMin, dataAge);
    } // InitMemberResult

    inline void InitMemberResult(const FireStarterData& data, const FireStarterCode& code, const FireStarterSettings& settings, unsigned int member, unsigned int variation, float resultMin, unsigned short dataAge = 0, unsigned short codeAge = 0)
    {
        Result(settings, member, variation)->Init(data, code, settings, resultMin, dataAge, codeAge);
    } // InitMemberResult

    inline void InitMemberResult(const FireStarterData* data, const FireStarterSettings& settings, unsigned int member, unsigned int variation, float resultMin, unsigned short dataAge = 0)
    {
        Result(settings, member, variation)->Init(data, settings, resultMin, dataAge);
    } // InitMemberResult

    inline void InitMemberResult(const FireStarterData* data, const FireStarterCode* code, const FireStarterSettings& settings, unsigned int member, unsigned int variation, float resultMin, unsigned short dataAge = 0, unsigned short codeAge = 0)
    {
        Result(settings, member, variation)->Init(data, code, settings, resultMin, dataAge, codeAge);
    } // InitMemberResult
} FireStarterPopulation;
