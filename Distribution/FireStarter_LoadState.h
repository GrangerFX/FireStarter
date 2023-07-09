#pragma once
#include "FireStarterState.h"

// Run date: 07/09/23 15:20:25 Pacific Daylight Time
// Run duration = 742.020096 seconds
// Run generation = 69
// Run evolution = 0
// Run result = 0.00000334
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
// Run optimizeSeed = 1
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
    settings.m_optimizeSeed = 1;
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

// Variation: 0  result = 0.00000244
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.474767f;
    data->d[2] = -0.293068f;
    data->d[3] = -0.673065f;
    data->d[4] = 1.655999f;
    data->d[5] = 1.530616f;
    data->d[6] = 0.028767f;
    data->d[7] = -0.076000f;
    data->d[8] = -14.153385f;
    data->d[9] = 2.313748f;
    data->d[10] = -0.756049f;
    data->d[11] = -3.209222f;
    data->d[12] = 0.038036f;
    data->d[13] = 1.882357f;
    data->d[14] = 1.178116f;
    data->d[15] = 1.342859f;
    data->d[16] = -4.933527f;
    data->d[17] = -0.926015f;
    data->d[18] = -1.046170f;
    data->d[19] = -0.884281f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation0

// Variation: 1  result = 0.00000250
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.320406f;
    data->d[2] = 1.428878f;
    data->d[3] = -0.099078f;
    data->d[4] = -0.451557f;
    data->d[5] = -0.920627f;
    data->d[6] = -0.447799f;
    data->d[7] = 1.112194f;
    data->d[8] = -0.479805f;
    data->d[9] = 1.115238f;
    data->d[10] = -1.845642f;
    data->d[11] = -1.220325f;
    data->d[12] = 7.462543f;
    data->d[13] = -17.896204f;
    data->d[14] = 6.464095f;
    data->d[15] = 3.470256f;
    data->d[16] = 3.154295f;
    data->d[17] = 1.734684f;
    data->d[18] = 11.911258f;
    data->d[19] = 1.852343f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation1

// Variation: 2  result = 0.00000334
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617993f;
    data->d[1] = -0.658967f;
    data->d[2] = 2.274735f;
    data->d[3] = 0.035510f;
    data->d[4] = -0.701940f;
    data->d[5] = -0.186188f;
    data->d[6] = -0.345091f;
    data->d[7] = 0.903329f;
    data->d[8] = 2.594195f;
    data->d[9] = 2.086158f;
    data->d[10] = -0.292600f;
    data->d[11] = 1.788492f;
    data->d[12] = -4.107661f;
    data->d[13] = 1.240734f;
    data->d[14] = 1.934679f;
    data->d[15] = 1.256538f;
    data->d[16] = 0.425607f;
    data->d[17] = -1.770858f;
    data->d[18] = 5.338031f;
    data->d[19] = 0.928685f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000003f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 19);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 1);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 19);
    instructions->SetOperation(6, 1, 26);
    instructions->SetOperation(7, 0, 17);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 25);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 0, 7);
    instructions->SetOperation(12, 1, 19);
    instructions->SetOperation(13, 0, 26);
    instructions->SetOperation(14, 0, 0);
    instructions->SetOperation(15, 1, 24);
    instructions->SetOperation(16, 0, 1);
    instructions->SetOperation(17, 0, 17);
    instructions->SetOperation(18, 0, 24);
    instructions->SetOperation(19, 0, 19);
    instructions->SetOperation(20, 1, 13);
    instructions->SetOperation(21, 1, 2);
    instructions->SetOperation(22, 1, 24);
    instructions->SetOperation(23, 1, 3);
    instructions->SetOperation(24, 1, 4);
    instructions->SetOperation(25, 1, 10);
    instructions->SetOperation(26, 1, 2);
    instructions->SetOperation(27, 1, 2);
    instructions->SetOperation(28, 1, 28);
    instructions->SetOperation(29, 1, 8);
    instructions->SetOperation(30, 1, 12);
    instructions->SetOperation(31, 1, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 69;
    state.m_evolution = 0;
    state.m_index = 41;
    state.m_test = 10;
    state.m_seed = 29496261989510573;
} // LoadState
