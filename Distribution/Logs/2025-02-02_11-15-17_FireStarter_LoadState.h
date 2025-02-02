#pragma once
#include "FireStarterState.h"

// Run date: 02/02/25 11:15:17 Pacific Standard Time
// Run duration = 859.981251 seconds
// Run generation = 2
// Run evolution = 0
// Run max result = 0.00000017
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 4

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
    settings.m_opcodes = 4;

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
    data->d[0] = -3.10811424f;
    data->d[1] = -0.03347845f;
    data->d[2] = 0.75305337f;
    data->d[3] = 2.68988967f;
    data->d[4] = 0.02941432f;
    data->d[5] = -0.95326132f;
    data->d[6] = 0.55107623f;
    data->d[7] = 13.65281296f;
    data->d[8] = 0.38345635f;
    data->d[9] = 1.17371225f;
    data->d[10] = -1.19997025f;
    data->d[11] = -2.07493258f;
    data->d[12] = 0.71625918f;
    data->d[13] = 1.10621405f;
    data->d[14] = 2.53270364f;
    data->d[15] = 1.10579455f;
    data->d[16] = 0.91044039f;
    data->d[17] = -0.05482613f;
    data->d[18] = -0.13613233f;
    data->d[19] = 0.46832198f;
    data->d[20] = 0.29061723f;
    data->d[21] = 0.00000000f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
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
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 6);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 2);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 4);
    instructions->SetOperation(14, 1, 10);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 0, 11);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 15);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 17);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 1, 17);
    instructions->SetOperation(27, 0, 11);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 0, 19);
    instructions->SetOperation(31, 0, 20);
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
    state.m_generation = 2;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 10583548300395775693;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000017f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
