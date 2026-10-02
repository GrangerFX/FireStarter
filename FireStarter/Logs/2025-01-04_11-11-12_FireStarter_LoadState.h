#pragma once
#include "FireStarterState.h"

// Run date: 01/04/25 11:11:12 Pacific Standard Time
// Run duration = 138.797481 seconds
// Run generation = 5
// Run evolution = 0
// Run max result = 0.00000023
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

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
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

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

// Variation: 0  result = 0.00000023
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = -0.76900548f;
    data->d[2] = -0.49475008f;
    data->d[3] = 0.01760511f;
    data->d[4] = 0.91292518f;
    data->d[5] = -0.05444765f;
    data->d[6] = -5.88370180f;
    data->d[7] = 0.55824488f;
    data->d[8] = 12.56070232f;
    data->d[9] = -2.09197378f;
    data->d[10] = 2.18498063f;
    data->d[11] = 0.69868666f;
    data->d[12] = 2.48505187f;
    data->d[13] = 13.23974609f;
    data->d[14] = -0.98045629f;
    data->d[15] = 8.86277199f;
    data->d[16] = 14.73671436f;
    data->d[17] = -0.00326558f;
    data->d[18] = 0.74124682f;
    data->d[19] = -2.08793879f;
    data->d[20] = 1.15822279f;
    data->d[21] = 2.12897897f;
    data->d[22] = 0.40457308f;
    data->d[23] = 1.73951209f;
    data->d[24] = 1.58965039f;
    data->d[25] = 0.00662530f;
    data->d[26] = 0.70116168f;
    data->d[27] = 0.76727617f;
    data->d[28] = -1.73569012f;
    data->d[29] = -2.07713461f;
    *(result->MinResult()) = 0.00000023f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000023f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 1);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 0, 3);
    instructions->SetOperation(11, 0, 1);
    instructions->SetOperation(12, 1, 8);
    instructions->SetOperation(13, 0, 9);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 1, 8);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 1, 4);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 0, 14);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 1, 3);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 0, 5);
    instructions->SetOperation(25, 0, 12);
    instructions->SetOperation(26, 1, 10);
    instructions->SetOperation(27, 1, 4);
    instructions->SetOperation(28, 1, 4);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 0, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.LoadCodeFromProgram();
    state.m_generation = 5;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 42;
    state.m_seed = 12520615479518073849;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000023f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
