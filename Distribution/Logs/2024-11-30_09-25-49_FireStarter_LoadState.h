#pragma once
#include "FireStarterState.h"

// Run date: 11/30/24 09:25:49 Pacific Standard Time
// Run duration = 100.343908 seconds
// Run generation = 33
// Run evolution = 0
// Run max result = 0.00000017
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

// Variation: 0  result = 0.00000017
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.85753447f;
    data->d[2] = -7.18067360f;
    data->d[3] = 4.70194244f;
    data->d[4] = 3.93320370f;
    data->d[5] = -1.39106238f;
    data->d[6] = 1.48599112f;
    data->d[7] = -0.55716038f;
    data->d[8] = 1.82978046f;
    data->d[9] = -0.00028694f;
    data->d[10] = -4.40051270f;
    data->d[11] = -3.14259052f;
    data->d[12] = 2.78415322f;
    data->d[13] = 6.79086113f;
    data->d[14] = 0.04780575f;
    data->d[15] = -1.99986100f;
    data->d[16] = -1.97126365f;
    data->d[17] = 2.76318526f;
    data->d[18] = -6.89887857f;
    data->d[19] = -2.85930228f;
    data->d[20] = 0.20929569f;
    data->d[21] = -0.91315335f;
    data->d[22] = 1.89012182f;
    data->d[23] = -1.19401169f;
    data->d[24] = 0.05825143f;
    data->d[25] = 1.71334553f;
    data->d[26] = -0.98238701f;
    data->d[27] = -1.97665358f;
    data->d[28] = 1.23770332f;
    data->d[29] = 2.22541189f;
    *(result->MinResult()) = 0.00000017f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000017f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 1);
    instructions->SetOperation(3, 1, 2);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 4);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 1, 6);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 1, 8);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 1, 15);
    instructions->SetOperation(20, 0, 14);
    instructions->SetOperation(21, 1, 16);
    instructions->SetOperation(22, 1, 17);
    instructions->SetOperation(23, 0, 5);
    instructions->SetOperation(24, 1, 9);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 19);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 0, 14);
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
    state.m_generation = 33;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 13;
    state.m_seed = 11927321697548538872;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000017f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
