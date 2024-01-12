#pragma once
#include "FireStarterState.h"

// Run date: 01/10/24 15:34:08 Pacific Standard Time
// Run duration = 52484.340792 seconds
// Run generation = 113
// Run evolution = 7
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
// Run evolveSeed = 1
// Run optimizeSeed = 1
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
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 1;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.937411f;
    data->d[1] = 0.190687f;
    data->d[2] = 0.561565f;
    data->d[3] = 0.406527f;
    data->d[4] = 0.878449f;
    data->d[5] = 1.067034f;
    data->d[6] = -0.782735f;
    data->d[7] = 0.001203f;
    data->d[8] = -0.999576f;
    data->d[9] = 3840.777588f;
    data->d[10] = -0.049837f;
    data->d[11] = 2.658605f;
    data->d[12] = 1.020924f;
    data->d[13] = 3.252329f;
    data->d[14] = 3.701068f;
    data->d[15] = 2.162002f;
    data->d[16] = -0.849979f;
    data->d[17] = -1.969648f;
    data->d[18] = 0.000000f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.471210f;
    data->d[1] = -1.327784f;
    data->d[2] = 1.933721f;
    data->d[3] = -1.168016f;
    data->d[4] = 0.221312f;
    data->d[5] = 8.051161f;
    data->d[6] = -0.859890f;
    data->d[7] = 0.001793f;
    data->d[8] = -1.001236f;
    data->d[9] = -152.193588f;
    data->d[10] = 0.998868f;
    data->d[11] = -1.364845f;
    data->d[12] = 1.260273f;
    data->d[13] = 0.900419f;
    data->d[14] = -10.902894f;
    data->d[15] = 120.566101f;
    data->d[16] = -0.635199f;
    data->d[17] = -0.197471f;
    data->d[18] = -0.118144f;
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

// Variation: 2  result = 0.00000015
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.219015f;
    data->d[1] = 1.965512f;
    data->d[2] = -1.126985f;
    data->d[3] = -0.228550f;
    data->d[4] = -1.721401f;
    data->d[5] = -0.462746f;
    data->d[6] = -2.720000f;
    data->d[7] = -0.002538f;
    data->d[8] = 14.490765f;
    data->d[9] = 0.020564f;
    data->d[10] = -0.822154f;
    data->d[11] = 1.650857f;
    data->d[12] = -0.317061f;
    data->d[13] = 0.397071f;
    data->d[14] = -5.610044f;
    data->d[15] = -4.690450f;
    data->d[16] = -1.115956f;
    data->d[17] = -0.373548f;
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
    instructions->SetOperation(0, 0, 24);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 1, 12);
    instructions->SetOperation(3, 1, 11);
    instructions->SetOperation(4, 1, 24);
    instructions->SetOperation(5, 0, 11);
    instructions->SetOperation(6, 0, 28);
    instructions->SetOperation(7, 0, 17);
    instructions->SetOperation(8, 1, 25);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 1, 16);
    instructions->SetOperation(12, 0, 14);
    instructions->SetOperation(13, 1, 4);
    instructions->SetOperation(14, 0, 28);
    instructions->SetOperation(15, 0, 1);
    instructions->SetOperation(16, 1, 21);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 0, 4);
    instructions->SetOperation(19, 1, 25);
    instructions->SetOperation(20, 0, 8);
    instructions->SetOperation(21, 1, 22);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 0, 14);
    instructions->SetOperation(24, 1, 10);
    instructions->SetOperation(25, 1, 2);
    instructions->SetOperation(26, 1, 4);
    instructions->SetOperation(27, 1, 26);
    instructions->SetOperation(28, 0, 4);
    instructions->SetOperation(29, 0, 2);
    instructions->SetOperation(30, 0, 12);
    instructions->SetOperation(31, 1, 15);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 113;
    state.m_evolution = 7;
    state.m_children = 70;
    state.m_index = 11;
    state.m_copy_index = 700;
    state.m_id = 407;
    state.m_test = 10;
    state.m_seed = 16588868444522762042;
    state.m_optimize_pass =7;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveResult = 0.000026f;
    state.m_optimizeValid = true;
} // LoadState
