#pragma once
#include "FireStarterState.h"

// Run date: 09/08/24 10:13:18 Pacific Daylight Time
// Run duration = 26.194573 seconds
// Run generation = 9
// Run evolution = 0
// Run max result = 0.00000024
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

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.109463f;
    data->d[1] = -3.069641f;
    data->d[2] = 1.321161f;
    data->d[3] = -2.013192f;
    data->d[4] = 0.367069f;
    data->d[5] = 1.570413f;
    data->d[6] = -0.179443f;
    data->d[7] = 4.650072f;
    data->d[8] = -0.258354f;
    data->d[9] = 4.279398f;
    data->d[10] = 1.838010f;
    data->d[11] = 4.295312f;
    data->d[12] = 4.509479f;
    data->d[13] = 0.721830f;
    data->d[14] = -0.985456f;
    data->d[15] = 0.303002f;
    data->d[16] = -7.688034f;
    data->d[17] = 0.862936f;
    data->d[18] = -0.758373f;
    data->d[19] = 2.124223f;
    data->d[20] = 0.708733f;
    data->d[21] = -0.316187f;
    data->d[22] = -2.007163f;
    data->d[23] = -0.863719f;
    data->d[24] = 1.982201f;
    data->d[25] = -0.991665f;
    data->d[26] = 0.450878f;
    data->d[27] = -0.572652f;
    data->d[28] = -6.546131f;
    data->d[29] = 0.681398f;
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
    instructions->SetOperation(0, 0, 6);
    instructions->SetOperation(1, 1, 13);
    instructions->SetOperation(2, 1, 13);
    instructions->SetOperation(3, 1, 21);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 0, 21);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 0, 23);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 29);
    instructions->SetOperation(10, 0, 28);
    instructions->SetOperation(11, 0, 25);
    instructions->SetOperation(12, 1, 4);
    instructions->SetOperation(13, 1, 18);
    instructions->SetOperation(14, 1, 28);
    instructions->SetOperation(15, 0, 15);
    instructions->SetOperation(16, 0, 7);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 0, 19);
    instructions->SetOperation(19, 1, 23);
    instructions->SetOperation(20, 1, 17);
    instructions->SetOperation(21, 1, 12);
    instructions->SetOperation(22, 1, 10);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 1, 21);
    instructions->SetOperation(25, 1, 10);
    instructions->SetOperation(26, 0, 28);
    instructions->SetOperation(27, 1, 5);
    instructions->SetOperation(28, 0, 26);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 0, 14);
    instructions->SetOperation(31, 0, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 9;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass =3;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
