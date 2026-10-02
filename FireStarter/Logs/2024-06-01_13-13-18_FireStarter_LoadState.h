#pragma once
#include "FireStarterState.h"

// Run date: 06/01/24 13:13:18 Pacific Daylight Time
// Run duration = 6425.581344 seconds
// Run generation = 204
// Run evolution = 9
// Run max result = 0.00000030
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

// Run scale = 0.200000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.200000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.264130f;
    data->d[1] = -0.829788f;
    data->d[2] = 0.063484f;
    data->d[3] = -0.639766f;
    data->d[4] = -1.302955f;
    data->d[5] = -2.015620f;
    data->d[6] = -1.239239f;
    data->d[7] = -0.400442f;
    data->d[8] = -0.081820f;
    data->d[9] = -0.492404f;
    data->d[10] = -0.558240f;
    data->d[11] = 1.217557f;
    data->d[12] = 0.105467f;
    data->d[13] = 1.464864f;
    data->d[14] = -1.124498f;
    data->d[15] = -0.559603f;
    data->d[16] = 0.178636f;
    data->d[17] = 2.047925f;
    data->d[18] = 0.000000f;
    data->d[19] = 1.947814f;
    data->d[20] = 1.020732f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000030
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.208864f;
    data->d[1] = -1.291057f;
    data->d[2] = 0.203041f;
    data->d[3] = -1.653927f;
    data->d[4] = 0.827716f;
    data->d[5] = -5.717590f;
    data->d[6] = -4.249192f;
    data->d[7] = -7.905985f;
    data->d[8] = -1.245589f;
    data->d[9] = 0.000787f;
    data->d[10] = -4.674976f;
    data->d[11] = 2.651126f;
    data->d[12] = -0.246564f;
    data->d[13] = -1.651061f;
    data->d[14] = -0.788554f;
    data->d[15] = -0.812487f;
    data->d[16] = 1.496007f;
    data->d[17] = -0.527776f;
    data->d[18] = -1.212214f;
    data->d[19] = -1.277923f;
    data->d[20] = 0.699457f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.330885f;
    data->d[1] = 1.732511f;
    data->d[2] = -0.114023f;
    data->d[3] = -0.368805f;
    data->d[4] = 0.962773f;
    data->d[5] = -8.755081f;
    data->d[6] = 5.083730f;
    data->d[7] = 10.158158f;
    data->d[8] = -4.677884f;
    data->d[9] = -0.000238f;
    data->d[10] = -1.323665f;
    data->d[11] = 0.139600f;
    data->d[12] = -0.442265f;
    data->d[13] = 0.993588f;
    data->d[14] = -2.420013f;
    data->d[15] = -0.574783f;
    data->d[16] = 1.467186f;
    data->d[17] = -0.741206f;
    data->d[18] = 1.063069f;
    data->d[19] = -1.085907f;
    data->d[20] = -0.332046f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
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
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 4);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 0, 24);
    instructions->SetOperation(4, 1, 29);
    instructions->SetOperation(5, 1, 11);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 1, 15);
    instructions->SetOperation(8, 0, 3);
    instructions->SetOperation(9, 0, 15);
    instructions->SetOperation(10, 1, 5);
    instructions->SetOperation(11, 0, 7);
    instructions->SetOperation(12, 1, 25);
    instructions->SetOperation(13, 1, 20);
    instructions->SetOperation(14, 0, 0);
    instructions->SetOperation(15, 0, 20);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 0, 11);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 28);
    instructions->SetOperation(20, 0, 8);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 1, 19);
    instructions->SetOperation(23, 1, 14);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 1, 29);
    instructions->SetOperation(26, 0, 4);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 0, 2);
    instructions->SetOperation(29, 0, 9);
    instructions->SetOperation(30, 1, 29);
    instructions->SetOperation(31, 1, 6);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 204;
    state.m_evolution = 9;
    state.m_index = 12;
    state.m_copy_index = 3;
    state.m_id = 3;
    state.m_test = 3;
    state.m_seed = 17878494128854137727;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000283f;
    state.m_optimizeValid = true;
} // LoadState
