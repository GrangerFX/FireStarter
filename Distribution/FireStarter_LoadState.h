#pragma once
#include "FireStarterState.h"

// Run date: 09/30/23 17:13:38 Pacific Daylight Time
// Run duration = 832.925355 seconds
// Run generation = 46
// Run evolution = 7
// Run result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 4
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 1;
    settings.m_units = 4;
    settings.m_processes = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000024
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.412222f;
    data->d[1] = -1.295033f;
    data->d[2] = 2.126776f;
    data->d[3] = -1.374001f;
    data->d[4] = -0.181548f;
    data->d[5] = 0.644675f;
    data->d[6] = 3.366424f;
    data->d[7] = -1.864382f;
    data->d[8] = -0.001772f;
    data->d[9] = -11.085074f;
    data->d[10] = -0.042695f;
    data->d[11] = -0.411945f;
    data->d[12] = -0.515955f;
    data->d[13] = 0.463544f;
    data->d[14] = 2.101082f;
    data->d[15] = -0.258381f;
    data->d[16] = -2.410326f;
    data->d[17] = -0.332742f;
    data->d[18] = -1.663726f;
    data->d[19] = -0.998706f;
    data->d[20] = 0.000000f;
    data->d[21] = -0.552621f;
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
    data->d[0] = -0.458577f;
    data->d[1] = 1.417304f;
    data->d[2] = 1.346447f;
    data->d[3] = 0.110622f;
    data->d[4] = 2.018063f;
    data->d[5] = -0.249009f;
    data->d[6] = -2.121049f;
    data->d[7] = -3.831342f;
    data->d[8] = 0.000165f;
    data->d[9] = -3.969667f;
    data->d[10] = 1.859451f;
    data->d[11] = -0.449749f;
    data->d[12] = 1.124469f;
    data->d[13] = 0.214090f;
    data->d[14] = 1.004640f;
    data->d[15] = 0.573553f;
    data->d[16] = 1.916692f;
    data->d[17] = -2.041267f;
    data->d[18] = 1.242634f;
    data->d[19] = -2.373768f;
    data->d[20] = 0.072474f;
    data->d[21] = -1.630000f;
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
    data->d[0] = -0.751502f;
    data->d[1] = 1.967426f;
    data->d[2] = 0.824987f;
    data->d[3] = 0.504854f;
    data->d[4] = 0.622750f;
    data->d[5] = -0.361052f;
    data->d[6] = -1.541063f;
    data->d[7] = -16.425755f;
    data->d[8] = 0.047887f;
    data->d[9] = 0.001093f;
    data->d[10] = -3.781722f;
    data->d[11] = -0.949101f;
    data->d[12] = 2.111216f;
    data->d[13] = -0.143138f;
    data->d[14] = -3.515037f;
    data->d[15] = -0.160090f;
    data->d[16] = 0.584301f;
    data->d[17] = -0.612627f;
    data->d[18] = 0.596320f;
    data->d[19] = -0.153155f;
    data->d[20] = -1.658539f;
    data->d[21] = -0.315699f;
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
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 6);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 0, 9);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 9);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 1, 23);
    instructions->SetOperation(8, 1, 16);
    instructions->SetOperation(9, 1, 27);
    instructions->SetOperation(10, 0, 23);
    instructions->SetOperation(11, 0, 11);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 0, 16);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 0, 22);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 2);
    instructions->SetOperation(20, 0, 12);
    instructions->SetOperation(21, 1, 26);
    instructions->SetOperation(22, 0, 18);
    instructions->SetOperation(23, 0, 25);
    instructions->SetOperation(24, 1, 10);
    instructions->SetOperation(25, 1, 2);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 0, 10);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 1, 20);
    instructions->SetOperation(31, 0, 13);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 46;
    state.m_evolution = 7;
    state.m_age = 0;
    state.m_index = 0;
    state.m_id = 4;
    state.m_copy_id = 50;
    state.m_test = 4;
    state.m_seed = 1519916037020809091;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
} // LoadState
