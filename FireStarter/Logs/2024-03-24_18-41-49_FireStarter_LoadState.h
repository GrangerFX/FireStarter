#pragma once
#include "FireStarterState.h"

// Run date: 03/24/24 18:41:49 Pacific Daylight Time
// Run duration = 135.786472 seconds
// Run generation = 69
// Run evolution = 8
// Run max result = 0.00000024
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.269288f;
    data->d[2] = 0.097438f;
    data->d[3] = 0.278634f;
    data->d[4] = -0.917518f;
    data->d[5] = 1.109362f;
    data->d[6] = -1.843395f;
    data->d[7] = -0.382438f;
    data->d[8] = -0.230317f;
    data->d[9] = 1.733501f;
    data->d[10] = 0.000000f;
    data->d[11] = 19.227198f;
    data->d[12] = -1.115371f;
    data->d[13] = 0.007488f;
    data->d[14] = -3.898901f;
    data->d[15] = -1.099296f;
    data->d[16] = -0.238254f;
    data->d[17] = 0.238254f;
    data->d[18] = 0.412661f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.035787f;
    data->d[2] = 3.453584f;
    data->d[3] = 6992.590332f;
    data->d[4] = -0.417170f;
    data->d[5] = 0.000009f;
    data->d[6] = 3.253116f;
    data->d[7] = 0.000550f;
    data->d[8] = 0.966165f;
    data->d[9] = 0.255978f;
    data->d[10] = -1.681123f;
    data->d[11] = -1.573570f;
    data->d[12] = 1.074949f;
    data->d[13] = -1.005692f;
    data->d[14] = 0.457760f;
    data->d[15] = 3.662714f;
    data->d[16] = 0.020488f;
    data->d[17] = -0.073733f;
    data->d[18] = 2.218642f;
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

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.246142f;
    data->d[2] = 1.516301f;
    data->d[3] = -0.187021f;
    data->d[4] = -0.702791f;
    data->d[5] = 1.390214f;
    data->d[6] = -0.511148f;
    data->d[7] = -0.176209f;
    data->d[8] = -0.384151f;
    data->d[9] = -1.127286f;
    data->d[10] = -1.272066f;
    data->d[11] = -0.176162f;
    data->d[12] = 0.492180f;
    data->d[13] = -0.676249f;
    data->d[14] = -1.644002f;
    data->d[15] = 0.495180f;
    data->d[16] = 0.116338f;
    data->d[17] = -0.095529f;
    data->d[18] = 25.161493f;
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
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 12);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 1, 19);
    instructions->SetOperation(4, 1, 21);
    instructions->SetOperation(5, 0, 11);
    instructions->SetOperation(6, 0, 15);
    instructions->SetOperation(7, 1, 19);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 0, 19);
    instructions->SetOperation(10, 0, 18);
    instructions->SetOperation(11, 1, 14);
    instructions->SetOperation(12, 0, 20);
    instructions->SetOperation(13, 0, 23);
    instructions->SetOperation(14, 0, 28);
    instructions->SetOperation(15, 1, 0);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 1, 7);
    instructions->SetOperation(18, 0, 9);
    instructions->SetOperation(19, 0, 28);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 1, 20);
    instructions->SetOperation(22, 1, 20);
    instructions->SetOperation(23, 0, 20);
    instructions->SetOperation(24, 1, 1);
    instructions->SetOperation(25, 0, 20);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 0, 12);
    instructions->SetOperation(28, 0, 6);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 1, 26);
    instructions->SetOperation(31, 0, 10);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 69;
    state.m_evolution = 8;
    state.m_index = 8;
    state.m_copy_index = 8;
    state.m_id = 8;
    state.m_test = 9;
    state.m_seed = 5180648484848449694;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000016f;
    state.m_optimizeValid = true;
} // LoadState
