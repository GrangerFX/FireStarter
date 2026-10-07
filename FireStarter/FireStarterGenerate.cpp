#include "FireStarterGenerate.h"
#include "FireStarterSource.h"
#include "Format.h"

class FireStarterCodeGenerate : public FireStarterCode
{
public:
    inline void GenerateTabs(std::string& buffer, unsigned int tabs) const
    {
        // Insert leading tabs (four spaces).
        while (tabs--)
            buffer += "    ";
    } // GenerateTabs

    inline void GenerateEvaluate(std::string& buffer, unsigned int tabs, unsigned int instruction, bool instructionLast = false) const
    {
        // Convert the instructions.
        FireStarterOpcode op = Operation(instruction);
        unsigned int reg = Register(instruction);

        GenerateTabs(buffer, tabs);
        switch (op) {
            case Operation_data_multiply:
                if (instructionLast)
                    buffer += Format("n *= data[%u];\r\n", reg);
                else
                    buffer += Format("n = data[%u] *= n;\r\n", reg);
                break;

            case Operation_data_add:
                if (instructionLast)
                    buffer += Format("n += data[%u];\r\n", reg);
                else
                    buffer += Format("n = data[%u] += n;\r\n", reg);
                break;

            case Operation_store:
                buffer += Format("data[%u] = n;\r\n", reg);
                break;

            case Operation_load:
                buffer += Format("n = data[%u];\r\n", reg);
                break;

            case Operation_square:
                buffer += Format("n *= n;\r\n");
                break;

            case Operation_multiply:
                buffer += Format("n *= data[%u];\r\n", reg);
                break;

            case Operation_divide:
                buffer += Format("n /= data[%u];\r\n", reg);
                break;

            case Operation_add:
                buffer += Format("n += data[%u];\r\n", reg);
                break;

            case Operation_subtract:
                buffer += Format("n -= data[%u];\r\n", reg);
                break;

            case Operation_min:
                buffer += Format("n = data[%u] < n ? data[%u] : n;\r\n", reg, reg);
                break;

            case Operation_max:
                buffer += Format("n = data[%u] > n ? data[%u] : n;\r\n", reg, reg);
                break;
        }
    } // GenerateEvaluate

    inline void GenerateSolution(std::string& buffer, unsigned int tabs, unsigned int reg, float data, unsigned int instruction, bool instructionFirst = false, bool instructionLast = false) const
    {
        GenerateTabs(buffer, tabs);
        
        // Convert the instructions.
        FireStarterOpcode op = Operation(instruction);
        switch (op) {
            case Operation_data_multiply:
                if (instructionFirst)
                    if (instructionLast)
                        buffer += Format("n *= %.8ff;\r\n", data);
                    else
                        buffer += Format("r%u = n *= %.8ff;\r\n", reg, data);
                else
                    if (instructionLast)
                        buffer += Format("n *= r%u;\r\n", reg);
                    else
                        buffer += Format("n = r%u *= n;\r\n", reg);
                break;

            case Operation_data_add:
                if (instructionFirst)
                    if (instructionLast)
                        buffer += Format("n += %.8ff;\r\n", data);
                    else
                        buffer += Format("r%u = n += %.8ff;\r\n", reg, data);
                else
                    if (instructionLast)
                        buffer += Format("n += r%u;\r\n", reg);
                    else
                        buffer += Format("n = r%u += n;\r\n", reg);
                break;

            case Operation_store:
                buffer += Format("r%u = n;\r\n", reg);
                break;

            case Operation_load:
                buffer += Format("n = r%u;\r\n", reg);
                break;

            case Operation_square:
                buffer += Format("n *= n;\r\n");
                break;

            case Operation_multiply:
                buffer += Format("n *= r%u;\r\n", reg);
                break;

            case Operation_divide:
                buffer += Format("n /= r%u;\r\n", reg);
                break;

            case Operation_add:
                buffer += Format("n += r%u;\r\n", reg);
                break;

            case Operation_subtract:
                buffer += Format("n -= r%u;\r\n", reg);
                break;

            case Operation_min:
                buffer += Format("n = r%u < n ? r%u : n;\r\n", reg, reg);
                break;

            case Operation_max:
                buffer += Format("n = r%u > n ? r%u : n;\r\n", reg, reg);
                break;
        }
    } // GenerateSolution

    inline void GenerateData(std::string& buffer, unsigned int tabs, unsigned int numRegisters, const FireStarterData* data) const
    {
        if (!numRegisters)
            numRegisters = FIRESTARTER_REGISTERS;
        for (unsigned int i = 0; i < tabs; i++)
            buffer += Format("    ");
        buffer += Format("FireStarterData data = { %.8ff", numRegisters, data->d[0]);
        for (unsigned int i = 1; i < numRegisters; i++)
            buffer += Format(", %.8ff", data->d[i]);
        buffer += "};\r\n";
    } // GenerateData

