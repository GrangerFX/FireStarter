#pragma once
#include "FireStarterState.h"

// Run date: 12/23/23 10:57:44 Pacific Standard Time
// Run duration = 517.632972 seconds
// Run generation = 6
// Run evolution = 4
// Run max result = 0.00002468
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

// Variation: 0  result = 0.00000626
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.097863f;
    data->d[1] = -0.557887f;
    data->d[2] = 2.191734f;
    data->d[3] = -0.323766f;
    data->d[4] = -0.062378f;
    data->d[5] = 1.529486f;
    data->d[6] = -2.841826f;
    data->d[7] = 2.026459f;
    data->d[8] = -0.013267f;
    data->d[9] = -0.989452f;
    data->d[10] = 1.196896f;
    data->d[11] = -0.458298f;
    data->d[12] = 0.716687f;
    data->d[13] = -1.363153f;
    data->d[14] = 3.169532f;
    data->d[15] = -2.161474f;
    data->d[16] = 0.820627f;
    data->d[17] = -1.148636f;
    data->d[18] = -1.258441f;
    data->d[19] = -0.341427f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000006f;
} // LoadVariation0

// Variation: 1  result = 0.00000823
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.742902f;
    data->d[1] = -0.389502f;
    data->d[2] = 1.817709f;
    data->d[3] = -0.588479f;
    data->d[4] = -1.370397f;
    data->d[5] = 0.452124f;
    data->d[6] = -0.369372f;
    data->d[7] = 0.111768f;
    data->d[8] = 1.654815f;
    data->d[9] = 0.393764f;
    data->d[10] = -0.938126f;
    data->d[11] = -0.317735f;
    data->d[12] = 1.497581f;
    data->d[13] = 1.723736f;
    data->d[14] = 0.548024f;
    data->d[15] = -1.413960f;
    data->d[16] = -1.744174f;
    data->d[17] = 1.572740f;
    data->d[18] = 1.626760f;
    data->d[19] = 0.178818f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000008f;
} // LoadVariation1

// Variation: 2  result = 0.00002468
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.561186f;
    data->d[1] = -1.200249f;
    data->d[2] = 1.000736f;
    data->d[3] = 0.844345f;
    data->d[4] = -1.727127f;
    data->d[5] = 0.732792f;
    data->d[6] = 0.118009f;
    data->d[7] = 0.357785f;
    data->d[8] = -4.029197f;
    data->d[9] = 1.358750f;
    data->d[10] = 0.527954f;
    data->d[11] = 0.976560f;
    data->d[12] = 1.237075f;
    data->d[13] = -1.588443f;
    data->d[14] = 0.118670f;
    data->d[15] = -0.134963f;
    data->d[16] = 0.333168f;
    data->d[17] = -0.126108f;
    data->d[18] = 3.987569f;
    data->d[19] = -0.603560f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000025f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000025f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 0, 19);
    instructions->SetOperation(3, 1, 3);
    instructions->SetOperation(4, 1, 7);
    instructions->SetOperation(5, 1, 14);
    instructions->SetOperation(6, 1, 18);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 0, 13);
    instructions->SetOperation(10, 0, 7);
    instructions->SetOperation(11, 1, 10);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 0, 27);
    instructions->SetOperation(14, 1, 22);
    instructions->SetOperation(15, 1, 10);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 1, 28);
    instructions->SetOperation(18, 0, 8);
    instructions->SetOperation(19, 0, 27);
    instructions->SetOperation(20, 1, 4);
    instructions->SetOperation(21, 1, 20);
    instructions->SetOperation(22, 0, 26);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 0, 26);
    instructions->SetOperation(25, 0, 4);
    instructions->SetOperation(26, 1, 10);
    instructions->SetOperation(27, 1, 13);
    instructions->SetOperation(28, 0, 25);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 1, 14);
    instructions->SetOperation(31, 0, 9);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 6;
    state.m_evolution = 4;
    state.m_children = 14;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 154;
    state.m_copy_id = 60;
    state.m_test = 1;
    state.m_seed = 12225746358552041970;
    state.m_oldResult = 0.000028f;
    state.m_maxResult = 0.000025f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
