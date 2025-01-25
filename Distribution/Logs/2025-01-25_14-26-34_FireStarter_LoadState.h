#pragma once
#include "FireStarterState.h"

// Run date: 01/25/25 14:26:34 Pacific Standard Time
// Run duration = 8.812598 seconds
// Run generation = 10
// Run evolution = 0
// Run max result = 0.00016308
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

// Variation: 0  result = 0.00016308
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.95152962f;
    data->d[1] = 0.21060878f;
    data->d[2] = -1.45740581f;
    data->d[3] = 1.29472542f;
    data->d[4] = -0.45224035f;
    data->d[5] = -0.36437646f;
    data->d[6] = -1.65829921f;
    data->d[7] = 6.11138153f;
    data->d[8] = -2.55621099f;
    data->d[9] = -0.56846541f;
    data->d[10] = -2.21570539f;
    data->d[11] = 1.30329943f;
    data->d[12] = -6.48252392f;
    data->d[13] = 13.58356953f;
    data->d[14] = 0.00838923f;
    data->d[15] = -4.41419077f;
    data->d[16] = -0.05048708f;
    data->d[17] = 0.37711644f;
    data->d[18] = -10.28443336f;
    data->d[19] = -1.58521163f;
    data->d[20] = -0.65156215f;
    data->d[21] = 1.49190569f;
    data->d[22] = 0.25479874f;
    data->d[23] = 0.36205661f;
    data->d[24] = 0.58055204f;
    data->d[25] = -2.35056949f;
    data->d[26] = 2.09624720f;
    data->d[27] = -1.14509952f;
    data->d[28] = 0.49861419f;
    data->d[29] = -1.66730380f;
    *(result->MinResult()) = 0.00016308f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00016308f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 5, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 3, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 3, 4);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 1, 7);
    instructions->SetOperation(8, 5, 6);
    instructions->SetOperation(9, 5, 8);
    instructions->SetOperation(10, 3, 9);
    instructions->SetOperation(11, 3, 10);
    instructions->SetOperation(12, 3, 11);
    instructions->SetOperation(13, 3, 4);
    instructions->SetOperation(14, 5, 12);
    instructions->SetOperation(15, 5, 13);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 3, 8);
    instructions->SetOperation(18, 3, 1);
    instructions->SetOperation(19, 3, 14);
    instructions->SetOperation(20, 1, 12);
    instructions->SetOperation(21, 1, 9);
    instructions->SetOperation(22, 3, 2);
    instructions->SetOperation(23, 3, 6);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 5, 7);
    instructions->SetOperation(26, 5, 6);
    instructions->SetOperation(27, 5, 16);
    instructions->SetOperation(28, 5, 7);
    instructions->SetOperation(29, 3, 15);
    instructions->SetOperation(30, 3, 17);
    instructions->SetOperation(31, 1, 18);
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
    state.m_generation = 10;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 16105326913044134590;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00016308f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