    inline void GenerateEvaluate(std::string& buffer, unsigned int tabs, unsigned int numInstructions, const FireStarterRegisterUsage* registerUsage, unsigned int numRegisters) const
    {
        // Generate the evaluate function code.
        bool optimize = registerUsage && numRegisters;
        for (unsigned int i = 0; i < numInstructions; i++) {
            unsigned int reg = Register(i);
            const FireStarterRegisterInfo& dataRegister = registerUsage->Register(reg);
            GenerateEvaluate(buffer, tabs, i, optimize && (i == dataRegister.instructionLast));
        }
    } // GenerateEvaluate

    inline void GenerateSolution(std::string& buffer, unsigned int tabs, unsigned int numInstructions, const FireStarterRegisterUsage* registerUsage, unsigned int numRegisters, const FireStarterData* data) const
    {
#if FIRESTARTER_FIRSTLIGHT
        // Generate the solution function registers.
        for (unsigned int i = 0; i < numRegisters; i++) {
            GenerateTabs(buffer, tabs);
            buffer += Format("float r%u = %.8ff;\r\n", i, data->d[i]);
        }
        buffer += Format("\r\n");

        // Generate the solution function code.
        for (unsigned int i = 0; i < numInstructions; i++) {
            unsigned int reg = Register(i);
            const FireStarterRegisterInfo& dataRegister = registerUsage->Register(reg);
            float f = (float)data->d[reg];
            GenerateSolution(buffer, tabs, reg, f, i);
        }
#elif (FIRESTARTER_MODE == FIRESTARTER_MONEYMAKER) || (FIRESTARTER_MODE == FIRESTARTER_MONEYOPTIMIZE)
        // Generate the MoneyMaker solution function registers.
        for (unsigned int i = 0; i < numRegisters; i++) {
            GenerateTabs(buffer, tabs);
            buffer += Format("float r%u = %.8ff;\r\n", i, data->d[i]);
        }
        buffer += "\r\n";

        // Loop for each day in the stock data.
        GenerateTabs(buffer, tabs);
        buffer += "for (unsigned int d = 0; d < stock.numDays; d++) {\r\n";
        tabs++;

        // Get the current day's stock price.
        GenerateTabs(buffer, tabs);
        buffer += "n = stock[d];\r\n";

        // Generate the MoneyMaker solution function code.
        for (unsigned int i = 0; i < numInstructions; i++) {
            unsigned int reg = Register(i);
            const FireStarterRegisterInfo& dataRegister = registerUsage->Register(reg);
            float f = (float)data->d[reg];
            GenerateSolution(buffer, tabs, reg, f, i);
        }
        tabs--;
        GenerateTabs(buffer, tabs);
        buffer += "}\r\n";
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
        GenerateTabs(buffer, tabs);
        buffer += "float r0";
        for (unsigned int i = 1; i <= maxRegister; i++)
            buffer += Format(", r%u", i);
        buffer += ";\r\n\r\n";

        // Generate the solution function code.
        for (unsigned int i = 0; i < numInstructions; i++) {
            unsigned int reg = Register(i);
            const FireStarterRegisterInfo& dataRegister = registerUsage->Register(reg);
            unsigned int r = dataRegister.registerIndex;
            float f = (float)data->d[reg];
            GenerateSolution(buffer, tabs, r, f, i, i == dataRegister.instructionFirst, i == dataRegister.instructionLast);
        }
#endif
    } // GenerateSolution

}; // class FireStarterCodeGenerate

unsigned int FireStarterGenerate::RegisterInfo(const FireStarterCode* code, std::vector<FireStarterRegisterInfo>& registerInfo, const FireStarterSettings& settings)
{
    // Optimize the registers based on the ones in use at any point in the code.
    unsigned int instructions = settings.m_instructions;
    unsigned int registers = settings.m_registers;
    unsigned int uniqueRegisters = 0;

    registerInfo.resize(registers);
    for (unsigned int i = 0; i < registers; i++)
        registerInfo[i] = FireStarterRegisterInfo(-1, instructions, instructions);
    for (unsigned int i = 0; i < instructions; i++) {
        FireStarterRegisterInfo& reg = registerInfo[code->Register(i)];

        // Is this the first use of the register?
        if (reg.instructionFirst == instructions) {
            reg.instructionFirst = i;
            uniqueRegisters++;
        }

        // Update the last use of the register.
        reg.instructionLast = i;
    }

    std::vector<unsigned int> freeRegisters;
    unsigned int numActiveRegisters = 0;
    for (unsigned int i = 0; i < instructions; i++) {
        unsigned int index = code->Register(i);
        FireStarterRegisterInfo& reg = registerInfo[index];
        if (reg.instructionLast > reg.instructionFirst)
            if (reg.instructionFirst == i) {
                if (!freeRegisters.empty()) {
                    reg.registerIndex = freeRegisters.back();
                    freeRegisters.pop_back();
                }
                else
                    reg.registerIndex = numActiveRegisters;
                numActiveRegisters++;
            }
            else if (reg.instructionLast == i) {
                freeRegisters.push_back(reg.registerIndex);
                numActiveRegisters--;
            }
    }
    return uniqueRegisters;
} // RegisterInfo

