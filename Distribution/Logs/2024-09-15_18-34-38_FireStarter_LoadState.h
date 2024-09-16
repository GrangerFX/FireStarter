#pragma once
#include "FireStarterState.h"

// Run date: 09/15/24 18:34:38 Pacific Daylight Time
// Run duration = 4623.569673 seconds
// Run generation = 1864
// Run evolution = 0
// Run max result = 0.00000179
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

// Variation: 0  result = 0.00000179
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.204069f;
    data->d[1] = 0.250530f;
    data->d[2] = -0.257146f;
    data->d[3] = 5.480186f;
    data->d[4] = -7.365488f;
    data->d[5] = 2.852005f;
    data->d[6] = 3.004067f;
    data->d[7] = -1.305299f;
    data->d[8] = -0.591637f;
    data->d[9] = 0.533361f;
    data->d[10] = 0.669727f;
    data->d[11] = -0.037116f;
    data->d[12] = -2.559303f;
    data->d[13] = -6.584836f;
    data->d[14] = -3.907324f;
    data->d[15] = -0.260643f;
    data->d[16] = -0.540842f;
    data->d[17] = 2.416487f;
    data->d[18] = 4.373842f;
    data->d[19] = -1.680580f;
    data->d[20] = -5.848895f;
    data->d[21] = -0.200034f;
    data->d[22] = 0.479285f;
    data->d[23] = 2.011564f;
    data->d[24] = -1.570797f;
    data->d[25] = -2.280365f;
    data->d[26] = 8.119713f;
    data->d[27] = -2.200186f;
    data->d[28] = 1.130169f;
    data->d[29] = 0.039018f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.000002f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 24);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 1);
    instructions->SetOperation(3, 1, 8);
    instructions->SetOperation(4, 0, 9);
    instructions->SetOperation(5, 1, 8);
    instructions->SetOperation(6, 1, 10);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 25);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 0, 23);
    instructions->SetOperation(12, 1, 0);
    instructions->SetOperation(13, 1, 16);
    instructions->SetOperation(14, 0, 28);
    instructions->SetOperation(15, 1, 1);
    instructions->SetOperation(16, 0, 4);
    instructions->SetOperation(17, 1, 9);
    instructions->SetOperation(18, 1, 4);
    instructions->SetOperation(19, 1, 22);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 1, 7);
    instructions->SetOperation(22, 1, 13);
    instructions->SetOperation(23, 0, 29);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 1, 17);
    instructions->SetOperation(26, 0, 5);
    instructions->SetOperation(27, 0, 27);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 0, 21);
    instructions->SetOperation(31, 0, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 1864;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 8;
    state.m_seed = 15784117016430781128;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000004f;
    state.m_maxResult = 0.000002f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
