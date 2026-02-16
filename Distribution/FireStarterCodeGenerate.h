#pragma once
#include "FireStarterResults.h"
#include "cnprintf.h"

struct FireStarterRegisterInfo {
    unsigned int registerIndex;
    unsigned int instructionFirst;
    unsigned int instructionLast;
}; // struct FireStarterRegisterInfo

typedef struct FireStarterRegisterUsage {
    FireStarterRegisterInfo r[FIRESTARTER_REGISTERS];

    static inline size_t RegistersSize(unsigned int registers)
    {
        return sizeof(FireStarterRegisterInfo) * registers;
    } // FireStarterRegisterUsage

    inline const FireStarterRegisterInfo& Register(unsigned int index) const
    {
        return r[index];
    } // Register
} FireStarterRegisterUsage; // FireStarterRegisterUsage

class FireStarterCodeGenerate : public FireStarterCode
{
public:
    inline void GenerateTabs(char* buffer, size_t size, size_t& length, unsigned int tabs) const
    {
        // Insert leading tabs (four spaces).
        while (tabs--)
            anprintf(buffer, size, length, "    ");
    } // GenerateTabs

    inline void GenerateEvaluate(char* buffer, size_t size, size_t& length, unsigned int tabs, unsigned int instruction, bool instructionLast = false) const
    {
        // Convert the instructions.
        FireStarterOpcode op = Operation(instruction);
        unsigned int reg = Register(instruction);

        GenerateTabs(buffer, size, length, tabs);
        switch (op) {
            case Operation_data_multiply:
                if (instructionLast)
                    anprintf(buffer, size, length, "n *= data[%u];\r\n", reg);
                else
                    anprintf(buffer, size, length, "n = data[%u] *= n;\r\n", reg);
                break;

            case Operation_data_add:
                if (instructionLast)
                    anprintf(buffer, size, length, "n += data[%u];\r\n", reg);
                else
                    anprintf(buffer, size, length, "n = data[%u] += n;\r\n", reg);
                break;

            case Operation_store:
                anprintf(buffer, size, length, "data[%u] = n;\r\n", reg);
                break;

            case Operation_load:
                anprintf(buffer, size, length, "n = data[%u];\r\n", reg);
                break;

            case Operation_square:
                anprintf(buffer, size, length, "n *= n;\r\n");
                break;

            case Operation_multiply:
                anprintf(buffer, size, length, "n *= data[%u];\r\n", reg);
                break;

            case Operation_divide:
                anprintf(buffer, size, length, "n /= data[%u];\r\n", reg);
                break;

            case Operation_add:
                anprintf(buffer, size, length, "n += data[%u];\r\n", reg);
                break;

            case Operation_subtract:
                anprintf(buffer, size, length, "n -= data[%u];\r\n", reg);
                break;

            case Operation_min:
                anprintf(buffer, size, length, "n = data[%u] < n ? data[%u] : n;\r\n", reg, reg);
                break;

            case Operation_max:
                anprintf(buffer, size, length, "n = data[%u] > n ? data[%u] : n;\r\n", reg, reg);
                break;
        }
    } // GenerateEvaluate

    inline void GenerateSolution(char* buffer, size_t size, size_t& length, unsigned int tabs, unsigned int reg, float data, unsigned int instruction, bool instructionFirst = false, bool instructionLast = false) const
    {
        GenerateTabs(buffer, size, length, tabs);
        
        // Convert the instructions.
        FireStarterOpcode op = Operation(instruction);
        switch (op) {
            case Operation_data_multiply:
                if (instructionFirst)
                    if (instructionLast)
                        anprintf(buffer, size, length, "n *= %.8ff;\r\n", data);
                    else
                        anprintf(buffer, size, length, "r%u = n *= %.8ff;\r\n", reg, data);
                else
                    if (instructionLast)
                        anprintf(buffer, size, length, "n *= r%u;\r\n", reg);
                    else
                        anprintf(buffer, size, length, "n = r%u *= n;\r\n", reg);
                break;

            case Operation_data_add:
                if (instructionFirst)
                    if (instructionLast)
                        anprintf(buffer, size, length, "n += %.8ff;\r\n", data);
                    else
                        anprintf(buffer, size, length, "r%u = n += %.8ff;\r\n", reg, data);
                else
                    if (instructionLast)
                        anprintf(buffer, size, length, "n += r%u;\r\n", reg);
                    else
                        anprintf(buffer, size, length, "n = r%u += n;\r\n", reg);
                break;

            case Operation_store:
                anprintf(buffer, size, length, "r%u = n;\r\n", reg);
                break;

            case Operation_load:
                anprintf(buffer, size, length, "n = r%u;\r\n", reg);
                break;

            case Operation_square:
                anprintf(buffer, size, length, "n *= n;\r\n");
                break;

            case Operation_multiply:
                anprintf(buffer, size, length, "n *= r%u;\r\n", reg);
                break;

            case Operation_divide:
                anprintf(buffer, size, length, "n /= r%u;\r\n", reg);
                break;

            case Operation_add:
                anprintf(buffer, size, length, "n += r%u;\r\n", reg);
                break;

            case Operation_subtract:
                anprintf(buffer, size, length, "n -= r%u;\r\n", reg);
                break;

            case Operation_min:
                anprintf(buffer, size, length, "n = r%u < n ? r%u : n;\r\n", reg, reg);
                break;

            case Operation_max:
                anprintf(buffer, size, length, "n = r%u > n ? r%u : n;\r\n", reg, reg);
                break;
        }
    } // GenerateSolution

