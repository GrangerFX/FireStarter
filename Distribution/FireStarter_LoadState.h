#pragma once
#include "FireStarterState.h"

// Run date: 03/01/25 10:07:24 Pacific Standard Time
// Run duration = 27.618669 seconds
// Run generation = 2
// Run evolution = 0
// Run max result = 0.00000086
// Run variations = 1
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
// Run generations = 0
// Run population = 65536
// Run passes = 384
// Run attempts = 0
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_passes = 384;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.80530405f;
    data->d[1] = -2.33628845f;
    data->d[2] = 0.06312569f;
    data->d[3] = 1.54158175f;
    data->d[4] = 0.64468789f;
    data->d[5] = 1.98378408f;
    data->d[6] = -0.86756599f;
    data->d[7] = 1.20393145f;
    data->d[8] = -0.28448829f;
    data->d[9] = 0.64925462f;
    data->d[10] = 1.11841822f;
    data->d[11] = -1.92116582f;
    data->d[12] = 1.11615849f;
    data->d[13] = 4.80659199f;
    data->d[14] = 7.05728436f;
    data->d[15] = 8.14118099f;
    data->d[16] = -0.32850522f;
    data->d[17] = 5.76025820f;
    data->d[18] = -0.97257608f;
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
    FireStarterResult *result = state.Result();
    *(result->MaxResult()) = 0.00000086f;
    LoadVariation0(state.Result());
} // LoadResult

inline unsigned int LoadCode(FireStarterCode* code)
{
    code->SetOperation(0, (FireStarterOpcode)1, 0);
    code->SetOperation(1, (FireStarterOpcode)1, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 2);
    code->SetOperation(3, (FireStarterOpcode)0, 3);
    code->SetOperation(4, (FireStarterOpcode)0, 4);
    code->SetOperation(5, (FireStarterOpcode)0, 5);
    code->SetOperation(6, (FireStarterOpcode)0, 6);
    code->SetOperation(7, (FireStarterOpcode)0, 5);
    code->SetOperation(8, (FireStarterOpcode)1, 7);
    code->SetOperation(9, (FireStarterOpcode)1, 8);
    code->SetOperation(10, (FireStarterOpcode)0, 9);
    code->SetOperation(11, (FireStarterOpcode)0, 10);
    code->SetOperation(12, (FireStarterOpcode)0, 1);
    code->SetOperation(13, (FireStarterOpcode)0, 11);
    code->SetOperation(14, (FireStarterOpcode)0, 10);
    code->SetOperation(15, (FireStarterOpcode)0, 3);
    code->SetOperation(16, (FireStarterOpcode)0, 10);
    code->SetOperation(17, (FireStarterOpcode)0, 2);
    code->SetOperation(18, (FireStarterOpcode)0, 5);
    code->SetOperation(19, (FireStarterOpcode)1, 12);
    code->SetOperation(20, (FireStarterOpcode)0, 8);
    code->SetOperation(21, (FireStarterOpcode)0, 13);
    code->SetOperation(22, (FireStarterOpcode)0, 6);
    code->SetOperation(23, (FireStarterOpcode)1, 14);
    code->SetOperation(24, (FireStarterOpcode)1, 0);
    code->SetOperation(25, (FireStarterOpcode)1, 15);
    code->SetOperation(26, (FireStarterOpcode)0, 16);
    code->SetOperation(27, (FireStarterOpcode)1, 1);
    code->SetOperation(28, (FireStarterOpcode)1, 17);
    code->SetOperation(29, (FireStarterOpcode)0, 18);
    code->SetOperation(30, (FireStarterOpcode)1, 10);
    code->SetOperation(31, (FireStarterOpcode)1, 10);
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
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 10;
    state.m_seed = 18339525634719915424;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
