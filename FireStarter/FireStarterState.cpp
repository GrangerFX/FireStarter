#include "FireStarterState.h"

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
    FireStarterProgram::SettingsText(m_settings, code, "// Run ");
    code += "\r\n";
} // SaveStats

void FireStarterState::SaveVariation(unsigned int variation, std::string& code) const
{
    code += Format("// Variation: %d  result = %.8f\r\n", variation, MinResult(variation));
    code += Format("inline void LoadVariation%u(FireStarterResult* result)\r\n", variation);
    code += "{\r\n";
    code += "    FireStarterData *data = result->Data();\r\n";
    for (unsigned int i = 0; i < m_settings.m_registers; i++) {
        float data = Result(variation)->Data()->d[i];
        code += Format("    data->d[%u] = %.8ff;\r\n", i, data);
    }
    code += Format("    *(result->MinResult()) = %.8ff;\r\n", MinResult(variation));
    code += Format("} // LoadVariation%u\r\n", variation);
    code += "\r\n";
} // SaveVariation

void FireStarterState::SaveResults(std::string& code) const
{
    for (unsigned int v = 0; v < m_settings.m_variations; v++)
        SaveVariation(v, code);
    code += "inline void LoadResult(FireStarterState& state)\r\n";
    code += "{\r\n";
    for (unsigned int v = 0; v < m_settings.m_variations; v++)
        code += Format("    LoadVariation%u(state.Result(%u));\r\n", v, v);
    code += Format("    state.m_maxResult = %.8ff;\r\n", m_maxResult);
    code += "} // LoadResult\r\n";
    code += "\r\n";
} // SaveResults

void FireStarterState::SaveState(std::string& code) const
{
    code += "#pragma once\r\n";
    code += "#include \"FireStarterState.h\"\r\n";
    code += "\r\n";
    SaveStats(code);
    m_program.SaveSettings(code);
    SaveResults(code);
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

float FireStarterState::TestResults(void) const
{
    // Get an accurate test result for the state.
    const FireStarterInstructions* testInstructions = m_program.OptimizedInstructions();
    unsigned int instructions = Settings().m_instructions;
    unsigned int registers = Settings().m_registers;
    size_t dataSize = FireStarterData::DataSize(registers);
    FireStarterData* workData = (FireStarterData*)calloc(dataSize, 1);
    unsigned int variations = Settings().m_variations;
    unsigned int samples = Settings().m_samples;
    float targetMin = Settings().m_targetMin;
    float targetMax = Settings().m_targetMax;
    float sampleStep = (targetMax - targetMin) / (samples - 1);
    float startResult = Settings().m_startResult;
    float testResult = 0.0f;
    for (unsigned int v = 0; v < variations; v++) {
        const FireStarterData* initData = Result(v)->Data();
        float minResult = MinResult(v);
        if (minResult < startResult) {
            float result = 0.0f;
            for (unsigned int i = 0; i < samples; i++) {
                float theta = targetMin + i * sampleStep;
                float target = Target(theta, v);
                memcpy(workData, initData, dataSize);
                float n = m_program.OptimizedInstructions()->Execute(workData, instructions, theta);
                float error = fabsf(n - target);
                result = max(result, error);
            }
            if (!isfinite(result) || (result >= startResult))
                testResult = startResult;
            else
                testResult = max(testResult, fabsf(result - minResult));
        }
    }
    free(workData);
    return testResult;
} // TestResults

float FireStarterState::EvaluateCode(void) const
{
    float result = 0.0f;
    unsigned int variations = Settings().m_variations;
    unsigned int samples = Settings().m_samples;
    float targetMin = Settings().m_targetMin;
    float targetMax = Settings().m_targetMax;
    float sampleStep = (targetMax - targetMin) / (samples - 1);
    float startResult = Settings().m_startResult;
    for (unsigned int v = 0; v < variations; v++)
        for (unsigned int i = 0; i < samples; i++) {
            FireStarterData data(Result(v)->m_data);
            float theta = targetMin + i * sampleStep;
            float target = Target(theta, v);
            float n = Code()->Evaluate(data, theta);
            float error = fabsf(n - target);
            if (!isfinite(error) || (error >= startResult))
                return startResult;
            else
                result = fmaxf(error, result);
        }
    return result;
} // EvaluateCode

void FireStarterState::InitResults(void)
{
    m_resultsData.resize(ResultsSize());
    m_results = Results();
    for (unsigned int v = 0; v < m_settings.m_variations; v++)
        Result(v)->Init(m_settings);
} // InitResults

void FireStarterState::InitCode(void)
{
    m_codeData.resize(CodeSize());
    m_code = Code();
} // InitCode

void FireStarterState::InitNetwork(void)
{
    SinSimInitNetwork(m_network);
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
    InitNetwork();
} // InitState

void FireStarterState::InitResult(const FireStarterSettings& settings, float result, const FireStarterCode* code, unsigned int index)
{
    // Load the state's program from the GPU evolved code.
    if (code) {
        memcpy(Code(), code, CodeSize());
        LoadProgramFromCode();
    }

    // Load the state's data from the population data.
    m_maxResult = result;
    m_minIndex = index;
    m_optimizeValid = true;
} // InitResult

void FireStarterState::InitResult(const FireStarterSettings& settings, const FireStarterResult* result, const FireStarterCode* code, unsigned int variation, unsigned int index)
{
    // Load the state's program from the GPU evolved code.
    if (code) {
        memcpy(Code(), code, CodeSize());
        LoadProgramFromCode();
    }

    // Load the state's data from the population data.
    memcpy(Result(variation), result, ResultSize());
    m_maxResult = MaxResult();
    m_minIndex = index;
    m_optimizeValid = true;
} // InitResult

void FireStarterState::InitResults(const FireStarterSettings& settings, const FireStarterResult* results, const FireStarterCode* code, unsigned int index)
{
    InitResult(settings, results->Member(settings, index), code->Member(settings, index), 0, index);
} // InitResults

void FireStarterState::InitResults(const FireStarterSettings& settings, const FireStarterResult* results, unsigned int variation, unsigned int index)
{
    for (unsigned int v = 0; v < settings.m_variations; v++)
        InitResult(settings, results->Member(settings, index), nullptr, v, index);
} // InitResults
