#pragma once
#include "FireStarterState.h"

// Run date: 03/24/24 21:11:06 Pacific Daylight Time
// Run duration = 381.096862 seconds
// Run generation = 212
// Run evolution = 6
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

// Variation: 0  result = 0.00000008
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.389727f;
    data->d[2] = -1.375251f;
    data->d[3] = 0.602514f;
    data->d[4] = -0.225873f;
    data->d[5] = 0.610597f;
    data->d[6] = -0.000314f;
    data->d[7] = 14.207479f;
    data->d[8] = -0.808263f;
    data->d[9] = 40.522499f;
    data->d[10] = 0.152775f;
    data->d[11] = -2.101419f;
    data->d[12] = 0.587333f;
    data->d[13] = -0.592092f;
    data->d[14] = 0.129601f;
    data->d[15] = 1.473917f;
    data->d[16] = -0.640539f;
    data->d[17] = 0.389488f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.288645f;
    data->d[2] = -5.548728f;
    data->d[3] = -0.824195f;
    data->d[4] = 0.029431f;
    data->d[5] = -0.333354f;
    data->d[6] = -0.008640f;
    data->d[7] = -27.423161f;
    data->d[8] = -1.796855f;
    data->d[9] = 8.347033f;
    data->d[10] = 1.007005f;
    data->d[11] = -1.473344f;
    data->d[12] = 0.044535f;
    data->d[13] = -10.353882f;
    data->d[14] = -8.842957f;
    data->d[15] = 1.854252f;
    data->d[16] = -1.345449f;
    data->d[17] = -10902.583008f;
    data->d[18] = -0.118132f;
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

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.187790f;
    data->d[2] = 0.876443f;
    data->d[3] = -1.348147f;
    data->d[4] = -1.274803f;
    data->d[5] = -3.517291f;
    data->d[6] = 0.000603f;
    data->d[7] = -4.606602f;
    data->d[8] = -1.295650f;
    data->d[9] = -4.704593f;
    data->d[10] = 0.520169f;
    data->d[11] = 0.193180f;
    data->d[12] = -0.464726f;
    data->d[13] = -2.887730f;
    data->d[14] = 0.066394f;
    data->d[15] = -2.448414f;
    data->d[16] = -1.161419f;
    data->d[17] = -1.350885f;
    data->d[18] = 0.523599f;
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
    instructions->SetOperation(0, 1, 16);
    instructions->SetOperation(1, 0, 20);
    instructions->SetOperation(2, 0, 10);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 11);
    instructions->SetOperation(5, 0, 16);
    instructions->SetOperation(6, 1, 25);
    instructions->SetOperation(7, 0, 15);
    instructions->SetOperation(8, 0, 1);
    instructions->SetOperation(9, 1, 24);
    instructions->SetOperation(10, 1, 13);
    instructions->SetOperation(11, 0, 15);
    instructions->SetOperation(12, 1, 7);
    instructions->SetOperation(13, 1, 7);
    instructions->SetOperation(14, 1, 2);
    instructions->SetOperation(15, 0, 2);
    instructions->SetOperation(16, 0, 19);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 0, 16);
    instructions->SetOperation(19, 0, 17);
    instructions->SetOperation(20, 0, 27);
    instructions->SetOperation(21, 0, 24);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 27);
    instructions->SetOperation(24, 1, 9);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 0, 8);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 1, 8);
    instructions->SetOperation(31, 1, 5);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 212;
    state.m_evolution = 6;
    state.m_index = 14;
    state.m_copy_index = 23;
    state.m_id = 23;
    state.m_test = 14;
    state.m_seed = 13647426027543221114;
    state.m_optimize_pass =5;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000024f;
    state.m_optimizeValid = true;
} // LoadState
