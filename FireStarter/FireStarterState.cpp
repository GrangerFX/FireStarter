#include "FireStarterState.h"
#include "FireStarterCode.h"

bool FireStarterState::Packetize(FireStarterPacket& packet)
{
    bool result = true;
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
    for (unsigned int i = 0; i < m_program.m_settings.m_instructions; i++)
        code += Format("    data->d[%u] = %ff;\r\n", i, Result()->Data(variation)->d[i]);
    code += Format("    *result->MinResult(%u) = %ff;\r\n", variation, *Result()->MinResult(variation));
    code += Format("} // LoadVariation%u\r\n", variation);
    code += "\r\n";
} // SaveVariation

void FireStarterState::SaveResult(std::string& code)
{
    for (unsigned int v = 0; v < m_program.m_settings.m_variations; v++)
        SaveVariation(v, code);
    code += "inline void LoadResult(FireStarterState& state)\r\n";
    code += "{\r\n";
    for (unsigned int v = 0; v < m_program.m_settings.m_variations; v++)
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
    m_program.SaveSettings(code);
    m_program.SaveProgram(code);
    SaveResult(code);

    code += "inline void LoadState(FireStarterState& state)\r\n";
    code += "{\r\n";
    code += Format("    state.m_generation = %u;\r\n", m_generation);
    code += Format("    state.m_bestIndex = %u;\r\n", m_bestIndex);
    code += "\r\n";
    code += "    LoadProgram(state.m_program);\r\n";
    code += "    LoadResult(state);\r\n";
    code += "} // LoadState\r\n";
} // SaveState

float FireStarterState::TestResult(void) const
{
    float testResult = 0.0f;
    unsigned int instructions = m_program.m_settings.m_instructions;
    size_t dataSize = FireStarterData::DataSize(m_program.m_settings.m_registers);
    FireStarterData* workData = (FireStarterData*)calloc(dataSize, 1);
    unsigned int precision = m_program.m_settings.m_precision;
    for (unsigned int v = 0; v < m_program.m_settings.m_variations; v++) {
        const FireStarterData* initData = Result()->Data(v);
        float result = 0.0f;
        float sampleStep = (m_program.m_settings.m_targetMax - m_program.m_settings.m_targetMin) / (m_program.m_settings.m_samples - 1);
        for (unsigned int i = 0; i < m_program.m_settings.m_samples; i++) {
            float theta = TARGET_MIN + i * sampleStep;
            float target = Target(theta, v);
            memcpy(workData, initData, dataSize);
            float difference = fabsf(m_program.Instructions()->Execute(workData, instructions, theta) - Target(theta, v));
            result = max(result, difference);
        }
        if (precision) {
            float precisionStep = (TARGET_MAX - TARGET_MIN) / (precision - 1);
            for (unsigned int i = 0; i < precision; i++) {
                float theta = TARGET_MIN + i * precisionStep;
                memcpy(workData, initData, dataSize);
                float difference = fabsf(m_program.Instructions()->Execute(workData, instructions, theta) - Target(theta, v));
                result = max(result, difference);
            }
        }
        float minResult = Result()->MinResult(v);
        testResult = max(testResult, fabsf(result - minResult));
    }
    free(workData);
    return testResult;
} // TestResult

void FireStarterState::InitState(const FireStarterSettings& settings)
{
    m_generation = 0;
    m_bestIndex = 0;
    m_program.InitProgram(settings);
    m_result.resize(FireStarterResult::ResultSize(m_program.m_settings.m_registers, m_program.m_settings.m_variations));
    Result()->Init(0, m_program.m_settings.m_registers, m_program.m_settings.m_variations, m_program.m_settings.m_startResult);
} // InitState

FireStarterState::FireStarterState(const FireStarterSettings& settings)
{
    InitState(settings);
} // FireStarterState
