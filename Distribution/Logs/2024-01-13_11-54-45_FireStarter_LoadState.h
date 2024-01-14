#pragma once
#include "FireStarterState.h"

// Run date: 01/13/24 11:54:45 Pacific Standard Time
// Run duration = 23719.687628 seconds
// Run generation = 32
// Run evolution = 6
// Run max result = 0.00000751
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
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000244
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.364137f;
    data->d[1] = 0.378584f;
    data->d[2] = 1.622445f;
    data->d[3] = 0.661833f;
    data->d[4] = -1.816586f;
    data->d[5] = -1.476348f;
    data->d[6] = -0.081660f;
    data->d[7] = 0.992055f;
    data->d[8] = 1.661565f;
    data->d[9] = -0.249943f;
    data->d[10] = 3.186445f;
    data->d[11] = 1.480754f;
    data->d[12] = -17.681135f;
    data->d[13] = 0.000000f;
    data->d[14] = -0.477248f;
    data->d[15] = 0.459102f;
    data->d[16] = -2.028781f;
    data->d[17] = -0.000001f;
    data->d[18] = 3.009686f;
    data->d[19] = 0.000003f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation0

// Variation: 1  result = 0.00000751
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.115938f;
    data->d[1] = 0.303486f;
    data->d[2] = 0.108680f;
    data->d[3] = -2.639584f;
    data->d[4] = -1.868666f;
    data->d[5] = -1.397401f;
    data->d[6] = -0.310194f;
    data->d[7] = 0.192987f;
    data->d[8] = 1.323322f;
    data->d[9] = -1.223397f;
    data->d[10] = -3.347888f;
    data->d[11] = 0.000017f;
    data->d[12] = 0.121316f;
    data->d[13] = -6.887079f;
    data->d[14] = 1.423037f;
    data->d[15] = -0.477456f;
    data->d[16] = -3.762642f;
    data->d[17] = -0.035356f;
    data->d[18] = -0.826041f;
    data->d[19] = -0.016619f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000008f;
} // LoadVariation1

// Variation: 2  result = 0.00000560
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.324555f;
    data->d[1] = 0.967810f;
    data->d[2] = -0.828448f;
    data->d[3] = -0.871212f;
    data->d[4] = -0.666513f;
    data->d[5] = 0.789713f;
    data->d[6] = 0.690901f;
    data->d[7] = 1.164907f;
    data->d[8] = 1.526186f;
    data->d[9] = 0.458702f;
    data->d[10] = 4.206573f;
    data->d[11] = 0.007654f;
    data->d[12] = -0.291116f;
    data->d[13] = -1.793995f;
    data->d[14] = 1.921781f;
    data->d[15] = 0.400587f;
    data->d[16] = 2.649676f;
    data->d[17] = 0.617908f;
    data->d[18] = -0.115554f;
    data->d[19] = 0.116025f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000006f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000008f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 18);
    instructions->SetOperation(1, 0, 24);
    instructions->SetOperation(2, 1, 26);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 19);
    instructions->SetOperation(5, 0, 16);
    instructions->SetOperation(6, 0, 3);
    instructions->SetOperation(7, 0, 0);
    instructions->SetOperation(8, 1, 25);
    instructions->SetOperation(9, 1, 20);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 26);
    instructions->SetOperation(12, 1, 13);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 14);
    instructions->SetOperation(15, 0, 18);
    instructions->SetOperation(16, 1, 16);
    instructions->SetOperation(17, 0, 27);
    instructions->SetOperation(18, 0, 10);
    instructions->SetOperation(19, 1, 2);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 0, 1);
    instructions->SetOperation(22, 0, 20);
    instructions->SetOperation(23, 1, 11);
    instructions->SetOperation(24, 0, 3);
    instructions->SetOperation(25, 1, 4);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 0, 6);
    instructions->SetOperation(29, 0, 25);
    instructions->SetOperation(30, 1, 5);
    instructions->SetOperation(31, 0, 20);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 32;
    state.m_evolution = 6;
    state.m_children = 121;
    state.m_index = 8;
    state.m_copy_index = 238;
    state.m_id = 202;
    state.m_test = 8;
    state.m_seed = 1263999509873652867;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000011f;
    state.m_maxResult = 0.000008f;
    state.m_evolveWeight = 0.000166f;
    state.m_optimizeValid = true;
} // LoadState
