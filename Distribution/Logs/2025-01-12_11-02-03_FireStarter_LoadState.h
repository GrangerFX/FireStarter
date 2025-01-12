#pragma once
#include "FireStarterState.h"

// Run date: 01/12/25 11:02:03 Pacific Standard Time
// Run duration = 24.774603 seconds
// Run generation = 80
// Run evolution = 0
// Run max result = 0.00757020
// Run variations = 1
// Run instructions = 32
// Run registers = 30
// Run opcodes = 3

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
// Run generations = 100
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
    settings.m_opcodes = 3;

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
    settings.m_generations = 100;
    settings.m_population = 65536;
    settings.m_passes = 1;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.300000f;
    settings.m_startScale = 2.500000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00757020
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.47747877f;
    data->d[1] = 1.67394948f;
    data->d[2] = -2.06819439f;
    data->d[3] = -0.00129408f;
    data->d[4] = 0.46173871f;
    data->d[5] = -13.84465408f;
    data->d[6] = 1.22613907f;
    data->d[7] = -0.23092476f;
    data->d[8] = -2.47519922f;
    data->d[9] = -0.65428430f;
    data->d[10] = 0.76398295f;
    data->d[11] = 0.22522280f;
    data->d[12] = -1.60102558f;
    data->d[13] = 2.48163176f;
    data->d[14] = -2.93668699f;
    data->d[15] = -7.30610418f;
    data->d[16] = 1.61441946f;
    data->d[17] = 0.70867813f;
    data->d[18] = -2.26865578f;
    data->d[19] = 2.22923517f;
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
    *(result->MinResult()) = 0.00757020f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00757020f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 3, 0);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 5, 2);
    instructions->SetOperation(3, 5, 3);
    instructions->SetOperation(4, 5, 4);
    instructions->SetOperation(5, 3, 5);
    instructions->SetOperation(6, 3, 6);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 3, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 5, 4);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 5, 10);
    instructions->SetOperation(13, 1, 11);
    instructions->SetOperation(14, 3, 6);
    instructions->SetOperation(15, 3, 6);
    instructions->SetOperation(16, 3, 12);
    instructions->SetOperation(17, 1, 13);
    instructions->SetOperation(18, 5, 14);
    instructions->SetOperation(19, 5, 4);
    instructions->SetOperation(20, 1, 0);
    instructions->SetOperation(21, 5, 4);
    instructions->SetOperation(22, 3, 15);
    instructions->SetOperation(23, 5, 16);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 5, 18);
    instructions->SetOperation(26, 1, 9);
    instructions->SetOperation(27, 1, 6);
    instructions->SetOperation(28, 5, 3);
    instructions->SetOperation(29, 5, 19);
    instructions->SetOperation(30, 5, 5);
    instructions->SetOperation(31, 5, 18);
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
    state.m_generation = 80;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00766677f;
    state.m_maxResult = 0.00757020f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
