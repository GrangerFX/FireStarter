#include "FireStarterState.h"
#include "Format.h"
#include <algorithm>
#include <string_view>
#include <unordered_set>

size_t FireStarterBestCodes::BestCodes::Size(void)
{
    return m_numCodes;
} // Size

float FireStarterBestCodes::BestCodes::GetBestResult(void)
{
    return m_numCodes ? m_bestResults[0] : 0.0f;
} // GetBestResult

const float FireStarterBestCodes::BestCodes::GetBestCode(FireStarterCodeVector& bestCode)
{
    if (!m_numCodes) {
        bestCode.InitCode();
        return 0.0f;
    }
    bestCode = m_bestCodes[0];
    float bestResult = m_bestResults[0];
    for (size_t i = 1; i < m_maxCodes; i++) {
        m_bestCodes[i - 1] = m_bestCodes[i];
        m_bestResults[i - 1] = m_bestResults[i];
    }
    m_numCodes--;
    m_bestCodes[m_maxCodes - 1] = bestCode;
    m_bestResults[m_maxCodes - 1] = bestResult;
    return bestResult;
} // GetBestCode

void FireStarterBestCodes::BestCodes::AddCode(const FireStarterCode* code, float result)
{
    // Skip bad or worse results entirely.
    if ((m_numCodes == m_maxCodes) && (result >= m_bestResults[m_maxCodes - 1]))
        return;

    // Only add states with a unique instruction set.
    FireStarterCodeVector newCode(m_settings, code);

    // Insert the new code and result at the end of the list.
    float newResult = result;
    size_t newIndex = (m_numCodes < m_maxCodes) ? m_numCodes : --m_numCodes;
    m_bestResults[newIndex] = newResult;
    m_bestCodes[newIndex] = newCode;

    for (size_t i = 0; i < m_numCodes; i++) {
        float curResult = m_bestResults[i];
        if (curResult > newResult) {
            for (size_t j = i; j < m_numCodes; j++) {
                FireStarterCodeVector curCode = m_bestCodes[j];
                curResult = m_bestResults[j];
                m_bestCodes[j] = newCode;
                m_bestResults[j] = newResult;
                newCode = curCode;
                newResult = curResult;
            }
            break;
        }
    }
    m_bestCodes[m_numCodes] = newCode;
    m_bestResults[m_numCodes] = newResult;
    m_numCodes++;
    return;
} // AddCode

void FireStarterBestCodes::BestCodes::InitBestCodes(const FireStarterSettings& settings, size_t maxCodes)
{
    m_settings = settings;
    m_maxCodes = maxCodes;
    m_codeSize = FireStarterCode::CodeSize(m_settings);
    m_numCodes = 0;
    m_bestCodes.resize(m_maxCodes);
    m_bestResults.resize(m_maxCodes);
    for (size_t i = 0; i < m_maxCodes; i++) {
        m_bestCodes[i].InitCode(settings);
        m_bestResults[i] = m_settings.m_startResult;
    }
} // InitBestCodes

FireStarterBestCodes::BestCodes::BestCodes(const FireStarterSettings& settings, size_t maxCodes)
{
    InitBestCodes(settings, maxCodes);
} // BestCodes

FireStarterBestCodes::BestCodes::BestCodes(void)
{
    InitBestCodes(FireStarterSettings(), FIRESTARTER_NUM_BEST);
} // BestCodes

size_t FireStarterBestCodes::Size(void)
{
    size_t size = 0;
    DispatchSync([this, &size] {
        size = m_bestCodes.Size();
    });
    return size;
} // Size

float FireStarterBestCodes::GetBestResult(void)
{
    float bestResult = 0.0f;
    DispatchSync([this, &bestResult] {
        bestResult = m_bestCodes.GetBestResult();
    });
    return bestResult;
} // GetBestResult

const float FireStarterBestCodes::GetBestCode(FireStarterCodeVector& bestCode)
{
    float result = 0.0f;
    DispatchSync([this, &bestCode, &result] {
        result = m_bestCodes.GetBestCode(bestCode);
    });
    return result;
} // GetBestCode

