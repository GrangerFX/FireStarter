#pragma once
#include "FireStarterState.h"

// Run date: 06/02/24 21:56:29 Pacific Daylight Time
// Run duration = 13359.477695 seconds
// Run generation = 117
// Run evolution = 6
// Run max result = 0.00000031
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
// Run evolveSeed = 3
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 3;
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

// Variation: 0  result = 0.00000015
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.397578f;
    data->d[2] = -0.069769f;
    data->d[3] = 0.670081f;
    data->d[4] = 2.381171f;
    data->d[5] = -1.495496f;
    data->d[6] = -2.327676f;
    data->d[7] = 1.408466f;
    data->d[8] = 0.432133f;
    data->d[9] = 1.585845f;
    data->d[10] = -0.156014f;
    data->d[11] = 3.264625f;
    data->d[12] = -0.605669f;
    data->d[13] = 0.568914f;
    data->d[14] = 0.406801f;
    data->d[15] = 0.982032f;
    data->d[16] = 2.391727f;
    data->d[17] = 1.392928f;
    data->d[18] = 2.783254f;
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
    data->d[0] = -3.090658f;
    data->d[1] = 0.731907f;
    data->d[2] = 0.075991f;
    data->d[3] = -0.163091f;
    data->d[4] = 0.567519f;
    data->d[5] = 1.249261f;
    data->d[6] = -0.883395f;
    data->d[7] = 1.233486f;
    data->d[8] = -0.393104f;
    data->d[9] = -3.166377f;
    data->d[10] = -0.003519f;
    data->d[11] = 5.777658f;
    data->d[12] = -0.075190f;
    data->d[13] = 3.466861f;
    data->d[14] = 2.478578f;
    data->d[15] = -5.141890f;
    data->d[16] = -5.756276f;
    data->d[17] = 2.822182f;
    data->d[18] = -4.685863f;
    data->d[19] = -0.059066f;
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

// Variation: 2  result = 0.00000031
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.687839f;
    data->d[2] = -1.346525f;
    data->d[3] = -0.814817f;
    data->d[4] = -0.255370f;
    data->d[5] = 0.770398f;
    data->d[6] = 1.020008f;
    data->d[7] = 2.728121f;
    data->d[8] = 0.238649f;
    data->d[9] = -0.000584f;
    data->d[10] = 3.801670f;
    data->d[11] = 6.942017f;
    data->d[12] = 0.660361f;
    data->d[13] = 0.053206f;
    data->d[14] = -1.075747f;
    data->d[15] = -2.098017f;
    data->d[16] = -5.778514f;
    data->d[17] = -2.884291f;
    data->d[18] = -0.003441f;
    data->d[19] = 0.261799f;
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
    instructions->SetOperation(0, 1, 25);
    instructions->SetOperation(1, 0, 12);
    instructions->SetOperation(2, 0, 20);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 0, 16);
    instructions->SetOperation(5, 0, 5);
    instructions->SetOperation(6, 0, 12);
    instructions->SetOperation(7, 1, 19);
    instructions->SetOperation(8, 1, 21);
    instructions->SetOperation(9, 0, 24);
    instructions->SetOperation(10, 0, 20);
    instructions->SetOperation(11, 0, 6);
    instructions->SetOperation(12, 0, 5);
    instructions->SetOperation(13, 0, 28);
    instructions->SetOperation(14, 1, 18);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 0, 21);
    instructions->SetOperation(17, 1, 2);
    instructions->SetOperation(18, 0, 29);
    instructions->SetOperation(19, 0, 23);
    instructions->SetOperation(20, 1, 17);
    instructions->SetOperation(21, 1, 9);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 1, 9);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 23);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 0, 27);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 1, 14);
    instructions->SetOperation(30, 1, 20);
    instructions->SetOperation(31, 1, 14);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 117;
    state.m_evolution = 6;
    state.m_index = 7;
    state.m_copy_index = 8;
    state.m_id = 8;
    state.m_test = 12;
    state.m_seed = 9523348362605219474;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000092f;
    state.m_optimizeValid = true;
} // LoadState
