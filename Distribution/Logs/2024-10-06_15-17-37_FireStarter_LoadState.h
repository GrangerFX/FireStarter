#pragma once
#include "FireStarterState.h"

// Run date: 10/06/24 15:17:37 Pacific Daylight Time
// Run duration = 576.744948 seconds
// Run generation = 3
// Run evolution = 0
// Run max result = 0.00000012
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.20867671f;
    data->d[1] = 0.65557724f;
    data->d[2] = 2.03346777f;
    data->d[3] = -0.00000002f;
    data->d[4] = 0.80654669f;
    data->d[5] = 0.42365378f;
    data->d[6] = -0.20749304f;
    data->d[7] = 0.64790106f;
    data->d[8] = 0.18637443f;
    data->d[9] = 0.10808173f;
    data->d[10] = 0.30920064f;
    data->d[11] = -0.79818529f;
    data->d[12] = -2.12001681f;
    data->d[13] = 1.17251074f;
    data->d[14] = -1.37316322f;
    data->d[15] = -2.59993958f;
    data->d[16] = 5.77948189f;
    data->d[17] = 2.26624084f;
    data->d[18] = -2.58341455f;
    data->d[19] = 0.69598025f;
    data->d[20] = -0.73333484f;
    data->d[21] = -0.56833833f;
    data->d[22] = 0.50868177f;
    data->d[23] = -1.89727712f;
    data->d[24] = 0.13314436f;
    data->d[25] = -1.89925718f;
    data->d[26] = 1.83028042f;
    data->d[27] = 0.34482908f;
    data->d[28] = -0.65014458f;
    data->d[29] = 1.12291169f;
    *(result->MinResult()) = 0.00000012f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000012f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 28);
    instructions->SetOperation(2, 0, 6);
    instructions->SetOperation(3, 1, 26);
    instructions->SetOperation(4, 0, 18);
    instructions->SetOperation(5, 0, 16);
    instructions->SetOperation(6, 0, 16);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 0, 22);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 1, 15);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 14);
    instructions->SetOperation(15, 1, 22);
    instructions->SetOperation(16, 0, 23);
    instructions->SetOperation(17, 1, 27);
    instructions->SetOperation(18, 0, 23);
    instructions->SetOperation(19, 0, 21);
    instructions->SetOperation(20, 1, 2);
    instructions->SetOperation(21, 0, 21);
    instructions->SetOperation(22, 1, 14);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 1, 12);
    instructions->SetOperation(25, 0, 27);
    instructions->SetOperation(26, 1, 0);
    instructions->SetOperation(27, 1, 3);
    instructions->SetOperation(28, 0, 13);
    instructions->SetOperation(29, 1, 21);
    instructions->SetOperation(30, 0, 6);
    instructions->SetOperation(31, 0, 10);
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
    state.m_generation = 3;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00739992f;
    state.m_maxResult = 0.00000012f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
