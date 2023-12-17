#pragma once
#include "FireStarterState.h"

// Run date: 12/16/23 17:34:51 Pacific Standard Time
// Run duration = 3815.834675 seconds
// Run generation = 17
// Run evolution = 11
// Run max result = 0.00000016
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.306527f;
    data->d[2] = -0.711994f;
    data->d[3] = -0.297616f;
    data->d[4] = 1.841105f;
    data->d[5] = -0.991635f;
    data->d[6] = -0.485443f;
    data->d[7] = -1.763860f;
    data->d[8] = -1.022464f;
    data->d[9] = -0.453679f;
    data->d[10] = 1.946140f;
    data->d[11] = 0.240343f;
    data->d[12] = -0.051236f;
    data->d[13] = 1.076565f;
    data->d[14] = -0.001177f;
    data->d[15] = -5.203012f;
    data->d[16] = 0.000000f;
    data->d[17] = 2.092220f;
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

// Variation: 1  result = 0.00000016
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.690290f;
    data->d[2] = -2.496855f;
    data->d[3] = -0.054358f;
    data->d[4] = 1.100820f;
    data->d[5] = 0.600610f;
    data->d[6] = 1.020838f;
    data->d[7] = -1.196128f;
    data->d[8] = 1.617126f;
    data->d[9] = 1.737806f;
    data->d[10] = 0.153451f;
    data->d[11] = 2.293549f;
    data->d[12] = 0.730096f;
    data->d[13] = 0.201941f;
    data->d[14] = -0.003631f;
    data->d[15] = -6.947970f;
    data->d[16] = 0.066526f;
    data->d[17] = -1.775714f;
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
    data->d[1] = 0.348668f;
    data->d[2] = -0.133176f;
    data->d[3] = 0.370109f;
    data->d[4] = 1.204398f;
    data->d[5] = -1.379324f;
    data->d[6] = -0.302343f;
    data->d[7] = 1.447418f;
    data->d[8] = 1.943165f;
    data->d[9] = 0.846299f;
    data->d[10] = -0.477776f;
    data->d[11] = -1.068617f;
    data->d[12] = 0.736358f;
    data->d[13] = -1.593020f;
    data->d[14] = 0.002940f;
    data->d[15] = 5.568455f;
    data->d[16] = 0.235575f;
    data->d[17] = 2.222639f;
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
    instructions->SetOperation(3, 1, 10);
    instructions->SetOperation(4, 0, 14);
    instructions->SetOperation(5, 1, 28);
    instructions->SetOperation(6, 1, 15);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 1, 27);
    instructions->SetOperation(9, 0, 19);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 0, 1);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 14);
    instructions->SetOperation(14, 1, 21);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 0, 24);
    instructions->SetOperation(18, 0, 15);
    instructions->SetOperation(19, 0, 16);
    instructions->SetOperation(20, 0, 27);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 0, 25);
    instructions->SetOperation(23, 1, 16);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 0, 25);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 0, 13);
    instructions->SetOperation(28, 0, 10);
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
    state.m_generation = 17;
    state.m_evolution = 11;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 20;
    state.m_copy_id = 6;
    state.m_test = 0;
    state.m_seed = 14201873234047079785;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
