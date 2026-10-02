#pragma once
#include "FireStarterState.h"

// Run date: 11/30/23 10:16:50 Pacific Standard Time
// Run duration = 5296.059314 seconds
// Run generation = 26
// Run evolution = 8
// Run max result = 0.00000018
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
// Run tests = 16
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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.880756f;
    data->d[1] = 0.431995f;
    data->d[2] = -1.195321f;
    data->d[3] = 3.807971f;
    data->d[4] = 0.223506f;
    data->d[5] = 2.769478f;
    data->d[6] = -0.102649f;
    data->d[7] = 0.679622f;
    data->d[8] = 0.301789f;
    data->d[9] = 2.094512f;
    data->d[10] = 1.974487f;
    data->d[11] = 2.303657f;
    data->d[12] = -0.639185f;
    data->d[13] = 0.451386f;
    data->d[14] = -0.002609f;
    data->d[15] = 6.797378f;
    data->d[16] = 0.140467f;
    data->d[17] = 2.657266f;
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
    data->d[0] = -0.217567f;
    data->d[1] = 2.201697f;
    data->d[2] = 1.480475f;
    data->d[3] = 0.674517f;
    data->d[4] = 0.682612f;
    data->d[5] = 0.244176f;
    data->d[6] = -1.646890f;
    data->d[7] = -1.190690f;
    data->d[8] = 1.183327f;
    data->d[9] = -0.623355f;
    data->d[10] = 0.089189f;
    data->d[11] = 1.998834f;
    data->d[12] = -0.606475f;
    data->d[13] = -0.002773f;
    data->d[14] = 14.310336f;
    data->d[15] = 0.852288f;
    data->d[16] = 1.618790f;
    data->d[17] = -0.707377f;
    data->d[18] = -0.118132f;
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

// Variation: 2  result = 0.00000018
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.584971f;
    data->d[1] = 0.359017f;
    data->d[2] = -1.489722f;
    data->d[3] = 6.825927f;
    data->d[4] = -0.000772f;
    data->d[5] = -0.982521f;
    data->d[6] = -1.240194f;
    data->d[7] = -3.630502f;
    data->d[8] = 0.034363f;
    data->d[9] = -0.214560f;
    data->d[10] = -0.625196f;
    data->d[11] = 1.168152f;
    data->d[12] = 0.374754f;
    data->d[13] = -1.603808f;
    data->d[14] = -1.545114f;
    data->d[15] = 1.053140f;
    data->d[16] = -0.980092f;
    data->d[17] = -0.758040f;
    data->d[18] = 0.523598f;
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
    instructions->SetOperation(1, 0, 2);
    instructions->SetOperation(2, 1, 19);
    instructions->SetOperation(3, 0, 12);
    instructions->SetOperation(4, 0, 9);
    instructions->SetOperation(5, 1, 2);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 13);
    instructions->SetOperation(8, 1, 14);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 0, 3);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 0, 17);
    instructions->SetOperation(13, 1, 20);
    instructions->SetOperation(14, 0, 5);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 0, 18);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 0, 8);
    instructions->SetOperation(19, 1, 8);
    instructions->SetOperation(20, 1, 26);
    instructions->SetOperation(21, 0, 24);
    instructions->SetOperation(22, 1, 4);
    instructions->SetOperation(23, 0, 4);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 14);
    instructions->SetOperation(27, 0, 13);
    instructions->SetOperation(28, 1, 5);
    instructions->SetOperation(29, 0, 24);
    instructions->SetOperation(30, 0, 19);
    instructions->SetOperation(31, 1, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 26;
    state.m_evolution = 8;
    state.m_index = 0;
    state.m_copy_index = 4;
    state.m_id = 10;
    state.m_copy_id = 49;
    state.m_test = 3;
    state.m_seed = 10203165075096237768;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
