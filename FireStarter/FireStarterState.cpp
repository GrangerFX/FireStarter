#include "FireStarterState.h"
#include "Format.h"
#include <algorithm>

bool FireStarterState::Packetize(FireStarterPacket& packet)
{
    bool result = true;
    result = result && packet.Packetize(m_codeData);
    result = result && packet.Packetize(&m_settings, sizeof(m_settings));
    result = result && packet.Packetize(m_resultData);
    result = result && packet.Packetize(&m_generation, sizeof(m_generation));
    return result;
} // Packetize

void FireStarterState::SettingsText(const FireStarterSettings& settings, std::string& code, const std::string& prefix, const std::string& postfix)
{
    code += prefix + Format("variations = %u", settings.m_variations) + postfix + "\r\n";
    code += prefix + Format("instructions = %u", settings.m_instructions) + postfix + "\r\n";
    code += prefix + Format("registers = %u", settings.m_registers) + postfix + "\r\n";
    code += prefix + Format("opcodes = %u", settings.m_opcodes) + postfix + "\r\n";
    code += "\r\n";
    code += prefix + Format("targetMin = %ff", settings.m_targetMin) + postfix + "\r\n";
    code += prefix + Format("targetMax = %ff", settings.m_targetMax) + postfix + "\r\n";
    code += prefix + Format("target = %ff", settings.m_target) + postfix + "\r\n";
    code += "\r\n";
    code += prefix + Format("mode = %s", settings.Mode()) + postfix + "\r\n";
    code += prefix + Format("evolveSeed = %u", settings.m_evolveSeed) + postfix + "\r\n";
    code += prefix + Format("optimizeSeed = %u", settings.m_optimizeSeed) + postfix + "\r\n";
    code += prefix + Format("tests = %u", settings.m_tests) + postfix + "\r\n";
    code += prefix + Format("streams = %u", settings.m_streams) + postfix + "\r\n";
    code += prefix + Format("units = %u", settings.m_units) + postfix + "\r\n";
    code += prefix + Format("states = %u", settings.m_states) + postfix + "\r\n";
    code += prefix + Format("generations = %u", settings.m_generations) + postfix + "\r\n";
    code += prefix + Format("population = %u", settings.m_population) + postfix + "\r\n";
    code += prefix + Format("passes = %u", settings.m_passes) + postfix + "\r\n";
    code += prefix + Format("attempts = %u", settings.m_attempts) + postfix + "\r\n";
    code += prefix + Format("optimize = %u", settings.m_optimize) + postfix + "\r\n";
    code += "\r\n";
    code += prefix + Format("scale = %ff", settings.m_scale) + postfix + "\r\n";
    code += prefix + Format("startScale = %ff", settings.m_startScale) + postfix + "\r\n";
    code += prefix + Format("startResult = %ff", settings.m_startResult) + postfix + "\r\n";
} // SettingsText

void FireStarterState::SaveSettings(std::string& text) const
{
    text += "inline void LoadSettings(FireStarterSettings& settings)\r\n";
    text += "{\r\n";
    SettingsText(m_settings, text, "    settings.m_", ";");
    text += "} // LoadSettings\r\n";
    text += "\r\n";
} // SaveSettings

void FireStarterState::SaveCode(std::string& text) const
{
    text += "inline unsigned int LoadCode(FireStarterCode* code)\r\n";
    text += "{\r\n";

    const FireStarterCode* code = Code();
    for (unsigned int i = 0; i < m_settings.m_instructions; i++)
        text += Format("    code->SetOperation(%u, (FireStarterOpcode)%u, %u);\r\n", i, (unsigned int)code->Operation(i), code->Register(i));
    text += "    return code->Optimize();\r\n";

    text += "} // LoadCode\r\n";
    text += "\r\n";
} // SaveProgram

void FireStarterState::SaveStats(std::string& text) const
{
    text += Format("// Run date: %s\r\n", SimpleTimer::RunDate().c_str());
    text += Format("// Run duration = %f seconds\r\n", SimpleTimer::RunDuration());
    text += Format("// Run generation = %llu\r\n", m_generation);
    text += Format("// Run evolution = %llu\r\n", m_evolution);
    text += Format("// Run max result = %.8f\r\n", MaxResult());
    SettingsText(m_settings, text, "// Run ");
    text += "\r\n";
} // SaveStats

void FireStarterState::SaveVariation(unsigned int variation, std::string& text) const
{
    text += Format("// Variation: %d\r\n", variation);
    text += Format("inline void LoadVariation%u(FireStarterResult* result)\r\n", variation);
    text += "{\r\n";
    text += "    FireStarterData *data = result->Data();\r\n";
    for (unsigned int i = 0; i < m_settings.m_registers; i++) {
        float data = Result()->Data(variation)->d[i];
        text += Format("    data->d[%u] = %.8ff;\r\n", i, data);
    }
    text += Format("} // LoadVariation%u\r\n", variation);
    text += "\r\n";
} // SaveVariation

