#pragma once
#include "FireStarterState.h"

// Run date: 01/14/24 10:27:38 Pacific Standard Time
// Run duration = 5669.028169 seconds
// Run generation = 30
// Run evolution = 10
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
// Run tests = 4
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
    settings.m_tests = 4;
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

// Variation: 0  result = 0.00000011
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.288746f;
    data->d[1] = 0.907121f;
    data->d[2] = 0.492148f;
    data->d[3] = 0.755091f;
    data->d[4] = 0.236363f;
    data->d[5] = 417.137329f;
    data->d[6] = -0.072810f;
    data->d[7] = 1.805410f;
    data->d[8] = -1.046751f;
    data->d[9] = 0.624513f;
    data->d[10] = -1.530513f;
    data->d[11] = 1.364504f;
    data->d[12] = -0.286439f;
    data->d[13] = -0.203802f;
    data->d[14] = 3.405710f;
    data->d[15] = 1.582968f;
    data->d[16] = 0.000000f;
    data->d[17] = -0.480677f;
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

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.293689f;
    data->d[1] = -0.907694f;
    data->d[2] = 0.457080f;
    data->d[3] = 1652.639526f;
    data->d[4] = 0.002692f;
    data->d[5] = 1.713207f;
    data->d[6] = 0.877169f;
    data->d[7] = -2.577171f;
    data->d[8] = -1.056545f;
    data->d[9] = -0.337437f;
    data->d[10] = 0.876114f;
    data->d[11] = -1.539869f;
    data->d[12] = 0.197714f;
    data->d[13] = 0.198528f;
    data->d[14] = 1.088090f;
    data->d[15] = 1.128493f;
    data->d[16] = -0.089981f;
    data->d[17] = 1.312849f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.135905f;
    data->d[1] = 0.355798f;
    data->d[2] = -0.297861f;
    data->d[3] = 2.210982f;
    data->d[4] = 2.748703f;
    data->d[5] = 142.615662f;
    data->d[6] = -0.016613f;
    data->d[7] = -0.742043f;
    data->d[8] = -1.100301f;
    data->d[9] = 1.038489f;
    data->d[10] = -0.473721f;
    data->d[11] = 3.867996f;
    data->d[12] = 1.567933f;
    data->d[13] = -0.062132f;
    data->d[14] = 2.457263f;
    data->d[15] = -2.541671f;
    data->d[16] = 0.889935f;
    data->d[17] = 0.588356f;
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
    instructions->SetOperation(1, 1, 23);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 0, 18);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 0, 22);
    instructions->SetOperation(6, 1, 22);
    instructions->SetOperation(7, 0, 23);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 13);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 6);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 1, 15);
    instructions->SetOperation(14, 1, 21);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 0, 24);
    instructions->SetOperation(18, 1, 25);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 1, 25);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 0, 24);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 25);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 4);
    instructions->SetOperation(28, 0, 21);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 1, 28);
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
    state.m_generation = 30;
    state.m_evolution = 10;
    state.m_children0 = 1385;
    state.m_children1 = 7;
    state.m_index = 6;
    state.m_copy_index = 44;
    state.m_id = 44;
    state.m_test = 0;
    state.m_seed = 12608166073190798274;
    state.m_optimize_pass =2;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000012f;
    state.m_optimizeValid = true;
} // LoadState
