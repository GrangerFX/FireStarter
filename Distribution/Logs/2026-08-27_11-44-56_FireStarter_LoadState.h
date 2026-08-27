#pragma once
#include "FireStarterState.h"

// Run date: 08/27/26 11:44:56 Pacific Daylight Time
// Run duration = 2901.397060 seconds
// Run test = 0
// Run generation = 0
// Run evolution = 0
// Run max result = 0.99960285

// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 4

// Run stocks = 1
// Run sessions = 256
// Run history = 384
// Run variation = 256
// Run trading = 64
// Run funds = 1000.000000f

// Run mode = FIRESTARTER_MONEYOPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 16384
// Run generations = 1
// Run passes = 64
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
    settings.m_opcodes = 4;

    settings.m_stocks = 1;
    settings.m_sessions = 256;
    settings.m_history = 384;
    settings.m_variation = 256;
    settings.m_trading = 64;
    settings.m_funds = 1000.000000f;

    settings.m_mode = FIRESTARTER_MONEYOPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 1;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_population = 16384;
    settings.m_generations = 1;
    settings.m_passes = 64;
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
    *(result->MaxResult()) = 0.99960285f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 0;
    FireStarterData *data = result->Data();
    data->d[0] = 0.82313848f;
    data->d[1] = -0.93780822f;
    data->d[2] = -0.43258896f;
    data->d[3] = 0.30433750f;
    data->d[4] = 0.53177369f;
    data->d[5] = 0.10273118f;
    data->d[6] = -0.20983538f;
    data->d[7] = 0.85788292f;
    data->d[8] = -0.97726625f;
    data->d[9] = -0.09150631f;
    data->d[10] = -0.39907724f;
    data->d[11] = 0.85238254f;
    data->d[12] = -0.33411208f;
    data->d[13] = 0.45104989f;
    data->d[14] = -0.45589134f;
    data->d[15] = 0.06025463f;
    data->d[16] = 0.56527573f;
    data->d[17] = -0.68110651f;
    data->d[18] = 0.23307040f;
    data->d[19] = 0.00000000f;
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
    code->SetOperation(0, (FireStarterOpcode)5, 0);
    code->SetOperation(1, (FireStarterOpcode)9, 1);
    code->SetOperation(2, (FireStarterOpcode)9, 2);
    code->SetOperation(3, (FireStarterOpcode)10, 3);
    code->SetOperation(4, (FireStarterOpcode)10, 2);
    code->SetOperation(5, (FireStarterOpcode)3, 4);
    code->SetOperation(6, (FireStarterOpcode)9, 5);
    code->SetOperation(7, (FireStarterOpcode)9, 6);
    code->SetOperation(8, (FireStarterOpcode)3, 7);
    code->SetOperation(9, (FireStarterOpcode)9, 2);
    code->SetOperation(10, (FireStarterOpcode)10, 6);
    code->SetOperation(11, (FireStarterOpcode)9, 7);
    code->SetOperation(12, (FireStarterOpcode)9, 8);
    code->SetOperation(13, (FireStarterOpcode)5, 9);
    code->SetOperation(14, (FireStarterOpcode)10, 10);
    code->SetOperation(15, (FireStarterOpcode)9, 8);
    code->SetOperation(16, (FireStarterOpcode)5, 11);
    code->SetOperation(17, (FireStarterOpcode)3, 12);
    code->SetOperation(18, (FireStarterOpcode)10, 13);
    code->SetOperation(19, (FireStarterOpcode)9, 11);
    code->SetOperation(20, (FireStarterOpcode)5, 8);
    code->SetOperation(21, (FireStarterOpcode)10, 14);
    code->SetOperation(22, (FireStarterOpcode)5, 15);
    code->SetOperation(23, (FireStarterOpcode)9, 12);
    code->SetOperation(24, (FireStarterOpcode)3, 16);
    code->SetOperation(25, (FireStarterOpcode)3, 0);
    code->SetOperation(26, (FireStarterOpcode)10, 3);
    code->SetOperation(27, (FireStarterOpcode)10, 12);
    code->SetOperation(28, (FireStarterOpcode)5, 2);
    code->SetOperation(29, (FireStarterOpcode)5, 17);
    code->SetOperation(30, (FireStarterOpcode)5, 9);
    code->SetOperation(31, (FireStarterOpcode)5, 18);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 0;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.99960285f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
