#pragma once
#include "FireStarterState.h"

// Run date: 09/28/25 15:41:49 Pacific Daylight Time
// Run duration = 92.349427 seconds
// Run test = 0
// Run generation = 8
// Run evolution = 0
// Run precision  = 10.00000000
// Run max result = 0.41763756
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_MONEYMAKER
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 65536
// Run generations = 0
// Run passes = 256
// Run samples = 15
// Run iterations = 64
// Run candidates = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 3;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_MONEYMAKER;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_population = 65536;
    settings.m_generations = 0;
    settings.m_passes = 256;
    settings.m_samples = 15;
    settings.m_iterations = 64;
    settings.m_candidates = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    *(result->MaxResult()) = 0.41763756f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 85;
    FireStarterData *data = result->Data();
    data->d[0] = -1.55355275f;
    data->d[1] = 2.09972477f;
    data->d[2] = 2.07055783f;
    data->d[3] = -2.02086949f;
    data->d[4] = -0.29432091f;
    data->d[5] = 1.73969150f;
    data->d[6] = -0.13399509f;
    data->d[7] = 2.11196804f;
    data->d[8] = -0.34474099f;
    data->d[9] = -0.89731908f;
    data->d[10] = 2.08835387f;
    data->d[11] = -1.42124879f;
    data->d[12] = -1.99338937f;
    data->d[13] = 1.44473720f;
    data->d[14] = 2.15872645f;
    data->d[15] = 0.20986037f;
    data->d[16] = -0.69986588f;
    data->d[17] = 2.52274156f;
    data->d[18] = 0.93853736f;
    data->d[19] = 1.81146967f;
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

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
} // LoadResult

inline unsigned int LoadCode(FireStarterCode* code)
{
    code->SetOperation(0, (FireStarterOpcode)1, 0);
    code->SetOperation(1, (FireStarterOpcode)2, 0);
    code->SetOperation(2, (FireStarterOpcode)2, 0);
    code->SetOperation(3, (FireStarterOpcode)2, 1);
    code->SetOperation(4, (FireStarterOpcode)0, 2);
    code->SetOperation(5, (FireStarterOpcode)1, 3);
    code->SetOperation(6, (FireStarterOpcode)1, 4);
    code->SetOperation(7, (FireStarterOpcode)1, 0);
    code->SetOperation(8, (FireStarterOpcode)0, 5);
    code->SetOperation(9, (FireStarterOpcode)2, 6);
    code->SetOperation(10, (FireStarterOpcode)1, 7);
    code->SetOperation(11, (FireStarterOpcode)1, 8);
    code->SetOperation(12, (FireStarterOpcode)2, 9);
    code->SetOperation(13, (FireStarterOpcode)0, 10);
    code->SetOperation(14, (FireStarterOpcode)2, 11);
    code->SetOperation(15, (FireStarterOpcode)2, 7);
    code->SetOperation(16, (FireStarterOpcode)0, 0);
    code->SetOperation(17, (FireStarterOpcode)2, 4);
    code->SetOperation(18, (FireStarterOpcode)2, 12);
    code->SetOperation(19, (FireStarterOpcode)2, 11);
    code->SetOperation(20, (FireStarterOpcode)2, 13);
    code->SetOperation(21, (FireStarterOpcode)1, 14);
    code->SetOperation(22, (FireStarterOpcode)2, 15);
    code->SetOperation(23, (FireStarterOpcode)0, 4);
    code->SetOperation(24, (FireStarterOpcode)1, 16);
    code->SetOperation(25, (FireStarterOpcode)0, 7);
    code->SetOperation(26, (FireStarterOpcode)1, 4);
    code->SetOperation(27, (FireStarterOpcode)2, 5);
    code->SetOperation(28, (FireStarterOpcode)0, 6);
    code->SetOperation(29, (FireStarterOpcode)0, 17);
    code->SetOperation(30, (FireStarterOpcode)2, 18);
    code->SetOperation(31, (FireStarterOpcode)2, 19);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 8;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 12884261530435307672;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.41763756f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
