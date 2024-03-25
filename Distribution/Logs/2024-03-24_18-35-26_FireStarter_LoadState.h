#pragma once
#include "FireStarterState.h"

// Run date: 03/24/24 18:35:26 Pacific Daylight Time
// Run duration = 377.508214 seconds
// Run generation = 36
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

// Variation: 0  result = 0.00000010
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.673484f;
    data->d[2] = -1.796441f;
    data->d[3] = -0.000568f;
    data->d[4] = -0.189280f;
    data->d[5] = 18.916616f;
    data->d[6] = -1.387736f;
    data->d[7] = 0.284095f;
    data->d[8] = -1.136412f;
    data->d[9] = -0.393077f;
    data->d[10] = 1.735574f;
    data->d[11] = 0.993976f;
    data->d[12] = 0.080544f;
    data->d[13] = -1.333299f;
    data->d[14] = 0.069859f;
    data->d[15] = -1.204001f;
    data->d[16] = 1.041636f;
    data->d[17] = 0.000000f;
    data->d[18] = -1.044157f;
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
    data->d[1] = -0.382973f;
    data->d[2] = -1.368767f;
    data->d[3] = 0.023872f;
    data->d[4] = -0.315347f;
    data->d[5] = -21.565321f;
    data->d[6] = 2.002135f;
    data->d[7] = -0.379909f;
    data->d[8] = 1.831895f;
    data->d[9] = 1.483924f;
    data->d[10] = -1.016984f;
    data->d[11] = -0.612394f;
    data->d[12] = -0.329255f;
    data->d[13] = 0.112614f;
    data->d[14] = 0.538260f;
    data->d[15] = -2.027509f;
    data->d[16] = -1.381807f;
    data->d[17] = 0.121684f;
    data->d[18] = -0.970810f;
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
    data->d[0] = -2.617994f;
    data->d[1] = -0.437117f;
    data->d[2] = -2.002710f;
    data->d[3] = -0.002141f;
    data->d[4] = 0.026609f;
    data->d[5] = 914.128723f;
    data->d[6] = -0.099520f;
    data->d[7] = 0.010109f;
    data->d[8] = -1.967796f;
    data->d[9] = 1.256462f;
    data->d[10] = 2.029168f;
    data->d[11] = -0.471119f;
    data->d[12] = 0.070362f;
    data->d[13] = 3.572949f;
    data->d[14] = -1.055320f;
    data->d[15] = -1.091666f;
    data->d[16] = -0.085594f;
    data->d[17] = 0.501572f;
    data->d[18] = 1.043916f;
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
    instructions->SetOperation(0, 1, 9);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 0, 22);
    instructions->SetOperation(3, 1, 6);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 22);
    instructions->SetOperation(6, 0, 21);
    instructions->SetOperation(7, 0, 21);
    instructions->SetOperation(8, 0, 18);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 0, 4);
    instructions->SetOperation(11, 1, 14);
    instructions->SetOperation(12, 1, 15);
    instructions->SetOperation(13, 1, 22);
    instructions->SetOperation(14, 1, 16);
    instructions->SetOperation(15, 1, 6);
    instructions->SetOperation(16, 1, 2);
    instructions->SetOperation(17, 0, 20);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 0, 0);
    instructions->SetOperation(20, 0, 10);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 0, 22);
    instructions->SetOperation(25, 0, 6);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 0, 15);
    instructions->SetOperation(28, 0, 9);
    instructions->SetOperation(29, 0, 27);
    instructions->SetOperation(30, 1, 7);
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
    state.m_generation = 36;
    state.m_evolution = 8;
    state.m_index = 3;
    state.m_copy_index = 35;
    state.m_id = 35;
    state.m_test = 8;
    state.m_seed = 569154349290208059;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000028f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000084f;
    state.m_optimizeValid = true;
} // LoadState
