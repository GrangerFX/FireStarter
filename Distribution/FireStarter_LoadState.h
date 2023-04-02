#pragma once
#include "FireStarterState.h"

// Run date: 04/02/23 10:35:45 Pacific Daylight Time
// Run duration = 2288.346258 seconds
// Run generation = 73
// Run result = 0.00041109
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 16
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
    settings.m_registers = 16;
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

// Variation: 0  result = 0.00009209
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.171902f;
    data->d[1] = 1.080076f;
    data->d[2] = 0.473311f;
    data->d[3] = -0.000328f;
    data->d[4] = -0.064652f;
    data->d[5] = -1.622541f;
    data->d[6] = -1.169937f;
    data->d[7] = -0.129947f;
    data->d[8] = -0.524632f;
    data->d[9] = -0.834120f;
    data->d[10] = 0.135360f;
    data->d[11] = -0.252487f;
    data->d[12] = 0.000000f;
    data->d[13] = 0.000000f;
    data->d[14] = 0.000000f;
    data->d[15] = 0.000000f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000318f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = -0.151799f;
    data->d[21] = 1.627963f;
    data->d[22] = 0.629812f;
    data->d[23] = 0.019286f;
    data->d[24] = -3.846292f;
    data->d[25] = -3.261739f;
    data->d[26] = -0.178287f;
    data->d[27] = 0.564249f;
    data->d[28] = -0.182932f;
    data->d[29] = 0.818693f;
    data->d[30] = -0.045656f;
    data->d[31] = -2.398698f;
    *(result->MinResult()) = 0.000092f;
} // LoadVariation0

// Variation: 1  result = 0.00031829
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.151799f;
    data->d[1] = 1.627963f;
    data->d[2] = 0.629812f;
    data->d[3] = 0.019286f;
    data->d[4] = -3.846292f;
    data->d[5] = -3.261739f;
    data->d[6] = -0.178287f;
    data->d[7] = 0.564249f;
    data->d[8] = -0.182932f;
    data->d[9] = 0.818693f;
    data->d[10] = -0.045656f;
    data->d[11] = -2.398698f;
    data->d[12] = 0.000000f;
    data->d[13] = 0.000000f;
    data->d[14] = 0.000000f;
    data->d[15] = 0.000000f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000411f;
    data->d[18] = 0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.205600f;
    data->d[21] = -1.766159f;
    data->d[22] = 0.526771f;
    data->d[23] = 0.028172f;
    data->d[24] = 5.027158f;
    data->d[25] = -1.625917f;
    data->d[26] = 1.484947f;
    data->d[27] = -0.105173f;
    data->d[28] = 1.005657f;
    data->d[29] = -1.445795f;
    data->d[30] = -0.065877f;
    data->d[31] = 0.863007f;
    *(result->MinResult()) = 0.000318f;
} // LoadVariation1

// Variation: 2  result = 0.00041109
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.205600f;
    data->d[1] = -1.766159f;
    data->d[2] = 0.526771f;
    data->d[3] = 0.028172f;
    data->d[4] = 5.027158f;
    data->d[5] = -1.625917f;
    data->d[6] = 1.484947f;
    data->d[7] = -0.105173f;
    data->d[8] = 1.005657f;
    data->d[9] = -1.445795f;
    data->d[10] = -0.065877f;
    data->d[11] = 0.863007f;
    data->d[12] = 0.000000f;
    data->d[13] = 0.000000f;
    data->d[14] = 0.000000f;
    data->d[15] = 0.000000f;
    data->d[16] = 0.000000f;
    data->d[17] = 0.000000f;
    data->d[18] = 0.000000f;
    data->d[19] = -0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000230f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000411f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000411f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 11);
    instructions->SetOperation(1, 1, 5);
    instructions->SetOperation(2, 1, 21);
    instructions->SetOperation(3, 0, 5);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 0, 10);
    instructions->SetOperation(6, 0, 19);
    instructions->SetOperation(7, 0, 2);
    instructions->SetOperation(8, 1, 16);
    instructions->SetOperation(9, 1, 1);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 7);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 0, 9);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 1, 1);
    instructions->SetOperation(16, 1, 3);
    instructions->SetOperation(17, 1, 30);
    instructions->SetOperation(18, 1, 1);
    instructions->SetOperation(19, 0, 8);
    instructions->SetOperation(20, 0, 11);
    instructions->SetOperation(21, 1, 0);
    instructions->SetOperation(22, 0, 15);
    instructions->SetOperation(23, 0, 5);
    instructions->SetOperation(24, 0, 6);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 1, 7);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 1, 22);
    instructions->SetOperation(29, 1, 11);
    instructions->SetOperation(30, 0, 9);
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
    state.m_generation = 73;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 1598159874160096796;
} // LoadState
