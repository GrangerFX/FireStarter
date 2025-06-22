#pragma once
#include "FireStarterState.h"

// Run date: 06/22/25 11:07:26 Pacific Daylight Time
// Run duration = 149.742708 seconds
// Run test = 0
// Run generation = 14
// Run evolution = 0
// Run precision  = 0.00000707
// Run max result = 0.00001161
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
// Run population = 262144
// Run generations = 0
// Run passes = 512
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
    settings.m_population = 262144;
    settings.m_generations = 0;
    settings.m_passes = 512;
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
    *(result->MaxResult()) = 0.00000768f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 2;
    FireStarterData *data = result->Data();
    data->d[0] = -3.14158225f;
    data->d[1] = 1.04495895f;
    data->d[2] = 4.49310637f;
    data->d[3] = 0.05332729f;
    data->d[4] = -2.37575889f;
    data->d[5] = -0.05796188f;
    data->d[6] = 1.29363334f;
    data->d[7] = 1.73589098f;
    data->d[8] = 0.51853216f;
    data->d[9] = 0.07291955f;
    data->d[10] = 6.28678131f;
    data->d[11] = -0.23489402f;
    data->d[12] = -7.20842981f;
    data->d[13] = 9.46429062f;
    data->d[14] = 0.00018221f;
    data->d[15] = 0.00002164f;
    data->d[16] = 0.00270092f;
    data->d[17] = -0.00793153f;
    data->d[18] = 5.22244692f;
    data->d[19] = 0.20004465f;
    data->d[20] = 0.00000000f;
    data->d[21] = 0.00000000f;
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
    *(result->MaxResult()) = 0.00000719f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 8;
    FireStarterData *data = result->Data();
    data->d[0] = -3.08851433f;
    data->d[1] = -0.34638926f;
    data->d[2] = -0.57451987f;
    data->d[3] = 0.37505001f;
    data->d[4] = 0.02301370f;
    data->d[5] = -0.32454881f;
    data->d[6] = -1.11448181f;
    data->d[7] = 0.90224648f;
    data->d[8] = -0.03719205f;
    data->d[9] = 1.71230924f;
    data->d[10] = 5.91200066f;
    data->d[11] = -1.22702181f;
    data->d[12] = -13.19892788f;
    data->d[13] = -11.69827938f;
    data->d[14] = -0.00080214f;
    data->d[15] = 0.12583341f;
    data->d[16] = -0.11213750f;
    data->d[17] = 2.15687490f;
    data->d[18] = -0.88466644f;
    data->d[19] = -0.92245018f;
    data->d[20] = 0.00000000f;
    data->d[21] = 0.00000000f;
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
    *(result->MaxResult()) = 0.00001161f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 11;
    FireStarterData *data = result->Data();
    data->d[0] = -2.62521386f;
    data->d[1] = -1.61865246f;
    data->d[2] = 0.07086165f;
    data->d[3] = -0.11621080f;
    data->d[4] = -0.57664084f;
    data->d[5] = 1.34843910f;
    data->d[6] = 2.53769231f;
    data->d[7] = 0.82398921f;
    data->d[8] = 0.68322212f;
    data->d[9] = -2.85213685f;
    data->d[10] = 4.68787718f;
    data->d[11] = -0.27093604f;
    data->d[12] = 10.76702404f;
    data->d[13] = 0.38760906f;
    data->d[14] = 0.03888488f;
    data->d[15] = 0.37363544f;
    data->d[16] = 1.80564404f;
    data->d[17] = 0.00945626f;
    data->d[18] = 0.91300112f;
    data->d[19] = 1.24916959f;
    data->d[20] = 0.00000000f;
    data->d[21] = 0.00000000f;
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
    code->SetOperation(4, (FireStarterOpcode)0, 1);
    code->SetOperation(5, (FireStarterOpcode)1, 4);
    code->SetOperation(6, (FireStarterOpcode)0, 5);
    code->SetOperation(7, (FireStarterOpcode)1, 6);
    code->SetOperation(8, (FireStarterOpcode)0, 6);
    code->SetOperation(9, (FireStarterOpcode)0, 7);
    code->SetOperation(10, (FireStarterOpcode)1, 8);
    code->SetOperation(11, (FireStarterOpcode)0, 3);
    code->SetOperation(12, (FireStarterOpcode)0, 9);
    code->SetOperation(13, (FireStarterOpcode)0, 9);
    code->SetOperation(14, (FireStarterOpcode)0, 10);
    code->SetOperation(15, (FireStarterOpcode)1, 11);
    code->SetOperation(16, (FireStarterOpcode)1, 12);
    code->SetOperation(17, (FireStarterOpcode)0, 7);
    code->SetOperation(18, (FireStarterOpcode)1, 13);
    code->SetOperation(19, (FireStarterOpcode)0, 14);
    code->SetOperation(20, (FireStarterOpcode)0, 9);
    code->SetOperation(21, (FireStarterOpcode)1, 15);
    code->SetOperation(22, (FireStarterOpcode)1, 16);
    code->SetOperation(23, (FireStarterOpcode)0, 5);
    code->SetOperation(24, (FireStarterOpcode)0, 17);
    code->SetOperation(25, (FireStarterOpcode)0, 6);
    code->SetOperation(26, (FireStarterOpcode)1, 0);
    code->SetOperation(27, (FireStarterOpcode)0, 8);
    code->SetOperation(28, (FireStarterOpcode)0, 11);
    code->SetOperation(29, (FireStarterOpcode)0, 18);
    code->SetOperation(30, (FireStarterOpcode)1, 15);
    code->SetOperation(31, (FireStarterOpcode)0, 19);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 14;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 4100713604552236810;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.00001161f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
