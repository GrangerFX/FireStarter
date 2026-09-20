#include "FireStarterGenerate.h"
#include "FireStarterSource.h"
#include "FireStarterCodeGenerate.h"

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

void FireStarterGenerate::GenerateEvaluate(const FireStarterSettings& settings, const FireStarterCodeGenerate* code, std::string& text)
{
    // Generate the evaluate function.
    unsigned int numInstructions = settings.m_instructions;
    std::vector<FireStarterRegisterInfo> registerInfo;
    unsigned int numRegisters = RegisterInfo(code, registerInfo, settings);
    FireStarterRegisterUsage* registersUsage = (FireStarterRegisterUsage*)registerInfo.data();
    std::string generateText;
    unsigned int tabs = 1;
    size_t textLength = 0;

    code->GenerateEvaluate(nullptr, 0, textLength, tabs, numInstructions, registersUsage, numRegisters);
    generateText.resize(textLength, 0);
    textLength = 0;
    code->GenerateEvaluate(generateText.data(), generateText.max_size(), textLength, tabs, numInstructions, registersUsage, numRegisters);
    text += generateText;
} // GenerateEvaluate

void FireStarterGenerate::GenerateSolution(const FireStarterState& state, std::string& text, const std::string& targetCode)
{
    unsigned int passMode = state.PassMode();

    // Allocate the device memory needed to generate the solution code.
    const FireStarterSettings& settings = state.Settings();

    // Generate the solution function.
    unsigned int numInstructions = settings.m_instructions;
    const FireStarterCodeGenerate* code = state.Code();
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

        size_t textLength = 0;
        code->GenerateSolution(nullptr, 0, textLength, tabs, numInstructions, registersUsage, numRegisters, data);
        generateText.resize(textLength, 0);
        textLength = 0;
        code->GenerateSolution(generateText.data(), generateText.max_size(), textLength, tabs, numInstructions, registersUsage, numRegisters, data);
        text += generateText;

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
