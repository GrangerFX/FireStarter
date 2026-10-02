#pragma once
#include "FireStarterState.h"

// Run date: 03/10/24 11:03:18 Pacific Daylight Time
// Run duration = 3010.583531 seconds
// Run generation = 262
// Run evolution = 11
// Run max result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 2
// Run tests = 1
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 2;
    settings.m_tests = 1;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.578897f;
    data->d[2] = -2.934953f;
    data->d[3] = 0.015678f;
    data->d[4] = -1.703794f;
    data->d[5] = -0.422574f;
    data->d[6] = 0.101536f;
    data->d[7] = 0.217752f;
    data->d[8] = 5.016387f;
    data->d[9] = 1.052997f;
    data->d[10] = 0.975883f;
    data->d[11] = 0.000000f;
    data->d[12] = -0.945457f;
    data->d[13] = 2.891486f;
    data->d[14] = -0.490637f;
    data->d[15] = 0.218804f;
    data->d[16] = -0.218804f;
    data->d[17] = -1.661841f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090657f;
    data->d[1] = 0.432185f;
    data->d[2] = -1.587289f;
    data->d[3] = -0.013407f;
    data->d[4] = -1.571207f;
    data->d[5] = -0.175781f;
    data->d[6] = 0.584442f;
    data->d[7] = 1.024239f;
    data->d[8] = 1.666305f;
    data->d[9] = 1.927953f;
    data->d[10] = 1.569442f;
    data->d[11] = -0.000000f;
    data->d[12] = 0.723781f;
    data->d[13] = -4.186589f;
    data->d[14] = -1.183569f;
    data->d[15] = -0.448706f;
    data->d[16] = 0.732584f;
    data->d[17] = -0.416134f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.379665f;
    data->d[2] = -0.753822f;
    data->d[3] = -0.142298f;
    data->d[4] = 0.570518f;
    data->d[5] = 0.311978f;
    data->d[6] = 0.155405f;
    data->d[7] = -0.114122f;
    data->d[8] = 0.504035f;
    data->d[9] = 1.701676f;
    data->d[10] = 0.184300f;
    data->d[11] = 0.000000f;
    data->d[12] = -0.352714f;
    data->d[13] = -5.261018f;
    data->d[14] = 0.436041f;
    data->d[15] = -0.214333f;
    data->d[16] = -0.316464f;
    data->d[17] = -0.986439f;
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
    instructions->SetOperation(0, 1, 24);
    instructions->SetOperation(1, 0, 2);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 1, 22);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 1, 15);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 1, 27);
    instructions->SetOperation(9, 0, 15);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 0, 15);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 1, 23);
    instructions->SetOperation(14, 1, 3);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 0, 24);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 1, 24);
    instructions->SetOperation(20, 0, 17);
    instructions->SetOperation(21, 0, 23);
    instructions->SetOperation(22, 0, 25);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 0, 13);
    instructions->SetOperation(28, 1, 19);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 0, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 262;
    state.m_evolution = 11;
    state.m_children0 = 0;
    state.m_children1 = 0;
    state.m_index = 6;
    state.m_copy_index = 6;
    state.m_id = 6;
    state.m_test = 0;
    state.m_seed = 17316868981623688439;
    state.m_optimize_pass =4;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 262.000000f;
    state.m_optimizeValid = true;
} // LoadState
