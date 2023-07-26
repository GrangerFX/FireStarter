#pragma once
#include "FireStarterState.h"

// Run date: 07/26/23 09:09:10 Pacific Daylight Time
// Run duration = 834.535487 seconds
// Run generation = 105
// Run evolution = 0
// Run result = 0.00000465
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 0
// Run optimizeSeed = 0
// Run seeds = 1
// Run tests = 64
// Run units = 8
// Run processes = 8
// Run population = 278528
// Run iterations = 64
// Run generations = 100
// Run precision = 0
// Run candidates = 16
// Run attempts = 32

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
    settings.m_seed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 1;
    settings.m_tests = 64;
    settings.m_units = 8;
    settings.m_processes = 8;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000155
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.433075f;
    data->d[1] = -1.360544f;
    data->d[2] = -0.975100f;
    data->d[3] = -1.291840f;
    data->d[4] = -1.114733f;
    data->d[5] = 0.034684f;
    data->d[6] = -1.497347f;
    data->d[7] = -1.029089f;
    data->d[8] = 0.010482f;
    data->d[9] = 0.863513f;
    data->d[10] = -1.962772f;
    data->d[11] = 2.320672f;
    data->d[12] = -1.592047f;
    data->d[13] = 0.023404f;
    data->d[14] = -1.061554f;
    data->d[15] = -1.492148f;
    data->d[16] = 2.616473f;
    data->d[17] = 0.101063f;
    data->d[18] = -0.974835f;
    data->d[19] = -0.000000f;
    data->d[20] = 0.000000f;
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

// Variation: 1  result = 0.00000465
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.215098f;
    data->d[1] = -0.664796f;
    data->d[2] = -0.440542f;
    data->d[3] = 0.791273f;
    data->d[4] = -0.143978f;
    data->d[5] = -1.562745f;
    data->d[6] = 1.736045f;
    data->d[7] = -1.174210f;
    data->d[8] = 1.694446f;
    data->d[9] = -0.094997f;
    data->d[10] = 2.493437f;
    data->d[11] = -2.837037f;
    data->d[12] = 0.001874f;
    data->d[13] = -0.584086f;
    data->d[14] = -0.291906f;
    data->d[15] = 0.509195f;
    data->d[16] = 1.421544f;
    data->d[17] = 1.872581f;
    data->d[18] = -0.351124f;
    data->d[19] = -0.118133f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000005f;
} // LoadVariation1

// Variation: 2  result = 0.00000310
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.537976f;
    data->d[1] = -1.408417f;
    data->d[2] = 1.135741f;
    data->d[3] = -0.955706f;
    data->d[4] = -1.294961f;
    data->d[5] = -0.065143f;
    data->d[6] = 1.727130f;
    data->d[7] = 1.050327f;
    data->d[8] = -1.051150f;
    data->d[9] = 0.178146f;
    data->d[10] = -3.635235f;
    data->d[11] = 2.225261f;
    data->d[12] = -0.164445f;
    data->d[13] = 0.036295f;
    data->d[14] = 1.074129f;
    data->d[15] = 0.019425f;
    data->d[16] = 0.180519f;
    data->d[17] = -0.188649f;
    data->d[18] = -0.133275f;
    data->d[19] = 0.523598f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000005f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 1);
    instructions->SetOperation(1, 1, 18);
    instructions->SetOperation(2, 0, 24);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 26);
    instructions->SetOperation(5, 1, 5);
    instructions->SetOperation(6, 0, 9);
    instructions->SetOperation(7, 1, 25);
    instructions->SetOperation(8, 0, 8);
    instructions->SetOperation(9, 0, 25);
    instructions->SetOperation(10, 1, 10);
    instructions->SetOperation(11, 0, 23);
    instructions->SetOperation(12, 0, 12);
    instructions->SetOperation(13, 1, 20);
    instructions->SetOperation(14, 0, 11);
    instructions->SetOperation(15, 0, 13);
    instructions->SetOperation(16, 1, 25);
    instructions->SetOperation(17, 0, 9);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 1, 10);
    instructions->SetOperation(20, 0, 14);
    instructions->SetOperation(21, 0, 25);
    instructions->SetOperation(22, 1, 15);
    instructions->SetOperation(23, 1, 19);
    instructions->SetOperation(24, 0, 17);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 0, 10);
    instructions->SetOperation(27, 1, 26);
    instructions->SetOperation(28, 0, 24);
    instructions->SetOperation(29, 0, 17);
    instructions->SetOperation(30, 0, 21);
    instructions->SetOperation(31, 1, 22);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 105;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_test = 49;
    state.m_seed = 14230390224545337846;
} // LoadState
