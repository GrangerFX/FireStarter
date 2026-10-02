#pragma once
#include "FireStarterState.h"

// Run date: 03/19/24 17:27:09 Pacific Daylight Time
// Run duration = 22613.644014 seconds
// Run generation = 562
// Run evolution = 9
// Run max result = 0.00001192
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
// Run evolveSeed = 2
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
    settings.m_evolveSeed = 2;
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

// Variation: 0  result = 0.00000519
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.415582f;
    data->d[1] = -0.537064f;
    data->d[2] = 2.782611f;
    data->d[3] = 0.045215f;
    data->d[4] = 0.149590f;
    data->d[5] = -2.103513f;
    data->d[6] = 0.000267f;
    data->d[7] = 3.819626f;
    data->d[8] = -175.746536f;
    data->d[9] = 0.595003f;
    data->d[10] = -0.676757f;
    data->d[11] = -0.878204f;
    data->d[12] = -2.299135f;
    data->d[13] = 0.154195f;
    data->d[14] = -1.119340f;
    data->d[15] = -0.733134f;
    data->d[16] = 1.580343f;
    data->d[17] = 0.403729f;
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
} // LoadVariation0

// Variation: 1  result = 0.00000304
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.304991f;
    data->d[1] = 0.279624f;
    data->d[2] = -0.711693f;
    data->d[3] = -3.591337f;
    data->d[4] = 2.732734f;
    data->d[5] = -1.468910f;
    data->d[6] = 0.001233f;
    data->d[7] = 0.632093f;
    data->d[8] = -5.449854f;
    data->d[9] = 0.945751f;
    data->d[10] = -1.320724f;
    data->d[11] = -0.754530f;
    data->d[12] = -1.334814f;
    data->d[13] = -0.118859f;
    data->d[14] = 1.010577f;
    data->d[15] = 1.295197f;
    data->d[16] = -1.050753f;
    data->d[17] = 1.031776f;
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

// Variation: 2  result = 0.00001192
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.853473f;
    data->d[1] = 0.519853f;
    data->d[2] = -0.632568f;
    data->d[3] = -1.773441f;
    data->d[4] = 1.432573f;
    data->d[5] = -0.788847f;
    data->d[6] = -0.002508f;
    data->d[7] = 0.876294f;
    data->d[8] = -3.785009f;
    data->d[9] = -0.492426f;
    data->d[10] = 0.856951f;
    data->d[11] = 1.385673f;
    data->d[12] = -1.879616f;
    data->d[13] = -0.362794f;
    data->d[14] = 1.988507f;
    data->d[15] = -0.994681f;
    data->d[16] = 1.975271f;
    data->d[17] = 1.024988f;
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
    *(result->MinResult()) = 0.000012f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000012f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 7);
    instructions->SetOperation(1, 0, 10);
    instructions->SetOperation(2, 1, 13);
    instructions->SetOperation(3, 0, 25);
    instructions->SetOperation(4, 1, 6);
    instructions->SetOperation(5, 1, 13);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 2);
    instructions->SetOperation(8, 1, 28);
    instructions->SetOperation(9, 0, 2);
    instructions->SetOperation(10, 0, 25);
    instructions->SetOperation(11, 0, 11);
    instructions->SetOperation(12, 1, 20);
    instructions->SetOperation(13, 0, 10);
    instructions->SetOperation(14, 1, 14);
    instructions->SetOperation(15, 0, 12);
    instructions->SetOperation(16, 1, 27);
    instructions->SetOperation(17, 0, 12);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 1, 23);
    instructions->SetOperation(22, 0, 7);
    instructions->SetOperation(23, 1, 18);
    instructions->SetOperation(24, 0, 1);
    instructions->SetOperation(25, 0, 2);
    instructions->SetOperation(26, 0, 2);
    instructions->SetOperation(27, 1, 22);
    instructions->SetOperation(28, 0, 10);
    instructions->SetOperation(29, 0, 1);
    instructions->SetOperation(30, 0, 20);
    instructions->SetOperation(31, 1, 3);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 562;
    state.m_evolution = 9;
    state.m_index = 6;
    state.m_copy_index = 2;
    state.m_id = 2;
    state.m_test = 14;
    state.m_seed = 16963541024277544809;
    state.m_optimize_pass =3;
    state.m_oldResult = 0.000022f;
    state.m_maxResult = 0.000012f;
    state.m_evolveWeight = 0.007213f;
    state.m_optimizeValid = true;
} // LoadState
