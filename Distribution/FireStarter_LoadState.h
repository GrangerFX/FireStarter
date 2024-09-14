#pragma once
#include "FireStarterState.h"

// Run date: 09/14/24 16:11:19 Pacific Daylight Time
// Run duration = 251.807601 seconds
// Run generation = 121
// Run evolution = 0
// Run max result = 0.00000066
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

// Variation: 0  result = 0.00000066
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.754407f;
    data->d[1] = -0.312941f;
    data->d[2] = -0.883107f;
    data->d[3] = 0.862688f;
    data->d[4] = 1.426362f;
    data->d[5] = 1.452419f;
    data->d[6] = 1.459319f;
    data->d[7] = -0.425592f;
    data->d[8] = 0.661286f;
    data->d[9] = -0.000000f;
    data->d[10] = -1.612643f;
    data->d[11] = 2.904891f;
    data->d[12] = -7.235397f;
    data->d[13] = -0.220890f;
    data->d[14] = -0.444546f;
    data->d[15] = -2.480489f;
    data->d[16] = 0.856380f;
    data->d[17] = -3.044159f;
    data->d[18] = -3.239121f;
    data->d[19] = 0.230673f;
    data->d[20] = -0.213682f;
    data->d[21] = 0.635189f;
    data->d[22] = -0.260787f;
    data->d[23] = 1.199859f;
    data->d[24] = -6.107053f;
    data->d[25] = 0.353306f;
    data->d[26] = 1.728926f;
    data->d[27] = -3.209849f;
    data->d[28] = -0.673017f;
    data->d[29] = 0.535867f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 6);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 1, 23);
    instructions->SetOperation(3, 0, 17);
    instructions->SetOperation(4, 0, 20);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 9);
    instructions->SetOperation(7, 0, 11);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 0, 29);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 1, 3);
    instructions->SetOperation(12, 1, 7);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 29);
    instructions->SetOperation(15, 1, 5);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 0, 0);
    instructions->SetOperation(20, 0, 8);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 0, 28);
    instructions->SetOperation(24, 0, 5);
    instructions->SetOperation(25, 1, 8);
    instructions->SetOperation(26, 0, 29);
    instructions->SetOperation(27, 1, 2);
    instructions->SetOperation(28, 0, 13);
    instructions->SetOperation(29, 0, 11);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 0, 28);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 121;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 3;
    state.m_seed = 17448258927230012683;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000043f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
