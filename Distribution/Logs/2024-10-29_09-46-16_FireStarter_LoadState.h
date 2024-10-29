#pragma once
#include "FireStarterState.h"

// Run date: 10/29/24 09:46:16 Pacific Daylight Time
// Run duration = 106.691494 seconds
// Run generation = 12
// Run evolution = 0
// Run max result = 0.00000021
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
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run iterations = 64
// Run passes = 500
// Run candidates = 8
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
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
    settings.m_candidates = 8;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000021
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.18435028f;
    data->d[1] = -2.95724225f;
    data->d[2] = 0.04180724f;
    data->d[3] = 0.52458858f;
    data->d[4] = -0.63975269f;
    data->d[5] = 1.24858892f;
    data->d[6] = -0.74856573f;
    data->d[7] = 1.01128519f;
    data->d[8] = -0.48986828f;
    data->d[9] = -8.46438026f;
    data->d[10] = 2.81781387f;
    data->d[11] = -4.55386829f;
    data->d[12] = 0.00108282f;
    data->d[13] = 2.57929754f;
    data->d[14] = 1.14453590f;
    data->d[15] = 5.53678179f;
    data->d[16] = 7.02138329f;
    data->d[17] = 2.71141934f;
    data->d[18] = -0.22950736f;
    data->d[19] = 2.08622599f;
    data->d[20] = -1.38739705f;
    data->d[21] = -0.57525790f;
    data->d[22] = -0.43858796f;
    data->d[23] = 1.24929893f;
    data->d[24] = -0.86801881f;
    data->d[25] = 0.00533986f;
    data->d[26] = -0.52947158f;
    data->d[27] = 0.35235083f;
    data->d[28] = -1.68531549f;
    data->d[29] = -1.66351259f;
    *(result->MinResult()) = 0.00000021f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000021f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 7);
    instructions->SetOperation(1, 1, 20);
    instructions->SetOperation(2, 0, 1);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 0, 20);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 0, 4);
    instructions->SetOperation(7, 0, 13);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 1, 0);
    instructions->SetOperation(11, 1, 27);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 0, 9);
    instructions->SetOperation(15, 0, 2);
    instructions->SetOperation(16, 0, 20);
    instructions->SetOperation(17, 1, 23);
    instructions->SetOperation(18, 1, 28);
    instructions->SetOperation(19, 1, 26);
    instructions->SetOperation(20, 1, 16);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 0, 17);
    instructions->SetOperation(23, 1, 20);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 0, 13);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 1);
    instructions->SetOperation(28, 0, 6);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 0, 18);
    instructions->SetOperation(31, 1, 13);
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
    state.m_generation = 12;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 0;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000021f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
