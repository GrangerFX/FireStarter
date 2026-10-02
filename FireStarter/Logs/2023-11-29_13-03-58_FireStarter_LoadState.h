#pragma once
#include "FireStarterState.h"

// Run date: 11/29/23 13:03:58 Pacific Standard Time
// Run duration = 169.153603 seconds
// Run generation = 23
// Run evolution = 2
// Run max result = 0.00011277
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
    settings.m_evolveTarget = 0.000001f;

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

// Variation: 0  result = 0.00000966
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141844f;
    data->d[1] = -23.436661f;
    data->d[2] = -0.151741f;
    data->d[3] = 0.040501f;
    data->d[4] = 0.940394f;
    data->d[5] = 1.683316f;
    data->d[6] = -0.344242f;
    data->d[7] = 1.200403f;
    data->d[8] = -1.320089f;
    data->d[9] = 0.299908f;
    data->d[10] = 3.727939f;
    data->d[11] = 0.880323f;
    data->d[12] = 0.574817f;
    data->d[13] = -0.068712f;
    data->d[14] = -2.655801f;
    data->d[15] = -0.211350f;
    data->d[16] = -0.157567f;
    data->d[17] = 28.313519f;
    data->d[18] = -1.035068f;
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
    *(result->MinResult()) = 0.000010f;
} // LoadVariation0

// Variation: 1  result = 0.00000334
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.245213f;
    data->d[1] = 0.126004f;
    data->d[2] = -0.104848f;
    data->d[3] = 4.212957f;
    data->d[4] = 1.300967f;
    data->d[5] = 0.620696f;
    data->d[6] = -0.851711f;
    data->d[7] = 0.083697f;
    data->d[8] = 1.441279f;
    data->d[9] = -0.176307f;
    data->d[10] = -0.980535f;
    data->d[11] = 1.297801f;
    data->d[12] = 0.605679f;
    data->d[13] = -0.573127f;
    data->d[14] = 0.236228f;
    data->d[15] = 0.557086f;
    data->d[16] = -28.000866f;
    data->d[17] = -28.629700f;
    data->d[18] = -0.103295f;
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
    *(result->MinResult()) = 0.000003f;
} // LoadVariation1

// Variation: 2  result = 0.00011277
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.367152f;
    data->d[1] = 0.343286f;
    data->d[2] = -0.521768f;
    data->d[3] = -2.989082f;
    data->d[4] = -1.537438f;
    data->d[5] = 2.067057f;
    data->d[6] = -0.623377f;
    data->d[7] = 0.649827f;
    data->d[8] = 1.274962f;
    data->d[9] = -0.481797f;
    data->d[10] = -2.776996f;
    data->d[11] = -0.617455f;
    data->d[12] = -0.296299f;
    data->d[13] = 0.075900f;
    data->d[14] = 2.704695f;
    data->d[15] = 0.157392f;
    data->d[16] = 0.104231f;
    data->d[17] = 17.474375f;
    data->d[18] = 1.275690f;
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
    *(result->MinResult()) = 0.000113f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000113f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 5);
    instructions->SetOperation(2, 0, 16);
    instructions->SetOperation(3, 0, 24);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 1, 24);
    instructions->SetOperation(6, 1, 14);
    instructions->SetOperation(7, 0, 2);
    instructions->SetOperation(8, 1, 21);
    instructions->SetOperation(9, 1, 19);
    instructions->SetOperation(10, 0, 15);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 1, 22);
    instructions->SetOperation(13, 0, 19);
    instructions->SetOperation(14, 0, 25);
    instructions->SetOperation(15, 0, 21);
    instructions->SetOperation(16, 0, 25);
    instructions->SetOperation(17, 1, 23);
    instructions->SetOperation(18, 0, 8);
    instructions->SetOperation(19, 1, 14);
    instructions->SetOperation(20, 1, 21);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 1, 23);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 0, 1);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 0, 21);
    instructions->SetOperation(30, 0, 18);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 23;
    state.m_evolution = 2;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 19;
    state.m_copy_id = 19;
    state.m_test = 15;
    state.m_seed = 11821844259436758258;
    state.m_maxResult = 0.000113f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
