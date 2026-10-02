#pragma once
#include "FireStarterState.h"

// Run date: 11/03/24 11:14:20 Pacific Standard Time
// Run duration = 39.658835 seconds
// Run generation = 29
// Run evolution = 0
// Run max result = 0.00000083
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
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 1;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000083
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = -0.24527937f;
    data->d[2] = -0.96626717f;
    data->d[3] = -1.22344983f;
    data->d[4] = -0.34512645f;
    data->d[5] = 1.37885666f;
    data->d[6] = 8.37975025f;
    data->d[7] = 0.04245958f;
    data->d[8] = -2.58262277f;
    data->d[9] = 9.01150703f;
    data->d[10] = -1.52355576f;
    data->d[11] = -0.01728988f;
    data->d[12] = -5.15341759f;
    data->d[13] = -3.10317230f;
    data->d[14] = -3.47920513f;
    data->d[15] = -0.42180276f;
    data->d[16] = 15.64586353f;
    data->d[17] = -5.09194994f;
    data->d[18] = -0.10394019f;
    data->d[19] = 0.57650012f;
    data->d[20] = 1.71778762f;
    data->d[21] = -1.11263442f;
    data->d[22] = 1.33252609f;
    data->d[23] = 1.91302097f;
    data->d[24] = -0.81897122f;
    data->d[25] = 1.75559688f;
    data->d[26] = -0.13185117f;
    data->d[27] = 1.33687687f;
    data->d[28] = -0.30723360f;
    data->d[29] = -1.84402275f;
    *(result->MinResult()) = 0.00000083f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.OptimizeResult(0));
    state.m_maxResult = 0.00000083f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 14);
    instructions->SetOperation(1, 0, 25);
    instructions->SetOperation(2, 0, 7);
    instructions->SetOperation(3, 0, 7);
    instructions->SetOperation(4, 1, 22);
    instructions->SetOperation(5, 1, 20);
    instructions->SetOperation(6, 1, 13);
    instructions->SetOperation(7, 0, 12);
    instructions->SetOperation(8, 0, 9);
    instructions->SetOperation(9, 0, 17);
    instructions->SetOperation(10, 1, 22);
    instructions->SetOperation(11, 0, 28);
    instructions->SetOperation(12, 0, 23);
    instructions->SetOperation(13, 0, 3);
    instructions->SetOperation(14, 1, 1);
    instructions->SetOperation(15, 1, 8);
    instructions->SetOperation(16, 1, 23);
    instructions->SetOperation(17, 1, 26);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 1, 26);
    instructions->SetOperation(21, 0, 3);
    instructions->SetOperation(22, 0, 20);
    instructions->SetOperation(23, 1, 26);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 1, 22);
    instructions->SetOperation(26, 1, 5);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 0, 11);
    instructions->SetOperation(29, 1, 15);
    instructions->SetOperation(30, 1, 26);
    instructions->SetOperation(31, 0, 25);
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
    state.m_generation = 29;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 8201427209104473620;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000083f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
