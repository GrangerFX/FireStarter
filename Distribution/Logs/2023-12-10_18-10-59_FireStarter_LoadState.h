#pragma once
#include "FireStarterState.h"

// Run date: 12/10/23 18:10:59 Pacific Standard Time
// Run duration = 14638.402417 seconds
// Run generation = 76
// Run evolution = 19
// Run max result = 0.00000007
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
// Run seeds = 64
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
    settings.m_seeds = 64;
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
    data->d[0] = -0.364156f;
    data->d[1] = 0.825164f;
    data->d[2] = 0.180140f;
    data->d[3] = 1.712513f;
    data->d[4] = -0.398428f;
    data->d[5] = 0.508128f;
    data->d[6] = 0.071032f;
    data->d[7] = -0.936370f;
    data->d[8] = 0.321480f;
    data->d[9] = -2.998951f;
    data->d[10] = 0.692821f;
    data->d[11] = -0.286018f;
    data->d[12] = 1.444636f;
    data->d[13] = 1.143674f;
    data->d[14] = 3.780686f;
    data->d[15] = -0.093042f;
    data->d[16] = 2.610649f;
    data->d[17] = -0.703077f;
    data->d[18] = -0.259273f;
    data->d[19] = -0.245267f;
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

// Variation: 1  result = 0.00000007
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.073970f;
    data->d[1] = 0.023928f;
    data->d[2] = -1.834444f;
    data->d[3] = 1.393039f;
    data->d[4] = -1.611619f;
    data->d[5] = 2.763896f;
    data->d[6] = -0.279818f;
    data->d[7] = -0.134617f;
    data->d[8] = 0.722803f;
    data->d[9] = -0.670300f;
    data->d[10] = 2.472508f;
    data->d[11] = 0.055048f;
    data->d[12] = -1.316116f;
    data->d[13] = 1.636488f;
    data->d[14] = -1.052394f;
    data->d[15] = -0.209733f;
    data->d[16] = -0.581625f;
    data->d[17] = -0.194001f;
    data->d[18] = -0.806211f;
    data->d[19] = -0.176191f;
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

// Variation: 2  result = 0.00000006
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.081843f;
    data->d[1] = 1.915137f;
    data->d[2] = -0.429739f;
    data->d[3] = -0.525138f;
    data->d[4] = 0.023853f;
    data->d[5] = -1.617596f;
    data->d[6] = -1.006689f;
    data->d[7] = 0.011809f;
    data->d[8] = -1.422884f;
    data->d[9] = 1.093014f;
    data->d[10] = -0.984280f;
    data->d[11] = 0.088120f;
    data->d[12] = -0.272297f;
    data->d[13] = -1.562671f;
    data->d[14] = -0.058127f;
    data->d[15] = -0.281515f;
    data->d[16] = -1.045399f;
    data->d[17] = 0.927342f;
    data->d[18] = 0.346492f;
    data->d[19] = 0.100312f;
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
    instructions->SetOperation(0, 0, 11);
    instructions->SetOperation(1, 0, 22);
    instructions->SetOperation(2, 0, 1);
    instructions->SetOperation(3, 1, 12);
    instructions->SetOperation(4, 1, 5);
    instructions->SetOperation(5, 1, 11);
    instructions->SetOperation(6, 1, 11);
    instructions->SetOperation(7, 0, 26);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 0, 0);
    instructions->SetOperation(10, 0, 24);
    instructions->SetOperation(11, 1, 15);
    instructions->SetOperation(12, 0, 26);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 0, 26);
    instructions->SetOperation(15, 1, 13);
    instructions->SetOperation(16, 1, 2);
    instructions->SetOperation(17, 0, 27);
    instructions->SetOperation(18, 0, 15);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 1, 27);
    instructions->SetOperation(21, 0, 7);
    instructions->SetOperation(22, 0, 16);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 15);
    instructions->SetOperation(25, 1, 4);
    instructions->SetOperation(26, 1, 16);
    instructions->SetOperation(27, 0, 8);
    instructions->SetOperation(28, 1, 6);
    instructions->SetOperation(29, 1, 11);
    instructions->SetOperation(30, 0, 3);
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
    state.m_generation = 76;
    state.m_evolution = 19;
    state.m_index = 0;
    state.m_copy_index = 25;
    state.m_id = 58;
    state.m_copy_id = 38;
    state.m_test = 1;
    state.m_seed = 594460431386759805;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
