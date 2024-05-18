#pragma once
#include "FireStarterState.h"

// Run date: 05/13/24 09:29:22 Pacific Daylight Time
// Run duration = 340.713511 seconds
// Run generation = 177
// Run evolution = 7
// Run max result = 0.00000060
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
// Run evolveSeed = 1
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

// Run scale = 0.200000f
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
    settings.m_evolveSeed = 1;
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

    settings.m_scale = 0.200000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000054
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.565715f;
    data->d[1] = -0.282930f;
    data->d[2] = -1.107199f;
    data->d[3] = -1.252762f;
    data->d[4] = 0.782623f;
    data->d[5] = 0.527145f;
    data->d[6] = 0.475744f;
    data->d[7] = 1.677863f;
    data->d[8] = -1.516921f;
    data->d[9] = 0.909843f;
    data->d[10] = 1.053743f;
    data->d[11] = 0.051746f;
    data->d[12] = 1.798121f;
    data->d[13] = 2.647348f;
    data->d[14] = -1.130451f;
    data->d[15] = -9.403367f;
    data->d[16] = -0.878933f;
    data->d[17] = 0.423398f;
    data->d[18] = 4.797549f;
    data->d[19] = -0.162570f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000060
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.123938f;
    data->d[1] = 0.949107f;
    data->d[2] = 1.517373f;
    data->d[3] = 2.531154f;
    data->d[4] = -2.523695f;
    data->d[5] = 0.677735f;
    data->d[6] = 0.407814f;
    data->d[7] = -2.054278f;
    data->d[8] = -0.418422f;
    data->d[9] = -0.326544f;
    data->d[10] = 0.488552f;
    data->d[11] = 0.061387f;
    data->d[12] = 1.113056f;
    data->d[13] = 5.612147f;
    data->d[14] = -1.040801f;
    data->d[15] = -2.054229f;
    data->d[16] = -4.259773f;
    data->d[17] = 0.409734f;
    data->d[18] = 0.487034f;
    data->d[19] = -3.214187f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.913091f;
    data->d[1] = -0.341029f;
    data->d[2] = 1.636602f;
    data->d[3] = -0.507049f;
    data->d[4] = 0.931764f;
    data->d[5] = 0.165973f;
    data->d[6] = -0.792043f;
    data->d[7] = -1.512812f;
    data->d[8] = 0.219867f;
    data->d[9] = -2.412680f;
    data->d[10] = 0.508469f;
    data->d[11] = 0.054715f;
    data->d[12] = 1.087405f;
    data->d[13] = -0.103067f;
    data->d[14] = 3.881403f;
    data->d[15] = -4.642398f;
    data->d[16] = -3.003858f;
    data->d[17] = 1.050632f;
    data->d[18] = 2.086912f;
    data->d[19] = -0.805447f;
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
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 14);
    instructions->SetOperation(1, 0, 8);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 0, 7);
    instructions->SetOperation(4, 1, 16);
    instructions->SetOperation(5, 1, 15);
    instructions->SetOperation(6, 0, 22);
    instructions->SetOperation(7, 0, 27);
    instructions->SetOperation(8, 0, 16);
    instructions->SetOperation(9, 0, 10);
    instructions->SetOperation(10, 0, 20);
    instructions->SetOperation(11, 1, 26);
    instructions->SetOperation(12, 0, 17);
    instructions->SetOperation(13, 1, 5);
    instructions->SetOperation(14, 0, 2);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 1, 2);
    instructions->SetOperation(17, 0, 26);
    instructions->SetOperation(18, 1, 24);
    instructions->SetOperation(19, 0, 11);
    instructions->SetOperation(20, 0, 17);
    instructions->SetOperation(21, 1, 29);
    instructions->SetOperation(22, 1, 5);
    instructions->SetOperation(23, 0, 5);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 20);
    instructions->SetOperation(28, 1, 27);
    instructions->SetOperation(29, 1, 23);
    instructions->SetOperation(30, 1, 19);
    instructions->SetOperation(31, 1, 2);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 177;
    state.m_evolution = 7;
    state.m_index = 11;
    state.m_copy_index = 27;
    state.m_id = 27;
    state.m_test = 0;
    state.m_seed = 18237387201857217416;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000245f;
    state.m_optimizeValid = true;
} // LoadState
