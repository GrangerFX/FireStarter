#pragma once
#include "FireStarterState.h"

// Run date: 08/10/24 11:20:46 Pacific Daylight Time
// Run duration = 481.786089 seconds
// Run generation = 40
// Run evolution = 0
// Run max result = 0.21094815
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

// Variation: 0  result = 0.14177459
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -4.268861f;
    data->d[1] = 1.159213f;
    data->d[2] = 1.293142f;
    data->d[3] = 0.452434f;
    data->d[4] = -0.607016f;
    data->d[5] = -1.766486f;
    data->d[6] = 0.912277f;
    data->d[7] = -1.545861f;
    data->d[8] = -1.349838f;
    data->d[9] = -1.580574f;
    data->d[10] = 1.406815f;
    data->d[11] = 1.947746f;
    data->d[12] = -1.676159f;
    data->d[13] = -0.865611f;
    data->d[14] = 0.417380f;
    data->d[15] = 1.970374f;
    data->d[16] = 0.183157f;
    data->d[17] = 1.302172f;
    data->d[18] = -1.511937f;
    data->d[19] = -1.505073f;
    data->d[20] = 0.065652f;
    data->d[21] = 1.058329f;
    data->d[22] = 1.072727f;
    data->d[23] = 0.482613f;
    data->d[24] = -1.637661f;
    data->d[25] = -1.711995f;
    data->d[26] = 1.477730f;
    data->d[27] = -1.378315f;
    data->d[28] = -0.145412f;
    data->d[29] = -0.322922f;
    *(result->MinResult()) = 0.141775f;
} // LoadVariation0

// Variation: 1  result = 0.20429885
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -9.126298f;
    data->d[1] = -1.920158f;
    data->d[2] = -0.348512f;
    data->d[3] = 0.540408f;
    data->d[4] = 1.791550f;
    data->d[5] = -1.922921f;
    data->d[6] = -0.448783f;
    data->d[7] = 1.061385f;
    data->d[8] = -1.831356f;
    data->d[9] = 0.742547f;
    data->d[10] = 0.521784f;
    data->d[11] = -0.856619f;
    data->d[12] = -0.527324f;
    data->d[13] = -1.610433f;
    data->d[14] = -0.432051f;
    data->d[15] = 1.978788f;
    data->d[16] = -1.928741f;
    data->d[17] = -0.126398f;
    data->d[18] = -1.161377f;
    data->d[19] = -0.235072f;
    data->d[20] = 0.394842f;
    data->d[21] = -0.200341f;
    data->d[22] = -0.851362f;
    data->d[23] = 1.459817f;
    data->d[24] = -1.887723f;
    data->d[25] = 0.445570f;
    data->d[26] = 1.689017f;
    data->d[27] = 0.350947f;
    data->d[28] = -0.423530f;
    data->d[29] = 1.876572f;
    *(result->MinResult()) = 0.204299f;
} // LoadVariation1

// Variation: 2  result = 0.21094815
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 2.875064f;
    data->d[1] = -1.111095f;
    data->d[2] = -0.709104f;
    data->d[3] = -1.838297f;
    data->d[4] = -0.338424f;
    data->d[5] = 0.824333f;
    data->d[6] = 0.574431f;
    data->d[7] = 1.405652f;
    data->d[8] = -0.021589f;
    data->d[9] = 1.348916f;
    data->d[10] = 0.655269f;
    data->d[11] = -0.450585f;
    data->d[12] = -0.162669f;
    data->d[13] = 1.304591f;
    data->d[14] = 1.528868f;
    data->d[15] = -0.442180f;
    data->d[16] = 0.752468f;
    data->d[17] = -0.949359f;
    data->d[18] = -0.464301f;
    data->d[19] = 0.983362f;
    data->d[20] = -1.622097f;
    data->d[21] = -1.065541f;
    data->d[22] = -0.803980f;
    data->d[23] = 0.127780f;
    data->d[24] = -1.106763f;
    data->d[25] = 1.099782f;
    data->d[26] = -0.697431f;
    data->d[27] = 0.829764f;
    data->d[28] = 1.309067f;
    data->d[29] = 0.024105f;
    *(result->MinResult()) = 0.210948f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.210948f;
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
    state.m_generation = 40;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass =0;
    state.m_oldResult = 10.000000f;
    state.m_maxResult = 0.210948f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
