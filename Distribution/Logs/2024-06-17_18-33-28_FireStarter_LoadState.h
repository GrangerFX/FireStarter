#pragma once
#include "FireStarterState.h"

// Run date: 06/17/24 18:33:28 Pacific Daylight Time
// Run duration = 191.388601 seconds
// Run generation = 8
// Run evolution = 1
// Run max result = 0.00016791
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

// Variation: 0  result = 0.00016791
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.695924f;
    data->d[1] = 0.098042f;
    data->d[2] = -0.694174f;
    data->d[3] = -0.796171f;
    data->d[4] = 2.104229f;
    data->d[5] = 0.604753f;
    data->d[6] = -1.229584f;
    data->d[7] = 1.468950f;
    data->d[8] = 2.303108f;
    data->d[9] = -0.716467f;
    data->d[10] = 1.747939f;
    data->d[11] = -0.221007f;
    data->d[12] = -0.156617f;
    data->d[13] = -0.831983f;
    data->d[14] = -0.019786f;
    data->d[15] = -0.514769f;
    data->d[16] = 15.467291f;
    data->d[17] = 5.745551f;
    data->d[18] = -3.921978f;
    data->d[19] = 0.430896f;
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
    *(result->MinResult()) = 0.000168f;
} // LoadVariation0

// Variation: 1  result = 0.00009108
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.988407f;
    data->d[1] = -0.106151f;
    data->d[2] = -0.498994f;
    data->d[3] = 0.830132f;
    data->d[4] = -0.964561f;
    data->d[5] = 1.208458f;
    data->d[6] = -2.798659f;
    data->d[7] = 0.880533f;
    data->d[8] = -0.047837f;
    data->d[9] = 1.033418f;
    data->d[10] = -0.056806f;
    data->d[11] = -4.243221f;
    data->d[12] = -1.467469f;
    data->d[13] = -0.285986f;
    data->d[14] = -3.818542f;
    data->d[15] = 2.112522f;
    data->d[16] = -1.061674f;
    data->d[17] = -4.514578f;
    data->d[18] = -0.969817f;
    data->d[19] = -0.005712f;
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
    *(result->MinResult()) = 0.000091f;
} // LoadVariation1

// Variation: 2  result = 0.00010622
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.200822f;
    data->d[1] = 0.075573f;
    data->d[2] = -1.360440f;
    data->d[3] = 1.266989f;
    data->d[4] = -0.814662f;
    data->d[5] = 0.465254f;
    data->d[6] = -1.573575f;
    data->d[7] = 0.921391f;
    data->d[8] = 2.469110f;
    data->d[9] = -3.715555f;
    data->d[10] = -1.534663f;
    data->d[11] = 0.664893f;
    data->d[12] = -1.501056f;
    data->d[13] = 0.483584f;
    data->d[14] = 0.157922f;
    data->d[15] = 0.710726f;
    data->d[16] = 9.380381f;
    data->d[17] = -0.386616f;
    data->d[18] = -7.671939f;
    data->d[19] = 1.231680f;
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
    *(result->MinResult()) = 0.000106f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000168f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 20);
    instructions->SetOperation(1, 0, 13);
    instructions->SetOperation(2, 1, 11);
    instructions->SetOperation(3, 0, 11);
    instructions->SetOperation(4, 0, 17);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 0, 18);
    instructions->SetOperation(7, 1, 2);
    instructions->SetOperation(8, 1, 22);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 1, 0);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 21);
    instructions->SetOperation(13, 0, 12);
    instructions->SetOperation(14, 1, 8);
    instructions->SetOperation(15, 0, 3);
    instructions->SetOperation(16, 0, 10);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 5);
    instructions->SetOperation(19, 0, 18);
    instructions->SetOperation(20, 0, 5);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 27);
    instructions->SetOperation(23, 0, 13);
    instructions->SetOperation(24, 0, 3);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 0);
    instructions->SetOperation(27, 0, 11);
    instructions->SetOperation(28, 0, 18);
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
    state.m_generation = 8;
    state.m_evolution = 1;
    state.m_index = 1;
    state.m_copy_index = 9;
    state.m_id = 9;
    state.m_test = 0;
    state.m_seed = 15716507011994777626;
    state.m_optimize_pass =0;
    state.m_oldResult = 0.001270f;
    state.m_maxResult = 0.000168f;
    state.m_evolveWeight = 0.001270f;
    state.m_optimizeValid = true;
} // LoadState
