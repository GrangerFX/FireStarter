#pragma once
#include "FireStarterState.h"

// Run date: 11/23/24 18:34:35 Pacific Standard Time
// Run duration = 803.241375 seconds
// Run generation = 9
// Run evolution = 0
// Run max result = 0.00000011
// Run variations = 1
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
// Run population = 32768
// Run passes = 512
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
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
    settings.m_population = 32768;
    settings.m_passes = 512;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000011
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.73533195f;
    data->d[1] = 2.31011343f;
    data->d[2] = -0.11265405f;
    data->d[3] = -0.37108594f;
    data->d[4] = -2.93590260f;
    data->d[5] = 0.96167111f;
    data->d[6] = -2.09908509f;
    data->d[7] = 1.34646833f;
    data->d[8] = -0.54812896f;
    data->d[9] = 2.09408522f;
    data->d[10] = -0.07453606f;
    data->d[11] = 0.28039089f;
    data->d[12] = -5.71480703f;
    data->d[13] = 0.70629007f;
    data->d[14] = -0.58699411f;
    data->d[15] = 0.13239859f;
    data->d[16] = -0.24673671f;
    data->d[17] = 0.93148541f;
    data->d[18] = 19.17823219f;
    data->d[19] = -4.35023022f;
    data->d[20] = 1.44126034f;
    data->d[21] = 1.11832082f;
    data->d[22] = 1.27580023f;
    data->d[23] = 0.93027496f;
    data->d[24] = -1.61958551f;
    data->d[25] = 0.74775696f;
    data->d[26] = 1.35535216f;
    data->d[27] = 1.14725530f;
    data->d[28] = -1.09451652f;
    data->d[29] = 0.36254370f;
    *(result->MinResult()) = 0.00000011f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000011f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 1);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 4);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 0, 1);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 1, 3);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 1, 6);
    instructions->SetOperation(14, 0, 9);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 1, 9);
    instructions->SetOperation(17, 0, 11);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 0, 6);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 1, 9);
    instructions->SetOperation(24, 1, 9);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 0, 16);
    instructions->SetOperation(27, 0, 17);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 1, 1);
    instructions->SetOperation(30, 0, 19);
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
    state.m_generation = 9;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 3410533065817118290;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000011f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
