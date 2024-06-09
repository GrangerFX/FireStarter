#pragma once
#include "FireStarterState.h"

// Run date: 06/09/24 09:51:15 Pacific Daylight Time
// Run duration = 558.010642 seconds
// Run generation = 20
// Run evolution = 2
// Run max result = 0.16438279
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

// Variation: 0  result = 0.06065907
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.006785f;
    data->d[1] = 16.113344f;
    data->d[2] = -0.000000f;
    data->d[3] = 4.365886f;
    data->d[4] = -6.498145f;
    data->d[5] = -1.937513f;
    data->d[6] = 0.252742f;
    data->d[7] = 0.000000f;
    data->d[8] = -0.182982f;
    data->d[9] = -8.736174f;
    data->d[10] = 0.000191f;
    data->d[11] = -109.472275f;
    data->d[12] = -28.105442f;
    data->d[13] = 0.126777f;
    data->d[14] = -8.017809f;
    data->d[15] = -1.014439f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.198181f;
    data->d[18] = 14.099992f;
    data->d[19] = 12.798812f;
    data->d[20] = -0.062476f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.060659f;
} // LoadVariation0

// Variation: 1  result = 0.04528264
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.416309f;
    data->d[1] = 9.987932f;
    data->d[2] = 0.000000f;
    data->d[3] = -1.000798f;
    data->d[4] = -18.598989f;
    data->d[5] = -8.433517f;
    data->d[6] = 6.270881f;
    data->d[7] = -0.000000f;
    data->d[8] = -0.045607f;
    data->d[9] = -0.010234f;
    data->d[10] = -0.342728f;
    data->d[11] = 553.679626f;
    data->d[12] = -34.741756f;
    data->d[13] = -1.186855f;
    data->d[14] = 0.215330f;
    data->d[15] = -1.351210f;
    data->d[16] = -0.000000f;
    data->d[17] = 5.396646f;
    data->d[18] = 22.253332f;
    data->d[19] = -2.860690f;
    data->d[20] = 0.002746f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.045283f;
} // LoadVariation1

// Variation: 2  result = 0.16438279
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.123039f;
    data->d[1] = 16.560085f;
    data->d[2] = -0.000000f;
    data->d[3] = 0.927524f;
    data->d[4] = -0.125921f;
    data->d[5] = -0.859950f;
    data->d[6] = 0.020875f;
    data->d[7] = 0.000000f;
    data->d[8] = -14.905693f;
    data->d[9] = -3.573266f;
    data->d[10] = -0.000021f;
    data->d[11] = 57.810871f;
    data->d[12] = -12.701085f;
    data->d[13] = -5.694947f;
    data->d[14] = -11.412903f;
    data->d[15] = 7.540477f;
    data->d[16] = -0.000000f;
    data->d[17] = 3.174899f;
    data->d[18] = -20.194290f;
    data->d[19] = 4.317486f;
    data->d[20] = 0.093547f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.164383f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.164383f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 1);
    instructions->SetOperation(1, 0, 26);
    instructions->SetOperation(2, 0, 15);
    instructions->SetOperation(3, 0, 15);
    instructions->SetOperation(4, 1, 16);
    instructions->SetOperation(5, 1, 17);
    instructions->SetOperation(6, 1, 7);
    instructions->SetOperation(7, 1, 21);
    instructions->SetOperation(8, 0, 8);
    instructions->SetOperation(9, 1, 14);
    instructions->SetOperation(10, 0, 11);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 21);
    instructions->SetOperation(14, 1, 6);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 0, 21);
    instructions->SetOperation(17, 0, 18);
    instructions->SetOperation(18, 0, 5);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 1, 1);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 1, 0);
    instructions->SetOperation(23, 1, 1);
    instructions->SetOperation(24, 1, 2);
    instructions->SetOperation(25, 1, 14);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 1, 8);
    instructions->SetOperation(28, 0, 29);
    instructions->SetOperation(29, 1, 6);
    instructions->SetOperation(30, 0, 21);
    instructions->SetOperation(31, 0, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 20;
    state.m_evolution = 2;
    state.m_index = 14;
    state.m_copy_index = 24;
    state.m_id = 24;
    state.m_test = 0;
    state.m_seed = 2622119135382097740;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.169145f;
    state.m_maxResult = 0.164383f;
    state.m_evolveWeight = 3.044618f;
    state.m_optimizeValid = true;
} // LoadState
