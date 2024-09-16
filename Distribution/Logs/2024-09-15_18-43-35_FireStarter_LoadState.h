#pragma once
#include "FireStarterState.h"

// Run date: 09/15/24 18:43:35 Pacific Daylight Time
// Run duration = 16534.770761 seconds
// Run generation = 760
// Run evolution = 0
// Run max result = 0.00001192
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
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE_GPU;
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
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00001192
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.080996f;
    data->d[1] = -0.004313f;
    data->d[2] = 1.251894f;
    data->d[3] = -5.694738f;
    data->d[4] = 0.870238f;
    data->d[5] = -7.191571f;
    data->d[6] = -9.744349f;
    data->d[7] = -0.053356f;
    data->d[8] = -0.738188f;
    data->d[9] = 3.778100f;
    data->d[10] = -1.069625f;
    data->d[11] = -0.631339f;
    data->d[12] = 0.480191f;
    data->d[13] = -2.940332f;
    data->d[14] = 6.749084f;
    data->d[15] = -1.362748f;
    data->d[16] = 3.512831f;
    data->d[17] = -0.411161f;
    data->d[18] = -0.293404f;
    data->d[19] = 5.400740f;
    data->d[20] = 1.405033f;
    data->d[21] = -5.971642f;
    data->d[22] = -1.533992f;
    data->d[23] = 1.032211f;
    data->d[24] = -0.566944f;
    data->d[25] = -0.335635f;
    data->d[26] = -0.180941f;
    data->d[27] = -1.722761f;
    data->d[28] = 0.655507f;
    data->d[29] = -0.319331f;
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
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 28);
    instructions->SetOperation(2, 1, 1);
    instructions->SetOperation(3, 1, 7);
    instructions->SetOperation(4, 1, 17);
    instructions->SetOperation(5, 1, 12);
    instructions->SetOperation(6, 1, 17);
    instructions->SetOperation(7, 1, 17);
    instructions->SetOperation(8, 0, 25);
    instructions->SetOperation(9, 1, 15);
    instructions->SetOperation(10, 0, 22);
    instructions->SetOperation(11, 1, 23);
    instructions->SetOperation(12, 1, 15);
    instructions->SetOperation(13, 1, 28);
    instructions->SetOperation(14, 1, 25);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 0, 29);
    instructions->SetOperation(17, 0, 18);
    instructions->SetOperation(18, 0, 10);
    instructions->SetOperation(19, 1, 8);
    instructions->SetOperation(20, 1, 26);
    instructions->SetOperation(21, 0, 20);
    instructions->SetOperation(22, 0, 2);
    instructions->SetOperation(23, 1, 26);
    instructions->SetOperation(24, 1, 4);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 0, 4);
    instructions->SetOperation(28, 0, 29);
    instructions->SetOperation(29, 1, 11);
    instructions->SetOperation(30, 0, 8);
    instructions->SetOperation(31, 0, 26);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 760;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 11;
    state.m_seed = 14785631869951242195;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000023f;
    state.m_maxResult = 0.000012f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
