#pragma once
#include "FireStarterState.h"

// Run date: 10/13/24 12:05:53 Pacific Daylight Time
// Run duration = 1471.041661 seconds
// Run generation = 58
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
    settings.m_target = 0.000001f;

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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.18278143f;
    data->d[1] = -1.31348193f;
    data->d[2] = 0.58742827f;
    data->d[3] = -0.26512051f;
    data->d[4] = -0.74896902f;
    data->d[5] = -4.88280630f;
    data->d[6] = -0.21735066f;
    data->d[7] = -3.27457404f;
    data->d[8] = 0.29790795f;
    data->d[9] = 1.29003096f;
    data->d[10] = 5.50258493f;
    data->d[11] = -0.41062960f;
    data->d[12] = 1.75631046f;
    data->d[13] = -2.30627942f;
    data->d[14] = -3.75619817f;
    data->d[15] = -0.78229874f;
    data->d[16] = -5.84376144f;
    data->d[17] = 5.03469610f;
    data->d[18] = 2.97950602f;
    data->d[19] = 1.09903288f;
    data->d[20] = 0.03368856f;
    data->d[21] = -2.39590454f;
    data->d[22] = 1.79377639f;
    data->d[23] = -1.59626317f;
    data->d[24] = -1.72730720f;
    data->d[25] = -1.21967959f;
    data->d[26] = -0.35136235f;
    data->d[27] = 0.90598315f;
    data->d[28] = 1.99804878f;
    data->d[29] = -1.11077440f;
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
    instructions->SetOperation(0, 0, 11);
    instructions->SetOperation(1, 1, 9);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 0, 9);
    instructions->SetOperation(5, 1, 9);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 0, 24);
    instructions->SetOperation(8, 0, 3);
    instructions->SetOperation(9, 1, 28);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 1, 15);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 1, 19);
    instructions->SetOperation(14, 1, 6);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 0, 6);
    instructions->SetOperation(18, 1, 15);
    instructions->SetOperation(19, 1, 12);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 0, 10);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 1, 21);
    instructions->SetOperation(24, 1, 16);
    instructions->SetOperation(25, 1, 27);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 0, 10);
    instructions->SetOperation(28, 0, 4);
    instructions->SetOperation(29, 0, 22);
    instructions->SetOperation(30, 0, 26);
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
    state.m_generation = 58;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00367282f;
    state.m_maxResult = 0.00000012f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
