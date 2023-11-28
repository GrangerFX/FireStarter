#pragma once
#include "FireStarterState.h"

// Run date: 11/28/23 11:05:04 Pacific Standard Time
// Run duration = 1378.627053 seconds
// Run generation = 25
// Run evolution = 9
// Run max result = 0.00000021
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 2
// Run optimizeSeed = 2
// Run tests = 1
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
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

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 2;
    settings.m_optimizeSeed = 2;
    settings.m_tests = 1;
    settings.m_seeds = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.116037f;
    data->d[1] = 0.364541f;
    data->d[2] = 2.652401f;
    data->d[3] = 0.828797f;
    data->d[4] = -1.406518f;
    data->d[5] = -0.458659f;
    data->d[6] = -0.943002f;
    data->d[7] = 0.000462f;
    data->d[8] = 0.085703f;
    data->d[9] = -2.253889f;
    data->d[10] = 0.117224f;
    data->d[11] = -0.055409f;
    data->d[12] = 0.004344f;
    data->d[13] = 1.491618f;
    data->d[14] = -0.670413f;
    data->d[15] = -3.905088f;
    data->d[16] = 2.686446f;
    data->d[17] = 0.364541f;
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
    data->d[0] = -0.319368f;
    data->d[1] = 0.987056f;
    data->d[2] = -1.615973f;
    data->d[3] = -0.711407f;
    data->d[4] = -1.901555f;
    data->d[5] = -1.513465f;
    data->d[6] = -0.167571f;
    data->d[7] = 0.010179f;
    data->d[8] = 1.699749f;
    data->d[9] = -5.700384f;
    data->d[10] = 0.000000f;
    data->d[11] = 0.072993f;
    data->d[12] = 0.157466f;
    data->d[13] = -1.103566f;
    data->d[14] = 0.046930f;
    data->d[15] = -3.157331f;
    data->d[16] = 1.880887f;
    data->d[17] = 0.868925f;
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

// Variation: 2  result = 0.00000021
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.327150f;
    data->d[1] = 0.856478f;
    data->d[2] = -4.044957f;
    data->d[3] = -0.909030f;
    data->d[4] = -0.378929f;
    data->d[5] = -0.677212f;
    data->d[6] = -0.049392f;
    data->d[7] = 0.043642f;
    data->d[8] = 1.477806f;
    data->d[9] = 0.097192f;
    data->d[10] = 9.488643f;
    data->d[11] = 0.131465f;
    data->d[12] = -1.490108f;
    data->d[13] = 3.068333f;
    data->d[14] = -0.325912f;
    data->d[15] = -2.741817f;
    data->d[16] = 2.533156f;
    data->d[17] = 1.380077f;
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
    instructions->SetOperation(0, 0, 1);
    instructions->SetOperation(1, 1, 0);
    instructions->SetOperation(2, 0, 22);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 0, 14);
    instructions->SetOperation(5, 0, 14);
    instructions->SetOperation(6, 1, 2);
    instructions->SetOperation(7, 0, 9);
    instructions->SetOperation(8, 1, 9);
    instructions->SetOperation(9, 0, 20);
    instructions->SetOperation(10, 1, 20);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 28);
    instructions->SetOperation(14, 0, 2);
    instructions->SetOperation(15, 0, 27);
    instructions->SetOperation(16, 1, 24);
    instructions->SetOperation(17, 0, 24);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 1, 9);
    instructions->SetOperation(20, 1, 7);
    instructions->SetOperation(21, 0, 5);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 1, 24);
    instructions->SetOperation(24, 1, 21);
    instructions->SetOperation(25, 0, 24);
    instructions->SetOperation(26, 1, 19);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 0, 19);
    instructions->SetOperation(30, 1, 1);
    instructions->SetOperation(31, 1, 26);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 25;
    state.m_evolution = 9;
    state.m_index = 0;
    state.m_copy_index = 5;
    state.m_id = 57;
    state.m_copy_id = 26;
    state.m_test = 0;
    state.m_seed = 5732338979416989958;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
