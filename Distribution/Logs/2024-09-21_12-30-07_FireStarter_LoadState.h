#pragma once
#include "FireStarterState.h"

// Run date: 09/21/24 12:30:07 Pacific Daylight Time
// Run duration = 2390.701618 seconds
// Run generation = 8
// Run evolution = 0
// Run max result = 0.00000017
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

// Variation: 0  result = 0.00000017
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.210756f;
    data->d[1] = -3.141593f;
    data->d[2] = 1.696884f;
    data->d[3] = -0.059354f;
    data->d[4] = -2.000431f;
    data->d[5] = -1.587844f;
    data->d[6] = -1.140303f;
    data->d[7] = -7.605507f;
    data->d[8] = -1.464225f;
    data->d[9] = -2.100748f;
    data->d[10] = -1.387661f;
    data->d[11] = -0.175824f;
    data->d[12] = 0.843068f;
    data->d[13] = 4.804994f;
    data->d[14] = 0.580998f;
    data->d[15] = 1.367808f;
    data->d[16] = -2.603024f;
    data->d[17] = -2.515347f;
    data->d[18] = -0.095546f;
    data->d[19] = 1.432415f;
    data->d[20] = -5.181203f;
    data->d[21] = -2.665231f;
    data->d[22] = -1.145126f;
    data->d[23] = 0.461118f;
    data->d[24] = 3.853635f;
    data->d[25] = 1.512113f;
    data->d[26] = 1.361432f;
    data->d[27] = -0.624132f;
    data->d[28] = 11.438958f;
    data->d[29] = -0.085693f;
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
    instructions->SetOperation(0, 1, 1);
    instructions->SetOperation(1, 0, 5);
    instructions->SetOperation(2, 0, 15);
    instructions->SetOperation(3, 0, 14);
    instructions->SetOperation(4, 0, 0);
    instructions->SetOperation(5, 0, 11);
    instructions->SetOperation(6, 0, 29);
    instructions->SetOperation(7, 0, 15);
    instructions->SetOperation(8, 0, 27);
    instructions->SetOperation(9, 1, 2);
    instructions->SetOperation(10, 0, 4);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 0, 18);
    instructions->SetOperation(14, 0, 5);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 0, 17);
    instructions->SetOperation(17, 1, 25);
    instructions->SetOperation(18, 0, 23);
    instructions->SetOperation(19, 1, 25);
    instructions->SetOperation(20, 1, 5);
    instructions->SetOperation(21, 1, 12);
    instructions->SetOperation(22, 1, 22);
    instructions->SetOperation(23, 1, 3);
    instructions->SetOperation(24, 1, 2);
    instructions->SetOperation(25, 1, 3);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 0, 27);
    instructions->SetOperation(29, 1, 23);
    instructions->SetOperation(30, 0, 3);
    instructions->SetOperation(31, 0, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 8;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000670f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
