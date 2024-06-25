#pragma once
#include "FireStarterState.h"

// Run date: 06/25/24 10:07:22 Pacific Daylight Time
// Run duration = 525.120403 seconds
// Run generation = 274
// Run evolution = 10
// Run max result = 0.00000066
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
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
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.427943f;
    data->d[2] = -0.952145f;
    data->d[3] = -0.031461f;
    data->d[4] = 1.303774f;
    data->d[5] = -0.495562f;
    data->d[6] = 1.210898f;
    data->d[7] = 0.648475f;
    data->d[8] = -0.975543f;
    data->d[9] = 1.278013f;
    data->d[10] = 0.489619f;
    data->d[11] = 0.404400f;
    data->d[12] = -8.580314f;
    data->d[13] = 6.959401f;
    data->d[14] = -0.000007f;
    data->d[15] = -8.937016f;
    data->d[16] = 3.999340f;
    data->d[17] = -0.234961f;
    data->d[18] = -1.536828f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.036864f;
    data->d[2] = 1.310837f;
    data->d[3] = 0.920067f;
    data->d[4] = -0.307498f;
    data->d[5] = 0.736886f;
    data->d[6] = -0.282837f;
    data->d[7] = -1.388382f;
    data->d[8] = 0.640787f;
    data->d[9] = 2.051959f;
    data->d[10] = -4.858504f;
    data->d[11] = 1.369634f;
    data->d[12] = 15.172576f;
    data->d[13] = -5.189319f;
    data->d[14] = -0.319103f;
    data->d[15] = -0.001119f;
    data->d[16] = -2.087455f;
    data->d[17] = 2.738641f;
    data->d[18] = -1.234392f;
    data->d[19] = -0.118132f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000066
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.619415f;
    data->d[2] = 4.532474f;
    data->d[3] = 0.018685f;
    data->d[4] = 0.589956f;
    data->d[5] = 1.860980f;
    data->d[6] = 0.257228f;
    data->d[7] = 0.978503f;
    data->d[8] = -1.923774f;
    data->d[9] = -1.333502f;
    data->d[10] = 0.023566f;
    data->d[11] = 0.933898f;
    data->d[12] = -2.366524f;
    data->d[13] = 4.379913f;
    data->d[14] = 0.001959f;
    data->d[15] = -0.280829f;
    data->d[16] = -2.646020f;
    data->d[17] = -4.438577f;
    data->d[18] = -0.464582f;
    data->d[19] = 0.523599f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 16);
    instructions->SetOperation(1, 0, 5);
    instructions->SetOperation(2, 0, 16);
    instructions->SetOperation(3, 1, 27);
    instructions->SetOperation(4, 0, 7);
    instructions->SetOperation(5, 1, 15);
    instructions->SetOperation(6, 0, 15);
    instructions->SetOperation(7, 0, 29);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 0, 28);
    instructions->SetOperation(11, 1, 18);
    instructions->SetOperation(12, 0, 4);
    instructions->SetOperation(13, 1, 13);
    instructions->SetOperation(14, 0, 27);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 1, 15);
    instructions->SetOperation(17, 0, 18);
    instructions->SetOperation(18, 1, 26);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 1, 3);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 0, 20);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 1, 11);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 0, 5);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 0, 22);
    instructions->SetOperation(31, 1, 2);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 274;
    state.m_evolution = 10;
    state.m_index = 13;
    state.m_copy_index = 5;
    state.m_id = 5;
    state.m_test = 0;
    state.m_seed = 6988757475503341314;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000417f;
    state.m_optimizeValid = true;
} // LoadState
