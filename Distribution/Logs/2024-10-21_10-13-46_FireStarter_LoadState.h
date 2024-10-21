#pragma once
#include "FireStarterState.h"

// Run date: 10/21/24 10:13:46 Pacific Daylight Time
// Run duration = 228.469223 seconds
// Run generation = 5
// Run evolution = 0
// Run max result = 0.00000017
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
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 131072
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 131072;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000017
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.17618188f;
    data->d[2] = -0.27716359f;
    data->d[3] = 3.57099581f;
    data->d[4] = 0.01279556f;
    data->d[5] = -3.32130718f;
    data->d[6] = 0.01509564f;
    data->d[7] = -2.28154254f;
    data->d[8] = 0.98525929f;
    data->d[9] = 3.12233472f;
    data->d[10] = -1.45154583f;
    data->d[11] = -4.01882982f;
    data->d[12] = -1.07170415f;
    data->d[13] = 1.00137126f;
    data->d[14] = -1.23780775f;
    data->d[15] = -1.33903050f;
    data->d[16] = -0.89432245f;
    data->d[17] = -1.93796313f;
    data->d[18] = 1.12012458f;
    data->d[19] = 0.73867130f;
    data->d[20] = 1.79500401f;
    data->d[21] = 1.63822436f;
    data->d[22] = 0.29600766f;
    data->d[23] = -1.66690803f;
    data->d[24] = -1.70376492f;
    data->d[25] = 0.54132378f;
    data->d[26] = 1.78016353f;
    data->d[27] = 1.69169450f;
    data->d[28] = -0.68261677f;
    data->d[29] = 1.70920444f;
    *(result->MinResult()) = 0.00000017f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000017f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 11);
    instructions->SetOperation(1, 0, 23);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 1, 24);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 0, 9);
    instructions->SetOperation(6, 0, 14);
    instructions->SetOperation(7, 0, 10);
    instructions->SetOperation(8, 0, 22);
    instructions->SetOperation(9, 0, 4);
    instructions->SetOperation(10, 1, 8);
    instructions->SetOperation(11, 0, 20);
    instructions->SetOperation(12, 1, 6);
    instructions->SetOperation(13, 0, 2);
    instructions->SetOperation(14, 0, 22);
    instructions->SetOperation(15, 1, 0);
    instructions->SetOperation(16, 1, 8);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 0, 20);
    instructions->SetOperation(19, 1, 21);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 0, 6);
    instructions->SetOperation(22, 0, 3);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 0, 0);
    instructions->SetOperation(25, 1, 15);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 1, 24);
    instructions->SetOperation(28, 1, 21);
    instructions->SetOperation(29, 1, 22);
    instructions->SetOperation(30, 1, 12);
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
    state.LoadCodeFromProgram();
    state.m_generation = 5;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.01062727f;
    state.m_maxResult = 0.00000017f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
