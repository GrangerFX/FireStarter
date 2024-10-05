#pragma once
#include "FireStarterState.h"

// Run date: 10/05/24 14:57:56 Pacific Daylight Time
// Run duration = 51.035545 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00012096
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 32
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

    settings.m_mode = FIRESTARTER_OPTIMIZE_CPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 32;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00012096
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159226f;
    data->d[1] = 0.91761070f;
    data->d[2] = 2.48590589f;
    data->d[3] = -1.07049227f;
    data->d[4] = 6.61869431f;
    data->d[5] = 0.12398011f;
    data->d[6] = 1.05749035f;
    data->d[7] = -0.85978740f;
    data->d[8] = 0.04239180f;
    data->d[9] = -0.24072292f;
    data->d[10] = -0.09739214f;
    data->d[11] = -1.30017006f;
    data->d[12] = -3.76482606f;
    data->d[13] = 0.20120376f;
    data->d[14] = 4.41651917f;
    data->d[15] = 9.59646130f;
    data->d[16] = 4.44698095f;
    data->d[17] = -0.00881285f;
    data->d[18] = -2.19145370f;
    data->d[19] = -2.42706966f;
    data->d[20] = -4.05750847f;
    data->d[21] = -0.00094562f;
    data->d[22] = -2.81806159f;
    data->d[23] = 0.45832860f;
    data->d[24] = -1.32198858f;
    data->d[25] = 1.90008080f;
    data->d[26] = -0.24838932f;
    data->d[27] = -0.59917957f;
    data->d[28] = -1.89315808f;
    data->d[29] = 1.30850852f;
    *(result->MinResult()) = 0.00012096f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00012096f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 18);
    instructions->SetOperation(1, 0, 26);
    instructions->SetOperation(2, 0, 10);
    instructions->SetOperation(3, 0, 14);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 1, 11);
    instructions->SetOperation(6, 0, 16);
    instructions->SetOperation(7, 0, 2);
    instructions->SetOperation(8, 0, 24);
    instructions->SetOperation(9, 0, 6);
    instructions->SetOperation(10, 1, 19);
    instructions->SetOperation(11, 0, 21);
    instructions->SetOperation(12, 0, 3);
    instructions->SetOperation(13, 0, 15);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 0, 22);
    instructions->SetOperation(16, 1, 10);
    instructions->SetOperation(17, 0, 20);
    instructions->SetOperation(18, 0, 23);
    instructions->SetOperation(19, 0, 3);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 1, 13);
    instructions->SetOperation(23, 1, 21);
    instructions->SetOperation(24, 0, 27);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 1, 9);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 1, 4);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 7);
    instructions->SetOperation(31, 0, 10);
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
    state.m_generation = 0;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 1;
    state.m_seed = 18113915691549705305;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00393376f;
    state.m_maxResult = 0.00012096f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
