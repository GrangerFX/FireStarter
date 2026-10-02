#pragma once
#include "FireStarterState.h"

// Run date: 01/06/24 13:13:09 Pacific Standard Time
// Run duration = 883.416714 seconds
// Run generation = 14
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
// Run optimizeSeed = 0
// Run tests = 1
// Run states = 64
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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 1;
    settings.m_states = 64;
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
    data->d[0] = -0.604119f;
    data->d[1] = 1.897894f;
    data->d[2] = 0.000000f;
    data->d[3] = -0.432994f;
    data->d[4] = -0.413063f;
    data->d[5] = 0.000038f;
    data->d[6] = 0.044725f;
    data->d[7] = 4.343542f;
    data->d[8] = -446.720428f;
    data->d[9] = -2.069217f;
    data->d[10] = -1.156658f;
    data->d[11] = 0.229296f;
    data->d[12] = -1.546811f;
    data->d[13] = -1.092706f;
    data->d[14] = -1.850190f;
    data->d[15] = 1.252584f;
    data->d[16] = -2.691609f;
    data->d[17] = 0.249111f;
    data->d[18] = 0.426029f;
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
    data->d[0] = 0.490002f;
    data->d[1] = -1.406198f;
    data->d[2] = -0.108232f;
    data->d[3] = -0.942989f;
    data->d[4] = -1.263722f;
    data->d[5] = 0.417851f;
    data->d[6] = -2.758934f;
    data->d[7] = 3.592967f;
    data->d[8] = 0.000021f;
    data->d[9] = -1.029036f;
    data->d[10] = 0.980969f;
    data->d[11] = -0.631779f;
    data->d[12] = -1.432996f;
    data->d[13] = -2.446288f;
    data->d[14] = 0.530489f;
    data->d[15] = -0.159482f;
    data->d[16] = 0.145500f;
    data->d[17] = 0.630054f;
    data->d[18] = -1.091464f;
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
    data->d[0] = -0.596982f;
    data->d[1] = 0.501348f;
    data->d[2] = 1.061547f;
    data->d[3] = 0.466814f;
    data->d[4] = -0.628466f;
    data->d[5] = -39.666485f;
    data->d[6] = 0.041989f;
    data->d[7] = 0.000391f;
    data->d[8] = -21.391191f;
    data->d[9] = 1.357689f;
    data->d[10] = 1.066016f;
    data->d[11] = -0.407061f;
    data->d[12] = 1.302264f;
    data->d[13] = -2.012566f;
    data->d[14] = 1.126448f;
    data->d[15] = -2.167789f;
    data->d[16] = 0.548011f;
    data->d[17] = 1.442127f;
    data->d[18] = -0.493241f;
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
    instructions->SetOperation(0, 0, 12);
    instructions->SetOperation(1, 1, 13);
    instructions->SetOperation(2, 1, 14);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 11);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 0, 9);
    instructions->SetOperation(8, 0, 16);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 1, 22);
    instructions->SetOperation(11, 1, 20);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 0, 10);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 1, 21);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 1, 25);
    instructions->SetOperation(21, 0, 15);
    instructions->SetOperation(22, 1, 25);
    instructions->SetOperation(23, 1, 2);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 15);
    instructions->SetOperation(26, 0, 10);
    instructions->SetOperation(27, 1, 22);
    instructions->SetOperation(28, 0, 11);
    instructions->SetOperation(29, 0, 14);
    instructions->SetOperation(30, 1, 13);
    instructions->SetOperation(31, 0, 28);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 14;
    state.m_evolution = 11;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 52;
    state.m_test = 3;
    state.m_seed = 7229150606307827722;
    state.m_optimize_pass =5;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