void FireStarterGenerate::GenerateEvaluate(const FireStarterSettings& settings, const FireStarterCode* code, std::string& text)
{
    // Generate the evaluate function.
    unsigned int numInstructions = settings.m_instructions;
    std::vector<FireStarterRegisterInfo> registerInfo;
    unsigned int numRegisters = RegisterInfo(code, registerInfo, settings);
    FireStarterRegisterUsage* registersUsage = (FireStarterRegisterUsage*)registerInfo.data();
    unsigned int tabs = 1;
    size_t textLength = 0;

    FireStarterCodeGenerate* codeGenerate = (FireStarterCodeGenerate*)code;
    codeGenerate->GenerateEvaluate(text, tabs, numInstructions, registersUsage, numRegisters);
} // GenerateEvaluate

void FireStarterGenerate::GenerateSolution(const FireStarterState& state, std::string& text, const std::string& targetCode)
{
    unsigned int passMode = state.PassMode();

    // Allocate the device memory needed to generate the solution code.
    const FireStarterSettings& settings = state.Settings();

    // Generate the solution function.
    unsigned int numInstructions = settings.m_instructions;
    const FireStarterCodeGenerate* code = (FireStarterCodeGenerate*)state.Code();
    std::vector<FireStarterRegisterInfo> registers;
    unsigned int numRegisters = RegisterInfo(code, registers, settings);
    FireStarterRegisterUsage* registersUsage = (FireStarterRegisterUsage*)registers.data();
    std::string generateText;

    unsigned int tabs = 1;
    text += "#pragma once\r\n";
    if ((passMode == FIRESTARTER_MONEYMAKER) || (passMode == FIRESTARTER_MONEYOPTIMIZE))
        text += "#include \"MoneyMakerStocks.h\"\r\n";
    else
        text += "#include <math.h>\r\n";
    text += "\r\n";
    state.SaveStats(text);

    if ((passMode != FIRESTARTER_MONEYMAKER) && (passMode != FIRESTARTER_MONEYOPTIMIZE)) {
        text += Format("#define SOLUTION_VARIATIONS %d\r\n", settings.m_variations);
        text += Format("#define SOLUTION_VARIATION %d\r\n", FIRESTARTER_VARIATION);
        text += "\r\n";
        text += targetCode;
    }

    for (unsigned int v = 0; v < settings.m_variations; v++) {
        const FireStarterResult* result = state.Result(v);
        const FireStarterData* data = result->Data();

        text += "\r\n";
        if ((passMode == FIRESTARTER_MONEYMAKER) || (passMode == FIRESTARTER_MONEYOPTIMIZE)) {
            text += "inline float MoneyMakerSolution(MoneyMakerStock& stock)\r\n";
            text += "{\r\n";
            text += "    float n = 0.0f;\r\n";
        } else {
            if (settings.m_variations > 1)
                text += Format("inline float Solution%d(float n)\r\n", v);
            else
                text += "inline float Solution(float n)\r\n";
            text += "{\r\n";
        }

        FireStarterCodeGenerate* codeGenerate = (FireStarterCodeGenerate*)code;
        codeGenerate->GenerateSolution(text, tabs, numInstructions, registersUsage, numRegisters, data);

        text += "    return n;\r\n";
        if ((passMode == FIRESTARTER_MONEYMAKER) || (passMode == FIRESTARTER_MONEYOPTIMIZE)) {
            text += "} // MoneyMakerSolution\r\n";
        } else {
            if (settings.m_variations > 1)
                text += Format("} // Solution%d\r\n", v);
            else
                text += "} // Solution\r\n";
        }
    }

    if (settings.m_variations > 1) {
        text += "\r\n";
        text += "inline float Solution(float n, unsigned int variation)\r\n";
        text += "{\r\n";
        text += "    switch (variation) {\r\n";
        for (unsigned int v = 0; v < settings.m_variations; v++) {
            text += Format("    case %d:\r\n", v);
            text += Format("        return Solution%d(n);\r\n", v);
        }
        text += "    }\r\n";
        text += "    return 0.0f;\r\n";
        text += "} // Solution\r\n";
    }
} // GenerateSolution
