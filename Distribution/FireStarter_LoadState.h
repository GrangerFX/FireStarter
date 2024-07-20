#pragma once
#include "FireStarterState.h"

// Run date: 07/13/24 15:37:02 Pacific Daylight Time
// Run duration = 85.290706 seconds
// Run generation = 6
// Run evolution = 0
// Run max result = 0.23798966
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 0
// Run streams = 1
// Run units = 1
// Run states = 1
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

    settings.m_mode = FIRESTARTER_EVOLVE_GPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 0;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
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

// Variation: 0  result = 0.19196796
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.738381f;
    data->d[1] = -0.089730f;
    data->d[2] = 1.931301f;
    data->d[3] = 0.184642f;
    data->d[4] = 0.991426f;
    data->d[5] = 0.725155f;
    data->d[6] = -1.220928f;
    data->d[7] = -0.176703f;
    data->d[8] = -0.148528f;
    data->d[9] = -1.885291f;
    data->d[10] = -0.463049f;
    data->d[11] = -1.400245f;
    data->d[12] = -1.787271f;
    data->d[13] = -1.527692f;
    data->d[14] = 0.699599f;
    data->d[15] = 1.637860f;
    data->d[16] = 1.348499f;
    data->d[17] = -1.656228f;
    data->d[18] = 0.301779f;
    data->d[19] = 0.417812f;
    data->d[20] = 1.603227f;
    data->d[21] = -1.973417f;
    data->d[22] = -1.432228f;
    data->d[23] = 0.052455f;
    data->d[24] = -0.489220f;
    data->d[25] = -1.629449f;
    data->d[26] = -0.336638f;
    data->d[27] = -1.708758f;
    data->d[28] = 1.330390f;
    data->d[29] = -1.325168f;
    *(result->MinResult()) = 0.191968f;
} // LoadVariation0

// Variation: 1  result = 0.18506610
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.328629f;
    data->d[1] = -0.113350f;
    data->d[2] = -0.958592f;
    data->d[3] = -1.114465f;
    data->d[4] = -0.827788f;
    data->d[5] = 0.683300f;
    data->d[6] = -0.651721f;
    data->d[7] = -1.132330f;
    data->d[8] = 0.509348f;
    data->d[9] = -0.730097f;
    data->d[10] = 1.664061f;
    data->d[11] = 0.918210f;
    data->d[12] = 1.227092f;
    data->d[13] = -0.642696f;
    data->d[14] = -0.082491f;
    data->d[15] = -1.631889f;
    data->d[16] = 0.581665f;
    data->d[17] = 1.405158f;
    data->d[18] = 1.130542f;
    data->d[19] = 0.298046f;
    data->d[20] = -1.074122f;
    data->d[21] = 0.670691f;
    data->d[22] = -0.746451f;
    data->d[23] = 0.265948f;
    data->d[24] = -0.433481f;
    data->d[25] = -0.194562f;
    data->d[26] = -1.682972f;
    data->d[27] = 1.577868f;
    data->d[28] = 0.700679f;
    data->d[29] = 0.240480f;
    *(result->MinResult()) = 0.185066f;
} // LoadVariation1

// Variation: 2  result = 0.23798966
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.880673f;
    data->d[1] = 1.066142f;
    data->d[2] = -0.610219f;
    data->d[3] = -0.748636f;
    data->d[4] = 0.871106f;
    data->d[5] = 0.727926f;
    data->d[6] = 0.708864f;
    data->d[7] = -1.137021f;
    data->d[8] = 1.348146f;
    data->d[9] = -0.021571f;
    data->d[10] = 1.344514f;
    data->d[11] = 1.517706f;
    data->d[12] = -1.525719f;
    data->d[13] = -1.958613f;
    data->d[14] = 0.785741f;
    data->d[15] = 1.712267f;
    data->d[16] = 1.211053f;
    data->d[17] = 1.328936f;
    data->d[18] = -0.211440f;
    data->d[19] = 1.284768f;
    data->d[20] = -0.638959f;
    data->d[21] = -1.971486f;
    data->d[22] = 1.150060f;
    data->d[23] = 0.599889f;
    data->d[24] = -0.736425f;
    data->d[25] = 1.886217f;
    data->d[26] = -0.849826f;
    data->d[27] = -0.425724f;
    data->d[28] = 1.193032f;
    data->d[29] = -0.499472f;
    *(result->MinResult()) = 0.237990f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.237990f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 0);
    instructions->SetOperation(1, 0, 0);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 0, 0);
    instructions->SetOperation(5, 0, 0);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 0, 0);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 0, 0);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 0, 0);
    instructions->SetOperation(12, 0, 0);
    instructions->SetOperation(13, 0, 0);
    instructions->SetOperation(14, 0, 0);
    instructions->SetOperation(15, 0, 0);
    instructions->SetOperation(16, 0, 0);
    instructions->SetOperation(17, 0, 0);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 0, 0);
    instructions->SetOperation(20, 0, 0);
    instructions->SetOperation(21, 0, 0);
    instructions->SetOperation(22, 0, 0);
    instructions->SetOperation(23, 0, 0);
    instructions->SetOperation(24, 0, 0);
    instructions->SetOperation(25, 0, 0);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 0);
    instructions->SetOperation(28, 0, 0);
    instructions->SetOperation(29, 0, 0);
    instructions->SetOperation(30, 0, 0);
    instructions->SetOperation(31, 0, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 6;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass =0;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.237990f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
