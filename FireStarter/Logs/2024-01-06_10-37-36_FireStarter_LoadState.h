#pragma once
#include "FireStarterState.h"

// Run date: 01/06/24 10:37:36 Pacific Standard Time
// Run duration = 3637.903378 seconds
// Run generation = 58
// Run evolution = 4
// Run max result = 0.00000024
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run states = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 64
// Run optimize = 8

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 3;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 29;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 1;
    settings.m_states = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141592f;
    data->d[1] = -0.000001f;
    data->d[2] = 0.185380f;
    data->d[3] = -1.264672f;
    data->d[4] = 1.634283f;
    data->d[5] = -0.938888f;
    data->d[6] = 0.063464f;
    data->d[7] = -1.488012f;
    data->d[8] = -1.682988f;
    data->d[9] = -0.113833f;
    data->d[10] = 0.690540f;
    data->d[11] = 0.005576f;
    data->d[12] = 120890.078125f;
    data->d[13] = -13.833366f;
    data->d[14] = 1.111767f;
    data->d[15] = 0.000002f;
    data->d[16] = 0.163993f;
    data->d[17] = -0.193446f;
    data->d[18] = -0.000000f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000006
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = -0.000001f;
    data->d[2] = -0.132888f;
    data->d[3] = 1.131243f;
    data->d[4] = -0.210328f;
    data->d[5] = -0.342668f;
    data->d[6] = -0.053420f;
    data->d[7] = -1.134717f;
    data->d[8] = -1.438429f;
    data->d[9] = -0.148333f;
    data->d[10] = 0.362888f;
    data->d[11] = 0.061443f;
    data->d[12] = -1268.806152f;
    data->d[13] = 3.654058f;
    data->d[14] = 7.652510f;
    data->d[15] = -0.000001f;
    data->d[16] = -2.015797f;
    data->d[17] = -0.369019f;
    data->d[18] = -0.118132f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.000001f;
    data->d[2] = -0.160724f;
    data->d[3] = 0.986249f;
    data->d[4] = -0.715522f;
    data->d[5] = 1.813745f;
    data->d[6] = -0.287982f;
    data->d[7] = -1.007942f;
    data->d[8] = 0.237117f;
    data->d[9] = 0.194522f;
    data->d[10] = 1.813662f;
    data->d[11] = -0.001388f;
    data->d[12] = 15430.946289f;
    data->d[13] = -2.880085f;
    data->d[14] = -2.323731f;
    data->d[15] = 0.000213f;
    data->d[16] = -0.767795f;
    data->d[17] = 0.132099f;
    data->d[18] = 0.523599f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 20);
    instructions->SetOperation(1, 1, 9);
    instructions->SetOperation(2, 0, 20);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 1, 22);
    instructions->SetOperation(5, 1, 0);
    instructions->SetOperation(6, 1, 7);
    instructions->SetOperation(7, 0, 4);
    instructions->SetOperation(8, 1, 10);
    instructions->SetOperation(9, 0, 10);
    instructions->SetOperation(10, 0, 19);
    instructions->SetOperation(11, 0, 27);
    instructions->SetOperation(12, 1, 28);
    instructions->SetOperation(13, 0, 3);
    instructions->SetOperation(14, 0, 21);
    instructions->SetOperation(15, 1, 17);
    instructions->SetOperation(16, 0, 3);
    instructions->SetOperation(17, 1, 16);
    instructions->SetOperation(18, 0, 20);
    instructions->SetOperation(19, 0, 1);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 0, 7);
    instructions->SetOperation(22, 1, 28);
    instructions->SetOperation(23, 1, 19);
    instructions->SetOperation(24, 0, 27);
    instructions->SetOperation(25, 0, 22);
    instructions->SetOperation(26, 0, 28);
    instructions->SetOperation(27, 0, 19);
    instructions->SetOperation(28, 0, 14);
    instructions->SetOperation(29, 1, 26);
    instructions->SetOperation(30, 0, 9);
    instructions->SetOperation(31, 1, 18);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 58;
    state.m_evolution = 4;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 919;
    state.m_test = 3;
    state.m_seed = 9614734138976270865;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
