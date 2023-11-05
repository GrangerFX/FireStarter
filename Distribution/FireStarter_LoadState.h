#pragma once
#include "FireStarterState.h"

// Run date: 11/04/23 19:19:31 Pacific Daylight Time
// Run duration = 21334.007195 seconds
// Run generation = 113
// Run evolution = 8
// Run result = 0.00000066
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
// Run seeds = 64
// Run tests = 16
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
    settings.m_seeds = 64;
    settings.m_tests = 16;
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

// Variation: 0  result = 0.00000066
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.791811f;
    data->d[1] = -0.163670f;
    data->d[2] = 1.426994f;
    data->d[3] = -0.158502f;
    data->d[4] = 1.452873f;
    data->d[5] = 0.646590f;
    data->d[6] = 1.994940f;
    data->d[7] = 1.668057f;
    data->d[8] = 0.902109f;
    data->d[9] = 0.026675f;
    data->d[10] = 1.882974f;
    data->d[11] = 0.030561f;
    data->d[12] = -1.280291f;
    data->d[13] = -2.557654f;
    data->d[14] = 0.240133f;
    data->d[15] = 0.761389f;
    data->d[16] = 3.100415f;
    data->d[17] = -0.001332f;
    data->d[18] = 0.446435f;
    data->d[19] = 0.000003f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation0

// Variation: 1  result = 0.00000048
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.311186f;
    data->d[1] = -1.910075f;
    data->d[2] = 0.292619f;
    data->d[3] = 0.980992f;
    data->d[4] = 0.655055f;
    data->d[5] = -0.330372f;
    data->d[6] = -1.250771f;
    data->d[7] = -2.429140f;
    data->d[8] = 1.368987f;
    data->d[9] = -0.010633f;
    data->d[10] = -2.202683f;
    data->d[11] = -0.570969f;
    data->d[12] = 1.473227f;
    data->d[13] = -0.172004f;
    data->d[14] = -2.592320f;
    data->d[15] = 2.913682f;
    data->d[16] = -0.122217f;
    data->d[17] = -0.807633f;
    data->d[18] = -0.578636f;
    data->d[19] = -0.118123f;
    data->d[20] = 0.000000f;
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

// Variation: 2  result = 0.00000036
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.104964f;
    data->d[1] = -1.906907f;
    data->d[2] = 1.390304f;
    data->d[3] = 1.466172f;
    data->d[4] = 1.675212f;
    data->d[5] = -1.240948f;
    data->d[6] = 0.652379f;
    data->d[7] = 0.620327f;
    data->d[8] = -3.171599f;
    data->d[9] = -0.057112f;
    data->d[10] = -0.332131f;
    data->d[11] = -0.751258f;
    data->d[12] = -0.680195f;
    data->d[13] = 0.633647f;
    data->d[14] = -1.455135f;
    data->d[15] = 0.398092f;
    data->d[16] = 2.680637f;
    data->d[17] = 0.001960f;
    data->d[18] = 0.475677f;
    data->d[19] = 0.523597f;
    data->d[20] = 0.000000f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
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
    instructions->SetOperation(0, 0, 23);
    instructions->SetOperation(1, 1, 25);
    instructions->SetOperation(2, 1, 1);
    instructions->SetOperation(3, 1, 1);
    instructions->SetOperation(4, 0, 11);
    instructions->SetOperation(5, 1, 19);
    instructions->SetOperation(6, 1, 7);
    instructions->SetOperation(7, 1, 23);
    instructions->SetOperation(8, 0, 0);
    instructions->SetOperation(9, 1, 16);
    instructions->SetOperation(10, 0, 11);
    instructions->SetOperation(11, 0, 12);
    instructions->SetOperation(12, 0, 5);
    instructions->SetOperation(13, 1, 8);
    instructions->SetOperation(14, 1, 17);
    instructions->SetOperation(15, 1, 22);
    instructions->SetOperation(16, 0, 13);
    instructions->SetOperation(17, 0, 2);
    instructions->SetOperation(18, 0, 13);
    instructions->SetOperation(19, 0, 8);
    instructions->SetOperation(20, 0, 22);
    instructions->SetOperation(21, 0, 17);
    instructions->SetOperation(22, 0, 27);
    instructions->SetOperation(23, 1, 12);
    instructions->SetOperation(24, 0, 13);
    instructions->SetOperation(25, 0, 27);
    instructions->SetOperation(26, 1, 10);
    instructions->SetOperation(27, 0, 15);
    instructions->SetOperation(28, 1, 27);
    instructions->SetOperation(29, 1, 28);
    instructions->SetOperation(30, 0, 23);
    instructions->SetOperation(31, 1, 20);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 113;
    state.m_evolution = 8;
    state.m_age = 2;
    state.m_index = 26;
    state.m_id = 59;
    state.m_copy_id = 59;
    state.m_test = 15;
    state.m_seed = 13243167458525786426;
    state.m_maxResult = 0.000001f;
    state.m_optimizePass = false;
    state.m_optimizeValid = true;
} // LoadState