void FireStarterBestCodes::AddCode(const FireStarterCode* code, float result)
{
    if (result < m_bestCodes.m_settings.m_startResult)
        DispatchAsync([this, code, result] {
            m_bestCodes.AddCode(code, result);
        });
} // AddCode

void FireStarterBestCodes::InitBestCodes(const FireStarterSettings& settings, size_t maxCodes)
{
    DispatchAsync([this, settings, maxCodes] {
        m_bestCodes.InitBestCodes(settings, maxCodes);
    });
} // InitBestCodes

FireStarterBestCodes::FireStarterBestCodes(const FireStarterSettings& settings, size_t maxCodes) : SerialThread("BestCodes")
{
    InitBestCodes(settings, maxCodes);
} // FireStarterBestCodes

FireStarterBestCodes::FireStarterBestCodes(const FireStarterBestCodes& copy) : SerialThread("BestCodes")
{
    m_bestCodes = copy.m_bestCodes;
} // FireStarterBestCodes

FireStarterBestCodes::FireStarterBestCodes(void) : SerialThread("BestCodes")
{
} // FireStarterBestCodes

FireStarterBestCodes::~FireStarterBestCodes(void) 
{
    Synchronize();
} // FireStarterBestCodes

void FireStarterState::SettingsText(const FireStarterSettings& settings, std::string& text, const std::string& prefix, const std::string& postfix, bool diagnostics)
{
    text += prefix + Format("variations = %u", settings.m_variations) + postfix + "\r\n";
    text += prefix + Format("instructions = %u", settings.m_instructions) + postfix + "\r\n";
    text += prefix + Format("registers = %u", settings.m_registers) + postfix + "\r\n";
    text += prefix + Format("opcodes = %u", settings.m_opcodes) + postfix + "\r\n";
    text += "\r\n";
    if ((settings.m_mode == FIRESTARTER_MONEYMAKER) || (settings.m_mode == FIRESTARTER_MONEYOPTIMIZE)) {
        text += prefix + Format("stocks = %u", settings.m_stocks) + postfix + "\r\n";
        text += prefix + Format("sessions = %u", settings.m_sessions) + postfix + "\r\n";
        text += prefix + Format("history = %u", settings.m_history) + postfix + "\r\n";
        text += prefix + Format("variation = %u", settings.m_variation) + postfix + "\r\n";
        text += prefix + Format("trading = %u", settings.m_trading) + postfix + "\r\n";
        text += prefix + Format("funds = %ff", settings.m_funds) + postfix + "\r\n";
    } else {
        text += prefix + Format("targetMin = %ff", settings.m_targetMin) + postfix + "\r\n";
        text += prefix + Format("targetMax = %ff", settings.m_targetMax) + postfix + "\r\n";
        text += prefix + Format("target = %ff", settings.m_target) + postfix + "\r\n";
    }
    text += "\r\n";
    text += prefix + Format("mode = %s", settings.Mode()) + postfix + "\r\n";
    text += prefix + Format("evolveSeed = %u", settings.m_evolveSeed) + postfix + "\r\n";
    text += prefix + Format("optimizeSeed = %u", settings.m_optimizeSeed) + postfix + "\r\n";
    text += prefix + Format("tests = %u", settings.m_tests) + postfix + "\r\n";
    text += prefix + Format("units = %u", settings.m_units) + postfix + "\r\n";
    text += prefix + Format("states = %u", settings.m_states) + postfix + "\r\n";
    text += prefix + Format("population = %u", settings.m_population) + postfix + "\r\n";
    text += prefix + Format("generations = %u", settings.m_generations) + postfix + "\r\n";
    text += prefix + Format("passes = %u", settings.m_passes) + postfix + "\r\n";
    text += prefix + Format("samples = %u", settings.m_samples) + postfix + "\r\n";
    if (diagnostics && settings.SupportsPrecision()) {
        text += prefix + Format("usePrecision = %u", settings.UsePrecision() ? 1u : 0u) + "\r\n";
        text += prefix + Format("precisionSamples = %u", FIRESTARTER_PRECISION) + "\r\n";
    }
    text += prefix + Format("iterations = %u", settings.m_iterations) + postfix + "\r\n";
    text += prefix + Format("optimize = %u", settings.m_optimize) + postfix + "\r\n";
    text += "\r\n";
    text += prefix + Format("scale = %ff", settings.m_scale) + postfix + "\r\n";
    text += prefix + Format("startScale = %ff", settings.m_startScale) + postfix + "\r\n";
    text += prefix + Format("startResult = %ff", settings.m_startResult) + postfix + "\r\n";
    text += "\r\n";
} // SettingsText

