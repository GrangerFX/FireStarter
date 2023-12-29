#pragma once
#include "FireStarterState.h"

// Run date: 12/29/23 08:42:50 Pacific Standard Time
// Run duration = 8658.427884 seconds
// Run generation = 38
// Run evolution = 2
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
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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
    settings.m_states = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
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
    data->d[1] = 0.314146f;
    data->d[2] = 0.406619f;
    data->d[3] = -0.856655f;
    data->d[4] = -0.104905f;
    data->d[5] = -3.427862f;
    data->d[6] = 1.022493f;
    data->d[7] = -4.010064f;
    data->d[8] = 1.913887f;
    data->d[9] = -12.288787f;
    data->d[10] = -10.585923f;
    data->d[11] = -0.157257f;
    data->d[12] = 0.000042f;
    data->d[13] = 1.100913f;
    data->d[14] = -0.863468f;
    data->d[15] = 2.258377f;
    data->d[16] = -0.628431f;
    data->d[17] = -2.094411f;
    data->d[18] = -0.000000f;
    data->d[19] = -0.067142f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -3.953294f;
    data->d[2] = -1.763537f;
    data->d[3] = 0.009411f;
    data->d[4] = 2.703020f;
    data->d[5] = -0.520619f;
    data->d[6] = -0.542953f;
    data->d[7] = 12.415781f;
    data->d[8] = 3.380460f;
    data->d[9] = -2.823638f;
    data->d[10] = 0.084003f;
    data->d[11] = -2.147868f;
    data->d[12] = -0.070111f;
    data->d[13] = -0.053049f;
    data->d[14] = 5.138438f;
    data->d[15] = -3.719978f;
    data->d[16] = 1.060921f;
    data->d[17] = 1.387507f;
    data->d[18] = 0.131736f;
    data->d[19] = -0.896734f;
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
    data->d[0] = -2.617994f;
    data->d[1] = 0.477750f;
    data->d[2] = 0.233749f;
    data->d[3] = -0.904582f;
    data->d[4] = -1.520793f;
    data->d[5] = -0.930164f;
    data->d[6] = -0.080257f;
    data->d[7] = 1.269340f;
    data->d[8] = 1.002223f;
    data->d[9] = 3.615367f;
    data->d[10] = -0.000000f;
    data->d[11] = 2.595633f;
    data->d[12] = -0.670918f;
    data->d[13] = -1.959470f;
    data->d[14] = 0.539397f;
    data->d[15] = 2.396804f;
    data->d[16] = -1.616500f;
    data->d[17] = -1.643250f;
    data->d[18] = -1.080718f;
    data->d[19] = -0.484492f;
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
    instructions->SetOperation(0, 1, 20);
    instructions->SetOperation(1, 0, 26);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 0, 24);
    instructions->SetOperation(4, 0, 24);
    instructions->SetOperation(5, 0, 28);
    instructions->SetOperation(6, 0, 22);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 0, 28);
    instructions->SetOperation(10, 1, 15);
    instructions->SetOperation(11, 1, 18);
    instructions->SetOperation(12, 0, 23);
    instructions->SetOperation(13, 0, 3);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 1, 21);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 0, 25);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 1, 24);
    instructions->SetOperation(20, 0, 12);
    instructions->SetOperation(21, 0, 22);
    instructions->SetOperation(22, 0, 12);
    instructions->SetOperation(23, 1, 10);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 1, 15);
    instructions->SetOperation(26, 0, 25);
    instructions->SetOperation(27, 0, 24);
    instructions->SetOperation(28, 0, 9);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 1, 14);
    instructions->SetOperation(31, 0, 27);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 38;
    state.m_evolution = 2;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 962;
    state.m_copy_id = 27;
    state.m_test = 2;
    state.m_seed = 17555020691629840683;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
