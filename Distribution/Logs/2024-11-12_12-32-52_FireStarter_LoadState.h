#pragma once
#include "FireStarterState.h"

// Run date: 11/12/24 12:32:52 Pacific Standard Time
// Run duration = 111.200886 seconds
// Run generation = 17
// Run evolution = 0
// Run max result = 0.00000023
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
// Run population = 32768
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
    settings.m_population = 32768;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000023
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.29771364f;
    data->d[1] = -0.93529499f;
    data->d[2] = -1.30863881f;
    data->d[3] = -0.41353327f;
    data->d[4] = 0.61950850f;
    data->d[5] = -0.87555355f;
    data->d[6] = 0.50454158f;
    data->d[7] = -1.14078641f;
    data->d[8] = 1.39019203f;
    data->d[9] = 12.89559174f;
    data->d[10] = -0.25989038f;
    data->d[11] = -0.62552100f;
    data->d[12] = 1.05816507f;
    data->d[13] = 2.93603253f;
    data->d[14] = -11.90895271f;
    data->d[15] = -27.09353447f;
    data->d[16] = 0.52041054f;
    data->d[17] = -18.17989540f;
    data->d[18] = 0.01766219f;
    data->d[19] = -1.03460884f;
    data->d[20] = -0.80152053f;
    data->d[21] = -0.01401381f;
    data->d[22] = -1.17979062f;
    data->d[23] = -1.84038270f;
    data->d[24] = -1.37772465f;
    data->d[25] = -1.96354878f;
    data->d[26] = -0.03111581f;
    data->d[27] = 1.53024876f;
    data->d[28] = 1.55135667f;
    data->d[29] = 0.79355270f;
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
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 2);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 6);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 1, 4);
    instructions->SetOperation(15, 0, 7);
    instructions->SetOperation(16, 0, 7);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 0, 12);
    instructions->SetOperation(19, 1, 13);
    instructions->SetOperation(20, 0, 14);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 1, 2);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 0, 11);
    instructions->SetOperation(27, 1, 13);
    instructions->SetOperation(28, 1, 13);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 0, 5);
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
    state.m_generation = 17;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 1006;
    state.m_seed = 6148352552432017409;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000023f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
