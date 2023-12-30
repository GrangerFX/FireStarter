#pragma once
#include "FireStarterState.h"

// Run date: 12/29/23 19:34:21 Pacific Standard Time
// Run duration = 2842.797905 seconds
// Run generation = 17
// Run evolution = 10
// Run max result = 0.00000012
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
// Run tests = 4
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
    settings.m_tests = 4;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.494288f;
    data->d[1] = -1.647304f;
    data->d[2] = 0.000002f;
    data->d[3] = -0.110027f;
    data->d[4] = -1.877808f;
    data->d[5] = -0.340349f;
    data->d[6] = 0.006138f;
    data->d[7] = -4.808574f;
    data->d[8] = 4.349905f;
    data->d[9] = 0.011021f;
    data->d[10] = -1.565434f;
    data->d[11] = -6.022716f;
    data->d[12] = 0.001306f;
    data->d[13] = 6.763244f;
    data->d[14] = -0.067868f;
    data->d[15] = -0.516439f;
    data->d[16] = 0.221759f;
    data->d[17] = -0.903697f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.301503f;
    data->d[1] = -1.789157f;
    data->d[2] = 1.006644f;
    data->d[3] = -1.333119f;
    data->d[4] = 0.088029f;
    data->d[5] = 0.328097f;
    data->d[6] = -0.001762f;
    data->d[7] = -4.820037f;
    data->d[8] = 0.573713f;
    data->d[9] = -0.118985f;
    data->d[10] = 1.234971f;
    data->d[11] = 2.359810f;
    data->d[12] = -2.830459f;
    data->d[13] = 6.691223f;
    data->d[14] = 3.558308f;
    data->d[15] = -0.589971f;
    data->d[16] = -0.373705f;
    data->d[17] = -0.126459f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.902685f;
    data->d[1] = -1.715309f;
    data->d[2] = 1.143012f;
    data->d[3] = -4.164674f;
    data->d[4] = -0.109993f;
    data->d[5] = -1.309358f;
    data->d[6] = 0.003869f;
    data->d[7] = 1.853431f;
    data->d[8] = 0.041461f;
    data->d[9] = -3.939340f;
    data->d[10] = -12.319183f;
    data->d[11] = -2.773982f;
    data->d[12] = 0.000145f;
    data->d[13] = -17.376053f;
    data->d[14] = 2.378953f;
    data->d[15] = -1.676056f;
    data->d[16] = 0.975114f;
    data->d[17] = -0.331439f;
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
    instructions->SetOperation(0, 1, 10);
    instructions->SetOperation(1, 1, 1);
    instructions->SetOperation(2, 1, 4);
    instructions->SetOperation(3, 0, 13);
    instructions->SetOperation(4, 0, 16);
    instructions->SetOperation(5, 1, 25);
    instructions->SetOperation(6, 0, 10);
    instructions->SetOperation(7, 0, 28);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 1, 26);
    instructions->SetOperation(10, 1, 18);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 1, 24);
    instructions->SetOperation(13, 0, 3);
    instructions->SetOperation(14, 0, 28);
    instructions->SetOperation(15, 0, 8);
    instructions->SetOperation(16, 0, 23);
    instructions->SetOperation(17, 1, 19);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 1, 20);
    instructions->SetOperation(21, 1, 8);
    instructions->SetOperation(22, 0, 20);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 1, 0);
    instructions->SetOperation(25, 1, 28);
    instructions->SetOperation(26, 1, 7);
    instructions->SetOperation(27, 1, 26);
    instructions->SetOperation(28, 0, 7);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 0, 27);
    instructions->SetOperation(31, 1, 16);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 17;
    state.m_evolution = 10;
    state.m_children = 0;
    state.m_index = 0;
    state.m_copy_index = 3;
    state.m_id = 60;
    state.m_test = 3;
    state.m_seed = 11737897890238848286;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
