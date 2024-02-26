#pragma once
#include "FireStarterState.h"

// Run date: 02/26/24 00:28:05 Pacific Standard Time
// Run duration = 27990.339119 seconds
// Run generation = 123
// Run evolution = 9
// Run max result = 0.00001669
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
// Run optimizeSeed = 0
// Run tests = 256
// Run streams = 8
// Run units = 1
// Run states = 1
// Run generations = 128
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
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
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_streams = 8;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 128;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00001669
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.254695f;
    data->d[1] = -1.886898f;
    data->d[2] = 0.118650f;
    data->d[3] = -18.496248f;
    data->d[4] = -1.835244f;
    data->d[5] = 14.400215f;
    data->d[6] = -0.000000f;
    data->d[7] = 1.050713f;
    data->d[8] = -1.795827f;
    data->d[9] = 0.437246f;
    data->d[10] = -0.269099f;
    data->d[11] = 1.610682f;
    data->d[12] = -1.676356f;
    data->d[13] = 0.251901f;
    data->d[14] = -11.866631f;
    data->d[15] = 0.209534f;
    data->d[16] = -2.505446f;
    data->d[17] = 1.546069f;
    data->d[18] = 0.202442f;
    data->d[19] = 0.018182f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000017f;
} // LoadVariation0

// Variation: 1  result = 0.00000441
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.140487f;
    data->d[1] = -1.842645f;
    data->d[2] = -3.136890f;
    data->d[3] = 0.172704f;
    data->d[4] = -0.038002f;
    data->d[5] = -1.325538f;
    data->d[6] = -0.347636f;
    data->d[7] = 3.050778f;
    data->d[8] = -0.698898f;
    data->d[9] = -0.192242f;
    data->d[10] = 1.074473f;
    data->d[11] = 0.188482f;
    data->d[12] = -0.786539f;
    data->d[13] = 0.272267f;
    data->d[14] = 0.152945f;
    data->d[15] = -0.953528f;
    data->d[16] = -5.893344f;
    data->d[17] = -50.385925f;
    data->d[18] = 0.002000f;
    data->d[19] = 0.290826f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000004f;
} // LoadVariation1

// Variation: 2  result = 0.00000420
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.449923f;
    data->d[1] = -1.745924f;
    data->d[2] = -0.007586f;
    data->d[3] = -3.641468f;
    data->d[4] = -20.297846f;
    data->d[5] = 3.998559f;
    data->d[6] = 0.007330f;
    data->d[7] = 1.518438f;
    data->d[8] = -0.464480f;
    data->d[9] = -0.398891f;
    data->d[10] = 0.304644f;
    data->d[11] = -1.815737f;
    data->d[12] = -0.744361f;
    data->d[13] = -0.166504f;
    data->d[14] = 1.831857f;
    data->d[15] = 0.617842f;
    data->d[16] = -3.016671f;
    data->d[17] = -1.405411f;
    data->d[18] = 0.495587f;
    data->d[19] = 0.048093f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000004f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000017f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 6);
    instructions->SetOperation(1, 1, 3);
    instructions->SetOperation(2, 0, 4);
    instructions->SetOperation(3, 0, 19);
    instructions->SetOperation(4, 0, 11);
    instructions->SetOperation(5, 1, 1);
    instructions->SetOperation(6, 0, 22);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 1, 18);
    instructions->SetOperation(9, 0, 17);
    instructions->SetOperation(10, 1, 6);
    instructions->SetOperation(11, 0, 16);
    instructions->SetOperation(12, 0, 16);
    instructions->SetOperation(13, 1, 17);
    instructions->SetOperation(14, 0, 28);
    instructions->SetOperation(15, 1, 26);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 0, 10);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 0, 14);
    instructions->SetOperation(21, 0, 6);
    instructions->SetOperation(22, 1, 10);
    instructions->SetOperation(23, 0, 26);
    instructions->SetOperation(24, 0, 24);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 1, 5);
    instructions->SetOperation(27, 0, 2);
    instructions->SetOperation(28, 0, 25);
    instructions->SetOperation(29, 1, 13);
    instructions->SetOperation(30, 0, 3);
    instructions->SetOperation(31, 0, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 123;
    state.m_evolution = 9;
    state.m_children0 = 123;
    state.m_children1 = 47;
    state.m_index = 0;
    state.m_copy_index = 8;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 12148095133287516784;
    state.m_optimize_pass =6;
    state.m_oldResult = 0.000043f;
    state.m_maxResult = 0.000017f;
    state.m_evolveWeight = 0.000306f;
    state.m_optimizeValid = true;
} // LoadState
