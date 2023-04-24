#pragma once
#include "FireStarterState.h"

// Run date: 04/23/23 17:55:42 Pacific Daylight Time
// Run duration = 795.493135 seconds
// Run generation = 295
// Run result = 0.00000054
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
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
    settings.m_registers = 29;
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

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.445480f;
    data->d[2] = -4.252281f;
    data->d[3] = 3.127077f;
    data->d[4] = -5.522787f;
    data->d[5] = 0.013024f;
    data->d[6] = 0.269236f;
    data->d[7] = 0.390966f;
    data->d[8] = -0.884034f;
    data->d[9] = -1.289760f;
    data->d[10] = -0.541602f;
    data->d[11] = -5.533674f;
    data->d[12] = 0.000117f;
    data->d[13] = 1.320315f;
    data->d[14] = 0.216254f;
    data->d[15] = -0.301884f;
    data->d[16] = 0.000000f;
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
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000001f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000054
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.570518f;
    data->d[2] = -0.013109f;
    data->d[3] = 0.015997f;
    data->d[4] = 1.673049f;
    data->d[5] = 3.252749f;
    data->d[6] = -0.816654f;
    data->d[7] = -3.274644f;
    data->d[8] = -3.431990f;
    data->d[9] = -0.936580f;
    data->d[10] = -0.957884f;
    data->d[11] = 9.482182f;
    data->d[12] = -0.000961f;
    data->d[13] = -0.927243f;
    data->d[14] = -0.378043f;
    data->d[15] = 0.370495f;
    data->d[16] = -0.118132f;
    data->d[17] = -0.118217f;
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
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000015
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.346299f;
    data->d[2] = -1.271757f;
    data->d[3] = 0.580257f;
    data->d[4] = 1.682438f;
    data->d[5] = -0.268676f;
    data->d[6] = 1.746503f;
    data->d[7] = 1.763094f;
    data->d[8] = 7.790365f;
    data->d[9] = -0.000015f;
    data->d[10] = 0.022108f;
    data->d[11] = 1.629097f;
    data->d[12] = 5.531166f;
    data->d[13] = 1.782578f;
    data->d[14] = 2.290159f;
    data->d[15] = -0.346453f;
    data->d[16] = 0.523599f;
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
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = -0.000000f;
    data->d[31] = 0.000000f;
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
    instructions->SetOperation(0, 1, 7);
    instructions->SetOperation(1, 0, 15);
    instructions->SetOperation(2, 0, 15);
    instructions->SetOperation(3, 0, 24);
    instructions->SetOperation(4, 1, 10);
    instructions->SetOperation(5, 0, 17);
    instructions->SetOperation(6, 0, 13);
    instructions->SetOperation(7, 1, 24);
    instructions->SetOperation(8, 0, 4);
    instructions->SetOperation(9, 1, 26);
    instructions->SetOperation(10, 1, 15);
    instructions->SetOperation(11, 0, 26);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 1, 25);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 1, 24);
    instructions->SetOperation(16, 1, 26);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 1, 0);
    instructions->SetOperation(20, 0, 21);
    instructions->SetOperation(21, 0, 12);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 0, 6);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 1, 19);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 7);
    instructions->SetOperation(28, 1, 31);
    instructions->SetOperation(29, 0, 23);
    instructions->SetOperation(30, 0, 14);
    instructions->SetOperation(31, 1, 28);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 295;
    state.m_index = 0;
    state.m_test = 23;
    state.m_seed = 18153478457436362305;
} // LoadState
