#pragma once
#include "FireStarterState.h"

// Run date: 06/23/24 15:52:14 Pacific Daylight Time
// Run duration = 152.300448 seconds
// Run generation = 58
// Run evolution = 2
// Run max result = 0.00002536
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

// Variation: 0  result = 0.00001422
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.731001f;
    data->d[1] = 0.160560f;
    data->d[2] = -1.439482f;
    data->d[3] = 1.616252f;
    data->d[4] = -0.696823f;
    data->d[5] = -1.832343f;
    data->d[6] = 3.235471f;
    data->d[7] = -0.040286f;
    data->d[8] = 1.260778f;
    data->d[9] = 0.147869f;
    data->d[10] = -0.159490f;
    data->d[11] = -0.900195f;
    data->d[12] = 0.359355f;
    data->d[13] = 2.690980f;
    data->d[14] = 15.705805f;
    data->d[15] = -2.069576f;
    data->d[16] = -5.812154f;
    data->d[17] = 2.028521f;
    data->d[18] = -0.391558f;
    data->d[19] = 0.699173f;
    data->d[20] = -6.061028f;
    data->d[21] = -0.009763f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000014f;
} // LoadVariation0

// Variation: 1  result = 0.00002536
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.368786f;
    data->d[1] = -0.331770f;
    data->d[2] = 0.785356f;
    data->d[3] = 1.194951f;
    data->d[4] = 0.553239f;
    data->d[5] = 1.647524f;
    data->d[6] = -1.488596f;
    data->d[7] = 1.754679f;
    data->d[8] = -0.322999f;
    data->d[9] = -1.198671f;
    data->d[10] = -4.049380f;
    data->d[11] = 0.825326f;
    data->d[12] = 0.001617f;
    data->d[13] = 12.065772f;
    data->d[14] = 5.639585f;
    data->d[15] = -1.323056f;
    data->d[16] = -2.086138f;
    data->d[17] = 5.892218f;
    data->d[18] = 2.803061f;
    data->d[19] = 0.458884f;
    data->d[20] = -0.513244f;
    data->d[21] = -0.013104f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000025f;
} // LoadVariation1

// Variation: 2  result = 0.00002321
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.353549f;
    data->d[1] = 1.011963f;
    data->d[2] = 1.258017f;
    data->d[3] = 2.585244f;
    data->d[4] = 0.738075f;
    data->d[5] = 1.320598f;
    data->d[6] = -0.158902f;
    data->d[7] = 0.503607f;
    data->d[8] = 1.795586f;
    data->d[9] = 2.679063f;
    data->d[10] = 0.041907f;
    data->d[11] = 0.284051f;
    data->d[12] = 2.765519f;
    data->d[13] = 0.153488f;
    data->d[14] = 11.687430f;
    data->d[15] = 2.430781f;
    data->d[16] = 3.888619f;
    data->d[17] = 0.531667f;
    data->d[18] = 0.188238f;
    data->d[19] = -0.522051f;
    data->d[20] = -3.728949f;
    data->d[21] = 0.153841f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000023f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000025f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 28);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 14);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 7);
    instructions->SetOperation(6, 1, 2);
    instructions->SetOperation(7, 0, 24);
    instructions->SetOperation(8, 1, 20);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 0, 29);
    instructions->SetOperation(11, 1, 4);
    instructions->SetOperation(12, 0, 14);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 0, 22);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 18);
    instructions->SetOperation(19, 1, 3);
    instructions->SetOperation(20, 0, 22);
    instructions->SetOperation(21, 1, 4);
    instructions->SetOperation(22, 1, 27);
    instructions->SetOperation(23, 1, 17);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 6);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 0, 25);
    instructions->SetOperation(28, 0, 5);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 0, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 58;
    state.m_evolution = 2;
    state.m_index = 10;
    state.m_copy_index = 20;
    state.m_id = 20;
    state.m_test = 0;
    state.m_seed = 7398464122188352550;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000030f;
    state.m_maxResult = 0.000025f;
    state.m_evolveWeight = 0.001543f;
    state.m_optimizeValid = true;
} // LoadState
