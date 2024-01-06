#pragma once
#include "FireStarterState.h"

// Run date: 01/03/24 23:53:35 Pacific Standard Time
// Run duration = 15543.259714 seconds
// Run generation = 29
// Run evolution = 8
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
// Run tests = 16
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
    settings.m_tests = 16;
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
    data->d[0] = 2.011705f;
    data->d[1] = -0.471265f;
    data->d[2] = 1.728993f;
    data->d[3] = 0.699573f;
    data->d[4] = 1.114351f;
    data->d[5] = 0.058552f;
    data->d[6] = -0.076678f;
    data->d[7] = -4.067260f;
    data->d[8] = -160.043625f;
    data->d[9] = -4.388770f;
    data->d[10] = 0.069835f;
    data->d[11] = -0.837406f;
    data->d[12] = 3.067640f;
    data->d[13] = -0.006796f;
    data->d[14] = -1.352219f;
    data->d[15] = -0.609023f;
    data->d[16] = 0.658951f;
    data->d[17] = -0.062851f;
    data->d[18] = 1.230657f;
    data->d[19] = 4.769006f;
    data->d[20] = 0.195143f;
    data->d[21] = 0.188130f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.837669f;
    data->d[1] = 0.270697f;
    data->d[2] = 0.582795f;
    data->d[3] = -0.921976f;
    data->d[4] = 1.238361f;
    data->d[5] = -0.434090f;
    data->d[6] = 0.166298f;
    data->d[7] = 4.179698f;
    data->d[8] = 2.440823f;
    data->d[9] = -2.583598f;
    data->d[10] = -0.000164f;
    data->d[11] = 0.000399f;
    data->d[12] = 21753.925781f;
    data->d[13] = 3.147598f;
    data->d[14] = -0.129481f;
    data->d[15] = 1.367447f;
    data->d[16] = 1.312516f;
    data->d[17] = -3.532462f;
    data->d[18] = 1.533528f;
    data->d[19] = 0.405495f;
    data->d[20] = 0.210450f;
    data->d[21] = 9.900917f;
    data->d[22] = -0.118132f;
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
    data->d[0] = -3.043201f;
    data->d[1] = -0.613166f;
    data->d[2] = 1.188234f;
    data->d[3] = -1.448957f;
    data->d[4] = -0.513506f;
    data->d[5] = -1.877098f;
    data->d[6] = 1.304401f;
    data->d[7] = 0.849628f;
    data->d[8] = 0.008228f;
    data->d[9] = -0.593515f;
    data->d[10] = 1.743274f;
    data->d[11] = -0.716927f;
    data->d[12] = 0.948828f;
    data->d[13] = -1.263515f;
    data->d[14] = 0.861757f;
    data->d[15] = 0.769298f;
    data->d[16] = 1.484752f;
    data->d[17] = -1.682841f;
    data->d[18] = -3.568282f;
    data->d[19] = 0.003930f;
    data->d[20] = 0.893961f;
    data->d[21] = -1.193541f;
    data->d[22] = 0.523599f;
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
    instructions->SetOperation(0, 1, 25);
    instructions->SetOperation(1, 0, 11);
    instructions->SetOperation(2, 1, 16);
    instructions->SetOperation(3, 1, 13);
    instructions->SetOperation(4, 0, 0);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 1, 20);
    instructions->SetOperation(8, 1, 21);
    instructions->SetOperation(9, 0, 27);
    instructions->SetOperation(10, 1, 4);
    instructions->SetOperation(11, 0, 20);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 0, 14);
    instructions->SetOperation(14, 0, 24);
    instructions->SetOperation(15, 0, 17);
    instructions->SetOperation(16, 1, 22);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 1, 0);
    instructions->SetOperation(19, 0, 2);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 1, 12);
    instructions->SetOperation(22, 0, 22);
    instructions->SetOperation(23, 0, 19);
    instructions->SetOperation(24, 1, 10);
    instructions->SetOperation(25, 0, 5);
    instructions->SetOperation(26, 1, 15);
    instructions->SetOperation(27, 0, 14);
    instructions->SetOperation(28, 1, 2);
    instructions->SetOperation(29, 0, 5);
    instructions->SetOperation(30, 0, 13);
    instructions->SetOperation(31, 1, 26);
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
    state.m_evolution = 8;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 134;
    state.m_test = 5;
    state.m_seed = 3883285619757852146;
    state.m_optimize_pass =1;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
