#pragma once
#include "FireStarterState.h"

// Run date: 04/30/23 17:12:13 Pacific Daylight Time
// Run duration = 1560.217882 seconds
// Run generation = 343
// Run result = 0.00000083
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 27
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 1
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 27;
    settings.m_opcodes = 2;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 1;
    settings.m_seeds = 1;
    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_tests = 100;
    settings.m_units = 4;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000016
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -1.596878f;
    data->d[2] = 0.055497f;
    data->d[3] = -1.276575f;
    data->d[4] = 0.692891f;
    data->d[5] = -1.666816f;
    data->d[6] = -1.666091f;
    data->d[7] = 0.335995f;
    data->d[8] = 2.185722f;
    data->d[9] = -1.249522f;
    data->d[10] = 2.184122f;
    data->d[11] = 1.345914f;
    data->d[12] = -0.081385f;
    data->d[13] = 2.845053f;
    data->d[14] = 3.705709f;
    data->d[15] = 0.132981f;
    data->d[16] = 3.318499f;
    data->d[17] = 0.000000f;
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
    data->d[28] = 0.000001f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = -3.090659f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000072
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.194143f;
    data->d[2] = -0.287296f;
    data->d[3] = -0.323928f;
    data->d[4] = 0.421141f;
    data->d[5] = 1.419227f;
    data->d[6] = 32.530396f;
    data->d[7] = 0.361756f;
    data->d[8] = 0.039141f;
    data->d[9] = 0.166898f;
    data->d[10] = 4.556398f;
    data->d[11] = -6.933062f;
    data->d[12] = -9.464831f;
    data->d[13] = 3.952195f;
    data->d[14] = -8.110214f;
    data->d[15] = -93.035645f;
    data->d[16] = 2.343020f;
    data->d[17] = -0.059066f;
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
    data->d[28] = 0.000001f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = -2.617994f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000083
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.782178f;
    data->d[2] = 0.217783f;
    data->d[3] = -2.491331f;
    data->d[4] = 1.911800f;
    data->d[5] = 1.506224f;
    data->d[6] = -1.861821f;
    data->d[7] = -1.496376f;
    data->d[8] = -0.421433f;
    data->d[9] = -0.569346f;
    data->d[10] = 0.457441f;
    data->d[11] = 20.949196f;
    data->d[12] = 0.002066f;
    data->d[13] = 20.353971f;
    data->d[14] = 39.056015f;
    data->d[15] = 0.438287f;
    data->d[16] = 0.000330f;
    data->d[17] = 0.261799f;
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
    data->d[28] = -48628.027344f;
    data->d[29] = -0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
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
    instructions->SetOperation(0, 1, 7);
    instructions->SetOperation(1, 0, 10);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 1, 19);
    instructions->SetOperation(5, 0, 2);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 0, 3);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 4);
    instructions->SetOperation(11, 0, 3);
    instructions->SetOperation(12, 1, 4);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 0, 0);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 0, 9);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 0, 16);
    instructions->SetOperation(19, 0, 21);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 0, 7);
    instructions->SetOperation(22, 0, 20);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 1, 26);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 1, 14);
    instructions->SetOperation(30, 1, 9);
    instructions->SetOperation(31, 1, 9);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 343;
    state.m_index = 2;
    state.m_test = 52;
    state.m_seed = 13537530312999092227;
} // LoadState
