#pragma once
#include "FireStarterState.h"

// Run date: 04/02/23 00:30:59 Pacific Daylight Time
// Run duration = 2993.566194 seconds
// Run generation = 226
// Run result = 0.00000662
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 31
// Run opcodes = 4

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
    settings.m_registers = 31;
    settings.m_opcodes = 4;

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

// Variation: 0  result = 0.00000644
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.246024f;
    data->d[1] = 1.251209f;
    data->d[2] = 0.967068f;
    data->d[3] = -0.874538f;
    data->d[4] = 1.289539f;
    data->d[5] = 0.091479f;
    data->d[6] = -1.312494f;
    data->d[7] = 1.482934f;
    data->d[8] = -1.750704f;
    data->d[9] = -1.386019f;
    data->d[10] = -0.396342f;
    data->d[11] = -0.761320f;
    data->d[12] = -0.086316f;
    data->d[13] = 0.071900f;
    data->d[14] = 0.644151f;
    data->d[15] = 0.196144f;
    data->d[16] = 3.011010f;
    data->d[17] = 2.008373f;
    data->d[18] = 1.381551f;
    data->d[19] = -2.116098f;
    data->d[20] = 0.000001f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000006f;
} // LoadVariation0

// Variation: 1  result = 0.00000238
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.749262f;
    data->d[1] = -0.157451f;
    data->d[2] = 0.851238f;
    data->d[3] = -1.403498f;
    data->d[4] = 0.628759f;
    data->d[5] = -0.037603f;
    data->d[6] = 1.005323f;
    data->d[7] = -1.741124f;
    data->d[8] = 1.429481f;
    data->d[9] = -1.180106f;
    data->d[10] = 0.682881f;
    data->d[11] = 1.217183f;
    data->d[12] = 2.071805f;
    data->d[13] = 2.736569f;
    data->d[14] = 0.269138f;
    data->d[15] = 3.530558f;
    data->d[16] = 0.010736f;
    data->d[17] = -1.178059f;
    data->d[18] = 0.279871f;
    data->d[19] = 0.150022f;
    data->d[20] = -0.118131f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation1

// Variation: 2  result = 0.00000662
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.213780f;
    data->d[1] = 1.850992f;
    data->d[2] = 1.035953f;
    data->d[3] = -1.031098f;
    data->d[4] = -1.315658f;
    data->d[5] = 0.108063f;
    data->d[6] = -1.873559f;
    data->d[7] = -0.806713f;
    data->d[8] = -1.181765f;
    data->d[9] = -1.358186f;
    data->d[10] = -1.481589f;
    data->d[11] = 1.969741f;
    data->d[12] = -0.145199f;
    data->d[13] = 0.289832f;
    data->d[14] = -2.769575f;
    data->d[15] = 0.175641f;
    data->d[16] = 1.042118f;
    data->d[17] = 1.809554f;
    data->d[18] = 0.126357f;
    data->d[19] = 0.236553f;
    data->d[20] = 0.523599f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    data->d[29] = 0.000000f;
    data->d[30] = 0.000000f;
    data->d[31] = 0.000000f;
    *(result->MinResult()) = 0.000007f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000007f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 16);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 1, 23);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 10);
    instructions->SetOperation(5, 1, 19);
    instructions->SetOperation(6, 0, 25);
    instructions->SetOperation(7, 1, 12);
    instructions->SetOperation(8, 0, 15);
    instructions->SetOperation(9, 0, 12);
    instructions->SetOperation(10, 0, 20);
    instructions->SetOperation(11, 1, 1);
    instructions->SetOperation(12, 0, 11);
    instructions->SetOperation(13, 0, 17);
    instructions->SetOperation(14, 0, 8);
    instructions->SetOperation(15, 1, 3);
    instructions->SetOperation(16, 0, 27);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 1, 3);
    instructions->SetOperation(19, 0, 26);
    instructions->SetOperation(20, 1, 4);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 29);
    instructions->SetOperation(23, 0, 10);
    instructions->SetOperation(24, 1, 19);
    instructions->SetOperation(25, 0, 8);
    instructions->SetOperation(26, 0, 15);
    instructions->SetOperation(27, 0, 29);
    instructions->SetOperation(28, 0, 23);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 0, 18);
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
    state.m_generation = 226;
    state.m_index = 0;
    state.m_test = 98;
    state.m_seed = 12445693376287109685;
} // LoadState
