#pragma once
#include "FireStarterState.h"

// Run date: 09/21/24 10:36:19 Pacific Daylight Time
// Run duration = 24.560970 seconds
// Run generation = 4
// Run evolution = 0
// Run max result = 0.00001176
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_RANDOM
// Run evolveSeed = 2
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 8
// Run units = 1
// Run states = 11000
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 0

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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_RANDOM;
    settings.m_evolveSeed = 2;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 8;
    settings.m_units = 1;
    settings.m_states = 11000;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 0;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00001176
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.510109f;
    data->d[1] = 0.013801f;
    data->d[2] = -1.346261f;
    data->d[3] = -1.405232f;
    data->d[4] = 0.104320f;
    data->d[5] = -1.377778f;
    data->d[6] = -0.178660f;
    data->d[7] = 2.426878f;
    data->d[8] = 2.235279f;
    data->d[9] = -0.763882f;
    data->d[10] = -1.087365f;
    data->d[11] = -1.538427f;
    data->d[12] = -0.855038f;
    data->d[13] = -0.130329f;
    data->d[14] = 0.577045f;
    data->d[15] = 1.021502f;
    data->d[16] = 2.222675f;
    data->d[17] = -1.724655f;
    data->d[18] = -0.566782f;
    data->d[19] = -0.923882f;
    data->d[20] = -1.183263f;
    data->d[21] = 0.712279f;
    data->d[22] = 1.265653f;
    data->d[23] = -1.918226f;
    data->d[24] = 0.829698f;
    data->d[25] = 0.676913f;
    data->d[26] = 1.070198f;
    data->d[27] = 1.932053f;
    data->d[28] = -1.675969f;
    data->d[29] = -1.886716f;
    *(result->MinResult()) = 0.000012f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.000012f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 23);
    instructions->SetOperation(1, 0, 25);
    instructions->SetOperation(2, 0, 26);
    instructions->SetOperation(3, 0, 12);
    instructions->SetOperation(4, 0, 5);
    instructions->SetOperation(5, 1, 1);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 0);
    instructions->SetOperation(8, 1, 5);
    instructions->SetOperation(9, 0, 19);
    instructions->SetOperation(10, 0, 26);
    instructions->SetOperation(11, 1, 26);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 1, 7);
    instructions->SetOperation(14, 0, 14);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 0, 7);
    instructions->SetOperation(19, 1, 9);
    instructions->SetOperation(20, 0, 7);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 0, 13);
    instructions->SetOperation(23, 0, 23);
    instructions->SetOperation(24, 1, 14);
    instructions->SetOperation(25, 0, 16);
    instructions->SetOperation(26, 1, 14);
    instructions->SetOperation(27, 0, 27);
    instructions->SetOperation(28, 1, 10);
    instructions->SetOperation(29, 0, 27);
    instructions->SetOperation(30, 0, 3);
    instructions->SetOperation(31, 0, 11);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 4;
    state.m_evolution = 0;
    state.m_index = 8;
    state.m_copy_index = 8;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 14933751349773510446;
    state.m_optimize_pass =0;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.000012f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
