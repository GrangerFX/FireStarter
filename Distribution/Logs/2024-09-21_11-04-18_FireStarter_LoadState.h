#pragma once
#include "FireStarterState.h"

// Run date: 09/21/24 11:04:18 Pacific Daylight Time
// Run duration = 152.768975 seconds
// Run generation = 51
// Run evolution = 0
// Run max result = 0.00006223
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE_GPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00006223
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.243501f;
    data->d[1] = 1.883455f;
    data->d[2] = 1.572985f;
    data->d[3] = -1.599284f;
    data->d[4] = 0.044706f;
    data->d[5] = 0.157312f;
    data->d[6] = -0.924904f;
    data->d[7] = -3.231004f;
    data->d[8] = -4.896066f;
    data->d[9] = -0.577228f;
    data->d[10] = 0.210202f;
    data->d[11] = -0.204542f;
    data->d[12] = -1.162488f;
    data->d[13] = -1.699983f;
    data->d[14] = -1.626721f;
    data->d[15] = -0.543678f;
    data->d[16] = 6.345982f;
    data->d[17] = 2.031583f;
    data->d[18] = 2.162525f;
    data->d[19] = 1.916050f;
    data->d[20] = -1.515257f;
    data->d[21] = 1.397802f;
    data->d[22] = -0.262512f;
    data->d[23] = 3.135791f;
    data->d[24] = 0.601714f;
    data->d[25] = -9.817819f;
    data->d[26] = 3.217852f;
    data->d[27] = -1.283425f;
    data->d[28] = 0.866239f;
    data->d[29] = -1.888107f;
    *(result->MinResult()) = 0.000062f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.000062f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 22);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 0, 17);
    instructions->SetOperation(4, 1, 20);
    instructions->SetOperation(5, 1, 22);
    instructions->SetOperation(6, 1, 21);
    instructions->SetOperation(7, 0, 19);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 3);
    instructions->SetOperation(10, 1, 13);
    instructions->SetOperation(11, 1, 1);
    instructions->SetOperation(12, 1, 20);
    instructions->SetOperation(13, 1, 0);
    instructions->SetOperation(14, 1, 22);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 9);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 0, 5);
    instructions->SetOperation(19, 0, 27);
    instructions->SetOperation(20, 0, 28);
    instructions->SetOperation(21, 0, 20);
    instructions->SetOperation(22, 1, 6);
    instructions->SetOperation(23, 1, 12);
    instructions->SetOperation(24, 1, 14);
    instructions->SetOperation(25, 0, 12);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 14);
    instructions->SetOperation(28, 0, 29);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 0, 22);
    instructions->SetOperation(31, 0, 4);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 51;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 1;
    state.m_seed = 18113915691549705305;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000338f;
    state.m_maxResult = 0.000062f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
