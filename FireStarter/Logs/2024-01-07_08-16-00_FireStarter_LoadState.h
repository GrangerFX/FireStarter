#pragma once
#include "FireStarterState.h"

// Run date: 01/07/24 08:16:00 Pacific Standard Time
// Run duration = 1762.757190 seconds
// Run generation = 7
// Run evolution = 7
// Run max result = 0.00000012
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
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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
    settings.m_states = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.737036f;
    data->d[1] = -1.705351f;
    data->d[2] = -0.610114f;
    data->d[3] = 0.566697f;
    data->d[4] = -0.550319f;
    data->d[5] = 0.086180f;
    data->d[6] = 286.441193f;
    data->d[7] = 0.296131f;
    data->d[8] = -0.000282f;
    data->d[9] = 1.244987f;
    data->d[10] = 0.618801f;
    data->d[11] = 0.986699f;
    data->d[12] = -1.523563f;
    data->d[13] = 1.350061f;
    data->d[14] = -1.776188f;
    data->d[15] = -14.101259f;
    data->d[16] = -0.803032f;
    data->d[17] = -1.173057f;
    data->d[18] = -1.610482f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.040758f;
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
    data->d[0] = 0.319271f;
    data->d[1] = -0.274801f;
    data->d[2] = -0.711958f;
    data->d[3] = 0.809316f;
    data->d[4] = -0.453557f;
    data->d[5] = 1736.404663f;
    data->d[6] = 2.418527f;
    data->d[7] = -0.000026f;
    data->d[8] = -0.467066f;
    data->d[9] = 6.286955f;
    data->d[10] = 0.189675f;
    data->d[11] = -0.452873f;
    data->d[12] = 1.439457f;
    data->d[13] = -1.794118f;
    data->d[14] = -0.845801f;
    data->d[15] = -1.065180f;
    data->d[16] = 2.549883f;
    data->d[17] = -1.988102f;
    data->d[18] = -0.743498f;
    data->d[19] = -0.076037f;
    data->d[20] = 1.553598f;
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
    data->d[0] = 0.278945f;
    data->d[1] = -1.738798f;
    data->d[2] = 1.008523f;
    data->d[3] = -1.401942f;
    data->d[4] = -1.000701f;
    data->d[5] = -0.040514f;
    data->d[6] = -3.520156f;
    data->d[7] = 0.015126f;
    data->d[8] = -3.351874f;
    data->d[9] = -1.356384f;
    data->d[10] = 0.912216f;
    data->d[11] = 0.957690f;
    data->d[12] = 0.734730f;
    data->d[13] = -1.459818f;
    data->d[14] = -1.250296f;
    data->d[15] = 1.324152f;
    data->d[16] = 0.769750f;
    data->d[17] = -1.201789f;
    data->d[18] = 0.546151f;
    data->d[19] = 0.152915f;
    data->d[20] = 3.424113f;
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
    instructions->SetOperation(0, 0, 12);
    instructions->SetOperation(1, 1, 13);
    instructions->SetOperation(2, 1, 14);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 11);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 0, 9);
    instructions->SetOperation(8, 0, 16);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 1, 22);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 1, 21);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 1, 25);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 1, 0);
    instructions->SetOperation(25, 1, 15);
    instructions->SetOperation(26, 0, 10);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 14);
    instructions->SetOperation(29, 0, 26);
    instructions->SetOperation(30, 1, 27);
    instructions->SetOperation(31, 0, 28);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 7;
    state.m_evolution = 7;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 52;
    state.m_test = 3;
    state.m_seed = 14402165840886485158;
    state.m_optimize_pass =1;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
