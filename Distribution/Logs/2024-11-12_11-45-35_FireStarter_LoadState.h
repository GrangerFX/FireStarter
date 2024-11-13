#pragma once
#include "FireStarterState.h"

// Run date: 11/12/24 11:45:35 Pacific Standard Time
// Run duration = 166.919099 seconds
// Run generation = 7
// Run evolution = 0
// Run max result = 0.00000063
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
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run iterations = 64
// Run passes = 500
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
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000063
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.15250361f;
    data->d[1] = 1.86094725f;
    data->d[2] = 2.71343708f;
    data->d[3] = -0.95368737f;
    data->d[4] = -1.40584242f;
    data->d[5] = -1.21053457f;
    data->d[6] = -0.21887664f;
    data->d[7] = -0.05313762f;
    data->d[8] = 0.76601195f;
    data->d[9] = -1.20881331f;
    data->d[10] = -0.38592353f;
    data->d[11] = -4.77319908f;
    data->d[12] = -0.00083849f;
    data->d[13] = 0.03615982f;
    data->d[14] = 1.14997280f;
    data->d[15] = 1.77794862f;
    data->d[16] = -0.59738618f;
    data->d[17] = 1.86101353f;
    data->d[18] = 0.20854290f;
    data->d[19] = 0.89105409f;
    data->d[20] = 1.14290094f;
    data->d[21] = -1.53718638f;
    data->d[22] = 1.10126364f;
    data->d[23] = 0.36568961f;
    data->d[24] = 1.82936084f;
    data->d[25] = 1.96327150f;
    data->d[26] = 1.06853127f;
    data->d[27] = 0.74854815f;
    data->d[28] = 0.29999036f;
    data->d[29] = -1.71874762f;
    *(result->MinResult()) = 0.00000063f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000063f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 1, 7);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 0, 4);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 1, 10);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 15);
    instructions->SetOperation(25, 1, 7);
    instructions->SetOperation(26, 0, 12);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 0, 3);
    instructions->SetOperation(30, 0, 10);
    instructions->SetOperation(31, 0, 18);
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
    state.m_generation = 7;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 1015;
    state.m_seed = 5494314273658817636;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000063f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
