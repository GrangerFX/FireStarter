#pragma once
#include "FireStarterState.h"

// Run date: 06/09/24 15:42:47 Pacific Daylight Time
// Run duration = 2905.167436 seconds
// Run generation = 365
// Run evolution = 9
// Run max result = 0.00000079
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 2;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000048
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141592f;
    data->d[1] = -0.196620f;
    data->d[2] = 0.000001f;
    data->d[3] = 1.431179f;
    data->d[4] = -0.017699f;
    data->d[5] = -1.276389f;
    data->d[6] = -2.156970f;
    data->d[7] = -2.943710f;
    data->d[8] = -2.684669f;
    data->d[9] = -2.063719f;
    data->d[10] = 0.085202f;
    data->d[11] = 1.178079f;
    data->d[12] = -0.101712f;
    data->d[13] = -3.028184f;
    data->d[14] = 4.217962f;
    data->d[15] = 1.617454f;
    data->d[16] = 1.058581f;
    data->d[17] = 0.706854f;
    data->d[18] = 1.084198f;
    data->d[19] = 0.779931f;
    data->d[20] = -0.466283f;
    data->d[21] = -0.000001f;
    data->d[22] = -0.994744f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000066
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090667f;
    data->d[1] = -0.132436f;
    data->d[2] = -0.000004f;
    data->d[3] = 0.825923f;
    data->d[4] = 2.092584f;
    data->d[5] = 4.115680f;
    data->d[6] = -14.873717f;
    data->d[7] = -0.000159f;
    data->d[8] = -0.405568f;
    data->d[9] = -1.428491f;
    data->d[10] = 2.655386f;
    data->d[11] = 1.726552f;
    data->d[12] = 0.457880f;
    data->d[13] = -0.664498f;
    data->d[14] = 2.314108f;
    data->d[15] = 0.435825f;
    data->d[16] = -4.484695f;
    data->d[17] = -1.510031f;
    data->d[18] = -0.920274f;
    data->d[19] = 0.749919f;
    data->d[20] = 0.312089f;
    data->d[21] = -1.251285f;
    data->d[22] = 0.094415f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000079
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617990f;
    data->d[1] = -0.498154f;
    data->d[2] = 0.000008f;
    data->d[3] = 3.346740f;
    data->d[4] = 0.003668f;
    data->d[5] = 0.810848f;
    data->d[6] = -0.611814f;
    data->d[7] = 2.307804f;
    data->d[8] = 0.942887f;
    data->d[9] = 2.631737f;
    data->d[10] = 1.724628f;
    data->d[11] = -1.671588f;
    data->d[12] = -0.006551f;
    data->d[13] = -0.430793f;
    data->d[14] = 0.912624f;
    data->d[15] = -0.308055f;
    data->d[16] = 2.090729f;
    data->d[17] = 0.287937f;
    data->d[18] = 0.154225f;
    data->d[19] = -0.546795f;
    data->d[20] = 0.108420f;
    data->d[21] = 0.390739f;
    data->d[22] = 1.340034f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 23);
    instructions->SetOperation(1, 0, 5);
    instructions->SetOperation(2, 1, 8);
    instructions->SetOperation(3, 0, 23);
    instructions->SetOperation(4, 1, 26);
    instructions->SetOperation(5, 0, 27);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 0, 3);
    instructions->SetOperation(8, 1, 13);
    instructions->SetOperation(9, 0, 0);
    instructions->SetOperation(10, 1, 20);
    instructions->SetOperation(11, 0, 23);
    instructions->SetOperation(12, 1, 22);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 1, 21);
    instructions->SetOperation(15, 0, 17);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 0, 25);
    instructions->SetOperation(18, 1, 9);
    instructions->SetOperation(19, 0, 28);
    instructions->SetOperation(20, 1, 27);
    instructions->SetOperation(21, 0, 20);
    instructions->SetOperation(22, 1, 10);
    instructions->SetOperation(23, 0, 1);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 1, 7);
    instructions->SetOperation(27, 0, 5);
    instructions->SetOperation(28, 1, 5);
    instructions->SetOperation(29, 0, 25);
    instructions->SetOperation(30, 1, 16);
    instructions->SetOperation(31, 0, 11);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 365;
    state.m_evolution = 9;
    state.m_index = 5;
    state.m_copy_index = 193;
    state.m_id = 193;
    state.m_test = 0;
    state.m_seed = 5416482362567363043;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000337f;
    state.m_optimizeValid = true;
} // LoadState
