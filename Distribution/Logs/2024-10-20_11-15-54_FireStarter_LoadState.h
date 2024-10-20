#pragma once
#include "FireStarterState.h"

// Run date: 10/20/24 11:15:54 Pacific Daylight Time
// Run duration = 284.248285 seconds
// Run generation = 63
// Run evolution = 0
// Run max result = 0.00000018
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

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = -0.08944634f;
    data->d[2] = -2.37317419f;
    data->d[3] = 0.07120287f;
    data->d[4] = -9.87710857f;
    data->d[5] = 0.00000013f;
    data->d[6] = -1.24652588f;
    data->d[7] = 0.15723574f;
    data->d[8] = 0.39167592f;
    data->d[9] = 1.57523012f;
    data->d[10] = -1.65770137f;
    data->d[11] = 1.56366122f;
    data->d[12] = -0.78663838f;
    data->d[13] = 0.29967046f;
    data->d[14] = 1.11470258f;
    data->d[15] = -0.46266517f;
    data->d[16] = 2.38360786f;
    data->d[17] = 0.31953198f;
    data->d[18] = 0.99997389f;
    data->d[19] = -3.10971761f;
    data->d[20] = 0.54685450f;
    data->d[21] = 1.18429887f;
    data->d[22] = -0.26500392f;
    data->d[23] = 0.87001032f;
    data->d[24] = -0.30283582f;
    data->d[25] = 1.40184057f;
    data->d[26] = 1.27685702f;
    data->d[27] = -1.37392128f;
    data->d[28] = -0.97824168f;
    data->d[29] = 0.71093851f;
    *(result->MinResult()) = 0.00000018f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000018f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 27);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 0, 7);
    instructions->SetOperation(3, 0, 17);
    instructions->SetOperation(4, 0, 25);
    instructions->SetOperation(5, 1, 19);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 1, 21);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 0, 3);
    instructions->SetOperation(11, 0, 1);
    instructions->SetOperation(12, 1, 9);
    instructions->SetOperation(13, 1, 3);
    instructions->SetOperation(14, 0, 14);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 0, 11);
    instructions->SetOperation(17, 1, 15);
    instructions->SetOperation(18, 1, 23);
    instructions->SetOperation(19, 0, 27);
    instructions->SetOperation(20, 0, 13);
    instructions->SetOperation(21, 1, 9);
    instructions->SetOperation(22, 1, 28);
    instructions->SetOperation(23, 1, 25);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 1, 22);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 1, 21);
    instructions->SetOperation(31, 0, 7);
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
    state.m_generation = 63;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00436202f;
    state.m_maxResult = 0.00000018f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
