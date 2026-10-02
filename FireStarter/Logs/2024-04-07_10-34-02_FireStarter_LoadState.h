#pragma once
#include "FireStarterState.h"

// Run date: 04/07/24 10:34:02 Pacific Daylight Time
// Run duration = 17782.739145 seconds
// Run generation = 1283
// Run evolution = 13
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
    settings.m_precision = 0;
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
    data->d[1] = 0.546350f;
    data->d[2] = 6.316310f;
    data->d[3] = -0.001000f;
    data->d[4] = -1.854688f;
    data->d[5] = 0.661119f;
    data->d[6] = 2.089044f;
    data->d[7] = 1.477680f;
    data->d[8] = -0.060813f;
    data->d[9] = 1.093751f;
    data->d[10] = -0.348051f;
    data->d[11] = -0.238459f;
    data->d[12] = -19.921404f;
    data->d[13] = -20.116472f;
    data->d[14] = 14.302883f;
    data->d[15] = 44701.316406f;
    data->d[16] = 3.760509f;
    data->d[17] = -0.018048f;
    data->d[18] = -2.567071f;
    data->d[19] = -0.000000f;
    data->d[20] = -1.257841f;
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

// Variation: 1  result = 0.00000060
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = -0.568728f;
    data->d[2] = 0.467712f;
    data->d[3] = 0.086991f;
    data->d[4] = 2.134516f;
    data->d[5] = -0.566600f;
    data->d[6] = -0.844337f;
    data->d[7] = 0.982015f;
    data->d[8] = -0.681626f;
    data->d[9] = 0.680771f;
    data->d[10] = 1.465870f;
    data->d[11] = -1.804922f;
    data->d[12] = -0.360283f;
    data->d[13] = 10992.272461f;
    data->d[14] = 5.312820f;
    data->d[15] = 8.853793f;
    data->d[16] = -11.372463f;
    data->d[17] = -0.000118f;
    data->d[18] = 1.773188f;
    data->d[19] = 0.100033f;
    data->d[20] = -1.180924f;
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
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = -1.430382f;
    data->d[2] = -0.042942f;
    data->d[3] = 0.104693f;
    data->d[4] = -49.783665f;
    data->d[5] = 0.423590f;
    data->d[6] = -0.854105f;
    data->d[7] = -0.503889f;
    data->d[8] = -1.173202f;
    data->d[9] = 2.512776f;
    data->d[10] = -2.134267f;
    data->d[11] = 0.430613f;
    data->d[12] = -0.000010f;
    data->d[13] = -64724.179688f;
    data->d[14] = 14.242315f;
    data->d[15] = -0.101048f;
    data->d[16] = -5.839455f;
    data->d[17] = -1.256042f;
    data->d[18] = -0.694322f;
    data->d[19] = 0.194772f;
    data->d[20] = 2.688264f;
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
    state.m_maxResult = 0.000001f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 18);
    instructions->SetOperation(1, 0, 19);
    instructions->SetOperation(2, 0, 2);
    instructions->SetOperation(3, 0, 13);
    instructions->SetOperation(4, 0, 13);
    instructions->SetOperation(5, 0, 4);
    instructions->SetOperation(6, 1, 9);
    instructions->SetOperation(7, 0, 14);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 0, 7);
    instructions->SetOperation(10, 0, 0);
    instructions->SetOperation(11, 0, 7);
    instructions->SetOperation(12, 1, 25);
    instructions->SetOperation(13, 1, 24);
    instructions->SetOperation(14, 1, 29);
    instructions->SetOperation(15, 0, 23);
    instructions->SetOperation(16, 0, 15);
    instructions->SetOperation(17, 0, 9);
    instructions->SetOperation(18, 0, 6);
    instructions->SetOperation(19, 1, 11);
    instructions->SetOperation(20, 0, 29);
    instructions->SetOperation(21, 1, 3);
    instructions->SetOperation(22, 0, 13);
    instructions->SetOperation(23, 0, 1);
    instructions->SetOperation(24, 1, 14);
    instructions->SetOperation(25, 1, 25);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 24);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 0, 25);
    instructions->SetOperation(30, 1, 21);
    instructions->SetOperation(31, 0, 28);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 1283;
    state.m_evolution = 13;
    state.m_index = 8;
    state.m_copy_index = 13;
    state.m_id = 13;
    state.m_test = 15;
    state.m_seed = 3015493622234839758;
    state.m_optimize_pass =6;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000001f;
    state.m_evolveWeight = 0.001299f;
    state.m_optimizeValid = true;
} // LoadState
