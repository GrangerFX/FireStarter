#include "FireStarterState.h"
#include "FireStarterCode.h"

FireStarterResult* FireStarterState::Result(void)
{
    return (FireStarterResult*)m_result.data();
} // Result

bool FireStarterState::Packetize(FireStarterPacket& packet)
{
    bool result = true;
    result = result && packet.Packetize(&m_settings, sizeof(m_settings));
    result = result && m_program.Packetize(packet);
    result = result && packet.Packetize(m_result);
    result = result && packet.Packetize(&m_generation, sizeof(m_generation));
    return result;
} // Packetize

void FireStarterState::SaveVariation(unsigned int variation, std::string& code)
{
    code += Format("inline void LoadVariation%u(FireStarterResult* result)\r\n", variation);
    code += "{\r\n";
    code += Format("    FireStarterData *data = result->Data(%u);\r\n", variation);
    for (unsigned int i = 0; i < m_settings.m_instructions; i++)
        code += Format("    data->d[%u] = %ff;\r\n", i, Result()->Data(variation)->d[i]);
    code += Format("    *result->MinResult(%u) = %ff;\r\n", variation, *Result()->MinResult(variation));
    code += Format("} // LoadVariation%u\r\n", variation);
    code += "\r\n";
} // SaveVariation

void FireStarterState::SaveResult(std::string& code)
{
    for (unsigned int v = 0; v < m_settings.m_variations; v++)
        SaveVariation(v, code);
    code += "inline void LoadResult(FireStarterState& state)\r\n";
    code += "{\r\n";
    for (unsigned int v = 0; v < m_settings.m_variations; v++)
        code += Format("    LoadVariation%u(state.Result());\r\n", v);
    code += "\r\n";
    code += Format("    state.Result()->maxResult = %ff;\r\n", Result()->maxResult);
    code += "} // LoadResult\r\n";
    code += "\r\n";
} // SaveResult

void FireStarterState::SaveState(std::string& code)
{
    code += "#pragma once\r\n";
    code += "#include \"FireStarterState.h\"\r\n";
    code += "\r\n";
    m_settings.SaveSettings(code);
    m_program.SaveProgram(code);
    SaveResult(code);

    code += "inline void LoadState(FireStarterState& state)\r\n";
    code += "{\r\n";
    code += Format("    state.m_generation = %d;\r\n", m_generation);
    code += "\r\n";
    code += "    LoadSettings(state.m_settings);\r\n";
    code += "    LoadProgram(state.m_program);\r\n";
    code += "    LoadResult(state);\r\n";
    code += "\r\n";
    code += "} // LoadState\r\n";
} // SaveState

void FireStarterState::SaveSolution(std::string& code, const std::string& targetCode, double duration, unsigned int count)
{
    std::string solutionCode;
    solutionCode += "#pragma once\r\n";
    solutionCode += "#include <math.h>\r\n";
    solutionCode += "\r\n";
    code += Format("// Run date: %s\r\n", CurrentDate().c_str());
    code += Format("// Run duration = %f seconds\r\n", duration);
    code += Format("// Run count = %d\r\n", count);
    code += Format("// Run units = %d\r\n", m_settings.m_evolveUnits);
    code += Format("// Run population = %d\r\n", m_settings.m_evolvePopulation);
    code += Format("// Run iterations = %d\r\n", m_settings.m_evolveIterations);
    code += Format("// Run generations = %d\r\n", m_settings.m_evolveGenerations);
    code += Format("// Run samples = %d\r\n", SAMPLE_ITERATIONS);
    code += Format("// State Generation = %d\r\n", m_generation);
    code += "\r\n";
    code += Format("#define SOLUTION_MIN %f\r\n", SAMPLE_MIN);
    code += Format("#define SOLUTION_MAX %f\r\n", SAMPLE_MAX);
    code += "\r\n";
    code += Format("#define SOLUTION_VARIATIONS %d\r\n", m_settings.m_variations);
    code += "\r\n";
    code += targetCode;
    code += "\r\n";
    code += Format("// Precision = %f\r\n", Result()->maxResult);
    if (m_settings.m_variations == 1) {
        code += "\r\n";
        code += Format("// Solution precision = %f\r\n", *Result()->MinResult(0));
        code += "inline float Solution(float n)\r\n";
        code += "{\r\n";
        m_program.GenerateSolution(code, *Result()->Data(0));
        code += "    return n;\r\n";
        code += "} // Solution\r\n";
    } else {
        for (unsigned int v = 0; v < m_settings.m_variations; v++) {
            code += "\r\n";
            code += Format("// Solution%d precision = %f\r\n", v, *Result()->MinResult(v));
            code += Format("inline float Solution%d(float n)\r\n", v);
            code += "{\r\n";
            m_program.GenerateSolution(code, *Result()->Data(v));
            code += "    return n;\r\n";
            code += Format("} // Solution%d\r\n", v);
        }

        code += "\r\n";
        code += "inline float Solution(float n, unsigned int variation)\r\n";
        code += "{\r\n";
        code += "    switch (variation) {\r\n";
        for (unsigned int v = 0; v < m_settings.m_variations; v++) {
            code += Format("    case %d:\r\n", v);
            code += Format("        return Solution%d(n);\r\n", v);
        }
        code += "    }\r\n";
        code += "    return 0.0f;\r\n";
        code += "} // Solution\r\n";
    }
} // SaveSolution

void FireStarterState::EvaluateCode(std::string& code)
{
    m_program.GenerateEvaluate(code);
} // EvaluateCode

void FireStarterState::OptimizeData(void)
{
    // Optimize the use of data registers.
    for (unsigned int v = 0; v < m_settings.m_variations; v++) {
        FireStarterData& data = *Result()->Data(v);
        FireStarterData optimizedData(data);
        for (unsigned int i = 0; i < m_program.m_dataSize; i++)
            optimizedData.d[i] = data.d[m_program.m_registers[i].dataIndex];
        for (unsigned int i = m_program.m_dataSize; i < m_settings.m_instructions; i++)
            optimizedData.d[i] = 0.0f;
        *Result()->Data(v) = optimizedData;
    }
    for (unsigned int i = 0; i < m_program.m_dataSize; i++)
        m_program.m_registers[i].dataIndex = i;
} // OptimizeData

void FireStarterState::InitState(const FireStarterSettings& settings)
{
    m_settings = settings;
    m_program = FireStarterProgram(PROGRAM_MODE, m_settings.m_instructions, m_settings.m_variations);
    m_result.resize(FireStarterResult::ResultSize(m_settings.m_instructions, m_settings.m_variations));
    Result()->Init(m_settings.m_instructions, m_settings.m_variations);
} // InitState

FireStarterState::FireStarterState(void) : m_program(PROGRAM_MODE, FIRESTARTER_INSTRUCTIONS, FIRESTARTER_VARIATIONS)
{
    m_generation = 0;
} // FireStarterState
