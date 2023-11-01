#pragma once
#include "FireStarterState.h"

// Run date: 10/31/23 12:08:48 Pacific Daylight Time
// Run duration = 24393.391213 seconds
// Run generation = 79
// Run evolution = 10
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
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 16
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
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
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 16;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000015
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.316448f;
    data->d[1] = -0.965922f;
    data->d[2] = -0.960272f;
    data->d[3] = -0.960274f;
    data->d[4] = 0.004423f;
    data->d[5] = 0.309808f;
    data->d[6] = 0.395900f;
    data->d[7] = 5.000755f;
    data->d[8] = 0.457482f;
    data->d[9] = 0.344677f;
    data->d[10] = 3.346194f;
    data->d[11] = -0.437272f;
    data->d[12] = -2.333497f;
    data->d[13] = 0.673471f;
    data->d[14] = -1.635669f;
    data->d[15] = 0.881820f;
    data->d[16] = -0.480136f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.373956f;
    data->d[1] = 1.242051f;
    data->d[2] = -1.435525f;
    data->d[3] = -1.435518f;
    data->d[4] = -0.003009f;
    data->d[5] = -0.314647f;
    data->d[6] = 7.887769f;
    data->d[7] = 1.724956f;
    data->d[8] = -0.813483f;
    data->d[9] = -0.338236f;
    data->d[10] = -1.314150f;
    data->d[11] = 2.490983f;
    data->d[12] = -1.099555f;
    data->d[13] = -3.130804f;
    data->d[14] = 3.657665f;
    data->d[15] = 0.679369f;
    data->d[16] = -0.776828f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000048
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.120874f;
    data->d[1] = -1.157815f;
    data->d[2] = -0.366386f;
    data->d[3] = -0.366388f;
    data->d[4] = 0.002215f;
    data->d[5] = 4.315448f;
    data->d[6] = -12.552810f;
    data->d[7] = 7.462530f;
    data->d[8] = 1.019581f;
    data->d[9] = 0.131084f;
    data->d[10] = 0.767125f;
    data->d[11] = 2.527606f;
    data->d[12] = -1.188325f;
    data->d[13] = 1.444566f;
    data->d[14] = -2.333673f;
    data->d[15] = -0.586976f;
    data->d[16] = 0.078606f;
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
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 1, 25);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 24);
    instructions->SetOperation(5, 0, 28);
    instructions->SetOperation(6, 0, 12);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 1, 4);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 0, 2);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 20);
    instructions->SetOperation(14, 0, 25);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 0, 20);
    instructions->SetOperation(17, 0, 20);
    instructions->SetOperation(18, 1, 6);
    instructions->SetOperation(19, 0, 2);
    instructions->SetOperation(20, 1, 28);
    instructions->SetOperation(21, 1, 12);
    instructions->SetOperation(22, 0, 27);
    instructions->SetOperation(23, 1, 21);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 1, 22);
    instructions->SetOperation(26, 0, 25);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 1, 11);
    instructions->SetOperation(29, 1, 9);
    instructions->SetOperation(30, 1, 1);
    instructions->SetOperation(31, 1, 11);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 79;
    state.m_evolution = 10;
    state.m_age = 10;
    state.m_index = 22;
    state.m_id = 44;
    state.m_copy_id = 43;
    state.m_test = 13;
    state.m_seed = 2040416798053451624;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = false;
} // LoadState
