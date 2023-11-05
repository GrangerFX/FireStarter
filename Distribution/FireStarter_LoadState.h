#pragma once
#include "FireStarterState.h"

// Run date: 11/04/23 12:43:52 Pacific Daylight Time
// Run duration = 20920.078142 seconds
// Run generation = 135
// Run evolution = 4
// Run result = 0.00000073
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
// Run tests = 16
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 64

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
    settings.m_tests = 16;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000045
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.258874f;
    data->d[1] = -5.765438f;
    data->d[2] = -0.032492f;
    data->d[3] = -1.399883f;
    data->d[4] = 0.000000f;
    data->d[5] = 2.297810f;
    data->d[6] = -1.242208f;
    data->d[7] = 2.592457f;
    data->d[8] = 0.197644f;
    data->d[9] = -0.871558f;
    data->d[10] = -17.163801f;
    data->d[11] = -0.854949f;
    data->d[12] = 0.622102f;
    data->d[13] = -0.712666f;
    data->d[14] = -0.035649f;
    data->d[15] = 0.295664f;
    data->d[16] = -1.957568f;
    data->d[17] = 4.482666f;
    data->d[18] = -3.898577f;
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
    data->d[0] = -2.087984f;
    data->d[1] = -2.005349f;
    data->d[2] = -0.034095f;
    data->d[3] = -1.105706f;
    data->d[4] = -0.000000f;
    data->d[5] = 0.614572f;
    data->d[6] = -0.558915f;
    data->d[7] = 2.471962f;
    data->d[8] = 0.418757f;
    data->d[9] = -0.667755f;
    data->d[10] = -0.265094f;
    data->d[11] = 5.248673f;
    data->d[12] = -0.505517f;
    data->d[13] = -0.734611f;
    data->d[14] = 0.094243f;
    data->d[15] = -0.115467f;
    data->d[16] = 1.775456f;
    data->d[17] = -1.828558f;
    data->d[18] = 1.627450f;
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

// Variation: 2  result = 0.00000073
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.358389f;
    data->d[1] = -0.519210f;
    data->d[2] = -0.050119f;
    data->d[3] = -0.869082f;
    data->d[4] = -0.000000f;
    data->d[5] = 2.625801f;
    data->d[6] = -1.064520f;
    data->d[7] = -0.913330f;
    data->d[8] = -1.145499f;
    data->d[9] = 0.030059f;
    data->d[10] = 0.877093f;
    data->d[11] = -1.556982f;
    data->d[12] = -4.041974f;
    data->d[13] = 0.004821f;
    data->d[14] = 1.048975f;
    data->d[15] = 0.079747f;
    data->d[16] = -1.273576f;
    data->d[17] = -0.494320f;
    data->d[18] = 1.214359f;
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
    instructions->SetOperation(0, 1, 5);
    instructions->SetOperation(1, 1, 9);
    instructions->SetOperation(2, 1, 5);
    instructions->SetOperation(3, 0, 8);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 1, 12);
    instructions->SetOperation(6, 0, 28);
    instructions->SetOperation(7, 0, 12);
    instructions->SetOperation(8, 1, 27);
    instructions->SetOperation(9, 0, 14);
    instructions->SetOperation(10, 0, 20);
    instructions->SetOperation(11, 0, 20);
    instructions->SetOperation(12, 0, 5);
    instructions->SetOperation(13, 1, 1);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 1, 20);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 10);
    instructions->SetOperation(21, 0, 7);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 1, 9);
    instructions->SetOperation(24, 1, 9);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 1, 15);
    instructions->SetOperation(30, 1, 21);
    instructions->SetOperation(31, 1, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 135;
    state.m_evolution = 4;
    state.m_age = 61;
    state.m_index = 62;
    state.m_id = 58;
    state.m_copy_id = 58;
    state.m_test = 14;
    state.m_seed = 3653302487893715692;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
