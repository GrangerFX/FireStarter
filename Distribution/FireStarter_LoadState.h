#pragma once
#include "FireStarterState.h"

// Run date: 09/01/24 18:00:20 Pacific Daylight Time
// Run duration = 145.055113 seconds
// Run generation = 95
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
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 8704
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 8704;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000022
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.448238f;
    data->d[1] = -0.039317f;
    data->d[2] = -0.267062f;
    data->d[3] = -0.386975f;
    data->d[4] = -0.703761f;
    data->d[5] = 2.864948f;
    data->d[6] = -0.005663f;
    data->d[7] = 4.347142f;
    data->d[8] = 0.016209f;
    data->d[9] = 1.061489f;
    data->d[10] = 1.682504f;
    data->d[11] = -0.432676f;
    data->d[12] = 0.537216f;
    data->d[13] = 0.542719f;
    data->d[14] = 0.935964f;
    data->d[15] = -0.533195f;
    data->d[16] = -5.156593f;
    data->d[17] = 0.011651f;
    data->d[18] = -2.865165f;
    data->d[19] = 0.737746f;
    data->d[20] = -0.000000f;
    data->d[21] = -0.160125f;
    data->d[22] = -0.019148f;
    data->d[23] = -1.273672f;
    data->d[24] = 0.721263f;
    data->d[25] = -0.660213f;
    data->d[26] = 1.748682f;
    data->d[27] = -0.581401f;
    data->d[28] = 1.710107f;
    data->d[29] = -0.280579f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 19);
    instructions->SetOperation(1, 1, 13);
    instructions->SetOperation(2, 1, 9);
    instructions->SetOperation(3, 1, 21);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 0, 21);
    instructions->SetOperation(6, 1, 8);
    instructions->SetOperation(7, 0, 4);
    instructions->SetOperation(8, 0, 7);
    instructions->SetOperation(9, 1, 8);
    instructions->SetOperation(10, 0, 28);
    instructions->SetOperation(11, 1, 0);
    instructions->SetOperation(12, 1, 4);
    instructions->SetOperation(13, 1, 18);
    instructions->SetOperation(14, 1, 28);
    instructions->SetOperation(15, 0, 15);
    instructions->SetOperation(16, 0, 7);
    instructions->SetOperation(17, 1, 14);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 1, 29);
    instructions->SetOperation(20, 1, 17);
    instructions->SetOperation(21, 0, 8);
    instructions->SetOperation(22, 0, 27);
    instructions->SetOperation(23, 1, 21);
    instructions->SetOperation(24, 1, 10);
    instructions->SetOperation(25, 0, 25);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 1, 5);
    instructions->SetOperation(28, 0, 26);
    instructions->SetOperation(29, 1, 20);
    instructions->SetOperation(30, 0, 14);
    instructions->SetOperation(31, 0, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 95;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass =2;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
