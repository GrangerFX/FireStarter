#pragma once
#include "FireStarterState.h"

// Run date: 11/02/24 12:06:26 Pacific Daylight Time
// Run duration = 10.231211 seconds
// Run generation = 11
// Run evolution = 0
// Run max result = 0.00000060
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
// Run tests = 1
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 1;
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

// Variation: 0  result = 0.00000060
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.13442536f;
    data->d[1] = -0.54002881f;
    data->d[2] = 3.58743620f;
    data->d[3] = 0.58130270f;
    data->d[4] = -0.36927527f;
    data->d[5] = -0.32866865f;
    data->d[6] = 1.37340760f;
    data->d[7] = -0.03151625f;
    data->d[8] = -0.11753570f;
    data->d[9] = -1.15516138f;
    data->d[10] = 0.62232530f;
    data->d[11] = 0.19411394f;
    data->d[12] = 1.79946220f;
    data->d[13] = 3.01309156f;
    data->d[14] = 2.24598861f;
    data->d[15] = -1.84617078f;
    data->d[16] = -0.25037801f;
    data->d[17] = 1.48823118f;
    data->d[18] = 0.81457031f;
    data->d[19] = 0.82366318f;
    data->d[20] = 2.84903073f;
    data->d[21] = -1.05766535f;
    data->d[22] = 1.55685508f;
    data->d[23] = -1.06712520f;
    data->d[24] = 0.52303267f;
    data->d[25] = 1.18210030f;
    data->d[26] = -1.83190727f;
    data->d[27] = -0.04441037f;
    data->d[28] = -1.15381455f;
    data->d[29] = -1.34291065f;
    *(result->MinResult()) = 0.00000060f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000060f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 1, 15);
    instructions->SetOperation(2, 0, 8);
    instructions->SetOperation(3, 1, 24);
    instructions->SetOperation(4, 0, 18);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 0, 10);
    instructions->SetOperation(7, 1, 0);
    instructions->SetOperation(8, 1, 0);
    instructions->SetOperation(9, 1, 17);
    instructions->SetOperation(10, 0, 6);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 0, 19);
    instructions->SetOperation(13, 0, 26);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 0, 10);
    instructions->SetOperation(16, 1, 10);
    instructions->SetOperation(17, 1, 23);
    instructions->SetOperation(18, 0, 22);
    instructions->SetOperation(19, 1, 21);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 1, 0);
    instructions->SetOperation(23, 0, 26);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 1, 20);
    instructions->SetOperation(26, 0, 12);
    instructions->SetOperation(27, 0, 9);
    instructions->SetOperation(28, 0, 23);
    instructions->SetOperation(29, 0, 24);
    instructions->SetOperation(30, 0, 4);
    instructions->SetOperation(31, 0, 25);
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
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 16105326913044134590;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000060f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
