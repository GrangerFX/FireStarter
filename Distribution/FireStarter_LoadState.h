#pragma once
#include "FireStarterState.h"

// Run date: 04/02/23 22:48:01 Pacific Daylight Time
// Run duration = 2530.594119 seconds
// Run generation = 482
// Run result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 28
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 1
// Run seeds = 1
// Run mode = FIRESTARTER_OPTIMIZE
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
    settings.m_registers = 28;
    settings.m_opcodes = 2;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 1;
    settings.m_seeds = 1;
    settings.m_mode = FIRESTARTER_OPTIMIZE;
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.972259f;
    data->d[2] = 0.419558f;
    data->d[3] = 2.653041f;
    data->d[4] = -1.942204f;
    data->d[5] = 0.004391f;
    data->d[6] = 2.546229f;
    data->d[7] = -0.656318f;
    data->d[8] = -1.334628f;
    data->d[9] = 0.124225f;
    data->d[10] = 0.054624f;
    data->d[11] = -4.061647f;
    data->d[12] = -1.384881f;
    data->d[13] = -1.847226f;
    data->d[14] = 1.087475f;
    data->d[15] = 0.276732f;
    data->d[16] = 0.935773f;
    data->d[17] = -0.824592f;
    data->d[18] = 0.260078f;
    data->d[19] = -0.294888f;
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
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.088823f;
    data->d[2] = -0.247990f;
    data->d[3] = 0.384082f;
    data->d[4] = 1.291736f;
    data->d[5] = 1.267039f;
    data->d[6] = -1.564313f;
    data->d[7] = 1.440095f;
    data->d[8] = 0.699902f;
    data->d[9] = 0.517007f;
    data->d[10] = -1.682662f;
    data->d[11] = 1.327186f;
    data->d[12] = -0.847213f;
    data->d[13] = 0.395515f;
    data->d[14] = 0.024374f;
    data->d[15] = -0.109836f;
    data->d[16] = 0.005715f;
    data->d[17] = 1.785743f;
    data->d[18] = -0.336520f;
    data->d[19] = 0.194886f;
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
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.454999f;
    data->d[2] = 1.617541f;
    data->d[3] = 0.091250f;
    data->d[4] = -0.906875f;
    data->d[5] = -2.674086f;
    data->d[6] = -0.203299f;
    data->d[7] = -2.180502f;
    data->d[8] = -1.091428f;
    data->d[9] = 0.056489f;
    data->d[10] = 0.016584f;
    data->d[11] = -1.044224f;
    data->d[12] = 0.457387f;
    data->d[13] = -0.964634f;
    data->d[14] = -0.127247f;
    data->d[15] = 0.312057f;
    data->d[16] = -0.014839f;
    data->d[17] = 1.095343f;
    data->d[18] = -0.258607f;
    data->d[19] = 0.912457f;
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
    data->d[30] = 2357654.250000f;
    data->d[31] = -0.000000f;
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
    instructions->SetOperation(0, 1, 11);
    instructions->SetOperation(1, 0, 10);
    instructions->SetOperation(2, 0, 3);
    instructions->SetOperation(3, 1, 28);
    instructions->SetOperation(4, 0, 25);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 1, 22);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 21);
    instructions->SetOperation(10, 1, 6);
    instructions->SetOperation(11, 0, 10);
    instructions->SetOperation(12, 0, 13);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 7);
    instructions->SetOperation(15, 0, 5);
    instructions->SetOperation(16, 1, 8);
    instructions->SetOperation(17, 0, 5);
    instructions->SetOperation(18, 1, 1);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 1, 20);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 6);
    instructions->SetOperation(23, 0, 21);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 1, 27);
    instructions->SetOperation(26, 1, 18);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 15);
    instructions->SetOperation(30, 1, 12);
    instructions->SetOperation(31, 1, 27);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 482;
    state.m_index = 0;
    state.m_test = 84;
    state.m_seed = 18418751971040858151;
} // LoadState
