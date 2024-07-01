#pragma once
#include "FireStarterState.h"

// Run date: 06/30/24 18:23:12 Pacific Daylight Time
// Run duration = 8042.206330 seconds
// Run generation = 188
// Run evolution = 6
// Run max result = 0.00000033
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
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
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.707981f;
    data->d[1] = -2.224186f;
    data->d[2] = 1.348512f;
    data->d[3] = -2.467496f;
    data->d[4] = -0.005215f;
    data->d[5] = 0.595767f;
    data->d[6] = 3.127424f;
    data->d[7] = 1.523812f;
    data->d[8] = -2.406139f;
    data->d[9] = -1.178805f;
    data->d[10] = -0.549278f;
    data->d[11] = -1.907586f;
    data->d[12] = 0.408280f;
    data->d[13] = 2.375364f;
    data->d[14] = 1.166913f;
    data->d[15] = -0.332432f;
    data->d[16] = 0.269759f;
    data->d[17] = -0.600878f;
    data->d[18] = -1.448686f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.291630f;
    data->d[1] = 0.901330f;
    data->d[2] = 0.802327f;
    data->d[3] = -0.169869f;
    data->d[4] = -0.009865f;
    data->d[5] = 8.035830f;
    data->d[6] = -3.758166f;
    data->d[7] = 2.949000f;
    data->d[8] = -0.530177f;
    data->d[9] = 2.712792f;
    data->d[10] = 0.149918f;
    data->d[11] = -0.203403f;
    data->d[12] = 2.004686f;
    data->d[13] = -18.535349f;
    data->d[14] = -0.037855f;
    data->d[15] = 1.066337f;
    data->d[16] = 0.271276f;
    data->d[17] = -1.792674f;
    data->d[18] = -1.439664f;
    data->d[19] = -0.118132f;
    data->d[20] = 0.000000f;
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

// Variation: 2  result = 0.00000033
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.172260f;
    data->d[1] = -0.450976f;
    data->d[2] = -1.560184f;
    data->d[3] = -0.822370f;
    data->d[4] = -0.191460f;
    data->d[5] = 0.130687f;
    data->d[6] = -4.836382f;
    data->d[7] = 0.898556f;
    data->d[8] = 4.212795f;
    data->d[9] = -1.898430f;
    data->d[10] = -1.807352f;
    data->d[11] = -2.668888f;
    data->d[12] = -1.369198f;
    data->d[13] = -6.308183f;
    data->d[14] = -3.301176f;
    data->d[15] = -0.151506f;
    data->d[16] = -0.404154f;
    data->d[17] = 0.410488f;
    data->d[18] = -2.594863f;
    data->d[19] = 0.523599f;
    data->d[20] = 0.000000f;
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
    instructions->SetOperation(0, 0, 10);
    instructions->SetOperation(1, 1, 4);
    instructions->SetOperation(2, 0, 20);
    instructions->SetOperation(3, 0, 20);
    instructions->SetOperation(4, 1, 8);
    instructions->SetOperation(5, 0, 1);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 0, 9);
    instructions->SetOperation(8, 0, 27);
    instructions->SetOperation(9, 0, 19);
    instructions->SetOperation(10, 1, 13);
    instructions->SetOperation(11, 0, 15);
    instructions->SetOperation(12, 1, 25);
    instructions->SetOperation(13, 0, 6);
    instructions->SetOperation(14, 1, 29);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 0, 18);
    instructions->SetOperation(17, 1, 6);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 1, 9);
    instructions->SetOperation(20, 0, 12);
    instructions->SetOperation(21, 1, 26);
    instructions->SetOperation(22, 1, 16);
    instructions->SetOperation(23, 0, 4);
    instructions->SetOperation(24, 0, 5);
    instructions->SetOperation(25, 0, 3);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 1, 15);
    instructions->SetOperation(28, 0, 5);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 0, 13);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 188;
    state.m_evolution = 6;
    state.m_index = 2;
    state.m_copy_index = 3;
    state.m_id = 3;
    state.m_test = 9;
    state.m_seed = 7080210926948400618;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000165f;
    state.m_optimizeValid = true;
} // LoadState