void FireStarterState::SaveSettings(std::string& text) const
{
    text += "inline void LoadSettings(FireStarterSettings& settings)\r\n";
    text += "{\r\n";
    SettingsText(m_settings, text, "    settings.m_", ";", false);
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
    text += Format("// Run test = %llu\r\n", m_test);
    text += Format("// Run generation = %llu\r\n", m_generation);
    text += Format("// Run evolution = %llu\r\n", m_evolution);
    if ((PassMode() != FIRESTARTER_MONEYMAKER) && (PassMode() != FIRESTARTER_MONEYOPTIMIZE))
        text += Format("// Run precision  = %.8f\r\n", m_precision);
    text += Format("// Run max result = %.8f\r\n", MaxResults());
    text += "\r\n";
    SettingsText(m_settings, text, "// Run ");
    text += "\r\n";
} // SaveStats

void FireStarterState::SaveVariation(unsigned int variation, std::string& text) const
{
    text += Format("// Variation: %d\r\n", variation);
    text += Format("inline void LoadVariation%u(FireStarterResult* result)\r\n", variation);
    text += "{\r\n";
    text += Format("    *(result->MaxResult()) = %.8ff;\r\n", MaxResult(variation));
    text += Format("    *(result->EvolveAge()) = %u;\r\n", EvolveAge(variation));
    text += "    FireStarterData *data = result->Data();\r\n";
    for (unsigned int i = 0; i < m_settings.m_registers; i++) {
        float data = Result(variation)->Data()->d[i];
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
    text += Format("    state.m_evolveIndex = %llu;\r\n", m_evolveIndex);
    text += Format("    state.m_id = %llu;\r\n", m_id);
    text += Format("    state.m_test = %llu;\r\n", m_test);
    text += Format("    state.m_seed = %llu;\r\n", m_seed);
    text += Format("    state.m_optimize_pass = %llu;\r\n", m_optimize_pass);
    text += Format("    state.m_bestResult = %.8ff;\r\n", m_bestResult);
    text += Format("    state.m_oldResult = %.8ff;\r\n", m_oldResult);
    text += Format("    state.m_evolveWeight = %ff;\r\n", m_evolveWeight);
    text += Format("    state.m_precision = %.9ef;\r\n", m_precision);
    text += Format("    state.m_precisionValid = %s;\r\n", m_precisionValid ? "true" : "false");
    text += Format("    state.m_optimizeValid = %s;\r\n", m_optimizeValid ? "true" : "false");
    text += "} // LoadState\r\n";
} // SaveState

bool FireStarterState::UpdateBest(FireStarterState& state)
{
    if (!state.m_optimizeValid)
        return false;

    // Validate every candidate, including ones with worse sampled fitness.
    if (state.Settings().UsePrecision())
        state.UpdatePrecision();
    if (state.BetterEvolutionResult(*this) || !m_optimizeValid) {
        float oldBestResult = m_bestResult;
        *this = state;
        m_bestResult = state.MaxResults();
        m_oldResult = oldBestResult;
        if (!state.Settings().UsePrecision() && m_settings.SupportsPrecision())
            UpdatePrecision();
        m_age = 0;
        SetComplete();
        return true;
    }
    m_age++;
    return false;
} // UpdateBest

unsigned int FireStarterState::SelectOptimizeResult(const FireStarterPopulation* population, unsigned int sampledIndex, unsigned int variation) const
{
    if (!m_settings.UsePrecision())
        return sampledIndex;

    const FireStarterResult* bestResult = FireStarterPopulation::PopulationResult(population, m_settings, sampledIndex);
    unsigned int bestIndex = sampledIndex;
    float bestPrecision = m_settings.m_startResult;
    size_t dataSize = FireStarterData::DataSize(m_settings.m_registers);
    std::vector<float> workBuffer(m_settings.m_registers);
    FireStarterData* workData = (FireStarterData*)workBuffer.data();
    std::unordered_set<std::string_view> testedData;
    testedData.reserve(m_settings.m_population);

    // Start with the sampled winner, then consider every distinct valid member.
    // Sampled error is not a cutoff: a worse sampled member can have better precision.
    if (isfinite(bestResult->MaxResult()) && (bestResult->MaxResult() < m_settings.m_startResult)) {
        bestPrecision = TestVariation(bestResult->Data(), workData, variation, bestPrecision);
        testedData.insert(std::string_view((const char*)bestResult->Data(), dataSize));
    }
    for (unsigned int index = 0; index < m_settings.m_population; index++) {
        const FireStarterResult* result = FireStarterPopulation::PopulationResult(population, m_settings, index);
        if (!isfinite(result->MaxResult()) || (result->MaxResult() >= m_settings.m_startResult))
            continue;
        // Views refer to the unchanged host population for the duration of this scan.
        if (!testedData.insert(std::string_view((const char*)result->Data(), dataSize)).second)
            continue;
        float precision = TestVariation(result->Data(), workData, variation, bestPrecision);
        if ((precision < bestPrecision) || ((precision == bestPrecision) &&
            (std::make_tuple(result->MaxResult(), index) < std::make_tuple(bestResult->MaxResult(), bestIndex)))) {
            bestResult = result;
            bestIndex = index;
            bestPrecision = precision;
        }
    }
    return bestIndex;
} // SelectOptimizeResult

float FireStarterState::TestVariation(const FireStarterData* initData, FireStarterData* workData, unsigned int variation, float limit) const
{
    const FireStarterCode* testCode = Code();
#if FIRESTARTER_PRECISION
    unsigned int samples = FIRESTARTER_PRECISION;
#else
    unsigned int samples = m_settings.m_samples;
#endif
    if (!testCode || !initData || !workData || (samples < 2))
        return m_settings.m_startResult;
    size_t dataSize = FireStarterData::DataSize(m_settings.m_registers);
    float sampleStep = (m_settings.m_targetMax - m_settings.m_targetMin) / (samples - 1);
    float result = 0.0f;
    for (unsigned int sample = 0; sample < samples; sample++) {
        float theta = m_settings.m_targetMin + sample * sampleStep;
        float target = Target(theta, variation + FIRESTARTER_VARIATION);
        memcpy(workData, initData, dataSize);
        float n = testCode->Evaluate(*workData, theta, m_settings.m_instructions);
        float error = fabsf(n - target);
        if (!isfinite(error) || (error >= m_settings.m_startResult))
            return m_settings.m_startResult;
        result = std::max(result, error);
        // This candidate cannot win once its actual dense error exceeds the leader.
        if (result > limit)
            break;
    }
    return result;
} // TestVariation

float FireStarterState::TestResults(void) const
{
    // Get an accurate test result for the state.
    const FireStarterCode* testCode = Code();
    unsigned int registers = Settings().m_registers;
    size_t dataSize = FireStarterData::DataSize(registers);
    unsigned int variations = Settings().m_variations;
    float startResult = Settings().m_startResult;
    float testResult = 0.0f;
    float maxResult = MaxResults();
#if FIRESTARTER_PRECISION
    unsigned int samples = FIRESTARTER_PRECISION;
#else
    unsigned int samples = Settings().m_samples;
#endif
    if (!testCode || !variations || (samples < 2) || !isfinite(maxResult) || (maxResult >= startResult))
        return startResult;
    FireStarterData* workData = (FireStarterData*)calloc(dataSize, 1);
    if (!workData)
        return startResult;
    if (maxResult < startResult) {
        for (unsigned int v = 0; v < variations; v++) {
            const FireStarterData* initData = Result(v)->Data();
            float result = TestVariation(initData, workData, v, startResult);
            if (result >= startResult) {
                testResult = startResult;
                break;
            }

#if FIRESTARTER_PRECISION
            testResult = std::max(testResult, result);
#else
            testResult = std::max(testResult, fabsf(result - Result(v)->MaxResult()));
#endif
        } 
    }
    free(workData);
#if !FIRESTARTER_PRECISION
    testResult = fabsf(testResult - maxResult);
#endif
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
            FireStarterData data(Result(v)->Data());
            float theta = targetMin + i * sampleStep;
            float target = Target(theta, v + FIRESTARTER_VARIATION);
            float n = Code()->Evaluate(data, theta);
            float error = fabsf(n - target);
            if (!isfinite(error) || (error >= startResult)) {
                result = startResult;
                break;
            }
            result = fmaxf(error, result);
        }
    return result;
} // EvaluateCode

