#pragma once
#include "FireStarterState.h"

// Run date: 11/12/24 20:17:58 Pacific Standard Time
// Run duration = 2465.016985 seconds
// Run generation = 26
// Run evolution = 0
// Run max result = 0.00000031
// Run variations = 1
// Run samples = 15
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
// Run iterations = 64
// Run passes = 512
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_samples = 15;
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
    settings.m_iterations = 64;
    settings.m_passes = 512;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000031
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = -0.05273028f;
    data->d[2] = 0.64154476f;
    data->d[3] = -0.70162117f;
    data->d[4] = 1.35982001f;
    data->d[5] = -0.55976307f;
    data->d[6] = -0.01027454f;
    data->d[7] = 0.01864500f;
    data->d[8] = -20.42888260f;
    data->d[9] = 2.75159597f;
    data->d[10] = 0.43822017f;
    data->d[11] = 0.39816058f;
    data->d[12] = 1.95771360f;
    data->d[13] = -1.62712121f;
    data->d[14] = -0.65945673f;
    data->d[15] = -1.04057932f;
    data->d[16] = -5.78506947f;
    data->d[17] = -5.81385803f;
    data->d[18] = 0.69353360f;
    data->d[19] = -0.96869582f;
    data->d[20] = -0.94620144f;
    data->d[21] = 1.64115620f;
    data->d[22] = -1.63611722f;
    data->d[23] = -0.64855725f;
    data->d[24] = 0.95813096f;
    data->d[25] = -1.08180737f;
    data->d[26] = 0.19318642f;
    data->d[27] = -0.29647627f;
    data->d[28] = -1.85955417f;
    data->d[29] = 1.29005742f;
    *(result->MinResult()) = 0.00000031f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000031f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 1, 12);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 1, 4);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 0, 12);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 13);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 1, 10);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 6);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 1, 14);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 10);
    instructions->SetOperation(31, 0, 1);
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
    state.m_generation = 26;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 12342844744282595477;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000031f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
