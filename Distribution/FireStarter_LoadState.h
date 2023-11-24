#pragma once
#include "FireStarterState.h"

// Run date: 11/23/23 17:14:17 Pacific Standard Time
// Run duration = 43701.203278 seconds
// Run generation = 150
// Run evolution = 16
// Run result = 0.00000489
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

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

// Variation: 0  result = 0.00000224
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.344666f;
    data->d[1] = 0.295237f;
    data->d[2] = 0.567385f;
    data->d[3] = -0.713425f;
    data->d[4] = -0.284353f;
    data->d[5] = 0.813786f;
    data->d[6] = -1.457192f;
    data->d[7] = -1.086554f;
    data->d[8] = -0.650761f;
    data->d[9] = 0.086437f;
    data->d[10] = -0.031379f;
    data->d[11] = -1.229252f;
    data->d[12] = 0.086333f;
    data->d[13] = -0.733537f;
    data->d[14] = -0.011004f;
    data->d[15] = 0.791235f;
    data->d[16] = 0.727140f;
    data->d[17] = 129849.843750f;
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

// Variation: 1  result = 0.00000370
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.216231f;
    data->d[1] = 0.255275f;
    data->d[2] = -0.362444f;
    data->d[3] = 0.578899f;
    data->d[4] = -0.136275f;
    data->d[5] = -0.659785f;
    data->d[6] = -0.143995f;
    data->d[7] = -1.118870f;
    data->d[8] = -0.875074f;
    data->d[9] = 0.365613f;
    data->d[10] = 0.206156f;
    data->d[11] = -0.146563f;
    data->d[12] = 0.428485f;
    data->d[13] = -0.253909f;
    data->d[14] = 0.155468f;
    data->d[15] = 2.738706f;
    data->d[16] = -213118.968750f;
    data->d[17] = 0.502924f;
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
    *(result->MinResult()) = 0.000004f;
} // LoadVariation1

// Variation: 2  result = 0.00000489
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.719402f;
    data->d[1] = -0.538587f;
    data->d[2] = -0.263801f;
    data->d[3] = 0.041198f;
    data->d[4] = -0.215550f;
    data->d[5] = 0.745478f;
    data->d[6] = 1.508905f;
    data->d[7] = 0.302498f;
    data->d[8] = -0.335857f;
    data->d[9] = -0.149444f;
    data->d[10] = -0.617006f;
    data->d[11] = 0.132234f;
    data->d[12] = 1.219698f;
    data->d[13] = -1.408770f;
    data->d[14] = 0.455686f;
    data->d[15] = 0.099169f;
    data->d[16] = 132019.234375f;
    data->d[17] = 0.338655f;
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
    *(result->MinResult()) = 0.000005f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000005f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 1);
    instructions->SetOperation(1, 0, 2);
    instructions->SetOperation(2, 0, 15);
    instructions->SetOperation(3, 1, 11);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 3);
    instructions->SetOperation(6, 1, 6);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 0, 28);
    instructions->SetOperation(9, 1, 18);
    instructions->SetOperation(10, 1, 27);
    instructions->SetOperation(11, 0, 19);
    instructions->SetOperation(12, 0, 9);
    instructions->SetOperation(13, 1, 23);
    instructions->SetOperation(14, 1, 4);
    instructions->SetOperation(15, 1, 5);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 1, 15);
    instructions->SetOperation(18, 0, 15);
    instructions->SetOperation(19, 0, 3);
    instructions->SetOperation(20, 0, 2);
    instructions->SetOperation(21, 0, 3);
    instructions->SetOperation(22, 0, 5);
    instructions->SetOperation(23, 0, 11);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 0, 20);
    instructions->SetOperation(26, 0, 6);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 16);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 1, 28);
    instructions->SetOperation(31, 1, 19);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 150;
    state.m_evolution = 16;
    state.m_index = 21;
    state.m_id = 10;
    state.m_copy_id = 28;
    state.m_test = 14;
    state.m_seed = 11386585238802196782;
    state.m_maxResult = 0.000005f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
