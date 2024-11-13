#pragma once
#include "FireStarterState.h"

// Run date: 11/12/24 17:34:49 Pacific Standard Time
// Run duration = 2340.523932 seconds
// Run generation = 25
// Run evolution = 0
// Run max result = 0.00000037
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
// Run population = 49152
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
    settings.m_population = 49152;
    settings.m_iterations = 64;
    settings.m_passes = 512;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000037
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = -0.04581991f;
    data->d[2] = -1.30047190f;
    data->d[3] = 0.47160983f;
    data->d[4] = -0.83730143f;
    data->d[5] = -6.77034950f;
    data->d[6] = 2.67193508f;
    data->d[7] = -4.32673979f;
    data->d[8] = -0.71039253f;
    data->d[9] = 3.28921390f;
    data->d[10] = -5.87237406f;
    data->d[11] = 0.00510328f;
    data->d[12] = 1.57869446f;
    data->d[13] = -3.95240831f;
    data->d[14] = 0.50153196f;
    data->d[15] = 0.44934729f;
    data->d[16] = -2.82353544f;
    data->d[17] = -0.20874806f;
    data->d[18] = -1.09117472f;
    data->d[19] = -0.47878340f;
    data->d[20] = 1.87461507f;
    data->d[21] = -1.11212850f;
    data->d[22] = -1.50497961f;
    data->d[23] = 1.51416695f;
    data->d[24] = -1.35916471f;
    data->d[25] = 0.98460639f;
    data->d[26] = -1.53567135f;
    data->d[27] = -1.27551162f;
    data->d[28] = -0.56365496f;
    data->d[29] = -1.96685195f;
    *(result->MinResult()) = 0.00000037f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000037f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 0);
    instructions->SetOperation(1, 0, 1);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 7);
    instructions->SetOperation(9, 0, 8);
    instructions->SetOperation(10, 1, 9);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 1, 12);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 1, 4);
    instructions->SetOperation(16, 1, 13);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 0, 14);
    instructions->SetOperation(19, 0, 12);
    instructions->SetOperation(20, 1, 15);
    instructions->SetOperation(21, 0, 13);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 1, 10);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 6);
    instructions->SetOperation(26, 0, 17);
    instructions->SetOperation(27, 1, 14);
    instructions->SetOperation(28, 0, 18);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 1, 10);
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
    state.m_generation = 25;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 10732312052978182018;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000037f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
