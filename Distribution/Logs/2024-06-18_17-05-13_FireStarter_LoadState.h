#pragma once
#include "FireStarterState.h"

// Run date: 06/18/24 17:05:13 Pacific Daylight Time
// Run duration = 2724.109120 seconds
// Run generation = 313
// Run evolution = 11
// Run max result = 0.00000060
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = 1.007903f;
    data->d[2] = -0.173169f;
    data->d[3] = -0.278969f;
    data->d[4] = -1.569458f;
    data->d[5] = -2.284631f;
    data->d[6] = -1.405134f;
    data->d[7] = -8.086736f;
    data->d[8] = -8.668726f;
    data->d[9] = 5.991168f;
    data->d[10] = -1.842047f;
    data->d[11] = -0.994875f;
    data->d[12] = -0.551565f;
    data->d[13] = -0.897357f;
    data->d[14] = 0.695001f;
    data->d[15] = -8.554276f;
    data->d[16] = -1.141276f;
    data->d[17] = -1.278212f;
    data->d[18] = 0.175069f;
    data->d[19] = -0.175069f;
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

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090658f;
    data->d[1] = -0.182117f;
    data->d[2] = 1.217977f;
    data->d[3] = 0.792211f;
    data->d[4] = -1.942691f;
    data->d[5] = 0.650294f;
    data->d[6] = 3.151493f;
    data->d[7] = -0.752084f;
    data->d[8] = 1.750700f;
    data->d[9] = -7.566556f;
    data->d[10] = -2.871281f;
    data->d[11] = -0.376690f;
    data->d[12] = -1.054861f;
    data->d[13] = -3.036748f;
    data->d[14] = 0.285243f;
    data->d[15] = -0.283103f;
    data->d[16] = -0.744477f;
    data->d[17] = 0.032874f;
    data->d[18] = 2.963025f;
    data->d[19] = -3.081156f;
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

// Variation: 2  result = 0.00000060
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.457692f;
    data->d[2] = -0.768059f;
    data->d[3] = -0.311884f;
    data->d[4] = -1.212539f;
    data->d[5] = -2.644481f;
    data->d[6] = 12.258327f;
    data->d[7] = -1.243040f;
    data->d[8] = -1.699683f;
    data->d[9] = -4.369490f;
    data->d[10] = -1.879039f;
    data->d[11] = -1.269586f;
    data->d[12] = 1.750696f;
    data->d[13] = 1.079151f;
    data->d[14] = 0.137728f;
    data->d[15] = -4.766102f;
    data->d[16] = -1.180035f;
    data->d[17] = 0.702666f;
    data->d[18] = 0.600106f;
    data->d[19] = -0.076507f;
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
    instructions->SetOperation(0, 1, 13);
    instructions->SetOperation(1, 0, 3);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 19);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 0, 20);
    instructions->SetOperation(6, 1, 21);
    instructions->SetOperation(7, 0, 14);
    instructions->SetOperation(8, 1, 3);
    instructions->SetOperation(9, 0, 3);
    instructions->SetOperation(10, 1, 28);
    instructions->SetOperation(11, 0, 21);
    instructions->SetOperation(12, 0, 27);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 12);
    instructions->SetOperation(16, 1, 3);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 1, 7);
    instructions->SetOperation(20, 0, 8);
    instructions->SetOperation(21, 0, 28);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 1, 25);
    instructions->SetOperation(24, 0, 7);
    instructions->SetOperation(25, 0, 1);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 1, 18);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 0, 6);
    instructions->SetOperation(30, 1, 24);
    instructions->SetOperation(31, 1, 23);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 313;
    state.m_evolution = 11;
    state.m_index = 15;
    state.m_copy_index = 22;
    state.m_id = 22;
    state.m_test = 0;
    state.m_seed = 7388293400512849907;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.000002f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.000704f;
    state.m_optimizeValid = true;
} // LoadState
