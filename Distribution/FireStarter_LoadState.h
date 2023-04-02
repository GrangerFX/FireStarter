#pragma once
#include "FireStarterState.h"

// Run date: 04/01/23 22:23:35 Pacific Daylight Time
// Run duration = 2569.465567 seconds
// Run generation = 79
// Run result = 0.00024849
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 32
// Run opcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
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
    settings.m_registers = 32;
    settings.m_opcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 0;
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

// Variation: 0  result = 0.00024849
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.763824f;
    data->d[1] = 0.464832f;
    data->d[2] = -1.041159f;
    data->d[3] = 0.211045f;
    data->d[4] = -0.608270f;
    data->d[5] = 0.625734f;
    data->d[6] = 1.360043f;
    data->d[7] = 1.078120f;
    data->d[8] = 1.232551f;
    data->d[9] = -1.880378f;
    data->d[10] = 0.362786f;
    data->d[11] = 0.946752f;
    data->d[12] = -0.088975f;
    data->d[13] = -2.180820f;
    data->d[14] = -0.841747f;
    data->d[15] = 0.022490f;
    data->d[16] = 1.473089f;
    data->d[17] = 1.814632f;
    data->d[18] = 0.247938f;
    data->d[19] = -0.626813f;
    data->d[20] = 1.504015f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000248f;
} // LoadVariation0

// Variation: 1  result = 0.00016510
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.098593f;
    data->d[1] = -0.417497f;
    data->d[2] = -1.450296f;
    data->d[3] = -0.396720f;
    data->d[4] = -1.685299f;
    data->d[5] = 0.956292f;
    data->d[6] = -1.138923f;
    data->d[7] = 0.054355f;
    data->d[8] = -1.908038f;
    data->d[9] = 0.820681f;
    data->d[10] = 0.846194f;
    data->d[11] = 2.557211f;
    data->d[12] = 0.407976f;
    data->d[13] = 0.466794f;
    data->d[14] = 0.298709f;
    data->d[15] = 0.094242f;
    data->d[16] = -1.367355f;
    data->d[17] = -1.005645f;
    data->d[18] = -0.945155f;
    data->d[19] = -0.626263f;
    data->d[20] = -0.053374f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000165f;
} // LoadVariation1

// Variation: 2  result = 0.00021112
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.525087f;
    data->d[1] = -0.504222f;
    data->d[2] = -1.565417f;
    data->d[3] = -1.736955f;
    data->d[4] = 0.937903f;
    data->d[5] = 0.120700f;
    data->d[6] = -2.040695f;
    data->d[7] = -0.214810f;
    data->d[8] = -0.451873f;
    data->d[9] = 1.822890f;
    data->d[10] = 2.554180f;
    data->d[11] = -0.072573f;
    data->d[12] = -1.392213f;
    data->d[13] = 1.180839f;
    data->d[14] = 3.034437f;
    data->d[15] = 0.285249f;
    data->d[16] = -1.459034f;
    data->d[17] = 1.085191f;
    data->d[18] = 2.421250f;
    data->d[19] = 0.198806f;
    data->d[20] = 0.204232f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000211f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000248f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 6);
    instructions->SetOperation(1, 0, 17);
    instructions->SetOperation(2, 1, 20);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 6);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 30);
    instructions->SetOperation(9, 1, 1);
    instructions->SetOperation(10, 0, 23);
    instructions->SetOperation(11, 1, 30);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 0, 17);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 21);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 29);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 0, 26);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 30);
    instructions->SetOperation(28, 0, 23);
    instructions->SetOperation(29, 1, 11);
    instructions->SetOperation(30, 0, 18);
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
    state.m_generation = 79;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 10779776797107758486;
} // LoadState
