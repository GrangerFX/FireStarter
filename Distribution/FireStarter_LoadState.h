#pragma once
#include "FireStarterState.h"

// Run date: 04/22/23 12:07:34 Pacific Daylight Time
// Run duration = 1992.542653 seconds
// Run generation = 208
// Run result = 0.00000107
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run seed = 0
// Run seeds = 1
// Run mode = FIRESTARTER_REVOLVE
// Run tests = 100
// Run units = 4
// Run processes = 0
// Run iterations = 64
// Run candidates = 16
// Run generations = 100
// Run precision = 0
// Run attempts = 64
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

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_seed = 0;
    settings.m_seeds = 1;
    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_tests = 100;
    settings.m_units = 4;
    settings.m_processes = 0;
    settings.m_iterations = 64;
    settings.m_candidates = 16;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_attempts = 64;
    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.351343f;
    data->d[2] = 1.859529f;
    data->d[3] = 0.344874f;
    data->d[4] = -0.143814f;
    data->d[5] = 1.499309f;
    data->d[6] = 0.056119f;
    data->d[7] = 0.108962f;
    data->d[8] = 0.053030f;
    data->d[9] = -162.303574f;
    data->d[10] = 0.005594f;
    data->d[11] = 2.178379f;
    data->d[12] = 2.199816f;
    data->d[13] = 1.112145f;
    data->d[14] = -6.320388f;
    data->d[15] = 0.000203f;
    data->d[16] = -4.105535f;
    data->d[17] = 0.561938f;
    data->d[18] = -0.000000f;
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
    data->d[30] = 0.000001f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000060
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.883885f;
    data->d[2] = -1.126263f;
    data->d[3] = 2.072098f;
    data->d[4] = -0.004288f;
    data->d[5] = 3.310529f;
    data->d[6] = 0.181649f;
    data->d[7] = -1.246113f;
    data->d[8] = 0.670633f;
    data->d[9] = -2.427678f;
    data->d[10] = 1.208321f;
    data->d[11] = -2.309195f;
    data->d[12] = -0.738654f;
    data->d[13] = 1.346308f;
    data->d[14] = -1.535073f;
    data->d[15] = 0.066536f;
    data->d[16] = 0.706841f;
    data->d[17] = -0.130870f;
    data->d[18] = -0.118132f;
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
    data->d[30] = 0.000001f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000107
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 0.026037f;
    data->d[2] = 0.000112f;
    data->d[3] = -0.390865f;
    data->d[4] = 2.032393f;
    data->d[5] = 0.560212f;
    data->d[6] = -0.022797f;
    data->d[7] = -2.063996f;
    data->d[8] = 1.092659f;
    data->d[9] = -1.505030f;
    data->d[10] = 10.907488f;
    data->d[11] = -0.981431f;
    data->d[12] = -1.114613f;
    data->d[13] = 1.131584f;
    data->d[14] = -6.129045f;
    data->d[15] = 0.763346f;
    data->d[16] = 1.170021f;
    data->d[17] = 1.989847f;
    data->d[18] = 0.523599f;
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
    data->d[30] = -0.000000f;
    data->d[31] = 0.000000f;
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
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 0, 17);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 1, 31);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 1, 19);
    instructions->SetOperation(8, 0, 2);
    instructions->SetOperation(9, 1, 6);
    instructions->SetOperation(10, 1, 14);
    instructions->SetOperation(11, 0, 17);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 1, 28);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 0, 24);
    instructions->SetOperation(20, 1, 8);
    instructions->SetOperation(21, 1, 31);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 1, 8);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 1, 12);
    instructions->SetOperation(29, 0, 4);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 208;
    state.m_index = 1;
    state.m_test = 75;
    state.m_seed = 8059306705730385637;
} // LoadState
