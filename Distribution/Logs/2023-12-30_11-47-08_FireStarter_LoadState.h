#pragma once
#include "FireStarterState.h"

// Run date: 12/30/23 11:47:08 Pacific Standard Time
// Run duration = 433.761720 seconds
// Run generation = 7
// Run evolution = 4
// Run max result = 0.00000520
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
// Run tests = 1
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
    settings.m_tests = 1;
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

// Variation: 0  result = 0.00000387
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.114352f;
    data->d[1] = -0.359246f;
    data->d[2] = -0.027975f;
    data->d[3] = -0.052068f;
    data->d[4] = 0.004324f;
    data->d[5] = -1.175175f;
    data->d[6] = -0.725707f;
    data->d[7] = -1.155182f;
    data->d[8] = 1.789972f;
    data->d[9] = -2.033125f;
    data->d[10] = -3.174115f;
    data->d[11] = 1.593328f;
    data->d[12] = -2.700936f;
    data->d[13] = 2.224219f;
    data->d[14] = -3.124035f;
    data->d[15] = 1.826568f;
    data->d[16] = 1.176727f;
    data->d[17] = -0.076977f;
    data->d[18] = -0.042203f;
    data->d[19] = 0.248664f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000004f;
} // LoadVariation0

// Variation: 1  result = 0.00000203
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.157321f;
    data->d[1] = 0.486228f;
    data->d[2] = 0.512514f;
    data->d[3] = 0.000217f;
    data->d[4] = 0.041004f;
    data->d[5] = -0.525499f;
    data->d[6] = -0.586082f;
    data->d[7] = -1.227411f;
    data->d[8] = 1.211290f;
    data->d[9] = -0.924765f;
    data->d[10] = 1.573143f;
    data->d[11] = 3.632798f;
    data->d[12] = 2.066618f;
    data->d[13] = 2.716612f;
    data->d[14] = -0.883075f;
    data->d[15] = 1.861932f;
    data->d[16] = 0.504309f;
    data->d[17] = -3.239911f;
    data->d[18] = -1.287843f;
    data->d[19] = 1.336123f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000520
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.148003f;
    data->d[1] = -0.387472f;
    data->d[2] = 0.291032f;
    data->d[3] = 0.031846f;
    data->d[4] = -0.000933f;
    data->d[5] = -1.101391f;
    data->d[6] = -0.146800f;
    data->d[7] = -1.692443f;
    data->d[8] = 1.235968f;
    data->d[9] = -2.362531f;
    data->d[10] = -0.651548f;
    data->d[11] = 0.874110f;
    data->d[12] = 1.586498f;
    data->d[13] = 1.652839f;
    data->d[14] = 2.868734f;
    data->d[15] = -1.307601f;
    data->d[16] = 1.444429f;
    data->d[17] = 2.241509f;
    data->d[18] = 3.762621f;
    data->d[19] = 0.180977f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000005f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000005f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 1, 1);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 23);
    instructions->SetOperation(8, 1, 26);
    instructions->SetOperation(9, 1, 13);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 1, 28);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 0, 16);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 0, 28);
    instructions->SetOperation(18, 1, 25);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 1, 25);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 1, 4);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 1, 1);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 0, 0);
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
    state.m_evolution = 4;
    state.m_children = 0;
    state.m_index = 17;
    state.m_copy_index = 1;
    state.m_id = 44;
    state.m_test = 0;
    state.m_seed = 7670838320826176534;
    state.m_oldResult = 0.000013f;
    state.m_maxResult = 0.000005f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
