#pragma once
#include "CUDADefines.h"
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

    inline void RandomData(unsigned long long& seed, float scale, unsigned int registers)
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

    inline void Init(unsigned long long& seed, float startScale)
    {
        for (unsigned int i = 0; i < FIRESTARTER_REGISTERS; i++)
            d[i] = RANDOMFACTOR(seed) * startScale; // Randomize the registers
    } // Init

    inline void Init(unsigned long long& seed, float startScale, unsigned int uniqueRegisters, unsigned int registers = FIRESTARTER_REGISTERS)
    {
        for (unsigned int i = 0; i < registers; i++)
            d[i] = i < uniqueRegisters ? RANDOMFACTOR(seed) * startScale : 0; // Randomize the active registers and clear the unused registers
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

    static inline FireStarterCode* Member(FireStarterCode* population, const FireStarterSettings& settings, unsigned int index)
    {
        return (FireStarterCode*)((char*)population + CodeSize(settings) * index);
    } // Member

    static inline const FireStarterCode* Member(const FireStarterCode* population, const FireStarterSettings& settings, unsigned int index)
    {
        return (FireStarterCode*)((char*)population + CodeSize(settings) * index);
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
        unsigned int regCount[FIRESTARTER_REGISTERS] = {};
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

    inline void Init(unsigned int instructions = FIRESTARTER_INSTRUCTIONS)
    {
        for (unsigned int i = 0; i < instructions; i++)
            c[i] = FireStarterCodeInstruction();
    } // Init

    inline void Init(unsigned long long& seed, unsigned int instructions = FIRESTARTER_INSTRUCTIONS, unsigned int registers = FIRESTARTER_REGISTERS, unsigned int opcodes = FIRESTARTER_OPCODES)
    {
        for (unsigned int i = 0; i < instructions; i++)
            c[i].RandomInstruction(seed, registers, opcodes);
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

// Only used by alternate SpeedTest code.
typedef struct FireStarterRegisters {
    unsigned int r[FIRESTARTER_INSTRUCTIONS]; // Note: Dynamically allocated!

    inline unsigned int& operator[](unsigned int i)
    {
        return r[i];
    } // operator[]

    inline unsigned int operator[](unsigned int i) const
    {
        return r[i];
    } // operator[]

    inline bool operator==(const FireStarterRegisters& other) const
    {
        for (int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            if (r[i] != other[i])
                return false;
        return true;
    } // operator==

    inline bool operator!=(const FireStarterRegisters& other) const
    {
        for (int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            if (r[i] != other[i])
                return true;
        return false;
    } // operator!=

    static inline size_t RegistersSize(void)
    {
        return sizeof(FireStarterRegisters);
    } // RegistersSize

    static inline size_t RegistersSize(unsigned int registers)
    {
        return sizeof(unsigned int) * registers;
    } // RegistersSize

    static inline size_t RegistersSize(const FireStarterSettings& settings)
    {
        return sizeof(unsigned int) * settings.m_registers;
    } // RegistersSize

    inline void RandomRegisters(unsigned long long& seed, float scale)
    {
        unsigned int i = RANDOMMOD(seed, FIRESTARTER_INSTRUCTIONS);
        r[i] = RANDOMMOD(seed, FIRESTARTER_REGISTERS);
    } // RandomRegisters

    inline void Copy(const FireStarterRegisters& registers)
    {
        for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            r[i] = registers[i];
    } // Copy

    inline void Copy(const FireStarterRegisters& registers, unsigned int instructions)
    {
        for (unsigned int i = 0; i < instructions; i++)
            r[i] = registers[i];
    } // Copy

    inline void Copy(const FireStarterRegisters* registers)
    {
        for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            r[i] = (*registers)[i];
    } // Copy

    inline void Copy(const FireStarterRegisters* registers, unsigned int instructions)
    {
        for (unsigned int i = 0; i < instructions; i++)
            r[i] = (*registers)[i];
    } // Copy

    inline void Copy(const FireStarterCode& code)
    {
        for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            r[i] = code.c[i].reg;
    } // Copy

    inline void Copy(const FireStarterCode& code, unsigned int instructions)
    {
        for (unsigned int i = 0; i < instructions; i++)
            r[i] = code.c[i].reg;
    } // Copy

    inline void Copy(const FireStarterCode* code)
    {
        for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            r[i] = code->c[i].reg;
    } // Copy

    inline void Copy(const FireStarterCode* code, unsigned int instructions)
    {
        for (unsigned int i = 0; i < instructions; i++)
            r[i] = code->c[i].reg;
    } // Copy

    inline void operator=(const FireStarterRegisters& registers)
    {
        Copy(registers);
    } // operator=

    inline void operator=(const FireStarterRegisters* registers)
    {
        Copy(registers);
    } // operator=

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
            r[i] = 0;
    } // Init

    inline void Init(unsigned int instructions)
    {
        for (unsigned int i = 0; i < instructions; i++)
            r[i] = 0;
    } // Init

    inline void Init(unsigned long long& seed)
    {
        for (unsigned int i = 0; i < FIRESTARTER_INSTRUCTIONS; i++)
            r[i] = RANDOMMOD(seed, FIRESTARTER_REGISTERS); // Randomize the registers.
    } // Init

    inline void Init(unsigned long long& seed, unsigned int instructions)
    {
        for (unsigned int i = 0; i < instructions; i++)
            r[i] = RANDOMMOD(seed, FIRESTARTER_REGISTERS); // Randomize the registers.
    } // Init

    inline FireStarterRegisters(const struct FireStarterRegisters& registers)
    {
        Copy(registers);
    } // FireStarterRegisters

    inline FireStarterRegisters(const struct FireStarterRegisters* registers)
    {
        Copy(registers);
    } // FireStarterRegisters

    inline FireStarterRegisters(const struct FireStarterCode& code)
    {
        Copy(code);
    } // FireStarterRegisters

    inline FireStarterRegisters(const struct FireStarterCode* code)
    {
        Copy(code);
    } // FireStarterRegisters

    inline FireStarterRegisters(void)
    {
    } // FireStarterRegisters
} FireStarterRegisters;

typedef struct FireStarterResult {
    float m_maxResult;
    unsigned short m_evolveAge1;
    unsigned short m_evolveAge2;
    float m_data[FIRESTARTER_REGISTERS * FIRESTARTER_VARIATIONS]; // Note: Dynamically allocated!

    static inline size_t ResultSize(void)
    {
        return sizeof(FireStarterResult);
    } // ResultSize

    static inline size_t ResultSize(unsigned int registers, unsigned int variations = FIRESTARTER_VARIATIONS)
    {
        return (sizeof(FireStarterResult) - sizeof(m_data)) + FireStarterData::DataSize(registers) * variations;
    } // ResultSize

    static inline size_t ResultSize(const FireStarterSettings& settings)
    {
        return ResultSize(settings.m_registers, settings.m_variations);
    } // ResultSize

    static inline size_t PopulationSize(const FireStarterSettings& settings)
    {
        return ResultSize(settings.m_registers, settings.m_variations) * settings.m_population;
    } // PopulationSize

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

    inline FireStarterData* Data(unsigned int variation = 0)
    {
        return (FireStarterData*)&m_data[FIRESTARTER_REGISTERS * variation];
    } // Data

    inline const FireStarterData* Data(unsigned int variation = 0) const
    {
        return (const FireStarterData*)&m_data[FIRESTARTER_REGISTERS * variation];
    } // Data

    inline FireStarterData* Data(const FireStarterSettings& settings, unsigned int variation = 0)
    {
        return (FireStarterData*)&m_data[settings.m_registers * variation];
    } // Data

    inline const FireStarterData* Data(const FireStarterSettings& settings, unsigned int variation = 0) const
    {
        return (const FireStarterData*)&m_data[settings.m_registers * variation];
    } // Data

    inline void Copy(const FireStarterResult* src)
    {
        memcpy(this, src, ResultSize());
    } // Copy

    inline void Copy(const FireStarterResult* src, const FireStarterSettings& settings)
    {
        memcpy(this, src, ResultSize(settings));
    } // Copy

    inline void CopyData(const FireStarterResult* src, unsigned int variation)
    {
        const FireStarterData* srcData = src->Data(variation);
        FireStarterData* dstData = Data(variation);
        memcpy(dstData, srcData, FireStarterData::DataSize());
    } // CopyData

    inline void CopyData(const FireStarterResult* src, const FireStarterSettings& settings, unsigned int variation)
    {
        const FireStarterData* srcData = src->Data(variation);
        FireStarterData* dstData = Data(variation);
        memcpy(dstData, srcData, FireStarterData::DataSize(settings.m_registers));
    } // CopyData

    static inline FireStarterResult* Member(FireStarterResult* population, const FireStarterSettings& settings, unsigned int index)
    {
        return (FireStarterResult*)((char*)population + ResultSize(settings) * index);
    } // Member

    static inline const FireStarterResult* Member(const FireStarterResult* population, const FireStarterSettings& settings, unsigned int index)
    {
        return (FireStarterResult*)((char*)population + ResultSize(settings) * index);
    } // Member

    inline FireStarterResult* Member(const FireStarterSettings& settings, unsigned int index)
    {
        return Member(this, settings, index);
    } // Member

    inline const FireStarterResult* Member(const FireStarterSettings& settings, unsigned int index) const
    {
        return Member(this, settings, index);
    } // Member

    inline void Init(unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
            Data(v)->Clear();
        m_maxResult = FIRESTARTER_START_RESULT;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // Init

    inline void Init(const FireStarterSettings& settings, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        for (unsigned int v = 0; v < settings.m_variations; v++)
            Data(settings, v)->Clear(settings.m_registers);
        m_maxResult = settings.m_startResult;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // Init

    inline void Init(unsigned long long& seed, unsigned int uniqueRegisters, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
            Data(v)->Init(seed, FIRESTARTER_START_SCALE, uniqueRegisters);
        m_maxResult = FIRESTARTER_START_RESULT;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // Init

    inline void Init(const FireStarterSettings& settings, unsigned long long& seed, unsigned int uniqueRegisters, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        for (unsigned int v = 0; v < settings.m_variations; v++)
            Data(settings, v)->Init(seed, settings.m_startScale, uniqueRegisters, settings.m_registers);
        m_maxResult = settings.m_startResult;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // Init

    inline void Init(const FireStarterData& data, unsigned int variation, float maxResult, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        Data(variation)->Copy(data);
        m_maxResult = maxResult;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // Init

    inline void Init(const FireStarterData* data, float maxResult, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++) {
            if (data)
                Data(v)->Copy(data[v]);
            else
                Data(v)->Clear();
        }
        m_maxResult = maxResult;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // Init

    inline void Init(const FireStarterData* data, const FireStarterSettings& settings, float maxResult, unsigned short evolveAge1 = 0, unsigned short evolveAge2 = 0)
    {
        for (unsigned int v = 0; v < settings.m_variations; v++) {
            if (data)
                Data(settings, v)->Copy(data[v], settings.m_registers);
            else
                Data(settings, v)->Clear(settings.m_registers);
        }
        m_maxResult = maxResult;
        m_evolveAge1 = evolveAge1;
        m_evolveAge2 = evolveAge2;
    } // Init

    inline void Init(const FireStarterResult* initResult)
    {
        for (unsigned int v = 0; v < FIRESTARTER_VARIATIONS; v++)
            Data(v)->Copy(initResult->Data(v));
        m_maxResult = initResult->MaxResult();
        m_evolveAge1 = initResult->EvolveAge1();
        m_evolveAge2 = initResult->EvolveAge2();
    } // Init

    inline void Init(const FireStarterResult* initResult, const FireStarterSettings& settings)
    {
        for (unsigned int v = 0; v < settings.m_variations; v++)
            Data(settings, v)->Copy(initResult->Data(v), settings.m_registers);
        m_maxResult = initResult->MaxResult();
        m_evolveAge1 = initResult->EvolveAge1();
        m_evolveAge2 = initResult->EvolveAge2();
    } // Init
} FireStarterResult;


