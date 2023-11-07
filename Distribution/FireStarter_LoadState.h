#pragma once
#include "FireStarterState.h"

// Run date: 11/06/23 17:27:30 Pacific Standard Time
// Run duration = 27611.201582 seconds
// Run generation = 101
// Run evolution = 11
// Run result = 0.00000191
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run seeds = 64
// Run units = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
// Run generations = 100
// Run precision = 0
// Run candidates = 16
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
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_seeds = 64;
    settings.m_units = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 64;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000155
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.318309f;
    data->d[1] = -0.998519f;
    data->d[2] = -1.511014f;
    data->d[3] = -0.486009f;
    data->d[4] = -1.862509f;
    data->d[5] = -0.661901f;
    data->d[6] = -1.296132f;
    data->d[7] = 3.158894f;
    data->d[8] = 0.005344f;
    data->d[9] = 2.147143f;
    data->d[10] = -3.719116f;
    data->d[11] = 1.271083f;
    data->d[12] = -0.277624f;
    data->d[13] = 1.595009f;
    data->d[14] = -0.058678f;
    data->d[15] = 0.268101f;
    data->d[16] = 1.477467f;
    data->d[17] = -0.592209f;
    data->d[18] = -4.661290f;
    data->d[19] = 0.000000f;
    data->d[20] = 0.000014f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation0

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.323599f;
    data->d[1] = 0.923672f;
    data->d[2] = 1.387406f;
    data->d[3] = 0.460392f;
    data->d[4] = 1.724660f;
    data->d[5] = 0.072937f;
    data->d[6] = -1.863900f;
    data->d[7] = 1.689334f;
    data->d[8] = -0.006069f;
    data->d[9] = -14.210855f;
    data->d[10] = -3.865093f;
    data->d[11] = -1.488245f;
    data->d[12] = -2.661572f;
    data->d[13] = 0.727264f;
    data->d[14] = 1.037463f;
    data->d[15] = -1.231422f;
    data->d[16] = -1.007397f;
    data->d[17] = -1.062763f;
    data->d[18] = 1.646335f;
    data->d[19] = 0.517680f;
    data->d[20] = 0.117673f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000191
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.381992f;
    data->d[1] = -0.820100f;
    data->d[2] = -0.398667f;
    data->d[3] = -1.241702f;
    data->d[4] = -0.073035f;
    data->d[5] = -3.130243f;
    data->d[6] = 0.212699f;
    data->d[7] = -0.121530f;
    data->d[8] = -1.638242f;
    data->d[9] = -0.849680f;
    data->d[10] = -1.870031f;
    data->d[11] = -0.242493f;
    data->d[12] = -1.168521f;
    data->d[13] = 0.171243f;
    data->d[14] = -1.504405f;
    data->d[15] = -0.905754f;
    data->d[16] = -0.749589f;
    data->d[17] = -0.623185f;
    data->d[18] = -4.103899f;
    data->d[19] = -0.000000f;
    data->d[20] = -0.523733f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000002f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000002f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 23);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 1, 12);
    instructions->SetOperation(3, 1, 1);
    instructions->SetOperation(4, 0, 28);
    instructions->SetOperation(5, 0, 3);
    instructions->SetOperation(6, 1, 7);
    instructions->SetOperation(7, 1, 15);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 0, 21);
    instructions->SetOperation(10, 0, 11);
    instructions->SetOperation(11, 0, 12);
    instructions->SetOperation(12, 0, 4);
    instructions->SetOperation(13, 1, 8);
    instructions->SetOperation(14, 1, 2);
    instructions->SetOperation(15, 1, 22);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 0, 3);
    instructions->SetOperation(19, 0, 25);
    instructions->SetOperation(20, 0, 17);
    instructions->SetOperation(21, 0, 16);
    instructions->SetOperation(22, 0, 27);
    instructions->SetOperation(23, 1, 12);
    instructions->SetOperation(24, 1, 2);
    instructions->SetOperation(25, 0, 27);
    instructions->SetOperation(26, 1, 10);
    instructions->SetOperation(27, 0, 20);
    instructions->SetOperation(28, 1, 27);
    instructions->SetOperation(29, 1, 26);
    instructions->SetOperation(30, 0, 23);
    instructions->SetOperation(31, 1, 27);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 101;
    state.m_evolution = 11;
    state.m_index = 23;
    state.m_id = 49;
    state.m_copy_id = 46;
    state.m_test = 15;
    state.m_seed = 8438647334482558209;
    state.m_maxResult = 0.000002f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
