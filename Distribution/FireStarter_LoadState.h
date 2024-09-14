#pragma once
#include "FireStarterState.h"

// Run date: 09/14/24 14:51:55 Pacific Daylight Time
// Run duration = 12.850396 seconds
// Run generation = 4
// Run evolution = 0
// Run max result = 0.00140667
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 8192
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

    settings.m_mode = FIRESTARTER_EVOLVE_GPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 8192;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00140667
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.819052f;
    data->d[1] = 0.539360f;
    data->d[2] = -0.331816f;
    data->d[3] = 2.735108f;
    data->d[4] = -1.226109f;
    data->d[5] = 1.345050f;
    data->d[6] = -0.503139f;
    data->d[7] = 0.669654f;
    data->d[8] = 1.248020f;
    data->d[9] = -0.749619f;
    data->d[10] = -0.151034f;
    data->d[11] = 1.578822f;
    data->d[12] = 0.098940f;
    data->d[13] = -0.413345f;
    data->d[14] = 1.761782f;
    data->d[15] = -0.188011f;
    data->d[16] = -2.033547f;
    data->d[17] = -0.204561f;
    data->d[18] = 0.079751f;
    data->d[19] = -0.186747f;
    data->d[20] = -2.189870f;
    data->d[21] = 1.047273f;
    data->d[22] = -0.988807f;
    data->d[23] = 2.612004f;
    data->d[24] = 0.985574f;
    data->d[25] = -1.946174f;
    data->d[26] = -0.587155f;
    data->d[27] = 0.848683f;
    data->d[28] = 1.708324f;
    data->d[29] = -3.273024f;
    *(result->MinResult()) = 0.001407f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.001407f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 18);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 17);
    instructions->SetOperation(3, 1, 13);
    instructions->SetOperation(4, 0, 22);
    instructions->SetOperation(5, 1, 11);
    instructions->SetOperation(6, 0, 15);
    instructions->SetOperation(7, 0, 15);
    instructions->SetOperation(8, 1, 9);
    instructions->SetOperation(9, 0, 18);
    instructions->SetOperation(10, 1, 14);
    instructions->SetOperation(11, 1, 18);
    instructions->SetOperation(12, 0, 7);
    instructions->SetOperation(13, 1, 14);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 0, 20);
    instructions->SetOperation(16, 1, 16);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 1, 7);
    instructions->SetOperation(19, 0, 8);
    instructions->SetOperation(20, 0, 26);
    instructions->SetOperation(21, 0, 7);
    instructions->SetOperation(22, 1, 21);
    instructions->SetOperation(23, 0, 3);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 0, 28);
    instructions->SetOperation(26, 1, 10);
    instructions->SetOperation(27, 0, 4);
    instructions->SetOperation(28, 1, 19);
    instructions->SetOperation(29, 0, 8);
    instructions->SetOperation(30, 1, 8);
    instructions->SetOperation(31, 0, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 4;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 3;
    state.m_seed = 17448258927230012683;
    state.m_optimize_pass =0;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.001407f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
