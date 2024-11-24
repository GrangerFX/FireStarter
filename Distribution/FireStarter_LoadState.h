#pragma once
#include "FireStarterState.h"

// Run date: 11/24/24 10:47:30 Pacific Standard Time
// Run duration = 40.053042 seconds
// Run generation = 2
// Run evolution = 0
// Run max result = 0.00000054
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

// Variation: 0  result = 0.00000054
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.19719553f;
    data->d[1] = -0.28063232f;
    data->d[2] = 0.70584458f;
    data->d[3] = -1.47004545f;
    data->d[4] = 2.96803832f;
    data->d[5] = -0.70551676f;
    data->d[6] = -0.68244410f;
    data->d[7] = -1.13032568f;
    data->d[8] = 1.68071079f;
    data->d[9] = -0.11036986f;
    data->d[10] = -2.15047050f;
    data->d[11] = -0.06111309f;
    data->d[12] = -0.44957814f;
    data->d[13] = -3.18661547f;
    data->d[14] = -0.22882436f;
    data->d[15] = -1.82434869f;
    data->d[16] = -0.38318554f;
    data->d[17] = -0.41241014f;
    data->d[18] = 5.88664961f;
    data->d[19] = -1.80848122f;
    data->d[20] = 0.59317535f;
    data->d[21] = 0.11702124f;
    data->d[22] = -1.03123331f;
    data->d[23] = -1.38244677f;
    data->d[24] = -2.34128499f;
    data->d[25] = 1.83554161f;
    data->d[26] = 1.09324527f;
    data->d[27] = 0.92768157f;
    data->d[28] = 1.18686450f;
    data->d[29] = -0.58644783f;
    *(result->MinResult()) = 0.00000054f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000054f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 0, 2);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 0, 10);
    instructions->SetOperation(18, 1, 7);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 10);
    instructions->SetOperation(23, 0, 5);
    instructions->SetOperation(24, 1, 12);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 1, 13);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 1, 7);
    instructions->SetOperation(30, 0, 11);
    instructions->SetOperation(31, 1, 13);
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
    state.m_test = 8;
    state.m_seed = 558438325330056430;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000054f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
