#pragma once
#include "FireStarterState.h"

// Run date: 12/27/23 20:11:58 Pacific Standard Time
// Run duration = 631.446985 seconds
// Run generation = 9
// Run evolution = 8
// Run max result = 0.00000080
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

// Variation: 0  result = 0.00000042
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141594f;
    data->d[1] = 0.000003f;
    data->d[2] = -2.175254f;
    data->d[3] = 0.087346f;
    data->d[4] = 1.885359f;
    data->d[5] = 0.020050f;
    data->d[6] = 0.751961f;
    data->d[7] = -1.282551f;
    data->d[8] = 0.077699f;
    data->d[9] = -1.447443f;
    data->d[10] = -0.801928f;
    data->d[11] = 4.079942f;
    data->d[12] = 1.531163f;
    data->d[13] = -0.409767f;
    data->d[14] = -3.725013f;
    data->d[15] = -1.860217f;
    data->d[16] = 4.101327f;
    data->d[17] = 0.894384f;
    data->d[18] = -0.156756f;
    data->d[19] = -0.000002f;
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

// Variation: 1  result = 0.00000080
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090669f;
    data->d[1] = 0.000018f;
    data->d[2] = -4.375550f;
    data->d[3] = -0.161093f;
    data->d[4] = 0.901405f;
    data->d[5] = -0.249332f;
    data->d[6] = 2.378770f;
    data->d[7] = -0.416390f;
    data->d[8] = 0.886319f;
    data->d[9] = -0.629686f;
    data->d[10] = 0.073397f;
    data->d[11] = -3.085837f;
    data->d[12] = 0.058691f;
    data->d[13] = 1.310583f;
    data->d[14] = -0.535537f;
    data->d[15] = 2.587666f;
    data->d[16] = -2.288836f;
    data->d[17] = 9.837553f;
    data->d[18] = 0.450663f;
    data->d[19] = -0.118144f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000060
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.000001f;
    data->d[2] = -0.530204f;
    data->d[3] = 0.739018f;
    data->d[4] = -1.183024f;
    data->d[5] = 0.933603f;
    data->d[6] = 0.572892f;
    data->d[7] = -1.770468f;
    data->d[8] = 0.096053f;
    data->d[9] = 1.555755f;
    data->d[10] = 2.463375f;
    data->d[11] = 0.096640f;
    data->d[12] = 0.022424f;
    data->d[13] = 0.690862f;
    data->d[14] = -0.309135f;
    data->d[15] = 6.294892f;
    data->d[16] = -0.245579f;
    data->d[17] = -1.821794f;
    data->d[18] = 0.687338f;
    data->d[19] = 0.523598f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 9);
    instructions->SetOperation(1, 1, 15);
    instructions->SetOperation(2, 0, 15);
    instructions->SetOperation(3, 1, 4);
    instructions->SetOperation(4, 0, 27);
    instructions->SetOperation(5, 0, 14);
    instructions->SetOperation(6, 1, 18);
    instructions->SetOperation(7, 0, 13);
    instructions->SetOperation(8, 0, 10);
    instructions->SetOperation(9, 1, 14);
    instructions->SetOperation(10, 0, 10);
    instructions->SetOperation(11, 0, 11);
    instructions->SetOperation(12, 1, 28);
    instructions->SetOperation(13, 1, 1);
    instructions->SetOperation(14, 0, 14);
    instructions->SetOperation(15, 0, 7);
    instructions->SetOperation(16, 1, 16);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 1, 19);
    instructions->SetOperation(20, 0, 24);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 1, 2);
    instructions->SetOperation(23, 0, 14);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 1, 25);
    instructions->SetOperation(26, 1, 1);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 0, 9);
    instructions->SetOperation(29, 0, 5);
    instructions->SetOperation(30, 0, 19);
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
    state.m_generation = 9;
    state.m_evolution = 8;
    state.m_children = 0;
    state.m_index = 40;
    state.m_copy_index = 2;
    state.m_id = 204;
    state.m_copy_id = 17;
    state.m_test = 4;
    state.m_seed = 2377744175122294985;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
