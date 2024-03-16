#pragma once
#include "FireStarterState.h"

// Run date: 03/15/24 19:33:13 Pacific Daylight Time
// Run duration = 6259.580074 seconds
// Run generation = 324
// Run evolution = 10
// Run max result = 0.00000012
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
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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
    settings.m_streams = 4;
    settings.m_units = 4;
    settings.m_states = 16;
    settings.m_generations = 200;
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

// Variation: 0  result = 0.00000008
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.232931f;
    data->d[1] = -0.731773f;
    data->d[2] = -1.450820f;
    data->d[3] = -0.807442f;
    data->d[4] = 0.674578f;
    data->d[5] = 1.405237f;
    data->d[6] = 0.001376f;
    data->d[7] = 21.978121f;
    data->d[8] = 0.314892f;
    data->d[9] = 0.154938f;
    data->d[10] = 1.417282f;
    data->d[11] = 1.011831f;
    data->d[12] = 1.468962f;
    data->d[13] = 1.609643f;
    data->d[14] = -0.197379f;
    data->d[15] = -2.589989f;
    data->d[16] = -3.058069f;
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

// Variation: 1  result = 0.00000000
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.216994f;
    data->d[1] = -0.670654f;
    data->d[2] = 2.380530f;
    data->d[3] = -0.590663f;
    data->d[4] = 1.016484f;
    data->d[5] = -0.034726f;
    data->d[6] = 15.428337f;
    data->d[7] = -0.001838f;
    data->d[8] = -2.168188f;
    data->d[9] = -0.226669f;
    data->d[10] = 0.724930f;
    data->d[11] = -0.351991f;
    data->d[12] = 4.059273f;
    data->d[13] = 0.766327f;
    data->d[14] = 0.578319f;
    data->d[15] = 1.811394f;
    data->d[16] = -1.818061f;
    data->d[17] = -0.118132f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.434826f;
    data->d[1] = -1.138371f;
    data->d[2] = 1.610443f;
    data->d[3] = -1.247189f;
    data->d[4] = 0.702347f;
    data->d[5] = -0.787664f;
    data->d[6] = -0.850376f;
    data->d[7] = -0.111517f;
    data->d[8] = 2.513908f;
    data->d[9] = -0.368724f;
    data->d[10] = 0.410914f;
    data->d[11] = 0.381051f;
    data->d[12] = 7.742311f;
    data->d[13] = 0.815080f;
    data->d[14] = 1.002041f;
    data->d[15] = 1.212286f;
    data->d[16] = 1.819487f;
    data->d[17] = 0.523599f;
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
    instructions->SetOperation(0, 0, 27);
    instructions->SetOperation(1, 1, 5);
    instructions->SetOperation(2, 0, 1);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 28);
    instructions->SetOperation(5, 0, 22);
    instructions->SetOperation(6, 1, 28);
    instructions->SetOperation(7, 0, 18);
    instructions->SetOperation(8, 0, 23);
    instructions->SetOperation(9, 0, 1);
    instructions->SetOperation(10, 1, 21);
    instructions->SetOperation(11, 0, 19);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 1, 12);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 1, 21);
    instructions->SetOperation(17, 0, 1);
    instructions->SetOperation(18, 1, 24);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 0, 28);
    instructions->SetOperation(22, 1, 7);
    instructions->SetOperation(23, 0, 11);
    instructions->SetOperation(24, 0, 7);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 24);
    instructions->SetOperation(27, 1, 23);
    instructions->SetOperation(28, 1, 5);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 1, 22);
    instructions->SetOperation(31, 1, 25);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 324;
    state.m_evolution = 10;
    state.m_index = 1;
    state.m_copy_index = 5;
    state.m_id = 5;
    state.m_test = 5;
    state.m_seed = 16135057637349234621;
    state.m_optimize_pass =4;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000058f;
    state.m_optimizeValid = true;
} // LoadState
