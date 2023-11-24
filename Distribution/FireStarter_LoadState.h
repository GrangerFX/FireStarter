#pragma once
#include "FireStarterState.h"

// Run date: 11/23/23 12:44:32 Pacific Standard Time
// Run duration = 15867.949390 seconds
// Run generation = 79
// Run evolution = 9
// Run result = 0.00001752
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

// Variation: 0  result = 0.00001746
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.651083f;
    data->d[1] = -0.239395f;
    data->d[2] = 0.252728f;
    data->d[3] = -2.610778f;
    data->d[4] = -0.172171f;
    data->d[5] = 0.527666f;
    data->d[6] = -1.598559f;
    data->d[7] = 0.207570f;
    data->d[8] = -0.082721f;
    data->d[9] = -1.695957f;
    data->d[10] = -0.119671f;
    data->d[11] = -0.166517f;
    data->d[12] = -0.476692f;
    data->d[13] = 0.865627f;
    data->d[14] = -0.176180f;
    data->d[15] = -0.032915f;
    data->d[16] = 11701.902344f;
    data->d[17] = -0.001040f;
    data->d[18] = -1.289939f;
    data->d[19] = -0.022337f;
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

// Variation: 1  result = 0.00000560
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.030007f;
    data->d[1] = -0.098529f;
    data->d[2] = -5.800584f;
    data->d[3] = -0.123549f;
    data->d[4] = 0.035321f;
    data->d[5] = -0.602543f;
    data->d[6] = 4.728975f;
    data->d[7] = -0.000940f;
    data->d[8] = -0.030861f;
    data->d[9] = -0.292006f;
    data->d[10] = 0.163939f;
    data->d[11] = 0.027478f;
    data->d[12] = 4.727287f;
    data->d[13] = -0.000279f;
    data->d[14] = 0.075863f;
    data->d[15] = 0.006681f;
    data->d[16] = -3.422104f;
    data->d[17] = 277704.375000f;
    data->d[18] = -0.238134f;
    data->d[19] = -0.115666f;
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
} // LoadVariation1

// Variation: 2  result = 0.00001752
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.348342f;
    data->d[1] = -0.596143f;
    data->d[2] = -2.001948f;
    data->d[3] = -0.109635f;
    data->d[4] = 0.113547f;
    data->d[5] = -0.088929f;
    data->d[6] = 491080.718750f;
    data->d[7] = 0.000000f;
    data->d[8] = 0.353229f;
    data->d[9] = -0.845947f;
    data->d[10] = -0.251307f;
    data->d[11] = 1.207582f;
    data->d[12] = 0.163233f;
    data->d[13] = 0.294603f;
    data->d[14] = -0.553771f;
    data->d[15] = 0.455534f;
    data->d[16] = -1.482075f;
    data->d[17] = -0.370272f;
    data->d[18] = 0.686781f;
    data->d[19] = 0.032338f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000018f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000018f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 24);
    instructions->SetOperation(1, 0, 4);
    instructions->SetOperation(2, 0, 18);
    instructions->SetOperation(3, 0, 2);
    instructions->SetOperation(4, 1, 11);
    instructions->SetOperation(5, 0, 23);
    instructions->SetOperation(6, 0, 6);
    instructions->SetOperation(7, 0, 21);
    instructions->SetOperation(8, 1, 21);
    instructions->SetOperation(9, 1, 10);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 0, 11);
    instructions->SetOperation(12, 1, 0);
    instructions->SetOperation(13, 1, 19);
    instructions->SetOperation(14, 1, 21);
    instructions->SetOperation(15, 0, 21);
    instructions->SetOperation(16, 0, 8);
    instructions->SetOperation(17, 1, 21);
    instructions->SetOperation(18, 1, 27);
    instructions->SetOperation(19, 0, 4);
    instructions->SetOperation(20, 0, 12);
    instructions->SetOperation(21, 1, 21);
    instructions->SetOperation(22, 1, 28);
    instructions->SetOperation(23, 1, 0);
    instructions->SetOperation(24, 0, 18);
    instructions->SetOperation(25, 1, 26);
    instructions->SetOperation(26, 0, 7);
    instructions->SetOperation(27, 0, 1);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 28);
    instructions->SetOperation(30, 0, 25);
    instructions->SetOperation(31, 1, 5);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 79;
    state.m_evolution = 9;
    state.m_index = 40;
    state.m_id = 58;
    state.m_copy_id = 26;
    state.m_test = 1;
    state.m_seed = 3084641344634583156;
    state.m_maxResult = 0.000018f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
