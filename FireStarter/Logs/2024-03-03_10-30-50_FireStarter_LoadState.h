#pragma once
#include "FireStarterState.h"

// Run date: 03/03/24 10:30:50 Pacific Standard Time
// Run duration = 4214.044122 seconds
// Run generation = 0
// Run evolution = 0
// Run max result = 0.00057865
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 8
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 29;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 8;
    settings.m_streams = 4;
    settings.m_units = 4;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00049365
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 4.217456f;
    data->d[1] = 4.222659f;
    data->d[2] = -0.078919f;
    data->d[3] = 1.693809f;
    data->d[4] = -0.153192f;
    data->d[5] = 0.885157f;
    data->d[6] = 2.548291f;
    data->d[7] = -2.231068f;
    data->d[8] = 0.348895f;
    data->d[9] = 0.010822f;
    data->d[10] = 7.849529f;
    data->d[11] = 2.141132f;
    data->d[12] = -4.605242f;
    data->d[13] = -2.076628f;
    data->d[14] = 1.702875f;
    data->d[15] = 0.982983f;
    data->d[16] = -5.411656f;
    data->d[17] = -0.486859f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000494f;
} // LoadVariation0

// Variation: 1  result = 0.00027633
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.695144f;
    data->d[1] = 2.722014f;
    data->d[2] = 0.005745f;
    data->d[3] = -0.390191f;
    data->d[4] = 0.557423f;
    data->d[5] = 0.332088f;
    data->d[6] = 2.164666f;
    data->d[7] = 0.604420f;
    data->d[8] = -1.381724f;
    data->d[9] = -1.601224f;
    data->d[10] = -1.462475f;
    data->d[11] = 0.057092f;
    data->d[12] = 0.075709f;
    data->d[13] = 2.549304f;
    data->d[14] = -0.111860f;
    data->d[15] = 1103.620850f;
    data->d[16] = -58.821396f;
    data->d[17] = -0.453503f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000276f;
} // LoadVariation1

// Variation: 2  result = 0.00057865
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 3.544063f;
    data->d[1] = -3.655392f;
    data->d[2] = -0.104062f;
    data->d[3] = 1.893537f;
    data->d[4] = 0.060630f;
    data->d[5] = -0.703718f;
    data->d[6] = -1.250682f;
    data->d[7] = -0.466385f;
    data->d[8] = 2.275659f;
    data->d[9] = 1.597884f;
    data->d[10] = 1.296518f;
    data->d[11] = -0.253770f;
    data->d[12] = 0.743133f;
    data->d[13] = -0.922420f;
    data->d[14] = -8.242579f;
    data->d[15] = -298.385864f;
    data->d[16] = 3.434546f;
    data->d[17] = -0.059182f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000579f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000579f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 25);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 0, 20);
    instructions->SetOperation(3, 1, 12);
    instructions->SetOperation(4, 0, 25);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 1, 4);
    instructions->SetOperation(7, 1, 23);
    instructions->SetOperation(8, 0, 2);
    instructions->SetOperation(9, 0, 9);
    instructions->SetOperation(10, 0, 5);
    instructions->SetOperation(11, 0, 5);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 0, 17);
    instructions->SetOperation(15, 0, 18);
    instructions->SetOperation(16, 0, 19);
    instructions->SetOperation(17, 1, 5);
    instructions->SetOperation(18, 0, 20);
    instructions->SetOperation(19, 0, 7);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 18);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 0, 28);
    instructions->SetOperation(24, 0, 4);
    instructions->SetOperation(25, 1, 12);
    instructions->SetOperation(26, 0, 21);
    instructions->SetOperation(27, 1, 5);
    instructions->SetOperation(28, 0, 20);
    instructions->SetOperation(29, 1, 27);
    instructions->SetOperation(30, 0, 19);
    instructions->SetOperation(31, 0, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 0;
    state.m_evolution = 0;
    state.m_children0 = 0;
    state.m_children1 = 0;
    state.m_index = 13;
    state.m_copy_index = 13;
    state.m_id = 13;
    state.m_test = 7;
    state.m_seed = 12536989917222022046;
    state.m_optimize_pass =8;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.000579f;
    state.m_evolveWeight = -1.000000f;
    state.m_optimizeValid = true;
} // LoadState
