#pragma once
#include "FireStarterState.h"

// Run date: 11/13/24 18:36:29 Pacific Standard Time
// Run duration = 1385.424580 seconds
// Run generation = 5
// Run evolution = 0
// Run max result = 0.00000025
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run iterations = 64
// Run passes = 512
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.100000f
// Run startScale = 2.500000f
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
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_iterations = 64;
    settings.m_passes = 512;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000025
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.07482301f;
    data->d[1] = 0.23506343f;
    data->d[2] = -2.14451051f;
    data->d[3] = 2.18875074f;
    data->d[4] = -1.13638508f;
    data->d[5] = -1.27688360f;
    data->d[6] = -0.86823606f;
    data->d[7] = -0.02781766f;
    data->d[8] = -6.84011650f;
    data->d[9] = 0.65720743f;
    data->d[10] = -1.80653334f;
    data->d[11] = 1.36495006f;
    data->d[12] = -0.39024875f;
    data->d[13] = 0.48451829f;
    data->d[14] = 1.02844906f;
    data->d[15] = 1.78689051f;
    data->d[16] = -2.83928609f;
    data->d[17] = -7.02223921f;
    data->d[18] = -0.87115723f;
    data->d[19] = 0.30585143f;
    data->d[20] = 3.51635075f;
    data->d[21] = -1.29618454f;
    data->d[22] = -0.76499993f;
    data->d[23] = -0.17579621f;
    data->d[24] = -1.44773555f;
    data->d[25] = -0.15469535f;
    data->d[26] = -1.73840833f;
    data->d[27] = 0.09748077f;
    data->d[28] = 1.31292629f;
    data->d[29] = -2.06878948f;
    *(result->MinResult()) = 0.00000025f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000025f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 1, 12);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 1, 9);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 0, 16);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 0, 3);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 1, 17);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 1, 19);
    instructions->SetOperation(26, 1, 20);
    instructions->SetOperation(27, 0, 21);
    instructions->SetOperation(28, 1, 13);
    instructions->SetOperation(29, 0, 22);
    instructions->SetOperation(30, 0, 23);
    instructions->SetOperation(31, 0, 2);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.LoadCodeFromProgram();
    state.m_generation = 5;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 15415146374309016070;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000025f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
