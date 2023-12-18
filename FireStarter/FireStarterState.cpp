#include "FireStarterState.h"
#include "FireStarterCode.h"

bool FireStarterState::Packetize(FireStarterPacket& packet)
{
    bool result = true;
    result = result && m_program.Packetize(packet);
    result = result && packet.Packetize(m_resultsData);
    result = result && packet.Packetize(&m_generation, sizeof(m_generation));
    return result;
} // Packetize

void FireStarterState::SaveStats(std::string& code) const
{
    code += Format("// Run date: %s\r\n", SimpleTimer::RunDate().c_str());
    code += Format("// Run duration = %f seconds\r\n", SimpleTimer::RunDuration());
    code += Format("// Run generation = %llu\r\n", m_generation);
    code += Format("// Run evolution = %llu\r\n", m_evolution);
    code += Format("// Run max result = %.8f\r\n", m_maxResult);
    FireStarterProgram::SettingsText(Settings(), code, "// Run ");
    code += "\r\n";
} // SaveStats

void FireStarterState::SaveVariation(unsigned int variation, std::string& code) const
{
    code += Format("// Variation: %d  result = %.8f\r\n", variation, Results()->MinResult(variation));
    code += Format("inline void LoadVariation%u(FireStarterResult* result)\r\n", variation);
    code += "{\r\n";
    code += "    FireStarterData *data = result->Data();\r\n";
    for (unsigned int i = 0; i < m_program.m_settings.m_registers; i++) {
        float data = Result(variation)->Data()->d[i];
// Fix or find bad data if nans are writen to the saved state variation data.
//      if (std::isnan(data) || std::isinf(data))
//          data = 0.0f;
        code += Format("    data->d[%u] = %ff;\r\n", i, data);
    }
    code += Format("    *(result->MinResult()) = %ff;\r\n", Result(variation)->MinResult());
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
        code += Format("    LoadVariation%u(state.Result(%u));\r\n", v, v);
    code += Format("    state.m_maxResult = %ff;\r\n", m_maxResult);
    code += "} // LoadResult\r\n";
    code += "\r\n";
} // SaveResult

void FireStarterState::SaveState(std::string& code) const
{
    code += "#pragma once\r\n";
    code += "#include \"FireStarterState.h\"\r\n";
    code += "\r\n";
    SaveStats(code);
    m_program.SaveSettings(code);
    SaveResult(code);
    m_program.SaveProgram(code);

    code += "inline void LoadState(FireStarterState& state)\r\n";
    code += "{\r\n";
    code += "    FireStarterSettings settings;\r\n";
    code += "\r\n";
    code += "    LoadSettings(settings);\r\n";
    code += "    state.InitState(settings);\r\n";
    code += "    LoadResult(state);\r\n";
    code += "    LoadProgram(state.m_program);\r\n";
    code += Format("    state.m_generation = %llu;\r\n", m_generation);
    code += Format("    state.m_evolution = %llu;\r\n", m_evolution);
    code += Format("    state.m_children = %llu;\r\n", m_children);
    code += Format("    state.m_index = %llu;\r\n", m_index);
    code += Format("    state.m_copy_index = %llu;\r\n", m_copy_index);
    code += Format("    state.m_id = %llu;\r\n", m_id);
    code += Format("    state.m_copy_id = %llu;\r\n", m_copy_id);
    code += Format("    state.m_test = %llu;\r\n", m_test);
    code += Format("    state.m_seed = %llu;\r\n", m_seed);
    code += Format("    state.m_maxResult = %ff;\r\n", m_maxResult);
    code += Format("    state.m_optimizePass = %s;\r\n", m_optimizePass ? "true" : "false");
    code += Format("    state.m_optimizeValid = %s;\r\n", m_optimizeValid ? "true" : "false");
    code += "} // LoadState\r\n";
} // SaveState

float FireStarterState::TestResult(void) const
{
    // Get an accurate test result for the state.
    const FireStarterInstructions* testInstructions = m_program.OptimizedInstructions();
    unsigned int instructions = m_program.m_settings.m_instructions;
    size_t dataSize = FireStarterData::DataSize(m_program.m_settings.m_registers);
    FireStarterData* workData = (FireStarterData*)calloc(dataSize, 1);
    unsigned int precision = m_program.m_settings.m_precision;
    float testResult = 0.0f;
    for (unsigned int v = 0; v < m_program.m_settings.m_variations; v++) {
        const FireStarterData* initData = Results()->Data(v);
        float minResult = Results()->MinResult(v);
        if (minResult < m_program.m_settings.m_startResult) {
            float result = 0.0f;
            float sampleStep = (m_program.m_settings.m_targetMax - m_program.m_settings.m_targetMin) / (m_program.m_settings.m_samples - 1);
            for (unsigned int i = 0; i < m_program.m_settings.m_samples; i++) {
                float theta = TARGET_MIN + i * sampleStep;
                float target = Target(theta, v);
                memcpy(workData, initData, dataSize);
                float sampleResult = m_program.OptimizedInstructions()->Execute(workData, instructions, theta);
                float sampleTarget = Target(theta, v);
                float difference = fabsf(sampleResult - sampleTarget);
                result = max(result, difference);
            }
            if (precision) {
                float precisionStep = (TARGET_MAX - TARGET_MIN) / (precision - 1);
                for (unsigned int i = 0; i < precision; i++) {
                    float theta = TARGET_MIN + i * precisionStep;
                    memcpy(workData, initData, dataSize);
                    float difference = fabsf(m_program.OptimizedInstructions()->Execute(workData, instructions, theta) - Target(theta, v));
                    result = max(result, difference);
                }
            }
            testResult = max(testResult, fabsf(result - minResult));
        }
    }
    free(workData);
    return testResult;
} // TestResult

void FireStarterState::InitResults(FireStarterResults* initResults)
{
    FireStarterSettings& settings = m_program.m_settings;

    m_resultsData.clear();
    m_resultsData.resize(FireStarterResults::ResultsSize(settings.m_registers, settings.m_variations));
    m_results = Results();
    if (m_results)
        if (initResults)
            m_results->InitResults(0, settings.m_registers, settings.m_variations, initResults);
        else
            m_results->InitResults(0, settings.m_registers, settings.m_variations, settings.m_startResult);
} // InitResult

void FireStarterState::InitState(const FireStarterSettings& settings, unsigned long long index, unsigned long long test)
{
    m_timer.StartDate();
    m_program.InitProgram(settings);

    m_variationOrder.resize(settings.m_variations);
    m_variationCount.resize(settings.m_variations);
    for (unsigned int v = 0; v < settings.m_variations; v++) {
        m_variationOrder[v] = v;
        m_variationCount[v] = 0;
    }

    m_generation = 0;
    m_evolution = 0;
    m_index = index;
    m_copy_index = index;
    m_id = index;
    m_copy_id = index;
    m_test = test;
    m_seed = 0;
    m_maxResult = settings.m_startResult;
    m_optimizePass = false;
    m_optimizeValid = false;

    InitGenerationSeed();
    InitResults();
} // InitState
