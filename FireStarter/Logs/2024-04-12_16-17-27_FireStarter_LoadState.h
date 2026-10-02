#pragma once
#include "FireStarterState.h"

// Run date: 04/12/24 16:17:27 Pacific Daylight Time
// Run duration = 28759.713516 seconds
// Run generation = 424
// Run evolution = 8
// Run max result = 0.00000051
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
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.647195f;
    data->d[1] = -1.494398f;
    data->d[2] = -0.032040f;
    data->d[3] = 0.670935f;
    data->d[4] = 1.547164f;
    data->d[5] = -0.537540f;
    data->d[6] = 1.810659f;
    data->d[7] = 0.179577f;
    data->d[8] = -2.749907f;
    data->d[9] = 102.698853f;
    data->d[10] = 4.401278f;
    data->d[11] = -0.000000f;
    data->d[12] = -0.442876f;
    data->d[13] = -1.389996f;
    data->d[14] = -1.134781f;
    data->d[15] = -0.717029f;
    data->d[16] = -0.506682f;
    data->d[17] = 0.149022f;
    data->d[18] = -0.149022f;
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
    data->d[0] = -2.009255f;
    data->d[1] = -1.081404f;
    data->d[2] = 0.045380f;
    data->d[3] = -0.303936f;
    data->d[4] = -2.323756f;
    data->d[5] = -2.150783f;
    data->d[6] = 0.786316f;
    data->d[7] = -0.172552f;
    data->d[8] = 0.325350f;
    data->d[9] = 1.894038f;
    data->d[10] = -0.134193f;
    data->d[11] = 0.934643f;
    data->d[12] = 2.281174f;
    data->d[13] = -0.521058f;
    data->d[14] = 0.912226f;
    data->d[15] = -1.920247f;
    data->d[16] = -0.847484f;
    data->d[17] = 0.062808f;
    data->d[18] = -0.180940f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000051
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.576007f;
    data->d[1] = 0.958013f;
    data->d[2] = -0.106695f;
    data->d[3] = 1.437464f;
    data->d[4] = -2.295791f;
    data->d[5] = 0.947023f;
    data->d[6] = 0.227263f;
    data->d[7] = 1.062356f;
    data->d[8] = 5.441875f;
    data->d[9] = -6.476288f;
    data->d[10] = -16.028635f;
    data->d[11] = -0.000470f;
    data->d[12] = 1.512588f;
    data->d[13] = 0.094987f;
    data->d[14] = 0.582424f;
    data->d[15] = 0.244673f;
    data->d[16] = 1.314899f;
    data->d[17] = 0.606658f;
    data->d[18] = -0.083059f;
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
    *(result->MinResult()) = 0.000001f;
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
    instructions->SetOperation(0, 1, 15);
    instructions->SetOperation(1, 1, 6);
    instructions->SetOperation(2, 0, 27);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 1, 6);
    instructions->SetOperation(5, 1, 20);
    instructions->SetOperation(6, 1, 3);
    instructions->SetOperation(7, 1, 0);
    instructions->SetOperation(8, 0, 24);
    instructions->SetOperation(9, 0, 24);
    instructions->SetOperation(10, 1, 20);
    instructions->SetOperation(11, 0, 17);
    instructions->SetOperation(12, 0, 17);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 1, 5);
    instructions->SetOperation(15, 0, 21);
    instructions->SetOperation(16, 0, 23);
    instructions->SetOperation(17, 1, 3);
    instructions->SetOperation(18, 1, 9);
    instructions->SetOperation(19, 0, 11);
    instructions->SetOperation(20, 1, 4);
    instructions->SetOperation(21, 1, 0);
    instructions->SetOperation(22, 1, 20);
    instructions->SetOperation(23, 1, 17);
    instructions->SetOperation(24, 1, 26);
    instructions->SetOperation(25, 1, 0);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 1, 4);
    instructions->SetOperation(28, 0, 14);
    instructions->SetOperation(29, 0, 27);
    instructions->SetOperation(30, 1, 7);
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
    state.m_generation = 424;
    state.m_evolution = 8;
    state.m_index = 13;
    state.m_copy_index = 6;
    state.m_id = 6;
    state.m_test = 15;
    state.m_seed = 2130033085930386070;
    state.m_optimize_pass =4;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000605f;
    state.m_optimizeValid = true;
} // LoadState
