#pragma once
#include "FireStarterState.h"

// Run date: 11/22/23 10:57:42 Pacific Standard Time
// Run duration = 862.352704 seconds
// Run generation = 11
// Run evolution = 5
// Run result = 0.00007134
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

// Variation: 0  result = 0.00002062
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141587f;
    data->d[1] = 0.037402f;
    data->d[2] = -0.506603f;
    data->d[3] = -0.018822f;
    data->d[4] = -0.180695f;
    data->d[5] = 0.039581f;
    data->d[6] = 0.096077f;
    data->d[7] = -154260.343750f;
    data->d[8] = 0.508513f;
    data->d[9] = -0.000523f;
    data->d[10] = -0.181794f;
    data->d[11] = 1.835064f;
    data->d[12] = -0.031497f;
    data->d[13] = 0.841500f;
    data->d[14] = 0.336290f;
    data->d[15] = -3.674127f;
    data->d[16] = -0.522291f;
    data->d[17] = -0.246006f;
    data->d[18] = -0.000065f;
    data->d[19] = -1.849833f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000021f;
} // LoadVariation0

// Variation: 1  result = 0.00003195
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.983157f;
    data->d[1] = -0.025517f;
    data->d[2] = -0.209397f;
    data->d[3] = -0.135154f;
    data->d[4] = 0.158160f;
    data->d[5] = 2.415465f;
    data->d[6] = -0.158342f;
    data->d[7] = -198130.078125f;
    data->d[8] = 0.078677f;
    data->d[9] = 0.078773f;
    data->d[10] = -0.237773f;
    data->d[11] = 0.144878f;
    data->d[12] = -0.202108f;
    data->d[13] = -0.258145f;
    data->d[14] = 0.307901f;
    data->d[15] = -0.333619f;
    data->d[16] = -1.667567f;
    data->d[17] = -1.353438f;
    data->d[18] = -0.054765f;
    data->d[19] = -1.928554f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000032f;
} // LoadVariation1

// Variation: 2  result = 0.00007134
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.000008f;
    data->d[1] = 0.310004f;
    data->d[2] = -0.191091f;
    data->d[3] = 0.295360f;
    data->d[4] = -0.003367f;
    data->d[5] = -7.125167f;
    data->d[6] = 0.198044f;
    data->d[7] = 155395.484375f;
    data->d[8] = -0.037988f;
    data->d[9] = 0.631376f;
    data->d[10] = 1.401923f;
    data->d[11] = -0.425047f;
    data->d[12] = -1.541783f;
    data->d[13] = -2.281059f;
    data->d[14] = -0.300255f;
    data->d[15] = 3.786277f;
    data->d[16] = -0.984682f;
    data->d[17] = 0.557797f;
    data->d[18] = -0.741420f;
    data->d[19] = 0.112469f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000071f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000071f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 5);
    instructions->SetOperation(1, 0, 14);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 7);
    instructions->SetOperation(4, 0, 16);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 9);
    instructions->SetOperation(7, 1, 9);
    instructions->SetOperation(8, 0, 16);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 0, 27);
    instructions->SetOperation(11, 1, 3);
    instructions->SetOperation(12, 0, 8);
    instructions->SetOperation(13, 1, 27);
    instructions->SetOperation(14, 0, 20);
    instructions->SetOperation(15, 0, 9);
    instructions->SetOperation(16, 0, 17);
    instructions->SetOperation(17, 0, 27);
    instructions->SetOperation(18, 1, 28);
    instructions->SetOperation(19, 0, 24);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 0, 3);
    instructions->SetOperation(22, 1, 0);
    instructions->SetOperation(23, 1, 23);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 1, 20);
    instructions->SetOperation(26, 0, 10);
    instructions->SetOperation(27, 1, 13);
    instructions->SetOperation(28, 0, 10);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 0, 11);
    instructions->SetOperation(31, 0, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 11;
    state.m_evolution = 5;
    state.m_index = 0;
    state.m_id = 54;
    state.m_copy_id = 54;
    state.m_test = 14;
    state.m_seed = 5280579513698627649;
    state.m_maxResult = 0.000071f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
