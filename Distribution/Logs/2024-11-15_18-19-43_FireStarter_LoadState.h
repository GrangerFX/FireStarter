#pragma once
#include "FireStarterState.h"

// Run date: 11/15/24 18:19:43 Pacific Standard Time
// Run duration = 907.382564 seconds
// Run generation = 11
// Run evolution = 0
// Run max result = 0.00000044
// Run variations = 1
// Run samples = 15
// Run instructions = 28
// Run registers = 28
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

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_samples = 15;
    settings.m_instructions = 28;
    settings.m_registers = 28;
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

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000044
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.11821049f;
    data->d[1] = -1.19669342f;
    data->d[2] = 0.82532424f;
    data->d[3] = 1.92373288f;
    data->d[4] = -0.19044212f;
    data->d[5] = -0.96142745f;
    data->d[6] = 2.12695360f;
    data->d[7] = 0.12308420f;
    data->d[8] = -2.44401622f;
    data->d[9] = -12.24719143f;
    data->d[10] = 1.17044687f;
    data->d[11] = 0.15964265f;
    data->d[12] = -0.43132523f;
    data->d[13] = -1.52978003f;
    data->d[14] = 3.15263391f;
    data->d[15] = 4.79172897f;
    data->d[16] = -1.14216208f;
    data->d[17] = 0.66513133f;
    data->d[18] = 2.22432947f;
    data->d[19] = -0.08642562f;
    data->d[20] = 2.23870945f;
    data->d[21] = -1.00532830f;
    data->d[22] = -1.96228695f;
    data->d[23] = 0.84095764f;
    data->d[24] = 2.33125186f;
    data->d[25] = 1.90116882f;
    data->d[26] = -1.20527518f;
    data->d[27] = 0.27877265f;
    *(result->MinResult()) = 0.00000044f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000044f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 1, 3);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 0, 9);
    instructions->SetOperation(20, 1, 8);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 1, 6);
    instructions->SetOperation(23, 1, 16);
    instructions->SetOperation(24, 0, 10);
    instructions->SetOperation(25, 1, 14);
    instructions->SetOperation(26, 1, 17);
    instructions->SetOperation(27, 0, 2);
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
    state.m_generation = 11;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 6631598448425945208;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000044f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
