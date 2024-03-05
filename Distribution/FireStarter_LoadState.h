#pragma once
#include "FireStarterState.h"

// Run date: 03/04/24 18:47:38 Pacific Standard Time
// Run duration = 3892.117383 seconds
// Run generation = 386
// Run evolution = 25
// Run max result = 0.00000019
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
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 0
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
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
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

// Variation: 0  result = 0.00000010
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.560683f;
    data->d[2] = 3.055527f;
    data->d[3] = -0.016713f;
    data->d[4] = 0.134144f;
    data->d[5] = -4.576186f;
    data->d[6] = -0.517991f;
    data->d[7] = 0.773902f;
    data->d[8] = -1.078960f;
    data->d[9] = 0.684826f;
    data->d[10] = -0.528397f;
    data->d[11] = -0.019922f;
    data->d[12] = 2.891133f;
    data->d[13] = -0.002845f;
    data->d[14] = -0.033689f;
    data->d[15] = 47774.796875f;
    data->d[16] = -0.000000f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = -1.325614f;
    data->d[2] = -5.054271f;
    data->d[3] = -0.248490f;
    data->d[4] = 2.900271f;
    data->d[5] = -0.063005f;
    data->d[6] = -0.518727f;
    data->d[7] = 0.686671f;
    data->d[8] = -0.812594f;
    data->d[9] = 0.742056f;
    data->d[10] = -0.540370f;
    data->d[11] = -0.029994f;
    data->d[12] = 2.978643f;
    data->d[13] = -0.003551f;
    data->d[14] = 3.710259f;
    data->d[15] = 13670.982422f;
    data->d[16] = -0.118132f;
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

// Variation: 2  result = 0.00000019
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.410644f;
    data->d[2] = -0.075742f;
    data->d[3] = 1.688074f;
    data->d[4] = 0.108418f;
    data->d[5] = -0.990693f;
    data->d[6] = -0.845676f;
    data->d[7] = -0.092652f;
    data->d[8] = 0.074262f;
    data->d[9] = -213.711792f;
    data->d[10] = 0.033263f;
    data->d[11] = 0.009724f;
    data->d[12] = 1.604526f;
    data->d[13] = -0.653532f;
    data->d[14] = 1.852426f;
    data->d[15] = 0.322829f;
    data->d[16] = 0.523599f;
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
    instructions->SetOperation(0, 1, 17);
    instructions->SetOperation(1, 0, 10);
    instructions->SetOperation(2, 0, 15);
    instructions->SetOperation(3, 0, 14);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 1);
    instructions->SetOperation(7, 0, 19);
    instructions->SetOperation(8, 1, 0);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 1, 1);
    instructions->SetOperation(11, 1, 0);
    instructions->SetOperation(12, 1, 3);
    instructions->SetOperation(13, 0, 18);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 1, 3);
    instructions->SetOperation(16, 1, 19);
    instructions->SetOperation(17, 0, 1);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 1, 26);
    instructions->SetOperation(20, 1, 21);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 7);
    instructions->SetOperation(23, 1, 0);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 0, 15);
    instructions->SetOperation(28, 0, 1);
    instructions->SetOperation(29, 1, 14);
    instructions->SetOperation(30, 0, 13);
    instructions->SetOperation(31, 1, 22);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 386;
    state.m_evolution = 25;
    state.m_children0 = 386;
    state.m_children1 = 6;
    state.m_index = 14;
    state.m_copy_index = 14;
    state.m_id = 14;
    state.m_test = 0;
    state.m_seed = 12996082481258965806;
    state.m_optimize_pass =6;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 386.000000f;
    state.m_optimizeValid = true;
} // LoadState
