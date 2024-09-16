#pragma once
#include "FireStarterState.h"

// Run date: 09/15/24 12:03:55 Pacific Daylight Time
// Run duration = 22327.561913 seconds
// Run generation = 1068
// Run evolution = 0
// Run max result = 0.00002331
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

// Variation: 0  result = 0.00002331
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.468599f;
    data->d[1] = 3.237647f;
    data->d[2] = -5.362187f;
    data->d[3] = 0.545915f;
    data->d[4] = -4.093145f;
    data->d[5] = -0.983429f;
    data->d[6] = -10.016095f;
    data->d[7] = 0.876182f;
    data->d[8] = 6.457962f;
    data->d[9] = 0.448035f;
    data->d[10] = 0.947480f;
    data->d[11] = 1.098643f;
    data->d[12] = -1.036964f;
    data->d[13] = -1.507615f;
    data->d[14] = 0.239172f;
    data->d[15] = -11.847713f;
    data->d[16] = 0.035075f;
    data->d[17] = -1.108337f;
    data->d[18] = 0.236782f;
    data->d[19] = 0.801687f;
    data->d[20] = 0.114788f;
    data->d[21] = 1.166387f;
    data->d[22] = -1.641688f;
    data->d[23] = 0.178961f;
    data->d[24] = -1.869283f;
    data->d[25] = 0.085973f;
    data->d[26] = 8.773445f;
    data->d[27] = 0.833249f;
    data->d[28] = 0.840172f;
    data->d[29] = -13.443428f;
    *(result->MinResult()) = 0.000023f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.000023f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 14);
    instructions->SetOperation(1, 1, 24);
    instructions->SetOperation(2, 0, 28);
    instructions->SetOperation(3, 1, 10);
    instructions->SetOperation(4, 1, 13);
    instructions->SetOperation(5, 1, 18);
    instructions->SetOperation(6, 0, 14);
    instructions->SetOperation(7, 0, 17);
    instructions->SetOperation(8, 0, 20);
    instructions->SetOperation(9, 0, 4);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 0, 20);
    instructions->SetOperation(12, 0, 23);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 1, 0);
    instructions->SetOperation(16, 1, 25);
    instructions->SetOperation(17, 1, 4);
    instructions->SetOperation(18, 0, 21);
    instructions->SetOperation(19, 1, 17);
    instructions->SetOperation(20, 0, 12);
    instructions->SetOperation(21, 0, 27);
    instructions->SetOperation(22, 0, 22);
    instructions->SetOperation(23, 0, 14);
    instructions->SetOperation(24, 0, 3);
    instructions->SetOperation(25, 1, 4);
    instructions->SetOperation(26, 0, 27);
    instructions->SetOperation(27, 0, 5);
    instructions->SetOperation(28, 0, 27);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 0, 19);
    instructions->SetOperation(31, 1, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 1068;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 12;
    state.m_seed = 14452803487791395884;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000041f;
    state.m_maxResult = 0.000023f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
