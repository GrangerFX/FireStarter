#pragma once
#include "FireStarterState.h"

// Run date: 07/02/23 11:03:08 Pacific Daylight Time
// Run duration = 1253.160041 seconds
// Run generation = 94
// Run evolution = 0
// Run result = 0.00000101
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
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
    settings.m_seed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 64;
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

// Variation: 0  result = 0.00000101
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.349781f;
    data->d[1] = 1.098869f;
    data->d[2] = 1.093743f;
    data->d[3] = -0.190586f;
    data->d[4] = 1.006836f;
    data->d[5] = -0.032809f;
    data->d[6] = -1.052793f;
    data->d[7] = 1.215431f;
    data->d[8] = -0.893774f;
    data->d[9] = -0.008086f;
    data->d[10] = 0.380936f;
    data->d[11] = 0.907737f;
    data->d[12] = -0.679913f;
    data->d[13] = 0.349218f;
    data->d[14] = -0.075627f;
    data->d[15] = 2.138630f;
    data->d[16] = -0.000000f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000095
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.507507f;
    data->d[1] = -1.568530f;
    data->d[2] = -0.079136f;
    data->d[3] = 0.128890f;
    data->d[4] = 0.912331f;
    data->d[5] = 0.434710f;
    data->d[6] = 0.625154f;
    data->d[7] = 0.754016f;
    data->d[8] = 1.137534f;
    data->d[9] = 1.720567f;
    data->d[10] = 1.720302f;
    data->d[11] = -1.902554f;
    data->d[12] = -0.667371f;
    data->d[13] = -0.818507f;
    data->d[14] = -0.766828f;
    data->d[15] = -1.836727f;
    data->d[16] = -0.118132f;
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
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000095
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.167806f;
    data->d[1] = -0.439314f;
    data->d[2] = 0.644322f;
    data->d[3] = 0.694108f;
    data->d[4] = -0.251025f;
    data->d[5] = 0.377644f;
    data->d[6] = -0.305558f;
    data->d[7] = 1.584351f;
    data->d[8] = -3.289063f;
    data->d[9] = 0.779516f;
    data->d[10] = 0.318796f;
    data->d[11] = 0.361078f;
    data->d[12] = -0.251308f;
    data->d[13] = -0.994457f;
    data->d[14] = -0.449409f;
    data->d[15] = 1.061042f;
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
    *(result->MinResult()) = 0.000001f;
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
    instructions->SetOperation(0, 0, 1);
    instructions->SetOperation(1, 1, 21);
    instructions->SetOperation(2, 1, 21);
    instructions->SetOperation(3, 0, 16);
    instructions->SetOperation(4, 0, 20);
    instructions->SetOperation(5, 0, 21);
    instructions->SetOperation(6, 1, 24);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 27);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 1, 5);
    instructions->SetOperation(13, 1, 3);
    instructions->SetOperation(14, 0, 27);
    instructions->SetOperation(15, 0, 4);
    instructions->SetOperation(16, 1, 19);
    instructions->SetOperation(17, 1, 10);
    instructions->SetOperation(18, 1, 18);
    instructions->SetOperation(19, 0, 28);
    instructions->SetOperation(20, 0, 0);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 0, 21);
    instructions->SetOperation(23, 0, 21);
    instructions->SetOperation(24, 1, 24);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 0, 6);
    instructions->SetOperation(31, 1, 2);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 94;
    state.m_evolution = 0;
    state.m_index = 6;
    state.m_test = 18;
    state.m_seed = 4807101960134579606;
} // LoadState
