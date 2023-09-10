#pragma once
#include "FireStarterState.h"

// Run date: 09/10/23 11:03:56 Pacific Daylight Time
// Run duration = 876.022321 seconds
// Run generation = 110
// Run evolution = 37
// Run result = 0.00002718
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

// Variation: 0  result = 0.00001898
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.130762f;
    data->d[1] = -0.610409f;
    data->d[2] = 0.466787f;
    data->d[3] = -0.633685f;
    data->d[4] = -0.013914f;
    data->d[5] = 0.029265f;
    data->d[6] = 0.639926f;
    data->d[7] = -2.056848f;
    data->d[8] = 2.156205f;
    data->d[9] = 4.779109f;
    data->d[10] = 3.455480f;
    data->d[11] = -1.844720f;
    data->d[12] = 1.690465f;
    data->d[13] = -1.299584f;
    data->d[14] = -0.161898f;
    data->d[15] = 0.062201f;
    data->d[16] = -4.974503f;
    data->d[17] = -0.228134f;
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
    *(result->MinResult()) = 0.000019f;
} // LoadVariation0

// Variation: 1  result = 0.00002718
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.338781f;
    data->d[1] = -1.143686f;
    data->d[2] = -1.607356f;
    data->d[3] = -2.134906f;
    data->d[4] = -1.274291f;
    data->d[5] = 1.605523f;
    data->d[6] = 0.521260f;
    data->d[7] = 4.565702f;
    data->d[8] = 0.054401f;
    data->d[9] = 0.258639f;
    data->d[10] = 0.140647f;
    data->d[11] = 0.008574f;
    data->d[12] = -0.604163f;
    data->d[13] = -0.632911f;
    data->d[14] = -5.055906f;
    data->d[15] = -3.520980f;
    data->d[16] = 0.706577f;
    data->d[17] = 0.003383f;
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
    *(result->MinResult()) = 0.000027f;
} // LoadVariation1

// Variation: 2  result = 0.00002712
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.076795f;
    data->d[1] = -1.657278f;
    data->d[2] = -1.422790f;
    data->d[3] = -1.954563f;
    data->d[4] = 0.160215f;
    data->d[5] = -1.516849f;
    data->d[6] = -5.967226f;
    data->d[7] = -6.440160f;
    data->d[8] = 12.902614f;
    data->d[9] = -6.351497f;
    data->d[10] = -0.097774f;
    data->d[11] = 0.007699f;
    data->d[12] = -0.058496f;
    data->d[13] = -0.442951f;
    data->d[14] = -1.924877f;
    data->d[15] = -1.468428f;
    data->d[16] = 2.159179f;
    data->d[17] = -0.548031f;
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
    *(result->MinResult()) = 0.000027f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000027f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 10);
    instructions->SetOperation(2, 0, 22);
    instructions->SetOperation(3, 1, 24);
    instructions->SetOperation(4, 1, 13);
    instructions->SetOperation(5, 0, 24);
    instructions->SetOperation(6, 0, 9);
    instructions->SetOperation(7, 1, 26);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 0, 5);
    instructions->SetOperation(10, 0, 13);
    instructions->SetOperation(11, 1, 3);
    instructions->SetOperation(12, 0, 24);
    instructions->SetOperation(13, 1, 4);
    instructions->SetOperation(14, 1, 28);
    instructions->SetOperation(15, 0, 17);
    instructions->SetOperation(16, 0, 16);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 0, 10);
    instructions->SetOperation(19, 1, 11);
    instructions->SetOperation(20, 1, 16);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 1, 3);
    instructions->SetOperation(24, 1, 7);
    instructions->SetOperation(25, 0, 10);
    instructions->SetOperation(26, 0, 22);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 1, 21);
    instructions->SetOperation(29, 0, 0);
    instructions->SetOperation(30, 1, 17);
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
    state.m_generation = 110;
    state.m_evolution = 37;
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 52;
    state.m_copy_id = 14;
    state.m_test = 4;
    state.m_seed = 14874331057117842424;
    state.m_maxResult = 0.000027f;
    state.m_lastResult = 0.000037f;
    state.m_optimizePass = true;
    state.m_lastEvolved = true;
} // LoadState
