#pragma once
#include "FireStarterState.h"

// Run date: 08/05/23 13:30:41 Pacific Daylight Time
// Run duration = 161.863384 seconds
// Run generation = 7
// Run evolution = 0
// Run result = 0.00000095
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
// Run tests = 0
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
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 0;
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

// Variation: 0  result = 0.00000012
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.141593f;
    data->d[1] = -0.579792f;
    data->d[2] = -0.391452f;
    data->d[3] = 2.284132f;
    data->d[4] = -2.719367f;
    data->d[5] = 0.780352f;
    data->d[6] = -0.026083f;
    data->d[7] = 2.182984f;
    data->d[8] = -0.913444f;
    data->d[9] = -0.358877f;
    data->d[10] = 1.325584f;
    data->d[11] = -0.409699f;
    data->d[12] = -0.112604f;
    data->d[13] = -0.678805f;
    data->d[14] = 2.720132f;
    data->d[15] = 0.521400f;
    data->d[16] = -0.562950f;
    data->d[17] = 2.204308f;
    data->d[18] = 1.303680f;
    data->d[19] = 0.158152f;
    data->d[20] = -0.158152f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000095
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.090659f;
    data->d[1] = 0.430707f;
    data->d[2] = -1.418801f;
    data->d[3] = -1.068855f;
    data->d[4] = 1.348119f;
    data->d[5] = 1.386053f;
    data->d[6] = -3.242353f;
    data->d[7] = -0.001680f;
    data->d[8] = 1.600307f;
    data->d[9] = -0.056274f;
    data->d[10] = 1.432415f;
    data->d[11] = -2.994630f;
    data->d[12] = 3.862018f;
    data->d[13] = 1.078693f;
    data->d[14] = -2.082479f;
    data->d[15] = -0.554676f;
    data->d[16] = 1.094204f;
    data->d[17] = 36.700340f;
    data->d[18] = 0.156497f;
    data->d[19] = -0.762554f;
    data->d[20] = 0.644422f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000001f;
} // LoadVariation1

// Variation: 2  result = 0.00000073
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.617994f;
    data->d[1] = 1.077711f;
    data->d[2] = -0.191158f;
    data->d[3] = 3.260364f;
    data->d[4] = 0.108901f;
    data->d[5] = -0.193511f;
    data->d[6] = 0.340915f;
    data->d[7] = -2.307877f;
    data->d[8] = 0.728102f;
    data->d[9] = -0.182615f;
    data->d[10] = -0.439278f;
    data->d[11] = -0.043352f;
    data->d[12] = -0.946412f;
    data->d[13] = 8.390429f;
    data->d[14] = 1.510680f;
    data->d[15] = 1.689317f;
    data->d[16] = 1.701405f;
    data->d[17] = -2.683383f;
    data->d[18] = -0.425197f;
    data->d[19] = -0.255606f;
    data->d[20] = 0.779204f;
    data->d[21] = 0.000000f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
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
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 0, 19);
    instructions->SetOperation(9, 1, 18);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 0, 24);
    instructions->SetOperation(16, 0, 23);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 1, 8);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 11);
    instructions->SetOperation(27, 1, 14);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 1, 8);
    instructions->SetOperation(30, 1, 0);
    instructions->SetOperation(31, 1, 17);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 7;
    state.m_evolution = 0;
    state.m_index = 4;
    state.m_test = 0;
    state.m_seed = 11814963496216622228;
} // LoadState
