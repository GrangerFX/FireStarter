#pragma once
#include "FireStarterState.h"

// Run date: 11/13/24 18:11:27 Pacific Standard Time
// Run duration = 1446.661347 seconds
// Run generation = 6
// Run evolution = 0
// Run max result = 0.00000016
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
// Run startScale = 4.000000f
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
    settings.m_startScale = 4.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000016
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.05786986f;
    data->d[2] = -0.14832103f;
    data->d[3] = 2.95921850f;
    data->d[4] = 4.57295799f;
    data->d[5] = -2.67692184f;
    data->d[6] = -1.35037518f;
    data->d[7] = 0.84057510f;
    data->d[8] = -0.00264017f;
    data->d[9] = 8.41610527f;
    data->d[10] = -16.61365700f;
    data->d[11] = -10.82999706f;
    data->d[12] = -3.75503230f;
    data->d[13] = -3.19876218f;
    data->d[14] = -2.50733304f;
    data->d[15] = -3.29283261f;
    data->d[16] = -1.07810771f;
    data->d[17] = 0.19562465f;
    data->d[18] = 5.15365171f;
    data->d[19] = -4.93897438f;
    data->d[20] = -3.77703786f;
    data->d[21] = -2.54615116f;
    data->d[22] = -3.24166989f;
    data->d[23] = -1.67995894f;
    data->d[24] = 0.71594453f;
    data->d[25] = 3.07264853f;
    data->d[26] = 2.27703142f;
    data->d[27] = -0.82467359f;
    data->d[28] = -2.63915038f;
    data->d[29] = 1.68768108f;
    *(result->MinResult()) = 0.00000016f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000016f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 1);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 1, 6);
    instructions->SetOperation(8, 1, 5);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 0, 5);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 12);
    instructions->SetOperation(17, 1, 9);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 1, 9);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 0, 17);
    instructions->SetOperation(24, 0, 7);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 1, 19);
    instructions->SetOperation(27, 1, 20);
    instructions->SetOperation(28, 0, 5);
    instructions->SetOperation(29, 1, 15);
    instructions->SetOperation(30, 0, 7);
    instructions->SetOperation(31, 0, 2);
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
    state.m_generation = 6;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 178;
    state.m_seed = 5759976344502492244;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000016f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
