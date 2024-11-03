#include "FireStarterState.h"

bool FireStarterState::Packetize(FireStarterPacket& packet)
{
    bool result = true;
    result = result && m_program.Packetize(packet);
    result = result && packet.Packetize(m_evolveResultsData);
    result = result && packet.Packetize(m_optimizeResultsData);
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
    code += Format("// Variation: %d  result = %.8f\r\n", variation, OptimizeResults()->MinResult(variation));
    code += Format("inline void LoadVariation%u(FireStarterResult* result)\r\n", variation);
    code += "{\r\n";
    code += "    FireStarterData *data = result->Data();\r\n";
    for (unsigned int i = 0; i < m_program.m_settings.m_registers; i++) {
        float data = OptimizeResult(variation)->Data()->d[i];
        code += Format("    data->d[%u] = %.8ff;\r\n", i, data);
    }
    code += Format("    *(result->MinResult()) = %.8ff;\r\n", OptimizeResult(variation)->MinResult());
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
        code += Format("    LoadVariation%u(state.OptimizeResult(%u));\r\n", v, v);
    code += Format("    state.m_maxResult = %.8ff;\r\n", m_maxResult);
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
    code += "    state.LoadCodeFromProgram();\r\n";
    code += Format("    state.m_generation = %llu;\r\n", m_generation);
    code += Format("    state.m_evolution = %llu;\r\n", m_evolution);
    code += Format("    state.m_index = %llu;\r\n", m_index);
    code += Format("    state.m_copy_index = %llu;\r\n", m_copy_index);
    code += Format("    state.m_id = %llu;\r\n", m_id);
    code += Format("    state.m_test = %llu;\r\n", m_test);
    code += Format("    state.m_seed = %llu;\r\n", m_seed);
    code += Format("    state.m_optimize_pass = %llu;\r\n", m_optimize_pass);
    code += Format("    state.m_oldResult = %.8ff;\r\n", m_oldResult);
    code += Format("    state.m_maxResult = %.8ff;\r\n", m_maxResult);
    code += Format("    state.m_evolveWeight = %ff;\r\n", m_evolveWeight);
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
    float testResult = 0.0f;
    for (unsigned int v = 0; v < m_program.m_settings.m_variations; v++) {
        const FireStarterData* initData = OptimizeResults()->Data(v);
        float minResult = OptimizeResults()->MinResult(v);
        if (minResult < m_program.m_settings.m_startResult) {
            float result = 0.0f;
            float sampleStep = (m_program.m_settings.m_targetMax - m_program.m_settings.m_targetMin) / (m_program.m_settings.m_samples - 1);
            for (unsigned int i = 0; i < m_program.m_settings.m_samples; i++) {
                float theta = m_program.m_settings.m_targetMin + i * sampleStep;
                float target = Target(theta, v);
                memcpy(workData, initData, dataSize);
                float sampleResult = (float)m_program.OptimizedInstructions()->Execute(workData, instructions, theta);
                float sampleTarget = Target(theta, v);
                float difference = fabsf(sampleResult - sampleTarget);
                result = max(result, difference);
            }
            testResult = max(testResult, fabsf(result - minResult));
        }
    }
    free(workData);
    return testResult;
} // TestResult

void FireStarterState::InitResults(void)
{
    const FireStarterSettings& settings = m_program.m_settings;

    if ((settings.m_mode == FIRESTARTER_EVOLVE_GPU) || (settings.m_mode == FIRESTARTER_SPEED_TEST)) {
        m_evolveResultsData.resize(FireStarterEvolveResults::ResultsSize(settings));
        m_evolveResults = EvolveResults();
        if (m_evolveResults)
            m_evolveResults->InitResults(settings);
    } else {
        m_optimizeResultsData.resize(FireStarterOptimizeResults::ResultsSize(settings));
        m_optimizeResults = OptimizeResults();
        if (m_optimizeResults)
            m_optimizeResults->InitResults(settings);
    }
} // InitResults

void FireStarterState::InitCode(void)
{
    m_codeData.resize(FireStarterCode::CodeSize(Settings()));
    m_code = Code();
} // InitCode

void FireStarterState::InitState(const FireStarterSettings& settings, unsigned long long generation, unsigned long long index, unsigned long long id, unsigned long long test)
{
    m_timer.Start();
    m_program.InitProgram(settings);

    if (settings.m_variations > 1) {
        m_variationOrder.resize(settings.m_variations);
        m_variationCount.resize(settings.m_variations);
        for (unsigned int v = 0; v < settings.m_variations; v++) {
            m_variationOrder[v] = v;
            m_variationCount[v] = 0;
        }
    } else {
        m_variationOrder.clear();
        m_variationCount.clear();
    }

    m_generation = generation;
    m_age = 1;
    m_evolution = 0;
    m_index = index;
    m_copy_index = index;
    m_id = id;
    m_test = test;
    m_seed = 0;
    m_optimize_pass = 0;
    m_oldResult = settings.m_startResult;
    m_maxResult = settings.m_startResult;
    m_optimizeValid = false;

    InitGenerationSeed();
    InitResults();
    InitCode();
} // InitState

void FireStarterState::InitResults(const FireStarterSettings& settings, const FireStarterEvolvePopulation* population, unsigned int index)
{
    FireStarterResult* result = EvolveResult();
    memcpy(Code(), population->Code(settings, index), FireStarterCode::CodeSize(settings.m_instructions));
    memcpy(result->Data(), population->Data(settings, index), FireStarterData::DataSize(settings.m_registers));
    *result->EvolveAge1() = population->EvolveAge1(settings, index);
    *result->EvolveAge2() = population->EvolveAge2(settings, index);
    *result->MinResult() = population->MinResult(settings, index);
    m_maxResult = EvolveMaxResult();
    m_minIndex = index;
    m_optimizeValid = true;

    // Load the state's program from the GPU evolved code.
    LoadProgramFromCode();
} // InitResults

void FireStarterState::InitResults(const FireStarterSettings& settings, const FireStarterOptimizePopulation* population, unsigned int index)
{
    for (unsigned int v = 0; v < settings.m_variations; v++) {
        FireStarterResult* result = OptimizeResult(v);
        memcpy(result->Data(), population->Data(settings, index, v), FireStarterData::DataSize(settings.m_registers));
        *result->EvolveAge1() = population->EvolveAge1(settings, index, v);
        *result->EvolveAge2() = population->EvolveAge2(settings, index, v);
        *result->MinResult() = population->MinResult(settings, index, v);
    }
    m_maxResult = OptimizeMaxResult();
    m_minIndex = index;
    m_optimizeValid = true;
} // InitResults