void FireStarterState::SaveResults(std::string& text) const
{
    for (unsigned int v = 0; v < m_settings.m_variations; v++)
        SaveVariation(v, text);
    text += "inline void LoadResult(FireStarterState& state)\r\n";
    text += "{\r\n";
    text += Format("    FireStarterResult *result = state.Result();\r\n");
    text += Format("    *(result->MaxResult()) = %.8ff;\r\n", MaxResult());
    for (unsigned int v = 0; v < m_settings.m_variations; v++)
        text += Format("    LoadVariation%u(state.Result(%u));\r\n", v, v);
    text += "} // LoadResult\r\n";
    text += "\r\n";
} // SaveResults

void FireStarterState::SaveState(std::string& text) const
{
    text += "#pragma once\r\n";
    text += "#include \"FireStarterState.h\"\r\n";
    text += "\r\n";
    SaveStats(text);
    SaveSettings(text);
    SaveResults(text);
    SaveCode(text);

    text += "inline void LoadState(FireStarterState& state)\r\n";
    text += "{\r\n";
    text += "    FireStarterSettings settings;\r\n";
    text += "\r\n";
    text += "    LoadSettings(settings);\r\n";
    text += "    state.InitState(settings);\r\n";
    text += "    LoadResult(state);\r\n";
    text += "    state.m_uniqueRegisters = LoadCode(state.Code());\r\n";
    text += Format("    state.m_generation = %llu;\r\n", m_generation);
    text += Format("    state.m_evolution = %llu;\r\n", m_evolution);
    text += Format("    state.m_index = %llu;\r\n", m_index);
    text += Format("    state.m_copy_index = %llu;\r\n", m_copy_index);
    text += Format("    state.m_id = %llu;\r\n", m_id);
    text += Format("    state.m_test = %llu;\r\n", m_test);
    text += Format("    state.m_seed = %llu;\r\n", m_seed);
    text += Format("    state.m_optimize_pass = %llu;\r\n", m_optimize_pass);
    text += Format("    state.m_oldResult = %.8ff;\r\n", m_oldResult);
    text += Format("    state.m_evolveWeight = %ff;\r\n", m_evolveWeight);
    text += Format("    state.m_optimizeValid = %s;\r\n", m_optimizeValid ? "true" : "false");
    text += "} // LoadState\r\n";
} // SaveState

float FireStarterState::TestResults(void) const
{
    // Get an accurate test result for the state.
    const FireStarterCode* testCode = Code();
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
    float maxResult = MaxResult();
    if (maxResult < startResult) {
        for (unsigned int v = 0; v < variations; v++) {
            const FireStarterData* initData = Result()->Data(v);
            float result = 0.0f;
            for (unsigned int i = 0; i < samples; i++) {
                float theta = targetMin + i * sampleStep;
                float target = Target(theta, v);
                memcpy(workData, initData, dataSize);
                float n = testCode->Evaluate(*workData, theta, instructions);
                float error = fabsf(n - target);
                result = std::max(result, error);
            }
            if (!isfinite(result) || (result >= startResult))
                testResult = startResult;
            else
                testResult = std::max(testResult, fabsf(result - maxResult));
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
            FireStarterData data(Result()->Data(v));
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

void FireStarterState::InitResult(void)
{
    m_resultData.resize(ResultSize());
    m_result = (FireStarterResult*)m_resultData.data();
    m_result->Init(m_settings);
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
    m_settings = settings;
    InitCode();

    if (m_settings.m_variations > 1) {
        m_variationOrder.resize(m_settings.m_variations);
        m_variationCount.resize(m_settings.m_variations);
        for (unsigned int v = 0; v < m_settings.m_variations; v++) {
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
    m_oldResult = m_settings.m_startResult;
    m_optimizeValid = false;

    InitGenerationSeed();
    InitResult();
    InitCode();
    InitNetwork();
} // InitState

void FireStarterState::InitResult(const FireStarterSettings& settings, float result, const FireStarterCode* code, unsigned int index)
{
    // Load the state's program from the GPU evolved code.
    if (code)
        CopyCode(code);

    // Load the state's data from the population data.
    *Result()->MaxResult() = result;
    m_minIndex = index;
    m_optimizeValid = true;
} // InitResult

void FireStarterState::InitResult(const FireStarterSettings& settings, const FireStarterResult* result, const FireStarterCode* code, unsigned int variation, unsigned int index)
{
    // Load the state's program from the GPU evolved code.
    if (code)
        CopyCode(code);

    // Load the state's data from the population data.
    Result()->CopyData(result, variation);
    float& maxResult = MaxResult();
    if (!variation)
        maxResult = result->MaxResult();
    else
        maxResult = MAX(maxResult, result->MaxResult());
    m_minIndex = index;
    m_optimizeValid = true;
} // InitResult

void FireStarterState::InitResult(const FireStarterSettings& settings, const FireStarterResult* population, const FireStarterCode* code, unsigned int index)
{
    InitResult(settings, population->Member(settings, index), code->Member(settings, index), 0, index);
} // InitResults

void FireStarterState::InitResult(const FireStarterSettings& settings, const FireStarterResult* population, unsigned int variation, unsigned int index)
{
    InitResult(settings, population->Member(settings, index), nullptr, variation, index);
} // InitResults
