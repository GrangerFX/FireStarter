#pragma once
#include "FireStarterState.h"

// Run date: 09/15/24 10:05:04 Pacific Daylight Time
// Run duration = 2047.984851 seconds
// Run generation = 29
// Run evolution = 0
// Run max result = 0.00000322
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

// Variation: 0  result = 0.00000322
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.560211f;
    data->d[1] = -0.462903f;
    data->d[2] = 0.010526f;
    data->d[3] = 1.092117f;
    data->d[4] = -0.339213f;
    data->d[5] = 1.886079f;
    data->d[6] = -0.959359f;
    data->d[7] = -1.955200f;
    data->d[8] = -0.814324f;
    data->d[9] = 0.704715f;
    data->d[10] = -1.623427f;
    data->d[11] = 0.531520f;
    data->d[12] = -1.213928f;
    data->d[13] = -0.695944f;
    data->d[14] = -1.780216f;
    data->d[15] = -0.777004f;
    data->d[16] = 1.833493f;
    data->d[17] = -0.835005f;
    data->d[18] = -0.512728f;
    data->d[19] = 0.870623f;
    data->d[20] = -0.093268f;
    data->d[21] = 4.371851f;
    data->d[22] = -0.509013f;
    data->d[23] = 4.924216f;
    data->d[24] = -0.726344f;
    data->d[25] = 0.204279f;
    data->d[26] = -5.036665f;
    data->d[27] = -2.111696f;
    data->d[28] = -5.035099f;
    data->d[29] = -1.518165f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.000003f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 10);
    instructions->SetOperation(1, 1, 29);
    instructions->SetOperation(2, 0, 11);
    instructions->SetOperation(3, 0, 1);
    instructions->SetOperation(4, 0, 14);
    instructions->SetOperation(5, 0, 17);
    instructions->SetOperation(6, 0, 14);
    instructions->SetOperation(7, 0, 25);
    instructions->SetOperation(8, 0, 24);
    instructions->SetOperation(9, 0, 6);
    instructions->SetOperation(10, 0, 15);
    instructions->SetOperation(11, 1, 13);
    instructions->SetOperation(12, 0, 27);
    instructions->SetOperation(13, 1, 9);
    instructions->SetOperation(14, 1, 22);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 12);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 1, 3);
    instructions->SetOperation(20, 1, 19);
    instructions->SetOperation(21, 0, 18);
    instructions->SetOperation(22, 0, 0);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 0, 12);
    instructions->SetOperation(25, 1, 19);
    instructions->SetOperation(26, 1, 22);
    instructions->SetOperation(27, 0, 24);
    instructions->SetOperation(28, 1, 20);
    instructions->SetOperation(29, 1, 3);
    instructions->SetOperation(30, 1, 6);
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
    state.m_generation = 29;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000021f;
    state.m_maxResult = 0.000003f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
