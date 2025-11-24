#pragma once
#include "FireStarterState.h"

// Run date: 11/23/25 17:26:16 Pacific Standard Time
// Run duration = 1776.913470 seconds
// Run test = 0
// Run generation = 2
// Run evolution = 0
// Run max result = 0.72902876

// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run stocks = 8
// Run sessions = 16
// Run history = 257
// Run variation = 120
// Run warmup = 16
// Run trading = 120
// Run funds = 1000.000000f

// Run mode = FIRESTARTER_MONEYMAKER
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run population = 65536
// Run generations = 10
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

    settings.m_stocks = 8;
    settings.m_sessions = 16;
    settings.m_history = 257;
    settings.m_variation = 120;
    settings.m_warmup = 16;
    settings.m_trading = 120;
    settings.m_funds = 1000.000000f;

    settings.m_mode = FIRESTARTER_MONEYMAKER;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 1;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_population = 65536;
    settings.m_generations = 10;
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
    *(result->MaxResult()) = 0.72902876f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 0;
    FireStarterData *data = result->Data();
    data->d[0] = 0.86346233f;
    data->d[1] = 0.09118094f;
    data->d[2] = -0.81123996f;
    data->d[3] = -0.41502181f;
    data->d[4] = 0.52445722f;
    data->d[5] = 1.18276727f;
    data->d[6] = 1.88909864f;
    data->d[7] = -0.09729865f;
    data->d[8] = 0.25615919f;
    data->d[9] = 0.11613343f;
    data->d[10] = 8.82601833f;
    data->d[11] = -1.75351286f;
    data->d[12] = -0.85741460f;
    data->d[13] = -1.73238170f;
    data->d[14] = -2.36740971f;
    data->d[15] = 1.20653522f;
    data->d[16] = -1.66621947f;
    data->d[17] = -0.35958511f;
    data->d[18] = 2.38799667f;
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
    code->SetOperation(0, (FireStarterOpcode)2, 0);
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 1);
    code->SetOperation(3, (FireStarterOpcode)2, 2);
    code->SetOperation(4, (FireStarterOpcode)0, 3);
    code->SetOperation(5, (FireStarterOpcode)2, 4);
    code->SetOperation(6, (FireStarterOpcode)0, 5);
    code->SetOperation(7, (FireStarterOpcode)2, 6);
    code->SetOperation(8, (FireStarterOpcode)1, 7);
    code->SetOperation(9, (FireStarterOpcode)2, 8);
    code->SetOperation(10, (FireStarterOpcode)1, 9);
    code->SetOperation(11, (FireStarterOpcode)1, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 9);
    code->SetOperation(13, (FireStarterOpcode)1, 3);
    code->SetOperation(14, (FireStarterOpcode)2, 11);
    code->SetOperation(15, (FireStarterOpcode)0, 12);
    code->SetOperation(16, (FireStarterOpcode)1, 0);
    code->SetOperation(17, (FireStarterOpcode)2, 10);
    code->SetOperation(18, (FireStarterOpcode)2, 13);
    code->SetOperation(19, (FireStarterOpcode)2, 14);
    code->SetOperation(20, (FireStarterOpcode)0, 15);
    code->SetOperation(21, (FireStarterOpcode)2, 1);
    code->SetOperation(22, (FireStarterOpcode)0, 6);
    code->SetOperation(23, (FireStarterOpcode)2, 9);
    code->SetOperation(24, (FireStarterOpcode)0, 16);
    code->SetOperation(25, (FireStarterOpcode)1, 17);
    code->SetOperation(26, (FireStarterOpcode)0, 8);
    code->SetOperation(27, (FireStarterOpcode)1, 0);
    code->SetOperation(28, (FireStarterOpcode)0, 3);
    code->SetOperation(29, (FireStarterOpcode)1, 18);
    code->SetOperation(30, (FireStarterOpcode)2, 0);
    code->SetOperation(31, (FireStarterOpcode)1, 2);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 2;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 3221065382608826918;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.72902876f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
