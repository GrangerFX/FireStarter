#pragma once
#include "FireStarterState.h"

// Run date: 11/19/23 23:44:15 Pacific Standard Time
// Run duration = 66377.764775 seconds
// Run generation = 42
// Run evolution = 13
// Run result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 1
// Run optimizeSeed = 1
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
    settings.m_evolveSeed = 1;
    settings.m_optimizeSeed = 1;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.314060f;
    data->d[1] = 0.986649f;
    data->d[2] = -0.566385f;
    data->d[3] = -0.645969f;
    data->d[4] = -0.000000f;
    data->d[5] = -0.977905f;
    data->d[6] = -7.041750f;
    data->d[7] = 0.002270f;
    data->d[8] = 1.855222f;
    data->d[9] = 3.750357f;
    data->d[10] = -1.292972f;
    data->d[11] = -1.529797f;
    data->d[12] = 0.982554f;
    data->d[13] = 2.651251f;
    data->d[14] = 0.040279f;
    data->d[15] = 0.450028f;
    data->d[16] = -0.467908f;
    data->d[17] = 0.293325f;
    data->d[18] = -1.818865f;
    data->d[19] = 0.533519f;
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
    data->d[0] = 0.631514f;
    data->d[1] = -1.951787f;
    data->d[2] = -0.323974f;
    data->d[3] = -1.215089f;
    data->d[4] = -0.000005f;
    data->d[5] = -5.446708f;
    data->d[6] = 5.061324f;
    data->d[7] = -0.000406f;
    data->d[8] = 0.936401f;
    data->d[9] = 0.738656f;
    data->d[10] = -1.520307f;
    data->d[11] = -1.219291f;
    data->d[12] = -1.917964f;
    data->d[13] = -6.039827f;
    data->d[14] = -0.445500f;
    data->d[15] = -4.013202f;
    data->d[16] = -0.708039f;
    data->d[17] = -0.050393f;
    data->d[18] = 2.037316f;
    data->d[19] = -0.015472f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.685369f;
    data->d[1] = -1.794293f;
    data->d[2] = -0.263020f;
    data->d[3] = 1.756382f;
    data->d[4] = -0.000000f;
    data->d[5] = 3.006359f;
    data->d[6] = -1.525083f;
    data->d[7] = -0.013503f;
    data->d[8] = -1.193278f;
    data->d[9] = 0.468040f;
    data->d[10] = 0.341425f;
    data->d[11] = -0.420880f;
    data->d[12] = 2.128944f;
    data->d[13] = -0.024984f;
    data->d[14] = 0.507600f;
    data->d[15] = 2.141526f;
    data->d[16] = 1.885595f;
    data->d[17] = -1.185744f;
    data->d[18] = -0.359461f;
    data->d[19] = 0.097370f;
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
    instructions->SetOperation(0, 0, 11);
    instructions->SetOperation(1, 1, 7);
    instructions->SetOperation(2, 0, 23);
    instructions->SetOperation(3, 0, 14);
    instructions->SetOperation(4, 1, 5);
    instructions->SetOperation(5, 0, 7);
    instructions->SetOperation(6, 1, 15);
    instructions->SetOperation(7, 1, 25);
    instructions->SetOperation(8, 0, 12);
    instructions->SetOperation(9, 1, 1);
    instructions->SetOperation(10, 1, 2);
    instructions->SetOperation(11, 1, 0);
    instructions->SetOperation(12, 0, 7);
    instructions->SetOperation(13, 1, 13);
    instructions->SetOperation(14, 1, 21);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 0, 24);
    instructions->SetOperation(17, 1, 24);
    instructions->SetOperation(18, 1, 1);
    instructions->SetOperation(19, 0, 7);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 1, 8);
    instructions->SetOperation(23, 0, 1);
    instructions->SetOperation(24, 1, 18);
    instructions->SetOperation(25, 1, 18);
    instructions->SetOperation(26, 0, 13);
    instructions->SetOperation(27, 0, 18);
    instructions->SetOperation(28, 0, 5);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 0, 4);
    instructions->SetOperation(31, 1, 9);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 42;
    state.m_evolution = 13;
    state.m_index = 0;
    state.m_id = 60;
    state.m_copy_id = 60;
    state.m_test = 14;
    state.m_seed = 5825212126433827708;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
