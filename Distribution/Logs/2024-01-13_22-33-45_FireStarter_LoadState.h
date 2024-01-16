#pragma once
#include "FireStarterState.h"

// Run date: 01/13/24 22:33:45 Pacific Standard Time
// Run duration = 520.421690 seconds
// Run generation = 8
// Run evolution = 8
// Run max result = 0.00000036
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

// Variation: 0  result = 0.00000003
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.455688f;
    data->d[1] = 1.431586f;
    data->d[2] = -0.917485f;
    data->d[3] = -0.921315f;
    data->d[4] = -1.001766f;
    data->d[5] = -0.355950f;
    data->d[6] = 1.563164f;
    data->d[7] = -0.179497f;
    data->d[8] = 1.912210f;
    data->d[9] = 1.701816f;
    data->d[10] = -2.222797f;
    data->d[11] = -0.628022f;
    data->d[12] = 0.232308f;
    data->d[13] = -0.034990f;
    data->d[14] = 0.380355f;
    data->d[15] = -2.870421f;
    data->d[16] = -0.239818f;
    data->d[17] = -1.652972f;
    data->d[18] = -0.043922f;
    data->d[19] = 0.043922f;
    data->d[20] = 2.898379f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.159121f;
    data->d[1] = -0.491788f;
    data->d[2] = -0.093318f;
    data->d[3] = -0.731278f;
    data->d[4] = 1.244334f;
    data->d[5] = -0.431384f;
    data->d[6] = 6.499729f;
    data->d[7] = -3.766221f;
    data->d[8] = 0.141498f;
    data->d[9] = 0.599930f;
    data->d[10] = 0.536117f;
    data->d[11] = 4.045252f;
    data->d[12] = 0.900840f;
    data->d[13] = 1.153620f;
    data->d[14] = -0.010616f;
    data->d[15] = -0.489560f;
    data->d[16] = 0.935278f;
    data->d[17] = 7873.014648f;
    data->d[18] = 0.336386f;
    data->d[19] = -0.271529f;
    data->d[20] = -1.821432f;
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

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.687567f;
    data->d[1] = 1.800046f;
    data->d[2] = 2.856491f;
    data->d[3] = 0.233549f;
    data->d[4] = 1.108646f;
    data->d[5] = -0.272028f;
    data->d[6] = -0.250910f;
    data->d[7] = -76.626526f;
    data->d[8] = 0.574110f;
    data->d[9] = -0.108326f;
    data->d[10] = -1.124498f;
    data->d[11] = -1.457409f;
    data->d[12] = -1.215383f;
    data->d[13] = 0.091372f;
    data->d[14] = -0.771008f;
    data->d[15] = 1.162694f;
    data->d[16] = 0.304650f;
    data->d[17] = 1668.026367f;
    data->d[18] = 0.037548f;
    data->d[19] = -1.287098f;
    data->d[20] = -0.419029f;
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
    instructions->SetOperation(0, 0, 5);
    instructions->SetOperation(1, 1, 15);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 0, 17);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 23);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 13);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 0, 16);
    instructions->SetOperation(15, 1, 23);
    instructions->SetOperation(16, 0, 9);
    instructions->SetOperation(17, 0, 28);
    instructions->SetOperation(18, 1, 25);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 0, 26);
    instructions->SetOperation(21, 1, 25);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 1, 24);
    instructions->SetOperation(29, 1, 1);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 1, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 8;
    state.m_evolution = 8;
    state.m_children = 37;
    state.m_index = 37;
    state.m_copy_index = 145;
    state.m_id = 44;
    state.m_test = 0;
    state.m_seed = 14046999974976693138;
    state.m_optimize_pass =5;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000005f;
    state.m_optimizeValid = true;
} // LoadState
