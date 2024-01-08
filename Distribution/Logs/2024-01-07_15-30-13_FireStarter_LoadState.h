#pragma once
#include "FireStarterState.h"

// Run date: 01/07/24 15:30:13 Pacific Standard Time
// Run duration = 10358.481755 seconds
// Run generation = 64
// Run evolution = 11
// Run max result = 0.00000012
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.980704f;
    data->d[1] = -0.160889f;
    data->d[2] = 1.971632f;
    data->d[3] = 0.000002f;
    data->d[4] = 0.231845f;
    data->d[5] = -3.014528f;
    data->d[6] = -1.841667f;
    data->d[7] = -0.114496f;
    data->d[8] = -0.999545f;
    data->d[9] = 4.553734f;
    data->d[10] = -0.005808f;
    data->d[11] = -1.844419f;
    data->d[12] = -0.075704f;
    data->d[13] = -7.398304f;
    data->d[14] = 38475.492188f;
    data->d[15] = -0.002036f;
    data->d[16] = -3.780874f;
    data->d[17] = -1.898972f;
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
    data->d[0] = -2.215041f;
    data->d[1] = -0.875509f;
    data->d[2] = 0.848051f;
    data->d[3] = -0.000170f;
    data->d[4] = 0.514784f;
    data->d[5] = -1.373964f;
    data->d[6] = -0.999912f;
    data->d[7] = -1.559146f;
    data->d[8] = -5.293161f;
    data->d[9] = 0.025911f;
    data->d[10] = -0.005133f;
    data->d[11] = 2726.321533f;
    data->d[12] = 0.425086f;
    data->d[13] = 2.678063f;
    data->d[14] = 2.504934f;
    data->d[15] = -0.753233f;
    data->d[16] = 0.668578f;
    data->d[17] = 4.560117f;
    data->d[18] = -0.118141f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.122123f;
    data->d[1] = -2.495872f;
    data->d[2] = 0.397196f;
    data->d[3] = 0.000001f;
    data->d[4] = -2.008093f;
    data->d[5] = 2.867387f;
    data->d[6] = 0.997115f;
    data->d[7] = -1.322105f;
    data->d[8] = -0.992687f;
    data->d[9] = -0.006806f;
    data->d[10] = -0.013885f;
    data->d[11] = 35520.304688f;
    data->d[12] = -0.374232f;
    data->d[13] = -4.890321f;
    data->d[14] = -27.977144f;
    data->d[15] = -0.081587f;
    data->d[16] = 0.855262f;
    data->d[17] = 1.715984f;
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
    instructions->SetOperation(0, 1, 14);
    instructions->SetOperation(1, 1, 12);
    instructions->SetOperation(2, 0, 28);
    instructions->SetOperation(3, 1, 5);
    instructions->SetOperation(4, 0, 0);
    instructions->SetOperation(5, 0, 28);
    instructions->SetOperation(6, 1, 4);
    instructions->SetOperation(7, 0, 21);
    instructions->SetOperation(8, 1, 28);
    instructions->SetOperation(9, 1, 1);
    instructions->SetOperation(10, 0, 24);
    instructions->SetOperation(11, 1, 28);
    instructions->SetOperation(12, 0, 23);
    instructions->SetOperation(13, 0, 23);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 0, 22);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 1, 11);
    instructions->SetOperation(18, 1, 22);
    instructions->SetOperation(19, 0, 11);
    instructions->SetOperation(20, 0, 8);
    instructions->SetOperation(21, 1, 19);
    instructions->SetOperation(22, 0, 0);
    instructions->SetOperation(23, 1, 12);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 20);
    instructions->SetOperation(27, 0, 15);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 0, 22);
    instructions->SetOperation(30, 1, 26);
    instructions->SetOperation(31, 1, 2);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 64;
    state.m_evolution = 11;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 86;
    state.m_test = 1;
    state.m_seed = 15204367344812623611;
    state.m_optimize_pass =4;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
