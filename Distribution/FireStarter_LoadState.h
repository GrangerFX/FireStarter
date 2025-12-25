#pragma once
#include "FireStarterState.h"

// Run date: 12/24/25 19:38:02 Pacific Standard Time
// Run duration = 565.783806 seconds
// Run test = 0
// Run generation = 1
// Run evolution = 0
// Run max result = 0.85486108

// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run stocks = 8
// Run sessions = 8
// Run history = 496
// Run variation = 360
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
// Run generations = 1
// Run passes = 32
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
    settings.m_sessions = 8;
    settings.m_history = 496;
    settings.m_variation = 360;
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
    settings.m_generations = 1;
    settings.m_passes = 32;
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
    *(result->MaxResult()) = 0.85486108f;
    *(result->EvolveAge1()) = 1;
    *(result->EvolveAge2()) = 0;
    FireStarterData *data = result->Data();
    data->d[0] = -2.44008374f;
    data->d[1] = 0.85948527f;
    data->d[2] = -0.77218270f;
    data->d[3] = 0.64161152f;
    data->d[4] = -0.18241471f;
    data->d[5] = 0.78227270f;
    data->d[6] = -0.65188563f;
    data->d[7] = -0.30734134f;
    data->d[8] = 0.54987937f;
    data->d[9] = -0.50171340f;
    data->d[10] = 1.05678558f;
    data->d[11] = 0.29736501f;
    data->d[12] = -0.25562993f;
    data->d[13] = -0.27431664f;
    data->d[14] = 0.88927233f;
    data->d[15] = -0.38398620f;
    data->d[16] = -0.83253986f;
    data->d[17] = 0.57168841f;
    data->d[18] = 0.00000000f;
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
    code->SetOperation(0, (FireStarterOpcode)1, 0);
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)2, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)1, 4);
    code->SetOperation(5, (FireStarterOpcode)2, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)1, 5);
    code->SetOperation(8, (FireStarterOpcode)0, 7);
    code->SetOperation(9, (FireStarterOpcode)2, 7);
    code->SetOperation(10, (FireStarterOpcode)2, 8);
    code->SetOperation(11, (FireStarterOpcode)2, 9);
    code->SetOperation(12, (FireStarterOpcode)2, 10);
    code->SetOperation(13, (FireStarterOpcode)0, 11);
    code->SetOperation(14, (FireStarterOpcode)0, 11);
    code->SetOperation(15, (FireStarterOpcode)2, 12);
    code->SetOperation(16, (FireStarterOpcode)1, 10);
    code->SetOperation(17, (FireStarterOpcode)2, 4);
    code->SetOperation(18, (FireStarterOpcode)0, 6);
    code->SetOperation(19, (FireStarterOpcode)2, 2);
    code->SetOperation(20, (FireStarterOpcode)0, 13);
    code->SetOperation(21, (FireStarterOpcode)1, 14);
    code->SetOperation(22, (FireStarterOpcode)0, 7);
    code->SetOperation(23, (FireStarterOpcode)2, 10);
    code->SetOperation(24, (FireStarterOpcode)0, 1);
    code->SetOperation(25, (FireStarterOpcode)0, 10);
    code->SetOperation(26, (FireStarterOpcode)0, 6);
    code->SetOperation(27, (FireStarterOpcode)1, 15);
    code->SetOperation(28, (FireStarterOpcode)0, 8);
    code->SetOperation(29, (FireStarterOpcode)2, 16);
    code->SetOperation(30, (FireStarterOpcode)2, 4);
    code->SetOperation(31, (FireStarterOpcode)1, 17);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 1;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 1610532691304413459;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.85486108f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
