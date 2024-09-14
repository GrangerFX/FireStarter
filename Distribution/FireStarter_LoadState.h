#pragma once
#include "FireStarterState.h"

// Run date: 09/14/24 15:48:06 Pacific Daylight Time
// Run duration = 83.836097 seconds
// Run generation = 24
// Run evolution = 0
// Run max result = 0.00009867
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
// Run iterations = 64
// Run passes = 100
// Run candidates = 16
// Run attempts = 0
// Run optimize = 4

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

    settings.m_mode = FIRESTARTER_OPTIMIZE_GPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_iterations = 64;
    settings.m_passes = 100;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 4;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00009867
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.822167f;
    data->d[1] = 1.876135f;
    data->d[2] = 0.714113f;
    data->d[3] = -0.671739f;
    data->d[4] = -0.292733f;
    data->d[5] = -3.543705f;
    data->d[6] = -0.647326f;
    data->d[7] = -1.675715f;
    data->d[8] = -1.053053f;
    data->d[9] = 0.657029f;
    data->d[10] = -0.545309f;
    data->d[11] = -0.490144f;
    data->d[12] = -0.744802f;
    data->d[13] = 0.126352f;
    data->d[14] = 0.196039f;
    data->d[15] = 3.451036f;
    data->d[16] = 0.630573f;
    data->d[17] = 1.145832f;
    data->d[18] = -0.451383f;
    data->d[19] = 1.960675f;
    data->d[20] = -4.173707f;
    data->d[21] = 0.006418f;
    data->d[22] = 0.117749f;
    data->d[23] = -0.837562f;
    data->d[24] = 1.901728f;
    data->d[25] = -0.186392f;
    data->d[26] = -0.898176f;
    data->d[27] = 2.217711f;
    data->d[28] = 0.821304f;
    data->d[29] = -3.806710f;
    *(result->MinResult()) = 0.000099f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.000099f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 5);
    instructions->SetOperation(1, 1, 12);
    instructions->SetOperation(2, 1, 27);
    instructions->SetOperation(3, 0, 27);
    instructions->SetOperation(4, 1, 12);
    instructions->SetOperation(5, 0, 8);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 0, 18);
    instructions->SetOperation(8, 1, 10);
    instructions->SetOperation(9, 1, 24);
    instructions->SetOperation(10, 0, 28);
    instructions->SetOperation(11, 0, 21);
    instructions->SetOperation(12, 1, 6);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 28);
    instructions->SetOperation(15, 0, 25);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 0, 23);
    instructions->SetOperation(18, 0, 1);
    instructions->SetOperation(19, 0, 0);
    instructions->SetOperation(20, 1, 3);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 1, 18);
    instructions->SetOperation(23, 0, 11);
    instructions->SetOperation(24, 1, 24);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 0, 20);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 4);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 0, 28);
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
    state.m_generation = 24;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 3;
    state.m_seed = 17448258927230012683;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000100f;
    state.m_maxResult = 0.000099f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
