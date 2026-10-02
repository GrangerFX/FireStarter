#pragma once
#include "FireStarterState.h"

// Run date: 06/18/24 21:12:00 Pacific Daylight Time
// Run duration = 1118.428891 seconds
// Run generation = 138
// Run evolution = 6
// Run max result = 0.00000930
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

// Variation: 0  result = 0.00000852
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 0.229142f;
    data->d[2] = 0.405427f;
    data->d[3] = 1.911806f;
    data->d[4] = -0.811894f;
    data->d[5] = -1.471651f;
    data->d[6] = 0.286559f;
    data->d[7] = -2.163249f;
    data->d[8] = 0.637519f;
    data->d[9] = -0.000000f;
    data->d[10] = -1.530569f;
    data->d[11] = -0.803662f;
    data->d[12] = 0.803662f;
    data->d[13] = 4.955423f;
    data->d[14] = 0.737473f;
    data->d[15] = -5.110663f;
    data->d[16] = 8.667828f;
    data->d[17] = 0.209439f;
    data->d[18] = -1.243487f;
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
    *(result->MinResult()) = 0.000009f;
} // LoadVariation0

// Variation: 1  result = 0.00000489
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090683f;
    data->d[1] = 0.376661f;
    data->d[2] = -0.302486f;
    data->d[3] = -1.866386f;
    data->d[4] = -1.547209f;
    data->d[5] = -0.925035f;
    data->d[6] = 2.347077f;
    data->d[7] = -1.131721f;
    data->d[8] = 0.118307f;
    data->d[9] = -0.000079f;
    data->d[10] = -20.365013f;
    data->d[11] = -0.160526f;
    data->d[12] = 0.042368f;
    data->d[13] = -0.096829f;
    data->d[14] = -1.505048f;
    data->d[15] = 0.291339f;
    data->d[16] = 1.183948f;
    data->d[17] = -4.253147f;
    data->d[18] = -3.233162f;
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
    *(result->MinResult()) = 0.000005f;
} // LoadVariation1

// Variation: 2  result = 0.00000930
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617992f;
    data->d[1] = -0.108065f;
    data->d[2] = 1.150640f;
    data->d[3] = 0.862334f;
    data->d[4] = -0.982604f;
    data->d[5] = 0.043222f;
    data->d[6] = -2.663878f;
    data->d[7] = -0.306692f;
    data->d[8] = 0.302792f;
    data->d[9] = 0.000025f;
    data->d[10] = 1.656419f;
    data->d[11] = -0.881003f;
    data->d[12] = 1.404603f;
    data->d[13] = 1.061632f;
    data->d[14] = -1.946903f;
    data->d[15] = 0.949162f;
    data->d[16] = -0.398015f;
    data->d[17] = 2.460219f;
    data->d[18] = 1.580884f;
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
    *(result->MinResult()) = 0.000009f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000009f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 24);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 0, 11);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 1, 1);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 1, 15);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 1, 22);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 1, 11);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 1, 29);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 2);
    instructions->SetOperation(20, 1, 8);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 26);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 0, 3);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 11);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 0, 15);
    instructions->SetOperation(30, 0, 2);
    instructions->SetOperation(31, 1, 29);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 138;
    state.m_evolution = 6;
    state.m_index = 6;
    state.m_copy_index = 9;
    state.m_id = 9;
    state.m_test = 0;
    state.m_seed = 6030205848941766171;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000018f;
    state.m_maxResult = 0.000009f;
    state.m_evolveWeight = 0.002314f;
    state.m_optimizeValid = true;
} // LoadState