void FireStarterState::InitState(const FireStarterSettings& settings, unsigned long long generation, unsigned long long index, unsigned long long id, unsigned long long test)
{
    m_timer.Start();
    m_settings = settings;

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
    m_evolveIndex = index;
    m_id = id;
    m_test = test;
    m_seed = 0;
    m_optimize_pass = 0;
    m_bestResult = m_settings.m_startResult;
    m_oldResult = m_settings.m_startResult;
    m_precision = m_settings.m_startResult;
    m_precisionValid = false;
    m_optimizeValid = false;
    m_complete.store(false);
    m_evaluateCode.clear();

    InitGenerationSeed();
    InitResults();
    InitCode();
    InitNetwork();
} // InitState

void FireStarterState::InitCode(const FireStarterSettings& settings, const FireStarterCode* codes, float result, unsigned int index)
{
    m_precisionValid = false;
    // Load the state's program from the GPU evolved code.
    if (codes)
        CopyCode(codes->Member(settings, index));

    // Load the state's data from the population data.
    m_oldResult = m_bestResult;
    m_bestResult = result;
    m_minIndex = index;
    m_optimizeValid = true;
} // InitCode

void FireStarterState::InitResult(const FireStarterSettings& settings, const FireStarterPopulation* population, unsigned int index, unsigned int variation)
{
    m_precisionValid = false;
    // Load the state's data from the population data.
    if (population) {
        const FireStarterResult* result = FireStarterPopulation::PopulationResult(FireStarterPopulation::PopulationVariation(population, settings, variation), settings, index);
        Result(variation)->Copy(result, settings.m_registers);
    }
} // InitResult

void FireStarterState::InitResult(const FireStarterSettings& settings, const FireStarterCode* codes, const FireStarterPopulation* population, unsigned int index, unsigned int variation)
{
    // Load the state's code from the GPU evolved code.
    if (codes)
        CopyCode(codes->Member(settings, index));

    // Load the state's data from the population data.
    InitResult(settings, population, index, variation);
} // InitResult

void FireStarterState::InitResults(const FireStarterSettings& settings, const FireStarterPopulation* population, unsigned int index)
{
    for (unsigned int v = 0; v < settings.m_variations; v++)
        InitResult(settings, population, index, v);
    m_oldResult = m_bestResult;
    m_bestResult = MaxResults();
    m_minIndex = index;
    m_optimizeValid = true;
} // InitResults

void FireStarterState::InitResults(const FireStarterSettings& settings, const FireStarterCode* codes, const FireStarterPopulation* population, unsigned int index)
{
    // Load the state's program from the GPU evolved code.
    if (codes)
        CopyCode(codes->Member(settings, index));

    // Load the state's data from the population data.
    InitResults(settings, population, index);
} // InitResults
