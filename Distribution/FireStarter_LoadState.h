#pragma once
#include "FireStarterState.h"

// Run date: 04/23/23 15:38:41 Pacific Daylight Time
// Run duration = 1494.819411 seconds
// Run generation = 300
// Run result = 0.00000018
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

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
    settings.m_registers = 29;
    settings.m_opcodes = 2;

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

// Variation: 0  result = 0.00000007
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.129116f;
    data->d[2] = -1.154953f;
    data->d[3] = 1.801607f;
    data->d[4] = 0.705495f;
    data->d[5] = -0.801982f;
    data->d[6] = -1.548019f;
    data->d[7] = 0.294193f;
    data->d[8] = -0.592771f;
    data->d[9] = 1.352190f;
    data->d[10] = -34.195583f;
    data->d[11] = 12.033689f;
    data->d[12] = 25.154526f;
    data->d[13] = 0.000038f;
    data->d[14] = 2.886502f;
    data->d[15] = -0.488308f;
    data->d[16] = 1.087286f;
    data->d[17] = 0.008831f;
    data->d[18] = -0.907734f;
    data->d[19] = 0.008016f;
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

// Variation: 1  result = 0.00000018
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.818839f;
    data->d[2] = 0.066907f;
    data->d[3] = -5.180578f;
    data->d[4] = 0.237937f;
    data->d[5] = -0.922555f;
    data->d[6] = -1.001184f;
    data->d[7] = 0.765881f;
    data->d[8] = -1.130839f;
    data->d[9] = 0.810510f;
    data->d[10] = 2.597050f;
    data->d[11] = -19.549223f;
    data->d[12] = -0.600432f;
    data->d[13] = -0.018252f;
    data->d[14] = 0.822119f;
    data->d[15] = 1.926443f;
    data->d[16] = -1.665147f;
    data->d[17] = 0.003815f;
    data->d[18] = 1.909076f;
    data->d[19] = -0.125415f;
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

// Variation: 2  result = 0.00000018
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.318021f;
    data->d[2] = -0.183015f;
    data->d[3] = 1.257863f;
    data->d[4] = 1.025109f;
    data->d[5] = -1.338788f;
    data->d[6] = -1.307246f;
    data->d[7] = -3.700522f;
    data->d[8] = 0.130304f;
    data->d[9] = 0.702273f;
    data->d[10] = 29.491156f;
    data->d[11] = -9.155748f;
    data->d[12] = 10.892312f;
    data->d[13] = -0.000446f;
    data->d[14] = 6.278119f;
    data->d[15] = 1.790012f;
    data->d[16] = -0.846664f;
    data->d[17] = 0.346551f;
    data->d[18] = 1.271069f;
    data->d[19] = 0.083109f;
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
    instructions->SetOperation(2, 0, 7);
    instructions->SetOperation(3, 0, 27);
    instructions->SetOperation(4, 1, 9);
    instructions->SetOperation(5, 0, 24);
    instructions->SetOperation(6, 0, 24);
    instructions->SetOperation(7, 0, 24);
    instructions->SetOperation(8, 1, 20);
    instructions->SetOperation(9, 1, 20);
    instructions->SetOperation(10, 1, 1);
    instructions->SetOperation(11, 1, 27);
    instructions->SetOperation(12, 0, 3);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 1, 25);
    instructions->SetOperation(15, 0, 22);
    instructions->SetOperation(16, 1, 2);
    instructions->SetOperation(17, 1, 28);
    instructions->SetOperation(18, 0, 17);
    instructions->SetOperation(19, 0, 15);
    instructions->SetOperation(20, 0, 17);
    instructions->SetOperation(21, 1, 6);
    instructions->SetOperation(22, 1, 25);
    instructions->SetOperation(23, 1, 18);
    instructions->SetOperation(24, 1, 1);
    instructions->SetOperation(25, 1, 1);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 0, 27);
    instructions->SetOperation(28, 0, 6);
    instructions->SetOperation(29, 1, 26);
    instructions->SetOperation(30, 0, 11);
    instructions->SetOperation(31, 1, 23);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 300;
    state.m_index = 2;
    state.m_test = 50;
    state.m_seed = 10082288092670749594;
} // LoadState
