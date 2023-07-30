#pragma once
#include "FireStarterState.h"

// Run date: 07/30/23 14:34:31 Pacific Daylight Time
// Run duration = 469.766545 seconds
// Run generation = 52
// Run evolution = 0
// Run result = 0.00000027
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 0
// Run units = 8
// Run processes = 8
// Run population = 278528
// Run iterations = 64
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
    settings.m_seed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 0;
    settings.m_units = 8;
    settings.m_processes = 8;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000027
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.322428f;
    data->d[2] = 0.587874f;
    data->d[3] = -1.894810f;
    data->d[4] = 0.339208f;
    data->d[5] = -0.666143f;
    data->d[6] = 1.228263f;
    data->d[7] = -1.735243f;
    data->d[8] = -0.247129f;
    data->d[9] = 0.728571f;
    data->d[10] = -2.475009f;
    data->d[11] = -0.257529f;
    data->d[12] = -0.042742f;
    data->d[13] = 0.319015f;
    data->d[14] = 1.462587f;
    data->d[15] = 1.533717f;
    data->d[16] = -2.115005f;
    data->d[17] = 1.346117f;
    data->d[18] = 0.677673f;
    data->d[19] = -0.677672f;
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
    data->d[1] = -0.104916f;
    data->d[2] = -1.607690f;
    data->d[3] = -1.199531f;
    data->d[4] = 1.919774f;
    data->d[5] = 0.889081f;
    data->d[6] = 0.123973f;
    data->d[7] = 3.624397f;
    data->d[8] = -0.803203f;
    data->d[9] = 1.919335f;
    data->d[10] = -0.299772f;
    data->d[11] = -1.727052f;
    data->d[12] = -0.922549f;
    data->d[13] = -0.061625f;
    data->d[14] = 1.365245f;
    data->d[15] = -1.520179f;
    data->d[16] = 1.193357f;
    data->d[17] = 0.242151f;
    data->d[18] = 0.492864f;
    data->d[19] = -0.610996f;
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

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.937323f;
    data->d[2] = -0.638177f;
    data->d[3] = -1.783091f;
    data->d[4] = 0.080197f;
    data->d[5] = -1.092395f;
    data->d[6] = 0.403131f;
    data->d[7] = 0.278695f;
    data->d[8] = -0.523146f;
    data->d[9] = 1.939030f;
    data->d[10] = -0.645730f;
    data->d[11] = -1.370442f;
    data->d[12] = -1.032920f;
    data->d[13] = -0.000067f;
    data->d[14] = -7.227272f;
    data->d[15] = -1.384021f;
    data->d[16] = -0.337191f;
    data->d[17] = 2.324069f;
    data->d[18] = -0.477562f;
    data->d[19] = 1.001161f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 1, 22);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 19);
    instructions->SetOperation(7, 0, 14);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 4);
    instructions->SetOperation(13, 1, 26);
    instructions->SetOperation(14, 0, 26);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 0, 23);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 22);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 0, 22);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 19);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 1, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 52;
    state.m_evolution = 0;
    state.m_index = 20;
    state.m_test = 0;
    state.m_seed = 16753177062928048121;
} // LoadState
