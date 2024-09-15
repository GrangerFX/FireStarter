#pragma once
#include "FireStarterState.h"

// Run date: 09/14/24 17:00:28 Pacific Daylight Time
// Run duration = 29.187714 seconds
// Run generation = 13
// Run evolution = 0
// Run max result = 0.00000048
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

// Variation: 0  result = 0.00000048
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.299608f;
    data->d[1] = -0.344947f;
    data->d[2] = -0.029310f;
    data->d[3] = 1.128029f;
    data->d[4] = -0.573873f;
    data->d[5] = 0.638319f;
    data->d[6] = -6.884687f;
    data->d[7] = 3.532414f;
    data->d[8] = -2.355918f;
    data->d[9] = 3.769679f;
    data->d[10] = -0.886502f;
    data->d[11] = 4.730804f;
    data->d[12] = -1.343559f;
    data->d[13] = -0.698258f;
    data->d[14] = 1.131547f;
    data->d[15] = 1.628068f;
    data->d[16] = -0.971980f;
    data->d[17] = -1.798034f;
    data->d[18] = 1.235010f;
    data->d[19] = 1.370268f;
    data->d[20] = 0.014573f;
    data->d[21] = 0.509765f;
    data->d[22] = -2.671748f;
    data->d[23] = 2.293135f;
    data->d[24] = 0.690641f;
    data->d[25] = 1.295149f;
    data->d[26] = 1.040760f;
    data->d[27] = 0.986899f;
    data->d[28] = -0.295423f;
    data->d[29] = 5.013033f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 12);
    instructions->SetOperation(1, 1, 17);
    instructions->SetOperation(2, 0, 28);
    instructions->SetOperation(3, 1, 10);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 17);
    instructions->SetOperation(6, 1, 12);
    instructions->SetOperation(7, 0, 20);
    instructions->SetOperation(8, 1, 19);
    instructions->SetOperation(9, 0, 15);
    instructions->SetOperation(10, 0, 13);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 1, 1);
    instructions->SetOperation(14, 1, 27);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 4);
    instructions->SetOperation(17, 1, 27);
    instructions->SetOperation(18, 0, 25);
    instructions->SetOperation(19, 0, 25);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 0, 27);
    instructions->SetOperation(22, 1, 20);
    instructions->SetOperation(23, 1, 1);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 1, 23);
    instructions->SetOperation(26, 1, 20);
    instructions->SetOperation(27, 1, 0);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 0, 21);
    instructions->SetOperation(31, 1, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 13;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 3;
    state.m_seed = 17448258927230012683;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.001174f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
