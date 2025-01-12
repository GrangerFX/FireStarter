#pragma once
#include "FireStarterState.h"

// Run date: 01/12/25 12:02:34 Pacific Standard Time
// Run duration = 132.974910 seconds
// Run generation = 871
// Run evolution = 0
// Run max result = 0.35369107
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_NEW
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 1000
// Run population = 65536
// Run passes = 1
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

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE_NEW;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 1000;
    settings.m_population = 65536;
    settings.m_passes = 1;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.35369107
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.04557709f;
    data->d[1] = -0.13887781f;
    data->d[2] = 1.27898145f;
    data->d[3] = 1.57522500f;
    data->d[4] = 0.64405173f;
    data->d[5] = -1.35689414f;
    data->d[6] = 0.81238270f;
    data->d[7] = -2.83397651f;
    data->d[8] = -1.87237251f;
    data->d[9] = -0.29537040f;
    data->d[10] = 1.13366508f;
    data->d[11] = 1.19098759f;
    data->d[12] = 2.07157278f;
    data->d[13] = -0.52308029f;
    data->d[14] = -0.08207806f;
    data->d[15] = 1.08030772f;
    data->d[16] = -1.47356009f;
    data->d[17] = 1.42145085f;
    data->d[18] = -0.71539420f;
    data->d[19] = 0.00000000f;
    data->d[20] = 0.00000000f;
    data->d[21] = 0.00000000f;
    data->d[22] = 0.00000000f;
    data->d[23] = 0.00000000f;
    data->d[24] = 0.00000000f;
    data->d[25] = 0.00000000f;
    data->d[26] = 0.00000000f;
    data->d[27] = 0.00000000f;
    data->d[28] = 0.00000000f;
    data->d[29] = 0.00000000f;
    *(result->MinResult()) = 0.35369107f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.35369107f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 0, 3);
    instructions->SetOperation(4, 1, 2);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 1, 7);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 1, 9);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 9);
    instructions->SetOperation(15, 0, 6);
    instructions->SetOperation(16, 1, 11);
    instructions->SetOperation(17, 0, 3);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 0, 13);
    instructions->SetOperation(20, 1, 12);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 1, 11);
    instructions->SetOperation(23, 0, 14);
    instructions->SetOperation(24, 1, 15);
    instructions->SetOperation(25, 0, 13);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 1, 17);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 1, 5);
    instructions->SetOperation(31, 0, 18);
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
    state.m_generation = 871;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 1;
    state.m_seed = 18113915691549705305;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.35374159f;
    state.m_maxResult = 0.35369107f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
