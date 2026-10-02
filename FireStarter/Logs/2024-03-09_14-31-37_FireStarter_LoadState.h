#pragma once
#include "FireStarterState.h"

// Run date: 03/09/24 14:31:37 Pacific Standard Time
// Run duration = 15252.562092 seconds
// Run generation = 378
// Run evolution = 10
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
// Run tests = 4
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
    settings.m_tests = 4;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.212968f;
    data->d[1] = -0.115530f;
    data->d[2] = 1.617069f;
    data->d[3] = 0.709037f;
    data->d[4] = -1.420945f;
    data->d[5] = -2.728191f;
    data->d[6] = 1.044466f;
    data->d[7] = -0.005046f;
    data->d[8] = 0.542155f;
    data->d[9] = 2.655767f;
    data->d[10] = -3.091417f;
    data->d[11] = 0.921474f;
    data->d[12] = 0.607982f;
    data->d[13] = -0.300579f;
    data->d[14] = 1.817596f;
    data->d[15] = 3.350071f;
    data->d[16] = -1.838406f;
    data->d[17] = 0.860686f;
    data->d[18] = -0.988792f;
    data->d[19] = 1.926193f;
    data->d[20] = -0.000000f;
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

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.000022f;
    data->d[1] = 31007.804688f;
    data->d[2] = -1.517802f;
    data->d[3] = 1.782948f;
    data->d[4] = 1.475852f;
    data->d[5] = -0.165303f;
    data->d[6] = 0.548484f;
    data->d[7] = 0.001587f;
    data->d[8] = 0.101374f;
    data->d[9] = -11.037194f;
    data->d[10] = -1.583057f;
    data->d[11] = -0.111107f;
    data->d[12] = -0.700028f;
    data->d[13] = 0.941043f;
    data->d[14] = -2.587656f;
    data->d[15] = -4.009047f;
    data->d[16] = 2.234384f;
    data->d[17] = 0.214887f;
    data->d[18] = -1.180814f;
    data->d[19] = -0.005335f;
    data->d[20] = -0.118132f;
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
    data->d[0] = 0.040420f;
    data->d[1] = 0.000048f;
    data->d[2] = -110440.562500f;
    data->d[3] = 0.641555f;
    data->d[4] = -0.081329f;
    data->d[5] = -0.650777f;
    data->d[6] = 2.179370f;
    data->d[7] = -0.541765f;
    data->d[8] = 0.015230f;
    data->d[9] = 0.643386f;
    data->d[10] = -2.406953f;
    data->d[11] = 0.996657f;
    data->d[12] = 1.793493f;
    data->d[13] = -0.057807f;
    data->d[14] = 0.895878f;
    data->d[15] = 2.976339f;
    data->d[16] = 0.474715f;
    data->d[17] = -0.716376f;
    data->d[18] = 0.391812f;
    data->d[19] = 1.494317f;
    data->d[20] = 0.523599f;
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
    instructions->SetOperation(0, 0, 9);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 0, 17);
    instructions->SetOperation(3, 1, 22);
    instructions->SetOperation(4, 1, 11);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 0, 11);
    instructions->SetOperation(7, 1, 13);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 26);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 1, 24);
    instructions->SetOperation(12, 1, 18);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 3);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 1, 24);
    instructions->SetOperation(17, 0, 21);
    instructions->SetOperation(18, 1, 1);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 1, 23);
    instructions->SetOperation(21, 0, 6);
    instructions->SetOperation(22, 0, 11);
    instructions->SetOperation(23, 1, 3);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 0, 15);
    instructions->SetOperation(27, 0, 1);
    instructions->SetOperation(28, 1, 12);
    instructions->SetOperation(29, 0, 25);
    instructions->SetOperation(30, 0, 5);
    instructions->SetOperation(31, 1, 8);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 378;
    state.m_evolution = 10;
    state.m_children0 = 0;
    state.m_children1 = 0;
    state.m_index = 3;
    state.m_copy_index = 14;
    state.m_id = 14;
    state.m_test = 1;
    state.m_seed = 298811239231986731;
    state.m_optimize_pass =4;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 10.000002f;
    state.m_optimizeValid = true;
} // LoadState
