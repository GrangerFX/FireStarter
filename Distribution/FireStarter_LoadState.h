#pragma once
#include "FireStarterState.h"

// Run date: 09/16/23 09:37:28 Pacific Daylight Time
// Run duration = 11469.155919 seconds
// Run generation = 34
// Run evolution = 9
// Run result = 0.00000572
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
// Run processes = 4
// Run population = 278528
// Run iterations = 64
// Run passes = 5
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
    settings.m_tests = 16;
    settings.m_units = 4;
    settings.m_processes = 4;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 5;
    settings.m_generations = 100;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 32;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000376
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.696192f;
    data->d[1] = 4.728250f;
    data->d[2] = -0.353937f;
    data->d[3] = 1.990116f;
    data->d[4] = 1.205570f;
    data->d[5] = -0.471287f;
    data->d[6] = -0.093858f;
    data->d[7] = -0.791607f;
    data->d[8] = 0.650230f;
    data->d[9] = -2.792423f;
    data->d[10] = 0.515619f;
    data->d[11] = 1.721753f;
    data->d[12] = 0.000064f;
    data->d[13] = 1.948857f;
    data->d[14] = -1.303889f;
    data->d[15] = 0.725961f;
    data->d[16] = 0.334950f;
    data->d[17] = 0.183286f;
    data->d[18] = 1.280432f;
    data->d[19] = -2.446132f;
    data->d[20] = 1.930772f;
    data->d[21] = 0.000012f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000004f;
} // LoadVariation0

// Variation: 1  result = 0.00000310
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.620829f;
    data->d[1] = -1.918088f;
    data->d[2] = -1.920105f;
    data->d[3] = 1.378057f;
    data->d[4] = -0.422483f;
    data->d[5] = 3.583868f;
    data->d[6] = 0.004831f;
    data->d[7] = 1.527803f;
    data->d[8] = -1.261194f;
    data->d[9] = 2.802589f;
    data->d[10] = -0.363224f;
    data->d[11] = -1.254047f;
    data->d[12] = -0.005197f;
    data->d[13] = -0.010127f;
    data->d[14] = -0.137042f;
    data->d[15] = 0.564000f;
    data->d[16] = 1.828602f;
    data->d[17] = -1.605151f;
    data->d[18] = -0.424490f;
    data->d[19] = -0.325755f;
    data->d[20] = 1.197260f;
    data->d[21] = -0.117429f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000003f;
} // LoadVariation1

// Variation: 2  result = 0.00000572
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.709742f;
    data->d[1] = -1.859590f;
    data->d[2] = -1.856602f;
    data->d[3] = -2.600965f;
    data->d[4] = 0.744298f;
    data->d[5] = -3.279427f;
    data->d[6] = -0.048975f;
    data->d[7] = -1.592366f;
    data->d[8] = -0.652506f;
    data->d[9] = 1.551704f;
    data->d[10] = -2.371245f;
    data->d[11] = 2.466281f;
    data->d[12] = -0.001907f;
    data->d[13] = 6.500923f;
    data->d[14] = 0.000230f;
    data->d[15] = -0.205552f;
    data->d[16] = -0.121296f;
    data->d[17] = 0.522716f;
    data->d[18] = 1.741338f;
    data->d[19] = 0.544711f;
    data->d[20] = 0.559605f;
    data->d[21] = 0.523596f;
    data->d[22] = 0.000000f;
    data->d[23] = 0.000000f;
    data->d[24] = 0.000000f;
    data->d[25] = 0.000000f;
    data->d[26] = 0.000000f;
    data->d[27] = 0.000000f;
    data->d[28] = 0.000000f;
    *(result->MinResult()) = 0.000006f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000006f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 8);
    instructions->SetOperation(1, 1, 9);
    instructions->SetOperation(2, 1, 6);
    instructions->SetOperation(3, 0, 8);
    instructions->SetOperation(4, 1, 3);
    instructions->SetOperation(5, 1, 28);
    instructions->SetOperation(6, 0, 0);
    instructions->SetOperation(7, 0, 12);
    instructions->SetOperation(8, 1, 27);
    instructions->SetOperation(9, 1, 15);
    instructions->SetOperation(10, 1, 22);
    instructions->SetOperation(11, 0, 20);
    instructions->SetOperation(12, 1, 4);
    instructions->SetOperation(13, 0, 2);
    instructions->SetOperation(14, 1, 10);
    instructions->SetOperation(15, 0, 17);
    instructions->SetOperation(16, 1, 9);
    instructions->SetOperation(17, 0, 26);
    instructions->SetOperation(18, 0, 5);
    instructions->SetOperation(19, 0, 20);
    instructions->SetOperation(20, 0, 15);
    instructions->SetOperation(21, 1, 26);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 19);
    instructions->SetOperation(24, 0, 5);
    instructions->SetOperation(25, 0, 18);
    instructions->SetOperation(26, 1, 7);
    instructions->SetOperation(27, 0, 8);
    instructions->SetOperation(28, 0, 19);
    instructions->SetOperation(29, 1, 15);
    instructions->SetOperation(30, 0, 27);
    instructions->SetOperation(31, 1, 24);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 34;
    state.m_evolution = 9;
    state.m_age = 0;
    state.m_index = 31;
    state.m_id = 28;
    state.m_copy_id = 47;
    state.m_test = 14;
    state.m_seed = 13077989903704657966;
    state.m_maxResult = 0.000006f;
    state.m_lastResult = 0.000006f;
    state.m_optimizePass = false;
    state.m_lastEvolved = true;
} // LoadState
