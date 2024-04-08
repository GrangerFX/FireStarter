#pragma once
#include "FireStarterState.h"

// Run date: 04/08/24 00:13:03 Pacific Daylight Time
// Run duration = 26928.000378 seconds
// Run generation = 78
// Run evolution = 5
// Run max result = 0.00000036
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 28
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
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
    settings.m_registers = 28;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
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
    data->d[0] = -0.551958f;
    data->d[1] = 1.734026f;
    data->d[2] = 1.844449f;
    data->d[3] = -0.856099f;
    data->d[4] = -1.632529f;
    data->d[5] = -0.000667f;
    data->d[6] = 0.266818f;
    data->d[7] = 0.111390f;
    data->d[8] = -0.682535f;
    data->d[9] = -1.547168f;
    data->d[10] = -0.187378f;
    data->d[11] = 7.176604f;
    data->d[12] = -2.021198f;
    data->d[13] = 0.184418f;
    data->d[14] = 0.628168f;
    data->d[15] = 2.291985f;
    data->d[16] = -0.268662f;
    data->d[17] = 1.956630f;
    data->d[18] = -1.715337f;
    data->d[19] = -0.000000f;
    data->d[20] = 0.535726f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000036
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.259872f;
    data->d[1] = 0.803177f;
    data->d[2] = 2.707543f;
    data->d[3] = -1.193405f;
    data->d[4] = -1.326905f;
    data->d[5] = -0.000670f;
    data->d[6] = -1.893485f;
    data->d[7] = 0.050545f;
    data->d[8] = -2.207457f;
    data->d[9] = 1.766879f;
    data->d[10] = -4.549495f;
    data->d[11] = -0.145459f;
    data->d[12] = -0.073657f;
    data->d[13] = -0.093150f;
    data->d[14] = -11.194537f;
    data->d[15] = 5.592094f;
    data->d[16] = -0.358965f;
    data->d[17] = -4.187544f;
    data->d[18] = 0.007506f;
    data->d[19] = -0.046136f;
    data->d[20] = 2.560524f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.618379f;
    data->d[1] = 1.618912f;
    data->d[2] = -1.179891f;
    data->d[3] = 0.299047f;
    data->d[4] = -0.141531f;
    data->d[5] = 0.024236f;
    data->d[6] = -0.075071f;
    data->d[7] = 2.364521f;
    data->d[8] = -0.054277f;
    data->d[9] = 1.075634f;
    data->d[10] = -0.238413f;
    data->d[11] = 1.553558f;
    data->d[12] = -2.535592f;
    data->d[13] = -0.054841f;
    data->d[14] = -1.814653f;
    data->d[15] = 1.036107f;
    data->d[16] = -1.304243f;
    data->d[17] = -65.715431f;
    data->d[18] = 1.207997f;
    data->d[19] = 0.256402f;
    data->d[20] = 2.042101f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
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
    instructions->SetOperation(0, 0, 26);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 4);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 0, 16);
    instructions->SetOperation(7, 1, 5);
    instructions->SetOperation(8, 1, 3);
    instructions->SetOperation(9, 0, 19);
    instructions->SetOperation(10, 1, 6);
    instructions->SetOperation(11, 0, 5);
    instructions->SetOperation(12, 1, 11);
    instructions->SetOperation(13, 1, 1);
    instructions->SetOperation(14, 0, 16);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 15);
    instructions->SetOperation(17, 0, 10);
    instructions->SetOperation(18, 0, 1);
    instructions->SetOperation(19, 1, 18);
    instructions->SetOperation(20, 1, 9);
    instructions->SetOperation(21, 0, 22);
    instructions->SetOperation(22, 1, 20);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 1, 9);
    instructions->SetOperation(25, 0, 1);
    instructions->SetOperation(26, 0, 5);
    instructions->SetOperation(27, 1, 17);
    instructions->SetOperation(28, 0, 5);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 0, 24);
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
    state.m_evolution = 5;
    state.m_index = 11;
    state.m_copy_index = 99;
    state.m_id = 99;
    state.m_test = 15;
    state.m_seed = 18271309154367841824;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000016f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.001225f;
    state.m_optimizeValid = true;
} // LoadState