    inline void GenerateData(char* buffer, size_t size, size_t& length, unsigned int tabs, unsigned int numRegisters, const FireStarterData* data) const
    {
        if (!numRegisters)
            numRegisters = FIRESTARTER_REGISTERS;
        for (unsigned int i = 0; i < tabs; i++)
            anprintf(buffer, size, length, "    ");
        anprintf(buffer, size, length, "FireStarterData data = { %.8ff", numRegisters, data->d[0]);
        for (unsigned int i = 1; i < numRegisters; i++)
            anprintf(buffer, size, length, ", %.8ff", data->d[i]);
        anprintf(buffer, size, length, "};\r\n");
    } // GenerateData

    inline void GenerateEvaluate(char* buffer, size_t size, size_t& length, unsigned int tabs, unsigned int numInstructions, const FireStarterRegisterUsage* registerUsage, unsigned int numRegisters) const
    {
        // Generate the evaluate function code.
        bool optimize = registerUsage && numRegisters;
        for (unsigned int i = 0; i < numInstructions; i++) {
            unsigned int reg = Register(i);
            const FireStarterRegisterInfo& dataRegister = registerUsage->Register(reg);
            GenerateEvaluate(buffer, size, length, tabs, i, optimize && (i == dataRegister.instructionLast));
        }
    } // GenerateEvaluate

    inline void GenerateSolution(char* buffer, size_t size, size_t& length, unsigned int tabs, unsigned int numInstructions, const FireStarterRegisterUsage* registerUsage, unsigned int numRegisters, const FireStarterData* data) const
    {
#if FIRESTARTER_FIRSTLIGHT
        // Generate the solution function registers.
        for (unsigned int i = 0; i < numRegisters; i++) {
            GenerateTabs(buffer, size, length, tabs);
            anprintf(buffer, size, length, "float r%u = %.8ff;\r\n", i, data->d[i]);
        }
        anprintf(buffer, size, length, "\r\n");

        // Generate the solution function code.
        for (unsigned int i = 0; i < numInstructions; i++) {
            unsigned int reg = Register(i);
            const FireStarterRegisterInfo& dataRegister = registerUsage->Register(reg);
            float f = (float)data->d[reg];
            GenerateSolution(buffer, size, length, tabs, reg, f, i);
        }
#elif FIRESTARTER_MODE == FIRESTARTER_MONEYMAKER
        // Generate the MoneyMaker solution function registers.
        for (unsigned int i = 0; i < numRegisters; i++) {
            GenerateTabs(buffer, size, length, tabs);
            anprintf(buffer, size, length, "float r%u = %.8ff;\r\n", i, data->d[i]);
        }
        anprintf(buffer, size, length, "\r\n");

        // Loop for each day in the stock data.
        GenerateTabs(buffer, size, length, tabs);
        anprintf(buffer, size, length, "for (unsigned int d = 0; d < stock.numDays; d++) {\r\n");
        tabs++;

        // Get the current day's stock price.
        GenerateTabs(buffer, size, length, tabs);
        anprintf(buffer, size, length, "n = stock[d];\r\n");

        // Generate the MoneyMaker solution function code.
        for (unsigned int i = 0; i < numInstructions; i++) {
            unsigned int reg = Register(i);
            const FireStarterRegisterInfo& dataRegister = registerUsage->Register(reg);
            float f = (float)data->d[reg];
            GenerateSolution(buffer, size, length, tabs, reg, f, i);
        }
        tabs--;
        GenerateTabs(buffer, size, length, tabs);
        anprintf(buffer, size, length, "}\r\n");
#else
        // Find the first and last instruction register usage.
        unsigned int maxRegister = 0;
        for (unsigned int i = 0; i < numInstructions; i++) {
            unsigned int reg = Register(i);
            const FireStarterRegisterInfo& dataRegister = registerUsage->Register(reg);
            if ((i != dataRegister.instructionFirst) || (i != dataRegister.instructionLast)) {
                unsigned int r = dataRegister.registerIndex;
                if (r > maxRegister)
                    maxRegister = r;
            }
        }

        // Generate the solution function registers.
        GenerateTabs(buffer, size, length, tabs);
        anprintf(buffer, size, length, "float r0");
        for (unsigned int i = 1; i <= maxRegister; i++)
            anprintf(buffer, size, length, ", r%u", i);
        anprintf(buffer, size, length, ";\r\n\r\n");

        // Generate the solution function code.
        for (unsigned int i = 0; i < numInstructions; i++) {
            unsigned int reg = Register(i);
            const FireStarterRegisterInfo& dataRegister = registerUsage->Register(reg);
            unsigned int r = dataRegister.registerIndex;
            float f = (float)data->d[reg];
            GenerateSolution(buffer, size, length, tabs, r, f, i, i == dataRegister.instructionFirst, i == dataRegister.instructionLast);
        }
#endif
    } // GenerateSolution

}; // class FireStarterCodeGenerate