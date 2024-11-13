#pragma once
#include "FireStarterState.h"

// Run date: 11/12/24 15:43:35 Pacific Standard Time
// Run duration = 82.366274 seconds
// Run generation = 74
// Run evolution = 0
// Run max result = 0.00000015
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
// Run candidates = 32
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
    settings.m_candidates = 32;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000015
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.01681888f;
    data->d[1] = -1.02346754f;
    data->d[2] = -1.10130620f;
    data->d[3] = -0.05748029f;
    data->d[4] = -1.88054740f;
    data->d[5] = 1.51760423f;
    data->d[6] = -0.99113458f;
    data->d[7] = -0.68346173f;
    data->d[8] = 3.61545777f;
    data->d[9] = 3.21208405f;
    data->d[10] = -0.46117082f;
    data->d[11] = 0.00465970f;
    data->d[12] = -6.07801580f;
    data->d[13] = 4.67689705f;
    data->d[14] = 2.62680268f;
    data->d[15] = 1.27589488f;
    data->d[16] = 0.01074349f;
    data->d[17] = -0.24943709f;
    data->d[18] = -11.54700089f;
    data->d[19] = -0.59224993f;
    data->d[20] = -2.39592862f;
    data->d[21] = 0.64374983f;
    data->d[22] = -0.26782036f;
    data->d[23] = 1.17011285f;
    data->d[24] = -1.79864943f;
    data->d[25] = -1.41609550f;
    data->d[26] = -1.82154930f;
    data->d[27] = -1.82944560f;
    data->d[28] = 1.45403433f;
    data->d[29] = 1.86533761f;
    *(result->MinResult()) = 0.00000015f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000015f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 2);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 1, 5);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 14);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 0, 16);
    instructions->SetOperation(20, 1, 17);
    instructions->SetOperation(21, 0, 18);
    instructions->SetOperation(22, 0, 11);
    instructions->SetOperation(23, 0, 12);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 1, 17);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 0, 4);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 0, 15);
    instructions->SetOperation(31, 0, 21);
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
    state.m_generation = 74;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 10;
    state.m_seed = 5170670892670823160;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000015f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
