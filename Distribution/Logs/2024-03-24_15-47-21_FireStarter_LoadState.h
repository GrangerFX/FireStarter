#pragma once
#include "FireStarterState.h"

// Run date: 03/24/24 15:47:21 Pacific Daylight Time
// Run duration = 1784.387524 seconds
// Run generation = 94
// Run evolution = 9
// Run max result = 0.00000036
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
// Run tests = 16
// Run streams = 1
// Run units = 8
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
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.538295f;
    data->d[1] = 1.691105f;
    data->d[2] = -0.464957f;
    data->d[3] = -0.526700f;
    data->d[4] = 0.355117f;
    data->d[5] = -2.207755f;
    data->d[6] = 0.219474f;
    data->d[7] = 1.420144f;
    data->d[8] = 0.049697f;
    data->d[9] = -1.342211f;
    data->d[10] = -1.599331f;
    data->d[11] = -0.557494f;
    data->d[12] = 0.090361f;
    data->d[13] = -0.030354f;
    data->d[14] = 1.165941f;
    data->d[15] = -0.000000f;
    data->d[16] = -1.631110f;
    data->d[17] = 0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000006
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.255695f;
    data->d[1] = -0.790265f;
    data->d[2] = -0.368392f;
    data->d[3] = -0.046151f;
    data->d[4] = 0.021291f;
    data->d[5] = -0.004124f;
    data->d[6] = -14.833763f;
    data->d[7] = -0.213419f;
    data->d[8] = 1.694253f;
    data->d[9] = 57.095234f;
    data->d[10] = -0.859498f;
    data->d[11] = -1.909320f;
    data->d[12] = 1.069042f;
    data->d[13] = -2.100066f;
    data->d[14] = -0.306220f;
    data->d[15] = -0.069346f;
    data->d[16] = 1.703501f;
    data->d[17] = 0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.516093f;
    data->d[1] = 1.351129f;
    data->d[2] = -0.659459f;
    data->d[3] = -0.454351f;
    data->d[4] = -0.597350f;
    data->d[5] = -0.131213f;
    data->d[6] = -2.762126f;
    data->d[7] = -3.756567f;
    data->d[8] = 0.427844f;
    data->d[9] = 0.526177f;
    data->d[10] = -0.287860f;
    data->d[11] = 3.769379f;
    data->d[12] = 0.937969f;
    data->d[13] = -0.002344f;
    data->d[14] = 4.248573f;
    data->d[15] = -0.465084f;
    data->d[16] = -1.125816f;
    data->d[17] = 0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 13);
    instructions->SetOperation(1, 1, 18);
    instructions->SetOperation(2, 0, 7);
    instructions->SetOperation(3, 0, 7);
    instructions->SetOperation(4, 1, 10);
    instructions->SetOperation(5, 1, 20);
    instructions->SetOperation(6, 0, 28);
    instructions->SetOperation(7, 0, 3);
    instructions->SetOperation(8, 1, 27);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 0, 28);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 0, 24);
    instructions->SetOperation(14, 0, 19);
    instructions->SetOperation(15, 1, 3);
    instructions->SetOperation(16, 1, 20);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 1, 22);
    instructions->SetOperation(19, 0, 17);
    instructions->SetOperation(20, 0, 26);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 0, 26);
    instructions->SetOperation(23, 1, 27);
    instructions->SetOperation(24, 0, 27);
    instructions->SetOperation(25, 1, 20);
    instructions->SetOperation(26, 0, 10);
    instructions->SetOperation(27, 1, 22);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 24);
    instructions->SetOperation(30, 1, 21);
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
    state.m_generation = 94;
    state.m_evolution = 9;
    state.m_index = 13;
    state.m_copy_index = 156;
    state.m_id = 156;
    state.m_test = 1;
    state.m_seed = 18350080603119552072;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000068f;
    state.m_optimizeValid = true;
} // LoadState
