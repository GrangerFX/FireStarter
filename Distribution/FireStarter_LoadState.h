#pragma once
#include "FireStarterState.h"

// Run date: 04/02/23 18:14:55 Pacific Daylight Time
// Run duration = 2586.294384 seconds
// Run generation = 142
// Run result = 0.00015140
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

// Variation: 0  result = 0.00013047
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.053827f;
    data->d[1] = 0.410916f;
    data->d[2] = -0.757651f;
    data->d[3] = 0.378159f;
    data->d[4] = -4.315570f;
    data->d[5] = 0.295318f;
    data->d[6] = 0.007520f;
    data->d[7] = 0.991298f;
    data->d[8] = 3.170989f;
    data->d[9] = 0.953538f;
    data->d[10] = -1.828154f;
    data->d[11] = 0.541557f;
    data->d[12] = -0.445477f;
    data->d[13] = -0.052357f;
    data->d[14] = -1.529421f;
    data->d[15] = 0.557020f;
    data->d[16] = -0.199299f;
    data->d[17] = 3.530946f;
    data->d[18] = -0.221616f;
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
    data->d[30] = 0.000085f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000130f;
} // LoadVariation0

// Variation: 1  result = 0.00008512
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.860374f;
    data->d[1] = -0.275064f;
    data->d[2] = 0.689505f;
    data->d[3] = -0.391329f;
    data->d[4] = -2.019171f;
    data->d[5] = -0.670280f;
    data->d[6] = 0.174271f;
    data->d[7] = 0.487164f;
    data->d[8] = 0.462801f;
    data->d[9] = -1.777884f;
    data->d[10] = -1.539866f;
    data->d[11] = 0.487778f;
    data->d[12] = -0.278176f;
    data->d[13] = -0.015955f;
    data->d[14] = -1.974876f;
    data->d[15] = 0.730779f;
    data->d[16] = -0.121476f;
    data->d[17] = 1.316916f;
    data->d[18] = -0.224856f;
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
    data->d[30] = 0.000151f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000085f;
} // LoadVariation1

// Variation: 2  result = 0.00015140
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.812104f;
    data->d[1] = 0.648654f;
    data->d[2] = -0.747089f;
    data->d[3] = 0.627762f;
    data->d[4] = -0.505291f;
    data->d[5] = 0.027645f;
    data->d[6] = -2.021018f;
    data->d[7] = 1.792960f;
    data->d[8] = -0.639066f;
    data->d[9] = 2.031541f;
    data->d[10] = 1.852405f;
    data->d[11] = -1.675029f;
    data->d[12] = 1.861881f;
    data->d[13] = -0.225254f;
    data->d[14] = -1.226732f;
    data->d[15] = -0.106836f;
    data->d[16] = -1.585056f;
    data->d[17] = -0.039547f;
    data->d[18] = 0.366084f;
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
    *(result->MinResult()) = 0.000151f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000151f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 6);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 1, 21);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 6);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 14);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 1, 28);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 14);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 1, 31);
    instructions->SetOperation(17, 1, 30);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 24);
    instructions->SetOperation(20, 1, 14);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 1, 16);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 0, 22);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 0, 17);
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
    state.m_generation = 142;
    state.m_index = 0;
    state.m_test = 99;
    state.m_seed = 10972790290307571427;
} // LoadState
