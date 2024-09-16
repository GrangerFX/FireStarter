#pragma once
#include "FireStarterState.h"

// Run date: 09/15/24 11:43:57 Pacific Daylight Time
// Run duration = 1604.024340 seconds
// Run generation = 65
// Run evolution = 0
// Run max result = 0.00000054
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE_GPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000054
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.495108f;
    data->d[1] = -1.151289f;
    data->d[2] = 0.285001f;
    data->d[3] = 1.184355f;
    data->d[4] = -0.151389f;
    data->d[5] = -1.691525f;
    data->d[6] = -3.220394f;
    data->d[7] = 0.207895f;
    data->d[8] = -2.962593f;
    data->d[9] = 0.914744f;
    data->d[10] = -1.444939f;
    data->d[11] = -0.333959f;
    data->d[12] = -4.404466f;
    data->d[13] = -1.594885f;
    data->d[14] = 0.442420f;
    data->d[15] = 0.392346f;
    data->d[16] = -2.405190f;
    data->d[17] = -1.518880f;
    data->d[18] = 0.639418f;
    data->d[19] = -0.759374f;
    data->d[20] = -2.161810f;
    data->d[21] = -0.201224f;
    data->d[22] = -0.460505f;
    data->d[23] = -1.642549f;
    data->d[24] = -0.302169f;
    data->d[25] = 0.341404f;
    data->d[26] = -1.426577f;
    data->d[27] = 4.979767f;
    data->d[28] = -0.639503f;
    data->d[29] = -1.696653f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 10);
    instructions->SetOperation(1, 1, 29);
    instructions->SetOperation(2, 0, 11);
    instructions->SetOperation(3, 0, 1);
    instructions->SetOperation(4, 0, 14);
    instructions->SetOperation(5, 0, 17);
    instructions->SetOperation(6, 0, 14);
    instructions->SetOperation(7, 0, 25);
    instructions->SetOperation(8, 0, 24);
    instructions->SetOperation(9, 1, 25);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 1, 13);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 9);
    instructions->SetOperation(14, 0, 5);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 0);
    instructions->SetOperation(19, 1, 3);
    instructions->SetOperation(20, 1, 19);
    instructions->SetOperation(21, 0, 18);
    instructions->SetOperation(22, 1, 28);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 1, 22);
    instructions->SetOperation(27, 0, 24);
    instructions->SetOperation(28, 0, 26);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 0, 11);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 65;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000015f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
