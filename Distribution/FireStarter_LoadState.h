#pragma once
#include "FireStarterState.h"

// Run date: 07/30/23 11:21:44 Pacific Daylight Time
// Run duration = 240.741697 seconds
// Run generation = 15
// Run evolution = 0
// Run result = 0.00000048
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 1
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 8
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
    settings.m_seed = 1;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 64;
    settings.m_units = 8;
    settings.m_processes = 8;
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

// Variation: 0  result = 0.00000014
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.308470f;
    data->d[1] = 0.969086f;
    data->d[2] = -0.416370f;
    data->d[3] = 2.455666f;
    data->d[4] = -0.684952f;
    data->d[5] = 0.516632f;
    data->d[6] = 1.975577f;
    data->d[7] = -0.261144f;
    data->d[8] = 0.359836f;
    data->d[9] = -1.905746f;
    data->d[10] = -0.977855f;
    data->d[11] = 4.721999f;
    data->d[12] = -3.375618f;
    data->d[13] = 0.011324f;
    data->d[14] = 0.401735f;
    data->d[15] = -1.034036f;
    data->d[16] = 0.780149f;
    data->d[17] = -0.738082f;
    data->d[18] = -1.396808f;
    data->d[19] = -0.492434f;
    data->d[20] = -2.286181f;
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

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.497212f;
    data->d[1] = 1.536712f;
    data->d[2] = 1.221194f;
    data->d[3] = 3.139221f;
    data->d[4] = -0.869539f;
    data->d[5] = -1.697030f;
    data->d[6] = 1.492782f;
    data->d[7] = 0.005242f;
    data->d[8] = 0.905257f;
    data->d[9] = 0.630714f;
    data->d[10] = 0.025694f;
    data->d[11] = 4.832634f;
    data->d[12] = 0.450260f;
    data->d[13] = -0.295611f;
    data->d[14] = -0.936639f;
    data->d[15] = 1.137675f;
    data->d[16] = 1.142419f;
    data->d[17] = -4.189936f;
    data->d[18] = -0.627584f;
    data->d[19] = 1.957369f;
    data->d[20] = 1.687914f;
    data->d[21] = -0.118131f;
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
    data->d[0] = 0.670875f;
    data->d[1] = -1.756346f;
    data->d[2] = -1.284830f;
    data->d[3] = -0.344105f;
    data->d[4] = -1.726642f;
    data->d[5] = 2.080656f;
    data->d[6] = 1.476783f;
    data->d[7] = 0.024728f;
    data->d[8] = 0.424702f;
    data->d[9] = -0.678927f;
    data->d[10] = -0.657446f;
    data->d[11] = 2.097161f;
    data->d[12] = 1.189244f;
    data->d[13] = -0.824622f;
    data->d[14] = 2.071094f;
    data->d[15] = -0.486029f;
    data->d[16] = -0.653113f;
    data->d[17] = 1.060704f;
    data->d[18] = -1.247871f;
    data->d[19] = 0.543606f;
    data->d[20] = -2.569099f;
    data->d[21] = 0.523599f;
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
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 28);
    instructions->SetOperation(1, 1, 18);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 0, 7);
    instructions->SetOperation(4, 0, 18);
    instructions->SetOperation(5, 1, 2);
    instructions->SetOperation(6, 0, 10);
    instructions->SetOperation(7, 1, 23);
    instructions->SetOperation(8, 1, 2);
    instructions->SetOperation(9, 0, 1);
    instructions->SetOperation(10, 0, 12);
    instructions->SetOperation(11, 1, 21);
    instructions->SetOperation(12, 0, 7);
    instructions->SetOperation(13, 0, 14);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 0, 14);
    instructions->SetOperation(16, 1, 8);
    instructions->SetOperation(17, 0, 11);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 1, 9);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 1, 21);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 0, 22);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 0, 9);
    instructions->SetOperation(27, 0, 25);
    instructions->SetOperation(28, 0, 4);
    instructions->SetOperation(29, 1, 1);
    instructions->SetOperation(30, 0, 7);
    instructions->SetOperation(31, 1, 20);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 15;
    state.m_evolution = 0;
    state.m_index = 33;
    state.m_test = 0;
    state.m_seed = 4905683024528358487;
} // LoadState
