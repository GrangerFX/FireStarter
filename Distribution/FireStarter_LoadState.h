#pragma once
#include "FireStarterState.h"

// Run date: 08/12/23 11:21:30 Pacific Daylight Time
// Run duration = 2435.002719 seconds
// Run generation = 124
// Run evolution = 14
// Run result = 0.00000066
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 0
// Run units = 8
// Run processes = 0
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 0;
    settings.m_units = 8;
    settings.m_processes = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000015
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.306986f;
    data->d[1] = -0.964426f;
    data->d[2] = -0.549308f;
    data->d[3] = -2.132060f;
    data->d[4] = 0.720751f;
    data->d[5] = -0.814014f;
    data->d[6] = 1.307914f;
    data->d[7] = -1.141513f;
    data->d[8] = -1.001074f;
    data->d[9] = -0.605430f;
    data->d[10] = 1.886539f;
    data->d[11] = 2.009314f;
    data->d[12] = 0.000209f;
    data->d[13] = 4.137651f;
    data->d[14] = -1.003967f;
    data->d[15] = 1.904689f;
    data->d[16] = -1.193634f;
    data->d[17] = -1.960643f;
    data->d[18] = 0.050343f;
    data->d[19] = -0.050343f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.283246f;
    data->d[1] = 0.875415f;
    data->d[2] = -1.475675f;
    data->d[3] = -1.184241f;
    data->d[4] = 1.723299f;
    data->d[5] = -1.654917f;
    data->d[6] = -0.281073f;
    data->d[7] = 2.115146f;
    data->d[8] = -0.326252f;
    data->d[9] = 1.661324f;
    data->d[10] = 1.598633f;
    data->d[11] = 3.431641f;
    data->d[12] = -0.000737f;
    data->d[13] = 2.887110f;
    data->d[14] = -0.342521f;
    data->d[15] = 4.699588f;
    data->d[16] = -3.049594f;
    data->d[17] = 1.605043f;
    data->d[18] = -0.218205f;
    data->d[19] = 0.100073f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.498349f;
    data->d[1] = -1.304675f;
    data->d[2] = 0.519671f;
    data->d[3] = 1.229400f;
    data->d[4] = -0.704060f;
    data->d[5] = 0.761140f;
    data->d[6] = -1.850829f;
    data->d[7] = -0.956178f;
    data->d[8] = 0.843533f;
    data->d[9] = -0.410366f;
    data->d[10] = 1.712565f;
    data->d[11] = -3.748688f;
    data->d[12] = -0.000172f;
    data->d[13] = 1.278405f;
    data->d[14] = -0.871706f;
    data->d[15] = 5.243088f;
    data->d[16] = 0.896871f;
    data->d[17] = 0.029340f;
    data->d[18] = 0.583299f;
    data->d[19] = -0.059700f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
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
    instructions->SetOperation(0, 0, 28);
    instructions->SetOperation(1, 1, 2);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 23);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 23);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 0, 26);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 0, 5);
    instructions->SetOperation(19, 0, 27);
    instructions->SetOperation(20, 1, 8);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 19);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 15);
    instructions->SetOperation(31, 1, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 124;
    state.m_evolution = 14;
    state.m_index = 32;
    state.m_test = 0;
    state.m_seed = 13206048639864863102;
} // LoadState
