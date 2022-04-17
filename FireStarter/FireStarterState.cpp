#include "FireStarterState.h"

void FireStarterState::SaveState(std::string& code)
{
    code += "#pragma once\r\n";
    code += "#include \"FireStarter.h\"\r\n";
    code += "\r\n";
    m_program.SaveProgram(code);
    code += "inline void LoadState(FireStarterState& state)\r\n";
    code += "{\r\n";
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
            code += Format("    state.m_result.data[%d].d[%u] = %ff;\r\n", v, i, m_result.data[v].d[i]);
        code += Format("    state.m_result.minResult[%d] = %ff;\r\n", v, m_result.minResult[v]);
        code += "\r\n";
    }
    code += Format("    state.m_result.maxResult = %ff;\r\n", m_result.maxResult);
    code += Format("    state.m_result.test = %u;\r\n", m_result.test);
    code += "\r\n";
    code += Format("    state.m_bestResult = %ff;\r\n", m_bestResult);
    code += "\r\n";
    code += "    LoadProgram(state.m_program);\r\n";
    code += "    state.m_result.instructions = state.m_program.m_instructions;\r\n";
    code += "    state.OptimizeData();\r\n";
    code += "} // LoadState\r\n";
} // SaveState

void FireStarterState::SaveSolution(std::string& code)
{
    code += Format("// Precision = %f\r\n", m_result.maxResult);
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        code += "\r\n";
        code += Format("// Solution%d precision = %f\r\n", v, m_result.minResult[v]);
        code += Format("inline float Solution%d(float n)\r\n", v);
        code += "{\r\n";
        m_program.GenerateSolution(code, m_result.data[v]);
        code += "    return n;\r\n";
        code += Format("} // Solution%d\r\n", v);
    }

    code += "\r\n";
    code += "inline float Solution(float n, unsigned int variation)\r\n";
    code += "{\r\n";
    code += "    switch (variation) {\r\n";
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        code += Format("    case %d:\r\n", v);
        code += Format("        return Solution%d(n);\r\n", v);
    }
    code += "    }\r\n";
    code += "return 0.0f;\r\n";
    code += "} // Solution\r\n";
} // SaveSolution

void FireStarterState::OptimizeData(void)
{
    // Optimize the use of data registers.
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        FireStarterData& data = m_result.data[v];
        FireStarterData optimizedData(data);
        for (unsigned int i = 0; i < m_program.m_dataSize; i++)
            optimizedData.d[i] = data.d[m_program.m_registers[i].dataIndex];
        for (unsigned int i = m_program.m_dataSize; i < PROGRAM_INSTRUCTIONS; i++)
            optimizedData.d[i] = 0.0f;
        m_result.data[v] = optimizedData;
    }
} // OptimizeData

FireStarterState::FireStarterState(void)
{
    for (unsigned int v = 0; v < PROGRAM_VARIATIONS; v++) {
        for (unsigned int i = 0; i < PROGRAM_INSTRUCTIONS; i++)
            m_result.data[v].d[i] = 1.0f;
        m_result.minResult[v] = START_RESULT;
    }
    m_result.maxResult = START_RESULT;
    m_bestResult = START_RESULT;
} // FireStarterState

