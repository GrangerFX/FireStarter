#pragma once
#include "FireStarterState.h"

// Run date: 07/05/24 12:59:41 Pacific Daylight Time
// Run duration = 2151.269023 seconds
// Run generation = 828
// Run evolution = 5
// Run max result = 0.00000066
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
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

    settings.m_mode = FIRESTARTER_OPTIMIZE;
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
    data->d[0] = -2.129178f;
    data->d[1] = -1.012415f;
    data->d[2] = 0.867147f;
    data->d[3] = 0.199979f;
    data->d[4] = -0.000000f;
    data->d[5] = -3.058434f;
    data->d[6] = -0.365301f;
    data->d[7] = 0.129367f;
    data->d[8] = 4.311180f;
    data->d[9] = -0.555696f;
    data->d[10] = -2.838372f;
    data->d[11] = -0.273604f;
    data->d[12] = -3.011661f;
    data->d[13] = 1.463667f;
    data->d[14] = -0.069313f;
    data->d[15] = -0.146638f;
    data->d[16] = -0.791761f;
    data->d[17] = -4.010988f;
    data->d[18] = 0.597226f;
    data->d[19] = -1.663712f;
    data->d[20] = -0.199979f;
    data->d[21] = -1.881616f;
    data->d[22] = 1.776748f;
    data->d[23] = -1.793237f;
    data->d[24] = 1.894716f;
    data->d[25] = -1.775629f;
    data->d[26] = -0.458714f;
    data->d[27] = -0.032543f;
    data->d[28] = 0.329622f;
    data->d[29] = 1.047819f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000066
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.771111f;
    data->d[1] = 0.680452f;
    data->d[2] = 0.388772f;
    data->d[3] = -0.254531f;
    data->d[4] = 0.000000f;
    data->d[5] = 1.576236f;
    data->d[6] = 1.441355f;
    data->d[7] = -0.110709f;
    data->d[8] = -0.684412f;
    data->d[9] = 0.057266f;
    data->d[10] = 0.242635f;
    data->d[11] = 0.179346f;
    data->d[12] = -5.563964f;
    data->d[13] = -0.238384f;
    data->d[14] = -0.717692f;
    data->d[15] = 1.062595f;
    data->d[16] = 1.437771f;
    data->d[17] = -1.228376f;
    data->d[18] = 1.493873f;
    data->d[19] = -0.564358f;
    data->d[20] = 0.136399f;
    data->d[21] = -1.809020f;
    data->d[22] = -0.436794f;
    data->d[23] = -1.688434f;
    data->d[24] = -1.228360f;
    data->d[25] = 0.938705f;
    data->d[26] = -1.525582f;
    data->d[27] = 1.624833f;
    data->d[28] = -1.827586f;
    data->d[29] = -0.758645f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000063
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.252932f;
    data->d[1] = -0.365062f;
    data->d[2] = 1.009272f;
    data->d[3] = 0.069075f;
    data->d[4] = 0.000000f;
    data->d[5] = 0.203391f;
    data->d[6] = 1.769639f;
    data->d[7] = -2.080669f;
    data->d[8] = 0.169744f;
    data->d[9] = -0.573942f;
    data->d[10] = -0.973313f;
    data->d[11] = -1.947394f;
    data->d[12] = 1.649825f;
    data->d[13] = -1.050777f;
    data->d[14] = -0.161176f;
    data->d[15] = -0.521693f;
    data->d[16] = 3.642269f;
    data->d[17] = 0.505399f;
    data->d[18] = -0.733472f;
    data->d[19] = 3.377292f;
    data->d[20] = 0.454524f;
    data->d[21] = 0.602281f;
    data->d[22] = 0.430269f;
    data->d[23] = 0.729747f;
    data->d[24] = -1.041657f;
    data->d[25] = -0.295457f;
    data->d[26] = -1.826214f;
    data->d[27] = -1.229542f;
    data->d[28] = -1.486591f;
    data->d[29] = -0.121533f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 7);
    instructions->SetOperation(1, 1, 13);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 1, 6);
    instructions->SetOperation(4, 1, 13);
    instructions->SetOperation(5, 0, 7);
    instructions->SetOperation(6, 0, 20);
    instructions->SetOperation(7, 1, 0);
    instructions->SetOperation(8, 0, 3);
    instructions->SetOperation(9, 0, 27);
    instructions->SetOperation(10, 0, 9);
    instructions->SetOperation(11, 0, 9);
    instructions->SetOperation(12, 0, 17);
    instructions->SetOperation(13, 1, 1);
    instructions->SetOperation(14, 1, 28);
    instructions->SetOperation(15, 1, 4);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 1, 8);
    instructions->SetOperation(18, 0, 10);
    instructions->SetOperation(19, 0, 18);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 1, 5);
    instructions->SetOperation(22, 0, 15);
    instructions->SetOperation(23, 0, 18);
    instructions->SetOperation(24, 0, 1);
    instructions->SetOperation(25, 0, 12);
    instructions->SetOperation(26, 0, 3);
    instructions->SetOperation(27, 1, 27);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 0, 23);
    instructions->SetOperation(30, 1, 6);
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
    state.m_generation = 828;
    state.m_evolution = 5;
    state.m_index = 15;
    state.m_copy_index = 83;
    state.m_id = 83;
    state.m_test = 0;
    state.m_seed = 8319678796660372034;
    state.m_optimize_pass =5;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.001183f;
    state.m_optimizeValid = true;
} // LoadState
