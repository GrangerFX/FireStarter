#pragma once
#include "FireStarterState.h"

// Run date: 04/02/23 12:27:52 Pacific Daylight Time
// Run duration = 2762.217528 seconds
// Run generation = 78
// Run result = 0.00024277
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 28
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
    settings.m_registers = 28;
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

// Variation: 0  result = 0.00020969
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.203888f;
    data->d[1] = 1.809542f;
    data->d[2] = 1.689837f;
    data->d[3] = -0.176050f;
    data->d[4] = 0.964931f;
    data->d[5] = -0.088933f;
    data->d[6] = -1.055858f;
    data->d[7] = -1.225315f;
    data->d[8] = -1.162010f;
    data->d[9] = -0.037334f;
    data->d[10] = -0.371561f;
    data->d[11] = -0.123343f;
    data->d[12] = 1.510646f;
    data->d[13] = -0.425193f;
    data->d[14] = 1.570354f;
    data->d[15] = 2.097740f;
    data->d[16] = -0.358479f;
    data->d[17] = 1.391109f;
    data->d[18] = -1.706346f;
    data->d[19] = 0.299680f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000192f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000210f;
} // LoadVariation0

// Variation: 1  result = 0.00019157
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.343364f;
    data->d[1] = -0.679910f;
    data->d[2] = -1.092773f;
    data->d[3] = -0.089384f;
    data->d[4] = 1.522912f;
    data->d[5] = 1.403441f;
    data->d[6] = -1.008595f;
    data->d[7] = 0.229228f;
    data->d[8] = -2.002831f;
    data->d[9] = -0.564065f;
    data->d[10] = 0.574984f;
    data->d[11] = 0.616618f;
    data->d[12] = 1.588415f;
    data->d[13] = -0.188327f;
    data->d[14] = 1.135223f;
    data->d[15] = -1.574271f;
    data->d[16] = 0.408022f;
    data->d[17] = -2.857857f;
    data->d[18] = -0.862538f;
    data->d[19] = 1.203962f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000243f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000192f;
} // LoadVariation1

// Variation: 2  result = 0.00024277
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.398230f;
    data->d[1] = 0.007839f;
    data->d[2] = 0.085456f;
    data->d[3] = 0.898105f;
    data->d[4] = -0.945257f;
    data->d[5] = -0.298814f;
    data->d[6] = -2.238672f;
    data->d[7] = -5.036738f;
    data->d[8] = -2.092831f;
    data->d[9] = -1.418815f;
    data->d[10] = -0.363191f;
    data->d[11] = -0.006723f;
    data->d[12] = 7.172944f;
    data->d[13] = -0.106996f;
    data->d[14] = 0.353479f;
    data->d[15] = -3.759873f;
    data->d[16] = 1.554666f;
    data->d[17] = 0.109633f;
    data->d[18] = -1.536502f;
    data->d[19] = 0.536811f;
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
    *(result->MinResult()) = 0.000243f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000243f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 19);
    instructions->SetOperation(1, 0, 15);
    instructions->SetOperation(2, 1, 21);
    instructions->SetOperation(3, 0, 9);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 6);
    instructions->SetOperation(6, 0, 22);
    instructions->SetOperation(7, 0, 4);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 1, 18);
    instructions->SetOperation(10, 1, 14);
    instructions->SetOperation(11, 1, 31);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 15);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 1, 1);
    instructions->SetOperation(17, 1, 30);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 24);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 27);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 1, 12);
    instructions->SetOperation(27, 0, 27);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 0, 26);
    instructions->SetOperation(30, 0, 16);
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
    state.m_generation = 78;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 7254012539107731310;
} // LoadState
