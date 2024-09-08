#pragma once
#include "FireStarterState.h"

// Run date: 09/08/24 10:07:01 Pacific Daylight Time
// Run duration = 79.796488 seconds
// Run generation = 23
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
    data->d[0] = 3.422163f;
    data->d[1] = 0.621994f;
    data->d[2] = -2.794816f;
    data->d[3] = 0.720356f;
    data->d[4] = 2.604196f;
    data->d[5] = -1.749790f;
    data->d[6] = -2.322306f;
    data->d[7] = 6.197389f;
    data->d[8] = -1.859352f;
    data->d[9] = -0.000001f;
    data->d[10] = 3.241668f;
    data->d[11] = 0.308767f;
    data->d[12] = -0.792221f;
    data->d[13] = 2.287123f;
    data->d[14] = -0.546677f;
    data->d[15] = 0.805248f;
    data->d[16] = -0.789616f;
    data->d[17] = -1.356411f;
    data->d[18] = -0.644759f;
    data->d[19] = 0.333759f;
    data->d[20] = 0.164186f;
    data->d[21] = -0.233181f;
    data->d[22] = -1.571535f;
    data->d[23] = 2.057868f;
    data->d[24] = 1.881187f;
    data->d[25] = 0.868931f;
    data->d[26] = 0.439422f;
    data->d[27] = -2.128500f;
    data->d[28] = -0.858835f;
    data->d[29] = -1.380485f;
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
    instructions->SetOperation(0, 0, 26);
    instructions->SetOperation(1, 1, 29);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 29);
    instructions->SetOperation(4, 0, 18);
    instructions->SetOperation(5, 0, 16);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 11);
    instructions->SetOperation(8, 1, 24);
    instructions->SetOperation(9, 1, 14);
    instructions->SetOperation(10, 0, 24);
    instructions->SetOperation(11, 1, 28);
    instructions->SetOperation(12, 0, 12);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 0, 23);
    instructions->SetOperation(15, 1, 11);
    instructions->SetOperation(16, 1, 27);
    instructions->SetOperation(17, 1, 27);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 0, 3);
    instructions->SetOperation(20, 0, 21);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 0, 9);
    instructions->SetOperation(23, 1, 1);
    instructions->SetOperation(24, 1, 8);
    instructions->SetOperation(25, 1, 20);
    instructions->SetOperation(26, 1, 4);
    instructions->SetOperation(27, 0, 23);
    instructions->SetOperation(28, 1, 23);
    instructions->SetOperation(29, 1, 22);
    instructions->SetOperation(30, 0, 5);
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
    state.m_generation = 23;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 11;
    state.m_seed = 14785631869951242195;
    state.m_optimize_pass =3;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
