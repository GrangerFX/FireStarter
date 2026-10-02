#pragma once
#include "FireStarterState.h"

// Run date: 11/13/24 17:23:17 Pacific Standard Time
// Run duration = 1530.708796 seconds
// Run generation = 8
// Run evolution = 0
// Run max result = 0.00000020
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
// Run startScale = 3.000000f
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
    settings.m_startScale = 3.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000020
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.09549383f;
    data->d[2] = 1.80983388f;
    data->d[3] = -6.12853384f;
    data->d[4] = 0.48027971f;
    data->d[5] = 0.38916773f;
    data->d[6] = 0.91890866f;
    data->d[7] = 1.92776680f;
    data->d[8] = -0.37376183f;
    data->d[9] = -4.14893532f;
    data->d[10] = 0.51697022f;
    data->d[11] = -1.08519161f;
    data->d[12] = -15.76971912f;
    data->d[13] = 4.58808374f;
    data->d[14] = 0.00413207f;
    data->d[15] = 1.61617875f;
    data->d[16] = 4.36230469f;
    data->d[17] = -0.72402966f;
    data->d[18] = 7.19217682f;
    data->d[19] = 0.85924733f;
    data->d[20] = -2.13556623f;
    data->d[21] = 0.35679674f;
    data->d[22] = -0.30039430f;
    data->d[23] = -1.66070247f;
    data->d[24] = -0.14982893f;
    data->d[25] = -2.84827471f;
    data->d[26] = 2.79676080f;
    data->d[27] = -2.67915940f;
    data->d[28] = 2.79025912f;
    data->d[29] = -2.75237465f;
    *(result->MinResult()) = 0.00000020f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000020f;
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
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 1, 4);
    instructions->SetOperation(13, 0, 11);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 0, 16);
    instructions->SetOperation(20, 0, 17);
    instructions->SetOperation(21, 1, 8);
    instructions->SetOperation(22, 0, 7);
    instructions->SetOperation(23, 0, 6);
    instructions->SetOperation(24, 0, 17);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 20);
    instructions->SetOperation(28, 1, 11);
    instructions->SetOperation(29, 1, 17);
    instructions->SetOperation(30, 0, 21);
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
    state.m_generation = 8;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 1800000374512704831;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000020f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
