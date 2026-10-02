#pragma once
#include "FireStarterState.h"

// Run date: 10/27/24 11:19:28 Pacific Daylight Time
// Run duration = 275.614395 seconds
// Run generation = 21
// Run evolution = 0
// Run max result = 0.00000011
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 131072
// Run iterations = 64
// Run passes = 500
// Run candidates = 16
// Run attempts = 0
// Run optimize = 1

// Run scale = 0.100000f
// Run startScale = 2.000000f
// Run startResult = 10.000000f

inline void LoadSettings(FireStarterSettings& settings)
{
    settings.m_variations = 1;
    settings.m_samples = 15;
    settings.m_instructions = 32;
    settings.m_registers = 30;
    settings.m_opcodes = 2;
    settings.m_patternOpcodes = 4;

    settings.m_targetMin = 0.000000f;
    settings.m_targetMax = 6.283185f;
    settings.m_target = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 131072;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000011
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = -0.44342023f;
    data->d[2] = -0.41566318f;
    data->d[3] = 2.32153964f;
    data->d[4] = -0.48717657f;
    data->d[5] = 1.62095189f;
    data->d[6] = 1.47479975f;
    data->d[7] = -0.98630828f;
    data->d[8] = 0.56904227f;
    data->d[9] = 2.46145844f;
    data->d[10] = -4.84686184f;
    data->d[11] = -2.11315799f;
    data->d[12] = -0.00249861f;
    data->d[13] = -0.11887585f;
    data->d[14] = -0.00247190f;
    data->d[15] = 2.12164259f;
    data->d[16] = 5.48650074f;
    data->d[17] = -0.19124207f;
    data->d[18] = -0.02191514f;
    data->d[19] = 1.51440549f;
    data->d[20] = -1.28605402f;
    data->d[21] = 0.64686954f;
    data->d[22] = 1.84863997f;
    data->d[23] = 0.47719055f;
    data->d[24] = -0.06946904f;
    data->d[25] = -0.10284965f;
    data->d[26] = 1.66081381f;
    data->d[27] = 0.92809469f;
    data->d[28] = 1.38439453f;
    data->d[29] = 1.52540338f;
    *(result->MinResult()) = 0.00000011f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000011f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 26);
    instructions->SetOperation(1, 0, 15);
    instructions->SetOperation(2, 0, 14);
    instructions->SetOperation(3, 0, 15);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 1, 10);
    instructions->SetOperation(6, 1, 0);
    instructions->SetOperation(7, 0, 16);
    instructions->SetOperation(8, 1, 2);
    instructions->SetOperation(9, 1, 17);
    instructions->SetOperation(10, 1, 23);
    instructions->SetOperation(11, 1, 21);
    instructions->SetOperation(12, 1, 27);
    instructions->SetOperation(13, 0, 5);
    instructions->SetOperation(14, 0, 23);
    instructions->SetOperation(15, 1, 22);
    instructions->SetOperation(16, 0, 16);
    instructions->SetOperation(17, 1, 25);
    instructions->SetOperation(18, 0, 28);
    instructions->SetOperation(19, 0, 0);
    instructions->SetOperation(20, 0, 27);
    instructions->SetOperation(21, 1, 15);
    instructions->SetOperation(22, 0, 9);
    instructions->SetOperation(23, 0, 25);
    instructions->SetOperation(24, 0, 5);
    instructions->SetOperation(25, 0, 26);
    instructions->SetOperation(26, 0, 12);
    instructions->SetOperation(27, 0, 12);
    instructions->SetOperation(28, 1, 0);
    instructions->SetOperation(29, 1, 18);
    instructions->SetOperation(30, 1, 27);
    instructions->SetOperation(31, 0, 14);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.LoadCodeFromProgram();
    state.m_generation = 21;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 0;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000011f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
