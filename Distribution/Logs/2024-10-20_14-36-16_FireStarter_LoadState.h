#pragma once
#include "FireStarterState.h"

// Run date: 10/20/24 14:36:16 Pacific Daylight Time
// Run duration = 494.311841 seconds
// Run generation = 15
// Run evolution = 0
// Run max result = 0.00000068
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 123
// Run optimizeSeed = 123
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 524288
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
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE_CPU;
    settings.m_evolveSeed = 123;
    settings.m_optimizeSeed = 123;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 524288;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000068
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.19054459f;
    data->d[1] = -0.89792025f;
    data->d[2] = 0.89953828f;
    data->d[3] = -2.25038576f;
    data->d[4] = 1.26126289f;
    data->d[5] = 0.21773420f;
    data->d[6] = -0.56919944f;
    data->d[7] = 2.01012564f;
    data->d[8] = -0.66336548f;
    data->d[9] = 0.43988428f;
    data->d[10] = -0.91253352f;
    data->d[11] = -9.04820728f;
    data->d[12] = 0.01777957f;
    data->d[13] = -0.57006764f;
    data->d[14] = 4.39526367f;
    data->d[15] = -2.78675604f;
    data->d[16] = 3.03123450f;
    data->d[17] = 1.54897273f;
    data->d[18] = 0.40901962f;
    data->d[19] = -1.72243893f;
    data->d[20] = 0.33419818f;
    data->d[21] = 0.30888000f;
    data->d[22] = 0.21045671f;
    data->d[23] = -1.36719859f;
    data->d[24] = -1.55137420f;
    data->d[25] = 0.78244627f;
    data->d[26] = -1.70043349f;
    data->d[27] = -1.35677874f;
    data->d[28] = -1.76984107f;
    data->d[29] = -0.04916702f;
    *(result->MinResult()) = 0.00000068f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000068f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 25);
    instructions->SetOperation(1, 1, 16);
    instructions->SetOperation(2, 0, 16);
    instructions->SetOperation(3, 1, 10);
    instructions->SetOperation(4, 1, 17);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 0, 29);
    instructions->SetOperation(7, 1, 21);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 1, 5);
    instructions->SetOperation(10, 1, 7);
    instructions->SetOperation(11, 0, 20);
    instructions->SetOperation(12, 1, 21);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 0, 28);
    instructions->SetOperation(15, 1, 26);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 0, 26);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 29);
    instructions->SetOperation(21, 1, 17);
    instructions->SetOperation(22, 1, 19);
    instructions->SetOperation(23, 1, 0);
    instructions->SetOperation(24, 1, 10);
    instructions->SetOperation(25, 0, 15);
    instructions->SetOperation(26, 1, 8);
    instructions->SetOperation(27, 0, 7);
    instructions->SetOperation(28, 1, 13);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 0, 3);
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
    state.m_generation = 15;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 14188645115022533502;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00347477f;
    state.m_maxResult = 0.00000068f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
