#pragma once
#include "FireStarterState.h"

// Run date: 03/18/24 16:33:57 Pacific Daylight Time
// Run duration = 16190.146642 seconds
// Run generation = 1157
// Run evolution = 9
// Run max result = 0.00000018
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
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
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
    settings.m_tests = 16;
    settings.m_streams = 4;
    settings.m_units = 4;
    settings.m_states = 16;
    settings.m_generations = 200;
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

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.569936f;
    data->d[1] = -2.571657f;
    data->d[2] = -0.545499f;
    data->d[3] = 1.024482f;
    data->d[4] = 1.196531f;
    data->d[5] = -0.552825f;
    data->d[6] = 0.424230f;
    data->d[7] = 0.647491f;
    data->d[8] = -4.530028f;
    data->d[9] = 0.662867f;
    data->d[10] = -2.691040f;
    data->d[11] = -0.744080f;
    data->d[12] = 0.695499f;
    data->d[13] = 0.770109f;
    data->d[14] = 0.083449f;
    data->d[15] = -0.083449f;
    data->d[16] = -0.509711f;
    data->d[17] = 0.000000f;
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
    data->d[0] = -1.619226f;
    data->d[1] = -1.471433f;
    data->d[2] = 0.316495f;
    data->d[3] = 2.698300f;
    data->d[4] = 0.007070f;
    data->d[5] = -0.699929f;
    data->d[6] = -0.836456f;
    data->d[7] = 0.001902f;
    data->d[8] = 1.296533f;
    data->d[9] = -0.177684f;
    data->d[10] = 0.980729f;
    data->d[11] = -1.269049f;
    data->d[12] = 2.685506f;
    data->d[13] = 1.598246f;
    data->d[14] = -0.100068f;
    data->d[15] = 0.070184f;
    data->d[16] = 1.976557f;
    data->d[17] = 0.000000f;
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
    data->d[0] = -0.916543f;
    data->d[1] = -1.701450f;
    data->d[2] = 1.526903f;
    data->d[3] = -1.512513f;
    data->d[4] = -0.774287f;
    data->d[5] = 1.985682f;
    data->d[6] = -1.803248f;
    data->d[7] = -0.198842f;
    data->d[8] = -0.806702f;
    data->d[9] = -1.902887f;
    data->d[10] = 0.347337f;
    data->d[11] = 0.558937f;
    data->d[12] = -0.411475f;
    data->d[13] = -0.498634f;
    data->d[14] = 0.704637f;
    data->d[15] = -0.786287f;
    data->d[16] = -3.206364f;
    data->d[17] = 0.000000f;
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
    instructions->SetOperation(0, 1, 21);
    instructions->SetOperation(1, 1, 27);
    instructions->SetOperation(2, 0, 15);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 1, 15);
    instructions->SetOperation(5, 1, 27);
    instructions->SetOperation(6, 0, 27);
    instructions->SetOperation(7, 0, 26);
    instructions->SetOperation(8, 1, 8);
    instructions->SetOperation(9, 1, 1);
    instructions->SetOperation(10, 1, 1);
    instructions->SetOperation(11, 0, 6);
    instructions->SetOperation(12, 1, 20);
    instructions->SetOperation(13, 0, 22);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 20);
    instructions->SetOperation(17, 0, 20);
    instructions->SetOperation(18, 0, 1);
    instructions->SetOperation(19, 1, 8);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 1, 19);
    instructions->SetOperation(22, 1, 24);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 8);
    instructions->SetOperation(25, 0, 6);
    instructions->SetOperation(26, 0, 15);
    instructions->SetOperation(27, 0, 8);
    instructions->SetOperation(28, 1, 7);
    instructions->SetOperation(29, 1, 16);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 1, 2);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 1157;
    state.m_evolution = 9;
    state.m_index = 2;
    state.m_copy_index = 13;
    state.m_id = 13;
    state.m_test = 15;
    state.m_seed = 1816885847206313970;
    state.m_optimize_pass =6;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000015f;
    state.m_optimizeValid = true;
} // LoadState
