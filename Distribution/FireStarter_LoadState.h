#pragma once
#include "FireStarterState.h"

// Run date: 03/05/24 23:19:01 Pacific Standard Time
// Run duration = 8068.323668 seconds
// Run generation = 827
// Run evolution = 15
// Run max result = 0.00000015
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
    data->d[1] = 0.531548f;
    data->d[2] = -0.055621f;
    data->d[3] = 1.665577f;
    data->d[4] = -1.345355f;
    data->d[5] = 4.659593f;
    data->d[6] = -0.434386f;
    data->d[7] = 4.383573f;
    data->d[8] = -0.003440f;
    data->d[9] = 0.750491f;
    data->d[10] = 0.429622f;
    data->d[11] = -1.312859f;
    data->d[12] = 30.956362f;
    data->d[13] = 41.124958f;
    data->d[14] = 40.320660f;
    data->d[15] = 4.625468f;
    data->d[16] = 1.497873f;
    data->d[17] = -0.621482f;
    data->d[18] = 3.703648f;
    data->d[19] = -0.000002f;
    data->d[20] = 0.003172f;
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
    data->d[1] = -0.612565f;
    data->d[2] = 2.726147f;
    data->d[3] = 0.312011f;
    data->d[4] = -1.885225f;
    data->d[5] = -0.615648f;
    data->d[6] = -0.656045f;
    data->d[7] = -0.006102f;
    data->d[8] = 0.434169f;
    data->d[9] = 0.073933f;
    data->d[10] = -0.291244f;
    data->d[11] = 0.264354f;
    data->d[12] = 10.845819f;
    data->d[13] = -0.789794f;
    data->d[14] = 20.279947f;
    data->d[15] = 3.856844f;
    data->d[16] = 1.492959f;
    data->d[17] = -0.509313f;
    data->d[18] = 0.745354f;
    data->d[19] = -0.106165f;
    data->d[20] = 1.112720f;
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

// Variation: 2  result = 0.00000015
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.094604f;
    data->d[2] = 0.116692f;
    data->d[3] = -0.741786f;
    data->d[4] = -443.680450f;
    data->d[5] = -0.877646f;
    data->d[6] = 2.427366f;
    data->d[7] = 0.070536f;
    data->d[8] = -0.468853f;
    data->d[9] = -1.431059f;
    data->d[10] = -0.029446f;
    data->d[11] = 1.889564f;
    data->d[12] = -0.155043f;
    data->d[13] = -0.768746f;
    data->d[14] = 4.889067f;
    data->d[15] = 2.552586f;
    data->d[16] = -2.206952f;
    data->d[17] = -0.016996f;
    data->d[18] = -0.243421f;
    data->d[19] = -1.428996f;
    data->d[20] = -0.366410f;
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
    instructions->SetOperation(0, 1, 11);
    instructions->SetOperation(1, 0, 3);
    instructions->SetOperation(2, 0, 27);
    instructions->SetOperation(3, 0, 22);
    instructions->SetOperation(4, 0, 20);
    instructions->SetOperation(5, 0, 15);
    instructions->SetOperation(6, 0, 3);
    instructions->SetOperation(7, 1, 10);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 0, 0);
    instructions->SetOperation(10, 1, 24);
    instructions->SetOperation(11, 1, 6);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 1, 7);
    instructions->SetOperation(14, 0, 7);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 0, 24);
    instructions->SetOperation(17, 1, 18);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 1, 23);
    instructions->SetOperation(20, 0, 7);
    instructions->SetOperation(21, 0, 25);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 1, 7);
    instructions->SetOperation(25, 1, 8);
    instructions->SetOperation(26, 1, 7);
    instructions->SetOperation(27, 1, 10);
    instructions->SetOperation(28, 0, 22);
    instructions->SetOperation(29, 0, 8);
    instructions->SetOperation(30, 1, 1);
    instructions->SetOperation(31, 0, 26);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 827;
    state.m_evolution = 15;
    state.m_children0 = 992;
    state.m_children1 = 200;
    state.m_index = 10;
    state.m_copy_index = 11;
    state.m_id = 11;
    state.m_test = 0;
    state.m_seed = 9176446175417640250;
    state.m_optimize_pass =7;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 1191.000000f;
    state.m_optimizeValid = true;
} // LoadState
