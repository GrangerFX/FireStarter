#pragma once
#include "FireStarterState.h"

// Run date: 01/20/24 12:25:19 Pacific Standard Time
// Run duration = 49713.688960 seconds
// Run generation = 251
// Run evolution = 8
// Run max result = 0.00000935
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

// Variation: 0  result = 0.00000170
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.132509f;
    data->d[1] = -0.330098f;
    data->d[2] = -2.379795f;
    data->d[3] = -0.007687f;
    data->d[4] = 0.113939f;
    data->d[5] = -0.000254f;
    data->d[6] = -1.122948f;
    data->d[7] = 0.508969f;
    data->d[8] = -0.001181f;
    data->d[9] = -0.965530f;
    data->d[10] = -0.714290f;
    data->d[11] = -0.214555f;
    data->d[12] = 0.141324f;
    data->d[13] = 1.883073f;
    data->d[14] = -0.026279f;
    data->d[15] = 118604.828125f;
    data->d[16] = -0.046215f;
    data->d[17] = 0.042932f;
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
    *(result->MinResult()) = 0.000002f;
} // LoadVariation0

// Variation: 1  result = 0.00000322
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.091106f;
    data->d[1] = -0.024507f;
    data->d[2] = -0.462835f;
    data->d[3] = 1.126922f;
    data->d[4] = -0.115961f;
    data->d[5] = 0.409682f;
    data->d[6] = -0.623391f;
    data->d[7] = -2.827601f;
    data->d[8] = -0.245382f;
    data->d[9] = -0.378450f;
    data->d[10] = 3.459453f;
    data->d[11] = -9.243556f;
    data->d[12] = 0.679680f;
    data->d[13] = 0.314672f;
    data->d[14] = 0.191580f;
    data->d[15] = 2360.027100f;
    data->d[16] = 1.562361f;
    data->d[17] = -1.679987f;
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
    *(result->MinResult()) = 0.000003f;
} // LoadVariation1

// Variation: 2  result = 0.00000935
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.990849f;
    data->d[1] = -0.408344f;
    data->d[2] = -3.187229f;
    data->d[3] = 0.527452f;
    data->d[4] = -0.078646f;
    data->d[5] = -0.015368f;
    data->d[6] = -1.165112f;
    data->d[7] = 0.617139f;
    data->d[8] = 0.000723f;
    data->d[9] = -7.010451f;
    data->d[10] = 2.809029f;
    data->d[11] = -0.125358f;
    data->d[12] = 0.196440f;
    data->d[13] = 2.350414f;
    data->d[14] = -0.014255f;
    data->d[15] = 27222.189453f;
    data->d[16] = -2.805145f;
    data->d[17] = 3.479748f;
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
    *(result->MinResult()) = 0.000009f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000009f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 9);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 22);
    instructions->SetOperation(3, 1, 6);
    instructions->SetOperation(4, 0, 14);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 14);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 0, 26);
    instructions->SetOperation(9, 1, 14);
    instructions->SetOperation(10, 0, 24);
    instructions->SetOperation(11, 0, 21);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 1, 10);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 5);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 1, 13);
    instructions->SetOperation(19, 1, 19);
    instructions->SetOperation(20, 0, 19);
    instructions->SetOperation(21, 0, 21);
    instructions->SetOperation(22, 1, 14);
    instructions->SetOperation(23, 0, 7);
    instructions->SetOperation(24, 0, 15);
    instructions->SetOperation(25, 1, 24);
    instructions->SetOperation(26, 0, 19);
    instructions->SetOperation(27, 0, 7);
    instructions->SetOperation(28, 0, 13);
    instructions->SetOperation(29, 0, 11);
    instructions->SetOperation(30, 1, 28);
    instructions->SetOperation(31, 1, 25);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 251;
    state.m_evolution = 8;
    state.m_children0 = 251;
    state.m_children1 = 109;
    state.m_index = 0;
    state.m_copy_index = 7;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 5777818813584591438;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000034f;
    state.m_maxResult = 0.000009f;
    state.m_evolveWeight = 0.000437f;
    state.m_optimizeValid = true;
} // LoadState
