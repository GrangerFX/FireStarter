#pragma once
#include "FireStarterState.h"

// Run date: 02/16/25 19:35:25 Pacific Standard Time
// Run duration = 23.922348 seconds
// Run generation = 5
// Run evolution = 1
// Run max result = 0.00000204
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 262144
// Run passes = 512
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

    settings.m_mode = FIRESTARTER_EVOLVE_CPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_passes = 512;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000204
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.57079804f;
    data->d[1] = -0.06241390f;
    data->d[2] = -0.23370637f;
    data->d[3] = -1.71521127f;
    data->d[4] = -0.25248030f;
    data->d[5] = 3.14774919f;
    data->d[6] = -1.26059341f;
    data->d[7] = 2.24405718f;
    data->d[8] = -0.00046916f;
    data->d[9] = 28.40366554f;
    data->d[10] = 5.64911604f;
    data->d[11] = 0.51338047f;
    data->d[12] = 8.11582851f;
    data->d[13] = 0.79209089f;
    data->d[14] = 0.28730115f;
    data->d[15] = -0.14930736f;
    data->d[16] = -0.98960978f;
    data->d[17] = 1.80328059f;
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
    *(result->MinResult()) = 0.00000204f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000204f;
} // LoadResult

inline unsigned int LoadCode(FireStarterCode* code)
{
    code->SetOperation(0, (FireStarterOpcode)1, 0);
    code->SetOperation(1, (FireStarterOpcode)0, 1);
    code->SetOperation(2, (FireStarterOpcode)0, 1);
    code->SetOperation(3, (FireStarterOpcode)1, 2);
    code->SetOperation(4, (FireStarterOpcode)0, 3);
    code->SetOperation(5, (FireStarterOpcode)1, 4);
    code->SetOperation(6, (FireStarterOpcode)1, 5);
    code->SetOperation(7, (FireStarterOpcode)0, 3);
    code->SetOperation(8, (FireStarterOpcode)1, 6);
    code->SetOperation(9, (FireStarterOpcode)0, 7);
    code->SetOperation(10, (FireStarterOpcode)0, 8);
    code->SetOperation(11, (FireStarterOpcode)0, 9);
    code->SetOperation(12, (FireStarterOpcode)0, 0);
    code->SetOperation(13, (FireStarterOpcode)0, 1);
    code->SetOperation(14, (FireStarterOpcode)1, 10);
    code->SetOperation(15, (FireStarterOpcode)0, 4);
    code->SetOperation(16, (FireStarterOpcode)0, 11);
    code->SetOperation(17, (FireStarterOpcode)1, 9);
    code->SetOperation(18, (FireStarterOpcode)1, 12);
    code->SetOperation(19, (FireStarterOpcode)1, 13);
    code->SetOperation(20, (FireStarterOpcode)0, 14);
    code->SetOperation(21, (FireStarterOpcode)0, 15);
    code->SetOperation(22, (FireStarterOpcode)0, 16);
    code->SetOperation(23, (FireStarterOpcode)0, 3);
    code->SetOperation(24, (FireStarterOpcode)0, 14);
    code->SetOperation(25, (FireStarterOpcode)1, 17);
    code->SetOperation(26, (FireStarterOpcode)0, 6);
    code->SetOperation(27, (FireStarterOpcode)1, 5);
    code->SetOperation(28, (FireStarterOpcode)0, 3);
    code->SetOperation(29, (FireStarterOpcode)0, 7);
    code->SetOperation(30, (FireStarterOpcode)0, 13);
    code->SetOperation(31, (FireStarterOpcode)0, 11);
    return code->Optimize();
} // LoadCode

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    state.m_uniqueRegisters = LoadCode(state.Code());
    state.m_generation = 5;
    state.m_evolution = 1;
    state.m_index = 4;
    state.m_copy_index = 1;
    state.m_id = 1;
    state.m_test = 0;
    state.m_seed = 2694197752937215252;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00000251f;
    state.m_maxResult = 0.00000204f;
    state.m_evolveWeight = 0.000010f;
    state.m_optimizeValid = true;
} // LoadState
