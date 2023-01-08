#include "FireStarterState.h"
#include "FireStarterCode.h"

bool FireStarterState::Packetize(FireStarterPacket& packet)
{
    bool result = true;
    result = result && m_program.Packetize(packet);
    result = result && packet.Packetize(m_results);
    result = result && packet.Packetize(&m_generation, sizeof(m_generation));
    return result;
} // Packetize

void FireStarterState::SaveVariation(unsigned int variation, std::string& code) const
{
    code += Format("inline void LoadVariation%u(FireStarterResult* result)\r\n", variation);
    code += "{\r\n";
    code += "    FireStarterData *data = result->Data();\r\n";
    for (unsigned int i = 0; i < m_program.m_settings.m_instructions; i++)
        code += Format("    data->d[%u] = %ff;\r\n", i, Result(variation)->Data()->d[i]);
    code += Format("    result->minResult = %ff;\r\n", Result(variation)->minResult);
    code += Format("} // LoadVariation%u\r\n", variation);
    code += "\r\n";
} // SaveVariation

void FireStarterState::SaveResult(std::string& code) const
{
    for (unsigned int v = 0; v < m_program.m_settings.m_variations; v++)
        SaveVariation(v, code);
    code += "inline void LoadResult(FireStarterState& state)\r\n";
    code += "{\r\n";
    for (unsigned int v = 0; v < m_program.m_settings.m_variations; v++)
        code += Format("    LoadVariation%u(state.Result(%u));\r\n", v);
    code += "\r\n";
    code += Format("    state.m_maxResult = %ff;\r\n", m_maxResult);
    code += "} // LoadResult\r\n";
    code += "\r\n";
} // SaveResult

void FireStarterState::SaveState(std::string& code) const
{
    code += "#pragma once\r\n";
    code += "#include \"FireStarterState.h\"\r\n";
    code += "\r\n";
    m_program.SaveSettings(code);
    m_program.SaveProgram(code);
    SaveResult(code);

    code += "inline void LoadState(FireStarterState& state)\r\n";
    code += "{\r\n";
    code += "    FireStarterSettings settings;\r\n";
    code += "\r\n";
    code += "    LoadSettings(settings);\r\n";
    code += "    state.InitState(settings);\r\n";
    code += "    LoadProgram(state.m_program);\r\n";
    code += "    LoadResult(state);\r\n";
    code += Format("    state.m_generation = %llu;\r\n", m_generation);
    code += Format("    state.m_index = %llu;\r\n", m_index);
    code += "\r\n";
    code += "    LoadProgram(state.m_program);\r\n";
    code += "    LoadResult(state);\r\n";
    code += "} // LoadState\r\n";
} // SaveState

float FireStarterState::TestResult(void) const
{
    // Prepare the program to run by optimizing its registers.
    FireStarterProgram testProgram(m_program);
    testProgram.OptimizeRegisters();
    FireStarterInstructions* testInstructions = testProgram.OptimizedInstructions();

    // Get an accurate test result for the state.
    float testResult = 0.0f;
    unsigned int instructions = testProgram.m_settings.m_instructions;
    size_t dataSize = FireStarterData::DataSize(testProgram.m_settings.m_registers);
    FireStarterData* workData = (FireStarterData*)calloc(dataSize, 1);
    unsigned int precision = testProgram.m_settings.m_precision;
    for (unsigned int v = 0; v < testProgram.m_settings.m_variations; v++) {
        const FireStarterData* initData = Results()->Data(v);
        float minResult = Results()->MinResult(v);
        if (minResult < m_program.m_settings.m_startResult) {
            float result = 0.0f;
            float sampleStep = (testProgram.m_settings.m_targetMax - testProgram.m_settings.m_targetMin) / (testProgram.m_settings.m_samples - 1);
            for (unsigned int i = 0; i < testProgram.m_settings.m_samples; i++) {
                float theta = TARGET_MIN + i * sampleStep;
                float target = Target(theta, v);
                memcpy(workData, initData, dataSize);
                float sampleResult = testProgram.OptimizedInstructions()->Execute(workData, instructions, theta);
                float sampleTarget = Target(theta, v);
                float difference = fabsf(sampleResult - sampleTarget);
                result = max(result, difference);
            }
            if (precision) {
                float precisionStep = (TARGET_MAX - TARGET_MIN) / (precision - 1);
                for (unsigned int i = 0; i < precision; i++) {
                    float theta = TARGET_MIN + i * precisionStep;
                    memcpy(workData, initData, dataSize);
                    float difference = fabsf(testProgram.OptimizedInstructions()->Execute(workData, instructions, theta) - Target(theta, v));
                    result = max(result, difference);
                }
            }
            testResult = max(testResult, fabsf(result - minResult));
        }
    }
    free(workData);
    return testResult;
} // TestResult

void FireStarterState::InitResult(void)
{
    m_results.resize(FireStarterResults::ResultsSize(m_program.m_settings.m_registers, m_program.m_settings.m_variations));
    Results()->InitResults(0, m_program.m_settings.m_registers, m_program.m_settings.m_variations, m_program.m_settings.m_startResult);
} // InitResult

void FireStarterState::InitState(const FireStarterSettings& settings, size_t index, size_t test)
{
    m_generation = 0;
    m_index = index;
    m_test = test;
    m_maxResult = settings.m_startResult;
    m_program.InitProgram(settings);
    InitResult();
} // InitState

FireStarterState::FireStarterState(const FireStarterSettings& settings, size_t index, size_t test)
{
    InitState(settings, index, test);
} // FireStarterState
