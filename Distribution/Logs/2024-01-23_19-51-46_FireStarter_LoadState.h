#pragma once
#include "FireStarterState.h"

// Run date: 01/23/24 19:51:46 Pacific Standard Time
// Run duration = 23688.907820 seconds
// Run generation = 224
// Run evolution = 16
// Run max result = 0.00001350
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
// Run tests = 256
// Run states = 1
// Run units = 1
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 256;
    settings.m_states = 1;
    settings.m_units = 1;
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

// Variation: 0  result = 0.00001350
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.495196f;
    data->d[1] = -1.153562f;
    data->d[2] = 0.476799f;
    data->d[3] = -2.219759f;
    data->d[4] = 0.211292f;
    data->d[5] = 0.395511f;
    data->d[6] = 0.233081f;
    data->d[7] = -1.377033f;
    data->d[8] = -1.186696f;
    data->d[9] = -0.302741f;
    data->d[10] = -0.603555f;
    data->d[11] = -6.411461f;
    data->d[12] = 6.020720f;
    data->d[13] = 3.123830f;
    data->d[14] = -0.886127f;
    data->d[15] = -0.225781f;
    data->d[16] = 0.259187f;
    data->d[17] = -0.078223f;
    data->d[18] = -84.504364f;
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
    *(result->MinResult()) = 0.000014f;
} // LoadVariation0

// Variation: 1  result = 0.00001162
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.168391f;
    data->d[1] = 1.840862f;
    data->d[2] = -0.309667f;
    data->d[3] = -2.026347f;
    data->d[4] = 0.550470f;
    data->d[5] = -0.526697f;
    data->d[6] = -2.222747f;
    data->d[7] = -1.339280f;
    data->d[8] = -1.732162f;
    data->d[9] = 0.166015f;
    data->d[10] = 1.252981f;
    data->d[11] = 1.810716f;
    data->d[12] = -3.864891f;
    data->d[13] = -1.519224f;
    data->d[14] = -0.658054f;
    data->d[15] = -66.993057f;
    data->d[16] = -16.669725f;
    data->d[17] = -0.095199f;
    data->d[18] = 0.025071f;
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
    *(result->MinResult()) = 0.000012f;
} // LoadVariation1

// Variation: 2  result = 0.00001109
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.639658f;
    data->d[1] = 0.332498f;
    data->d[2] = 1.477970f;
    data->d[3] = -0.014634f;
    data->d[4] = -0.117546f;
    data->d[5] = 0.024028f;
    data->d[6] = -0.023185f;
    data->d[7] = -1.296723f;
    data->d[8] = 0.093684f;
    data->d[9] = 1.767438f;
    data->d[10] = 0.360985f;
    data->d[11] = 1.758745f;
    data->d[12] = -1.906670f;
    data->d[13] = -5.990386f;
    data->d[14] = 2.363390f;
    data->d[15] = -0.409989f;
    data->d[16] = 0.243721f;
    data->d[17] = -0.202618f;
    data->d[18] = 10.578387f;
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
    *(result->MinResult()) = 0.000011f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000014f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 11);
    instructions->SetOperation(1, 1, 9);
    instructions->SetOperation(2, 1, 12);
    instructions->SetOperation(3, 1, 22);
    instructions->SetOperation(4, 1, 22);
    instructions->SetOperation(5, 0, 14);
    instructions->SetOperation(6, 1, 18);
    instructions->SetOperation(7, 1, 1);
    instructions->SetOperation(8, 0, 1);
    instructions->SetOperation(9, 1, 24);
    instructions->SetOperation(10, 1, 3);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 0, 0);
    instructions->SetOperation(13, 1, 13);
    instructions->SetOperation(14, 1, 15);
    instructions->SetOperation(15, 0, 15);
    instructions->SetOperation(16, 0, 16);
    instructions->SetOperation(17, 0, 18);
    instructions->SetOperation(18, 1, 12);
    instructions->SetOperation(19, 0, 3);
    instructions->SetOperation(20, 1, 24);
    instructions->SetOperation(21, 1, 8);
    instructions->SetOperation(22, 0, 5);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 1, 22);
    instructions->SetOperation(25, 0, 17);
    instructions->SetOperation(26, 0, 14);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 0, 15);
    instructions->SetOperation(29, 0, 10);
    instructions->SetOperation(30, 0, 28);
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
    state.m_generation = 224;
    state.m_evolution = 16;
    state.m_children0 = 20;
    state.m_children1 = 20;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 126;
    state.m_seed = 5228297446985602161;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000032f;
    state.m_maxResult = 0.000014f;
    state.m_evolveWeight = 0.000104f;
    state.m_optimizeValid = true;
} // LoadState
