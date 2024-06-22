#pragma once
#include "FireStarterState.h"

// Run date: 06/22/24 11:43:17 Pacific Daylight Time
// Run duration = 16676.823152 seconds
// Run generation = 50
// Run evolution = 3
// Run max result = 0.00000030
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 8
// Run states = 16
// Run generations = 0
// Run population = 278528
// Run iterations = 64
// Run passes = 500
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
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 8;
    settings.m_states = 16;
    settings.m_generations = 0;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000009
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.183207f;
    data->d[2] = -1.631572f;
    data->d[3] = 4.662298f;
    data->d[4] = 0.019268f;
    data->d[5] = -1.407462f;
    data->d[6] = -1.001024f;
    data->d[7] = 0.462363f;
    data->d[8] = 0.292936f;
    data->d[9] = 0.212279f;
    data->d[10] = 1.210567f;
    data->d[11] = -6.229338f;
    data->d[12] = 0.236647f;
    data->d[13] = 0.447541f;
    data->d[14] = -4.670742f;
    data->d[15] = 6.727096f;
    data->d[16] = -0.233287f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = 0.435476f;
    data->d[2] = -3.172347f;
    data->d[3] = 0.012483f;
    data->d[4] = -4.690432f;
    data->d[5] = 2.334183f;
    data->d[6] = 0.541126f;
    data->d[7] = 2.031439f;
    data->d[8] = -0.047938f;
    data->d[9] = 0.130746f;
    data->d[10] = 6.828321f;
    data->d[11] = -0.474754f;
    data->d[12] = 1.367440f;
    data->d[13] = -1.485070f;
    data->d[14] = 0.488832f;
    data->d[15] = -1.768637f;
    data->d[16] = 0.572992f;
    data->d[17] = -0.118132f;
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
    data->d[29] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000030
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -0.398044f;
    data->d[2] = 4.313286f;
    data->d[3] = -0.034784f;
    data->d[4] = 2.508443f;
    data->d[5] = -1.506649f;
    data->d[6] = 1.744715f;
    data->d[7] = -2.545364f;
    data->d[8] = -0.327943f;
    data->d[9] = -0.060565f;
    data->d[10] = -0.909041f;
    data->d[11] = 6.629338f;
    data->d[12] = -4.539723f;
    data->d[13] = 0.004897f;
    data->d[14] = 1.234754f;
    data->d[15] = 6.110508f;
    data->d[16] = -0.526745f;
    data->d[17] = 0.523599f;
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
    data->d[29] = 0.000000f;
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
    instructions->SetOperation(0, 1, 6);
    instructions->SetOperation(1, 0, 18);
    instructions->SetOperation(2, 0, 6);
    instructions->SetOperation(3, 1, 8);
    instructions->SetOperation(4, 0, 21);
    instructions->SetOperation(5, 0, 9);
    instructions->SetOperation(6, 1, 20);
    instructions->SetOperation(7, 1, 12);
    instructions->SetOperation(8, 1, 29);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 25);
    instructions->SetOperation(12, 0, 25);
    instructions->SetOperation(13, 0, 27);
    instructions->SetOperation(14, 1, 22);
    instructions->SetOperation(15, 0, 29);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 0, 25);
    instructions->SetOperation(18, 1, 10);
    instructions->SetOperation(19, 0, 14);
    instructions->SetOperation(20, 0, 23);
    instructions->SetOperation(21, 1, 12);
    instructions->SetOperation(22, 0, 14);
    instructions->SetOperation(23, 1, 4);
    instructions->SetOperation(24, 0, 29);
    instructions->SetOperation(25, 0, 1);
    instructions->SetOperation(26, 0, 20);
    instructions->SetOperation(27, 0, 6);
    instructions->SetOperation(28, 1, 23);
    instructions->SetOperation(29, 0, 13);
    instructions->SetOperation(30, 0, 18);
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
    state.m_generation = 50;
    state.m_evolution = 3;
    state.m_index = 2;
    state.m_copy_index = 168;
    state.m_id = 168;
    state.m_test = 15;
    state.m_seed = 4190658118494884799;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000048f;
    state.m_optimizeValid = true;
} // LoadState
