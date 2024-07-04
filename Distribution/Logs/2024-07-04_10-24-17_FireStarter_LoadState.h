#pragma once
#include "FireStarterState.h"

// Run date: 07/04/24 10:24:17 Pacific Daylight Time
// Run duration = 360.300600 seconds
// Run generation = 129
// Run evolution = 10
// Run max result = 0.00000057
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
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
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000022
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 2.194331f;
    data->d[2] = -0.099150f;
    data->d[3] = -0.000000f;
    data->d[4] = 0.710640f;
    data->d[5] = -1.195810f;
    data->d[6] = -1.242058f;
    data->d[7] = 0.321630f;
    data->d[8] = 0.776746f;
    data->d[9] = -0.554711f;
    data->d[10] = -2.892464f;
    data->d[11] = 0.563725f;
    data->d[12] = 3.293453f;
    data->d[13] = 1.560063f;
    data->d[14] = 5.205258f;
    data->d[15] = -0.970566f;
    data->d[16] = -5.318038f;
    data->d[17] = -2.069948f;
    data->d[18] = 0.613166f;
    data->d[19] = 0.967501f;
    data->d[20] = 1.003710f;
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

// Variation: 1  result = 0.00000057
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.843397f;
    data->d[1] = 0.334482f;
    data->d[2] = -0.823367f;
    data->d[3] = 0.068096f;
    data->d[4] = 0.843493f;
    data->d[5] = -0.705735f;
    data->d[6] = 1.308268f;
    data->d[7] = -0.106952f;
    data->d[8] = -0.624786f;
    data->d[9] = 0.517466f;
    data->d[10] = -3.377263f;
    data->d[11] = -0.251245f;
    data->d[12] = -1.452376f;
    data->d[13] = -7.327628f;
    data->d[14] = -6.351859f;
    data->d[15] = -3.799869f;
    data->d[16] = 9.186997f;
    data->d[17] = 0.052380f;
    data->d[18] = 1.345607f;
    data->d[19] = 2.608535f;
    data->d[20] = 1.734776f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000032
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.329655f;
    data->d[1] = -3.011203f;
    data->d[2] = -0.073993f;
    data->d[3] = -1.102369f;
    data->d[4] = 0.141958f;
    data->d[5] = 2.942753f;
    data->d[6] = -1.847166f;
    data->d[7] = 0.800916f;
    data->d[8] = 0.797315f;
    data->d[9] = 0.271886f;
    data->d[10] = -1.653089f;
    data->d[11] = 1.532114f;
    data->d[12] = 0.266057f;
    data->d[13] = 1.747393f;
    data->d[14] = 1.394143f;
    data->d[15] = 0.993793f;
    data->d[16] = -0.161875f;
    data->d[17] = -3.360126f;
    data->d[18] = -1.175867f;
    data->d[19] = 1.980722f;
    data->d[20] = 0.474976f;
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
    instructions->SetOperation(0, 1, 20);
    instructions->SetOperation(1, 0, 6);
    instructions->SetOperation(2, 0, 11);
    instructions->SetOperation(3, 1, 23);
    instructions->SetOperation(4, 0, 15);
    instructions->SetOperation(5, 0, 16);
    instructions->SetOperation(6, 1, 15);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 0, 9);
    instructions->SetOperation(9, 0, 28);
    instructions->SetOperation(10, 1, 4);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 1, 16);
    instructions->SetOperation(14, 1, 29);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 1, 4);
    instructions->SetOperation(18, 1, 27);
    instructions->SetOperation(19, 1, 25);
    instructions->SetOperation(20, 1, 5);
    instructions->SetOperation(21, 0, 23);
    instructions->SetOperation(22, 0, 25);
    instructions->SetOperation(23, 0, 17);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 0, 24);
    instructions->SetOperation(27, 0, 14);
    instructions->SetOperation(28, 0, 1);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 0, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 129;
    state.m_evolution = 10;
    state.m_index = 6;
    state.m_copy_index = 6;
    state.m_id = 6;
    state.m_test = 0;
    state.m_seed = 6030205848941766171;
    state.m_optimize_pass =7;
    state.m_oldResult = 0.000006f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000788f;
    state.m_optimizeValid = true;
} // LoadState
