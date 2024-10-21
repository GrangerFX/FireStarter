#pragma once
#include "FireStarterState.h"

// Run date: 10/21/24 09:42:49 Pacific Daylight Time
// Run duration = 226.499055 seconds
// Run generation = 7
// Run evolution = 0
// Run max result = 0.00000022
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
// Run population = 65536
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
    settings.m_population = 65536;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000022
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.11853274f;
    data->d[1] = 0.90123016f;
    data->d[2] = 0.70798314f;
    data->d[3] = -1.56278408f;
    data->d[4] = 1.00355315f;
    data->d[5] = 1.34312320f;
    data->d[6] = -6.18724346f;
    data->d[7] = -0.00322303f;
    data->d[8] = -0.41819924f;
    data->d[9] = -1.51390374f;
    data->d[10] = 0.55524677f;
    data->d[11] = -0.93890923f;
    data->d[12] = 0.49009392f;
    data->d[13] = -0.92988491f;
    data->d[14] = 1.74985218f;
    data->d[15] = -5.71397924f;
    data->d[16] = -1.53077757f;
    data->d[17] = -1.56973946f;
    data->d[18] = 1.65866661f;
    data->d[19] = -0.23704053f;
    data->d[20] = 0.01673283f;
    data->d[21] = -1.49492514f;
    data->d[22] = -0.89664865f;
    data->d[23] = -0.99901742f;
    data->d[24] = -0.45292673f;
    data->d[25] = 1.15012503f;
    data->d[26] = 0.16255003f;
    data->d[27] = 0.35770628f;
    data->d[28] = -0.42119756f;
    data->d[29] = 1.33038175f;
    *(result->MinResult()) = 0.00000022f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000022f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 29);
    instructions->SetOperation(1, 0, 26);
    instructions->SetOperation(2, 1, 29);
    instructions->SetOperation(3, 1, 7);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 0, 23);
    instructions->SetOperation(6, 0, 19);
    instructions->SetOperation(7, 0, 3);
    instructions->SetOperation(8, 0, 14);
    instructions->SetOperation(9, 1, 19);
    instructions->SetOperation(10, 0, 28);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 0, 22);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 1, 1);
    instructions->SetOperation(15, 0, 25);
    instructions->SetOperation(16, 0, 23);
    instructions->SetOperation(17, 1, 24);
    instructions->SetOperation(18, 1, 28);
    instructions->SetOperation(19, 0, 9);
    instructions->SetOperation(20, 1, 11);
    instructions->SetOperation(21, 0, 5);
    instructions->SetOperation(22, 1, 9);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 28);
    instructions->SetOperation(25, 0, 21);
    instructions->SetOperation(26, 0, 23);
    instructions->SetOperation(27, 0, 25);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 1, 5);
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
    state.LoadCodeFromProgram();
    state.m_generation = 7;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00422579f;
    state.m_maxResult = 0.00000022f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
