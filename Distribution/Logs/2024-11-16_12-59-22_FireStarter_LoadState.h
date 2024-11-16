#pragma once
#include "FireStarterState.h"

// Run date: 11/16/24 12:59:22 Pacific Standard Time
// Run duration = 27.172347 seconds
// Run generation = 11
// Run evolution = 2
// Run max result = 0.00000018
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 262144
// Run passes = 500
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.300000f
// Run startScale = 2.500000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE_CPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 1;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_passes = 500;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.22227679f;
    data->d[2] = -0.42546695f;
    data->d[3] = -1.13254893f;
    data->d[4] = 0.10489708f;
    data->d[5] = -0.78705102f;
    data->d[6] = -2.14748359f;
    data->d[7] = -3.04649639f;
    data->d[8] = 1.06679964f;
    data->d[9] = -0.11795747f;
    data->d[10] = 3.86354375f;
    data->d[11] = -0.24942200f;
    data->d[12] = 1.35034001f;
    data->d[13] = 1.27106798f;
    data->d[14] = -0.84032077f;
    data->d[15] = 0.30760598f;
    data->d[16] = 3.44368911f;
    data->d[17] = 1.32168663f;
    data->d[18] = -0.69767904f;
    data->d[19] = 0.00000000f;
    data->d[20] = -2.46322846f;
    data->d[21] = -1.44649196f;
    data->d[22] = 2.00134850f;
    data->d[23] = 2.34503412f;
    data->d[24] = -0.21847832f;
    data->d[25] = -1.75915456f;
    data->d[26] = -1.99095845f;
    data->d[27] = 0.91907001f;
    data->d[28] = -2.19203115f;
    data->d[29] = -2.39377999f;
    *(result->MinResult()) = 0.00000018f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000018f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 29);
    instructions->SetOperation(1, 0, 24);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 1, 26);
    instructions->SetOperation(5, 1, 15);
    instructions->SetOperation(6, 0, 15);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 0, 25);
    instructions->SetOperation(10, 0, 28);
    instructions->SetOperation(11, 1, 13);
    instructions->SetOperation(12, 1, 8);
    instructions->SetOperation(13, 1, 1);
    instructions->SetOperation(14, 0, 27);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 1, 15);
    instructions->SetOperation(17, 0, 18);
    instructions->SetOperation(18, 0, 22);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 29);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 0, 6);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 0, 20);
    instructions->SetOperation(25, 0, 11);
    instructions->SetOperation(26, 1, 10);
    instructions->SetOperation(27, 1, 0);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 12);
    instructions->SetOperation(30, 0, 22);
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
    state.LoadCodeFromProgram();
    state.m_generation = 11;
    state.m_evolution = 2;
    state.m_index = 2;
    state.m_copy_index = 5;
    state.m_id = 5;
    state.m_test = 0;
    state.m_seed = 5813254715701346221;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00000125f;
    state.m_maxResult = 0.00000018f;
    state.m_evolveWeight = 0.000013f;
    state.m_optimizeValid = true;
} // LoadState
