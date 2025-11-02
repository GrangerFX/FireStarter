#pragma once
#include "FireStarterState.h"

// Run date: 11/02/25 09:33:56 Pacific Standard Time
// Run duration = 456.133545 seconds
// Run test = 0
// Run generation = 9
// Run evolution = 0
// Run precision  = 7.78049850
// Run max result = 0.60417175
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

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

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
    *(result->MaxResult()) = 0.60417175f;
    *(result->EvolveAge1()) = 2;
    *(result->EvolveAge2()) = 0;
    FireStarterData *data = result->Data();
    data->d[0] = 0.82264674f;
    data->d[1] = 1.87114942f;
    data->d[2] = 0.16510494f;
    data->d[3] = 2.01525140f;
    data->d[4] = 2.38194513f;
    data->d[5] = -2.52716255f;
    data->d[6] = 0.93014961f;
    data->d[7] = -0.44079390f;
    data->d[8] = -0.53249997f;
    data->d[9] = 0.04847958f;
    data->d[10] = -1.88151348f;
    data->d[11] = -1.97213244f;
    data->d[12] = 1.63166654f;
    data->d[13] = -0.44765186f;
    data->d[14] = -0.20457369f;
    data->d[15] = 2.14311409f;
    data->d[16] = -0.51328552f;
    data->d[17] = -4.53963184f;
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
    code->SetOperation(0, (FireStarterOpcode)0, 0);
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)2, 0);
    code->SetOperation(3, (FireStarterOpcode)1, 2);
    code->SetOperation(4, (FireStarterOpcode)0, 3);
    code->SetOperation(5, (FireStarterOpcode)0, 4);
    code->SetOperation(6, (FireStarterOpcode)0, 5);
    code->SetOperation(7, (FireStarterOpcode)1, 6);
    code->SetOperation(8, (FireStarterOpcode)1, 7);
    code->SetOperation(9, (FireStarterOpcode)0, 0);
    code->SetOperation(10, (FireStarterOpcode)2, 8);
    code->SetOperation(11, (FireStarterOpcode)2, 1);
    code->SetOperation(12, (FireStarterOpcode)1, 2);
    code->SetOperation(13, (FireStarterOpcode)0, 1);
    code->SetOperation(14, (FireStarterOpcode)1, 9);
    code->SetOperation(15, (FireStarterOpcode)0, 10);
    code->SetOperation(16, (FireStarterOpcode)0, 11);
    code->SetOperation(17, (FireStarterOpcode)2, 12);
    code->SetOperation(18, (FireStarterOpcode)1, 13);
    code->SetOperation(19, (FireStarterOpcode)1, 7);
    code->SetOperation(20, (FireStarterOpcode)2, 6);
    code->SetOperation(21, (FireStarterOpcode)2, 13);
    code->SetOperation(22, (FireStarterOpcode)0, 14);
    code->SetOperation(23, (FireStarterOpcode)2, 12);
    code->SetOperation(24, (FireStarterOpcode)1, 9);
    code->SetOperation(25, (FireStarterOpcode)2, 1);
    code->SetOperation(26, (FireStarterOpcode)2, 15);
    code->SetOperation(27, (FireStarterOpcode)1, 12);
    code->SetOperation(28, (FireStarterOpcode)0, 16);
    code->SetOperation(29, (FireStarterOpcode)0, 6);
    code->SetOperation(30, (FireStarterOpcode)1, 4);
    code->SetOperation(31, (FireStarterOpcode)0, 17);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 9;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_evolveIndex = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 14494794221739721131;
    state.m_optimize_pass = 0;
    state.m_bestResult = 0.60417175f;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
