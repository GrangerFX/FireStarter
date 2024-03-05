#pragma once
#include "FireStarterState.h"

// Run date: 03/04/24 18:32:49 Pacific Standard Time
// Run duration = 621.393769 seconds
// Run generation = 47
// Run evolution = 8
// Run max result = 0.00000015
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
// Run tests = 0
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
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
    settings.m_tests = 0;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.546705f;
    data->d[1] = 1.717525f;
    data->d[2] = 1.321086f;
    data->d[3] = 0.549754f;
    data->d[4] = -2.142425f;
    data->d[5] = 1.468783f;
    data->d[6] = 1.569153f;
    data->d[7] = -0.607769f;
    data->d[8] = 0.639590f;
    data->d[9] = -0.192307f;
    data->d[10] = 0.528564f;
    data->d[11] = 0.040644f;
    data->d[12] = -2.749119f;
    data->d[13] = -1.202698f;
    data->d[14] = -0.405288f;
    data->d[15] = 2.613936f;
    data->d[16] = 0.022697f;
    data->d[17] = -0.035964f;
    data->d[18] = 0.071928f;
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
    data->d[0] = 0.551347f;
    data->d[1] = -1.704026f;
    data->d[2] = 0.096289f;
    data->d[3] = 0.277944f;
    data->d[4] = 0.484779f;
    data->d[5] = -0.497878f;
    data->d[6] = -4.079406f;
    data->d[7] = 0.139559f;
    data->d[8] = -2.078694f;
    data->d[9] = 1.061865f;
    data->d[10] = -1.452728f;
    data->d[11] = 2.576122f;
    data->d[12] = 0.825100f;
    data->d[13] = -4.928115f;
    data->d[14] = 2.215028f;
    data->d[15] = 1.317442f;
    data->d[16] = 0.060632f;
    data->d[17] = -0.025444f;
    data->d[18] = -0.067244f;
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

// Variation: 2  result = 0.00000015
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.605187f;
    data->d[1] = -1.584377f;
    data->d[2] = 2.795243f;
    data->d[3] = -0.292721f;
    data->d[4] = 1.493362f;
    data->d[5] = 1.559679f;
    data->d[6] = 0.396699f;
    data->d[7] = -0.258358f;
    data->d[8] = 0.232406f;
    data->d[9] = -0.468904f;
    data->d[10] = 0.280011f;
    data->d[11] = 0.057880f;
    data->d[12] = 0.878761f;
    data->d[13] = 0.517737f;
    data->d[14] = -0.158434f;
    data->d[15] = 2.126784f;
    data->d[16] = 1.037457f;
    data->d[17] = 0.305445f;
    data->d[18] = -0.087291f;
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
    instructions->SetOperation(0, 0, 23);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 0, 5);
    instructions->SetOperation(3, 0, 6);
    instructions->SetOperation(4, 0, 1);
    instructions->SetOperation(5, 1, 0);
    instructions->SetOperation(6, 1, 22);
    instructions->SetOperation(7, 0, 20);
    instructions->SetOperation(8, 1, 1);
    instructions->SetOperation(9, 0, 10);
    instructions->SetOperation(10, 1, 20);
    instructions->SetOperation(11, 0, 4);
    instructions->SetOperation(12, 0, 15);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 3);
    instructions->SetOperation(15, 1, 15);
    instructions->SetOperation(16, 1, 1);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 21);
    instructions->SetOperation(19, 1, 20);
    instructions->SetOperation(20, 0, 3);
    instructions->SetOperation(21, 0, 14);
    instructions->SetOperation(22, 1, 2);
    instructions->SetOperation(23, 1, 24);
    instructions->SetOperation(24, 0, 21);
    instructions->SetOperation(25, 0, 14);
    instructions->SetOperation(26, 0, 12);
    instructions->SetOperation(27, 0, 6);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 1, 28);
    instructions->SetOperation(30, 1, 9);
    instructions->SetOperation(31, 1, 28);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 47;
    state.m_evolution = 8;
    state.m_children0 = 47;
    state.m_children1 = 2;
    state.m_index = 12;
    state.m_copy_index = 12;
    state.m_id = 12;
    state.m_test = 0;
    state.m_seed = 4279407159424221578;
    state.m_optimize_pass =4;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 47.000000f;
    state.m_optimizeValid = true;
} // LoadState
