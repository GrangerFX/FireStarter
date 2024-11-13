#pragma once
#include "FireStarterState.h"

// Run date: 11/12/24 21:44:16 Pacific Standard Time
// Run duration = 2268.330675 seconds
// Run generation = 4
// Run evolution = 0
// Run max result = 0.00000007
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
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
// Run iterations = 64
// Run passes = 512
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
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_iterations = 64;
    settings.m_passes = 512;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000007
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.81589466f;
    data->d[1] = 0.38851437f;
    data->d[2] = -1.04538190f;
    data->d[3] = 0.61027551f;
    data->d[4] = -1.92880023f;
    data->d[5] = -1.11406183f;
    data->d[6] = -1.80971766f;
    data->d[7] = 1.37217629f;
    data->d[8] = -0.01005294f;
    data->d[9] = -2.55244327f;
    data->d[10] = -2.44250965f;
    data->d[11] = -0.85432619f;
    data->d[12] = 1.18632460f;
    data->d[13] = -1.36553800f;
    data->d[14] = -0.54806846f;
    data->d[15] = 1.36804569f;
    data->d[16] = -2.52468228f;
    data->d[17] = -0.03958102f;
    data->d[18] = -0.05612994f;
    data->d[19] = 0.03132927f;
    data->d[20] = 0.53120679f;
    data->d[21] = -0.24005264f;
    data->d[22] = -0.78136355f;
    data->d[23] = 1.88401079f;
    data->d[24] = -1.28032684f;
    data->d[25] = -1.17544580f;
    data->d[26] = 0.44615117f;
    data->d[27] = 0.50144708f;
    data->d[28] = 0.24905126f;
    data->d[29] = -1.09110403f;
    *(result->MinResult()) = 0.00000007f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000007f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 0, 4);
    instructions->SetOperation(5, 1, 1);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 1, 7);
    instructions->SetOperation(10, 0, 8);
    instructions->SetOperation(11, 1, 9);
    instructions->SetOperation(12, 1, 10);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 1, 11);
    instructions->SetOperation(15, 0, 11);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 1, 12);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 0, 6);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 0, 17);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 0, 18);
    instructions->SetOperation(27, 1, 12);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 0, 13);
    instructions->SetOperation(30, 1, 20);
    instructions->SetOperation(31, 0, 1);
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
    state.m_generation = 4;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 13804613683004602611;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000007f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
