#pragma once
#include "FireStarterState.h"

// Run date: 07/04/24 14:52:46 Pacific Daylight Time
// Run duration = 599.278147 seconds
// Run generation = 599
// Run evolution = 10
// Run max result = 0.00000023
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
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
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.588390f;
    data->d[1] = -0.789882f;
    data->d[2] = -0.140074f;
    data->d[3] = 1.366920f;
    data->d[4] = 1.226849f;
    data->d[5] = -1.549018f;
    data->d[6] = -0.001170f;
    data->d[7] = -0.529632f;
    data->d[8] = 2.546007f;
    data->d[9] = 1.375262f;
    data->d[10] = 0.456093f;
    data->d[11] = -3.053660f;
    data->d[12] = 0.293147f;
    data->d[13] = -0.568784f;
    data->d[14] = 0.079679f;
    data->d[15] = 0.889584f;
    data->d[16] = -0.161021f;
    data->d[17] = 2.735569f;
    data->d[18] = 1.760749f;
    data->d[19] = 0.019860f;
    data->d[20] = -0.206143f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.459452f;
    data->d[1] = -1.022682f;
    data->d[2] = 0.268542f;
    data->d[3] = 1.399663f;
    data->d[4] = 1.668216f;
    data->d[5] = 5.201929f;
    data->d[6] = -0.000394f;
    data->d[7] = 1.446551f;
    data->d[8] = 3.054363f;
    data->d[9] = 0.263374f;
    data->d[10] = -0.380563f;
    data->d[11] = -0.388769f;
    data->d[12] = -2.004581f;
    data->d[13] = -0.311539f;
    data->d[14] = -0.471279f;
    data->d[15] = -1.081623f;
    data->d[16] = -0.434626f;
    data->d[17] = 0.523622f;
    data->d[18] = -2.394815f;
    data->d[19] = 1.559118f;
    data->d[20] = -1.908793f;
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

// Variation: 2  result = 0.00000023
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.537756f;
    data->d[1] = -0.540955f;
    data->d[2] = -0.457932f;
    data->d[3] = 1.042293f;
    data->d[4] = 0.584356f;
    data->d[5] = 0.003678f;
    data->d[6] = -4.474482f;
    data->d[7] = 0.526210f;
    data->d[8] = -2.527161f;
    data->d[9] = 3.913452f;
    data->d[10] = -3.726269f;
    data->d[11] = 0.545925f;
    data->d[12] = 0.037918f;
    data->d[13] = 0.903439f;
    data->d[14] = 3.163633f;
    data->d[15] = -0.362455f;
    data->d[16] = 0.029125f;
    data->d[17] = -4.760290f;
    data->d[18] = 1.914558f;
    data->d[19] = 0.657007f;
    data->d[20] = -0.171354f;
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
    instructions->SetOperation(0, 1, 10);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 1, 0);
    instructions->SetOperation(3, 1, 14);
    instructions->SetOperation(4, 1, 21);
    instructions->SetOperation(5, 0, 27);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 24);
    instructions->SetOperation(8, 1, 22);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 0, 11);
    instructions->SetOperation(11, 1, 6);
    instructions->SetOperation(12, 0, 14);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 0, 15);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 1, 18);
    instructions->SetOperation(19, 1, 3);
    instructions->SetOperation(20, 0, 22);
    instructions->SetOperation(21, 1, 11);
    instructions->SetOperation(22, 0, 19);
    instructions->SetOperation(23, 1, 29);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 6);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 0, 22);
    instructions->SetOperation(28, 1, 10);
    instructions->SetOperation(29, 1, 1);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 1, 16);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 599;
    state.m_evolution = 10;
    state.m_index = 3;
    state.m_copy_index = 20;
    state.m_id = 20;
    state.m_test = 0;
    state.m_seed = 6071226999185726783;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.001082f;
    state.m_optimizeValid = true;
} // LoadState
