#pragma once
#include "FireStarterState.h"

// Run date: 10/20/24 11:09:15 Pacific Daylight Time
// Run duration = 307.936407 seconds
// Run generation = 62
// Run evolution = 0
// Run max result = 0.00000034
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
// Run population = 524288
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
    settings.m_population = 524288;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000034
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.45649412f;
    data->d[1] = 1.66585970f;
    data->d[2] = 0.97063625f;
    data->d[3] = -0.17996073f;
    data->d[4] = -0.10531197f;
    data->d[5] = -1.69367838f;
    data->d[6] = -1.68794608f;
    data->d[7] = -1.76189291f;
    data->d[8] = 2.54170680f;
    data->d[9] = 2.19880247f;
    data->d[10] = -0.49558467f;
    data->d[11] = -13.37620068f;
    data->d[12] = -6.33510971f;
    data->d[13] = -0.00013162f;
    data->d[14] = -0.52389383f;
    data->d[15] = 1.66551840f;
    data->d[16] = 0.83881080f;
    data->d[17] = 0.37521949f;
    data->d[18] = 2.72425675f;
    data->d[19] = 1.26005888f;
    data->d[20] = -4.96145916f;
    data->d[21] = 1.58086789f;
    data->d[22] = 1.71160555f;
    data->d[23] = -1.71140957f;
    data->d[24] = -0.01006942f;
    data->d[25] = -1.83016908f;
    data->d[26] = 1.21415544f;
    data->d[27] = 1.38887501f;
    data->d[28] = -1.70144475f;
    data->d[29] = -1.88114524f;
    *(result->MinResult()) = 0.00000034f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000034f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 14);
    instructions->SetOperation(2, 1, 19);
    instructions->SetOperation(3, 0, 28);
    instructions->SetOperation(4, 0, 14);
    instructions->SetOperation(5, 0, 25);
    instructions->SetOperation(6, 1, 16);
    instructions->SetOperation(7, 0, 13);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 1, 26);
    instructions->SetOperation(10, 0, 24);
    instructions->SetOperation(11, 0, 25);
    instructions->SetOperation(12, 1, 1);
    instructions->SetOperation(13, 0, 6);
    instructions->SetOperation(14, 1, 22);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 1, 7);
    instructions->SetOperation(17, 0, 18);
    instructions->SetOperation(18, 0, 8);
    instructions->SetOperation(19, 1, 20);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 1, 14);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 1, 14);
    instructions->SetOperation(24, 1, 17);
    instructions->SetOperation(25, 0, 0);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 1, 29);
    instructions->SetOperation(28, 1, 23);
    instructions->SetOperation(29, 0, 10);
    instructions->SetOperation(30, 0, 8);
    instructions->SetOperation(31, 0, 0);
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
    state.m_generation = 62;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00688658f;
    state.m_maxResult = 0.00000034f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
