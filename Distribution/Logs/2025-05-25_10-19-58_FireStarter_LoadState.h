#pragma once
#include "FireStarterState.h"

// Run date: 05/25/25 10:19:58 Pacific Daylight Time
// Run duration = 9.818749 seconds
// Run test = 0
// Run generation = 12
// Run evolution = 0
// Run precision  = 0.00007248
// Run max result = 0.00002360
// Run variations = 3
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 65536
// Run generations = 0
// Run passes = 384
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 3;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_population = 65536;
    settings.m_generations = 0;
    settings.m_passes = 384;
    settings.m_samples = 15;
    settings.m_iterations = 64;
    settings.m_candidates = 0;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00000614f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 5;
    FireStarterData *data = result->Data();
    data->d[0] = -3.14139628f;
    data->d[1] = 0.73369426f;
    data->d[2] = 0.71972471f;
    data->d[3] = 1.00061738f;
    data->d[4] = -0.33583498f;
    data->d[5] = 0.60896170f;
    data->d[6] = -4.53669119f;
    data->d[7] = -0.49647555f;
    data->d[8] = -2.08368301f;
    data->d[9] = -2.65160990f;
    data->d[10] = -0.19809400f;
    data->d[11] = -8.49401951f;
    data->d[12] = -0.06486952f;
    data->d[13] = 3.24857807f;
    data->d[14] = -1.98980045f;
    data->d[15] = 3.62035084f;
    data->d[16] = 7.49792671f;
    data->d[17] = -2.93429422f;
    data->d[18] = 7.94364071f;
    data->d[19] = 0.00558469f;
    data->d[20] = -0.06925651f;
    data->d[21] = -0.00019185f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
} // LoadVariation0

// Variation: 1
inline void LoadVariation1(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00000271f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 4;
    FireStarterData *data = result->Data();
    data->d[0] = -3.09055233f;
    data->d[1] = -0.50451714f;
    data->d[2] = 7.01932096f;
    data->d[3] = 0.13247174f;
    data->d[4] = -1.21244299f;
    data->d[5] = -0.01531797f;
    data->d[6] = 2.18702626f;
    data->d[7] = 0.32693174f;
    data->d[8] = 0.02693450f;
    data->d[9] = -0.48782077f;
    data->d[10] = 1.57017922f;
    data->d[11] = -3.54435635f;
    data->d[12] = -2.20084858f;
    data->d[13] = -9.35079670f;
    data->d[14] = -1.68321943f;
    data->d[15] = 5.14458704f;
    data->d[16] = 7.94889641f;
    data->d[17] = 1.55211389f;
    data->d[18] = 4.85948420f;
    data->d[19] = 0.68870693f;
    data->d[20] = -0.00468323f;
    data->d[21] = -0.11806066f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
} // LoadVariation1

// Variation: 2
inline void LoadVariation2(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.00002360f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 3;
    FireStarterData *data = result->Data();
    data->d[0] = -2.61753273f;
    data->d[1] = -3.27085710f;
    data->d[2] = 1.38831663f;
    data->d[3] = -0.86166573f;
    data->d[4] = 0.18875208f;
    data->d[5] = 0.23271181f;
    data->d[6] = -8.07446194f;
    data->d[7] = -0.20436174f;
    data->d[8] = -5.45822334f;
    data->d[9] = 3.26671100f;
    data->d[10] = 0.28553221f;
    data->d[11] = -1.74096286f;
    data->d[12] = -0.36227706f;
    data->d[13] = 0.87833041f;
    data->d[14] = 0.11941354f;
    data->d[15] = 6.11138773f;
    data->d[16] = -1.34119153f;
    data->d[17] = 3.25219321f;
    data->d[18] = -4.90245485f;
    data->d[19] = 0.08865646f;
    data->d[20] = 0.23105301f;
    data->d[21] = 0.52295220f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
} // LoadResult

inline unsigned int LoadCode(FireStarterCode* code)
{
    code->SetOperation(0, (FireStarterOpcode)1, 0);
    code->SetOperation(1, (FireStarterOpcode)0, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 4);
    code->SetOperation(7, (FireStarterOpcode)1, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 7);
    code->SetOperation(10, (FireStarterOpcode)1, 8);
    code->SetOperation(11, (FireStarterOpcode)1, 9);
    code->SetOperation(12, (FireStarterOpcode)1, 10);
    code->SetOperation(13, (FireStarterOpcode)0, 11);
    code->SetOperation(14, (FireStarterOpcode)0, 12);
    code->SetOperation(15, (FireStarterOpcode)1, 13);
    code->SetOperation(16, (FireStarterOpcode)0, 14);
    code->SetOperation(17, (FireStarterOpcode)0, 13);
    code->SetOperation(18, (FireStarterOpcode)1, 15);
    code->SetOperation(19, (FireStarterOpcode)1, 16);
    code->SetOperation(20, (FireStarterOpcode)0, 2);
    code->SetOperation(21, (FireStarterOpcode)0, 13);
    code->SetOperation(22, (FireStarterOpcode)0, 15);
    code->SetOperation(23, (FireStarterOpcode)0, 17);
    code->SetOperation(24, (FireStarterOpcode)1, 0);
    code->SetOperation(25, (FireStarterOpcode)1, 16);
    code->SetOperation(26, (FireStarterOpcode)1, 18);
    code->SetOperation(27, (FireStarterOpcode)0, 19);
    code->SetOperation(28, (FireStarterOpcode)0, 9);
    code->SetOperation(29, (FireStarterOpcode)0, 20);
    code->SetOperation(30, (FireStarterOpcode)1, 5);
    code->SetOperation(31, (FireStarterOpcode)1, 21);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 12;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 879648221943409892;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00002360f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
