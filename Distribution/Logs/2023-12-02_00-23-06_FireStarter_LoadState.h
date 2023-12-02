#pragma once
#include "FireStarterState.h"

// Run date: 12/02/23 00:23:06 Pacific Standard Time
// Run duration = 1045.433906 seconds
// Run generation = 19
// Run evolution = 8
// Run max result = 0.00000037
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
    settings.m_tests = 1;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.624037f;
    data->d[1] = 1.960469f;
    data->d[2] = -0.054371f;
    data->d[3] = 1.043027f;
    data->d[4] = -0.336596f;
    data->d[5] = -3.621830f;
    data->d[6] = 0.117913f;
    data->d[7] = -0.096493f;
    data->d[8] = -0.124804f;
    data->d[9] = 2.483104f;
    data->d[10] = -1.373649f;
    data->d[11] = -0.003458f;
    data->d[12] = -1.133926f;
    data->d[13] = 1.367217f;
    data->d[14] = -1.937036f;
    data->d[15] = -3.892056f;
    data->d[16] = -1.715042f;
    data->d[17] = -0.000000f;
    data->d[18] = -0.484654f;
    data->d[19] = -1.266637f;
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
    data->d[0] = -0.567334f;
    data->d[1] = 1.753437f;
    data->d[2] = -0.064735f;
    data->d[3] = 11.028963f;
    data->d[4] = 0.531259f;
    data->d[5] = 1.144483f;
    data->d[6] = -3.262140f;
    data->d[7] = 0.129709f;
    data->d[8] = 1.448669f;
    data->d[9] = 2.072370f;
    data->d[10] = -0.444305f;
    data->d[11] = -0.980221f;
    data->d[12] = 0.071337f;
    data->d[13] = 2.542460f;
    data->d[14] = 2.392990f;
    data->d[15] = 0.102503f;
    data->d[16] = 1.238829f;
    data->d[17] = -39.485741f;
    data->d[18] = -0.006279f;
    data->d[19] = -0.476498f;
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

// Variation: 2  result = 0.00000037
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.186663f;
    data->d[1] = 0.488684f;
    data->d[2] = -1.220707f;
    data->d[3] = 1.477927f;
    data->d[4] = 0.712650f;
    data->d[5] = -0.531956f;
    data->d[6] = -0.116098f;
    data->d[7] = -2.152441f;
    data->d[8] = 0.980184f;
    data->d[9] = 0.260353f;
    data->d[10] = 1.990125f;
    data->d[11] = 0.721587f;
    data->d[12] = -0.281253f;
    data->d[13] = 1.178782f;
    data->d[14] = -4.384715f;
    data->d[15] = 0.673423f;
    data->d[16] = -0.979880f;
    data->d[17] = 0.216277f;
    data->d[18] = -1.209177f;
    data->d[19] = -2.002156f;
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
    instructions->SetOperation(5, 0, 21);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 1, 8);
    instructions->SetOperation(8, 0, 6);
    instructions->SetOperation(9, 1, 13);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 1, 2);
    instructions->SetOperation(12, 0, 2);
    instructions->SetOperation(13, 1, 15);
    instructions->SetOperation(14, 0, 16);
    instructions->SetOperation(15, 0, 19);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 0, 28);
    instructions->SetOperation(18, 1, 25);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 1, 25);
    instructions->SetOperation(21, 1, 25);
    instructions->SetOperation(22, 0, 10);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 9);
    instructions->SetOperation(25, 0, 19);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 1, 18);
    instructions->SetOperation(29, 0, 7);
    instructions->SetOperation(30, 1, 10);
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
    state.m_generation = 19;
    state.m_evolution = 8;
    state.m_index = 0;
    state.m_copy_index = 16;
    state.m_id = 18;
    state.m_copy_id = 44;
    state.m_test = 0;
    state.m_seed = 7657734048984730000;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
