#pragma once
#include "FireStarterState.h"

// Run date: 09/04/23 14:52:39 Pacific Daylight Time
// Run duration = 2273.799953 seconds
// Run generation = 10
// Run evolution = 5
// Run result = 0.00000012
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_REVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run seeds = 64
// Run tests = 1
// Run units = 2
// Run processes = 2
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

    settings.m_mode = FIRESTARTER_REVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_seeds = 64;
    settings.m_tests = 1;
    settings.m_units = 2;
    settings.m_processes = 2;
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

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.575568f;
    data->d[1] = -1.566025f;
    data->d[2] = 0.443722f;
    data->d[3] = -0.384946f;
    data->d[4] = -1.082182f;
    data->d[5] = 0.889962f;
    data->d[6] = -1.470381f;
    data->d[7] = 1.692419f;
    data->d[8] = -0.611207f;
    data->d[9] = -0.504893f;
    data->d[10] = 1.370469f;
    data->d[11] = 0.564611f;
    data->d[12] = 0.879404f;
    data->d[13] = 1.902224f;
    data->d[14] = -0.120928f;
    data->d[15] = 0.845866f;
    data->d[16] = -0.868151f;
    data->d[17] = -0.887757f;
    data->d[18] = -0.000694f;
    data->d[19] = 0.000694f;
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
} // LoadVariation0

// Variation: 1  result = 0.00000012
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.660598f;
    data->d[1] = -2.430060f;
    data->d[2] = 0.438755f;
    data->d[3] = -0.687608f;
    data->d[4] = 1.403200f;
    data->d[5] = -0.737600f;
    data->d[6] = 0.770664f;
    data->d[7] = -1.397583f;
    data->d[8] = 0.394038f;
    data->d[9] = -1.635643f;
    data->d[10] = 0.567767f;
    data->d[11] = 1.127603f;
    data->d[12] = -2.104838f;
    data->d[13] = -1.491421f;
    data->d[14] = 1.752466f;
    data->d[15] = -2.789155f;
    data->d[16] = -0.273091f;
    data->d[17] = 0.093599f;
    data->d[18] = 0.300557f;
    data->d[19] = -0.418688f;
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

// Variation: 2  result = 0.00000012
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.199873f;
    data->d[1] = -0.418121f;
    data->d[2] = 0.654969f;
    data->d[3] = -1.574457f;
    data->d[4] = -0.832510f;
    data->d[5] = 1.368664f;
    data->d[6] = 1.438098f;
    data->d[7] = 0.203028f;
    data->d[8] = 1.292273f;
    data->d[9] = 1.057092f;
    data->d[10] = 1.737660f;
    data->d[11] = 1.785906f;
    data->d[12] = 0.498536f;
    data->d[13] = -0.008184f;
    data->d[14] = -2.148025f;
    data->d[15] = 0.948352f;
    data->d[16] = 0.895010f;
    data->d[17] = -0.236991f;
    data->d[18] = 0.068385f;
    data->d[19] = 0.455214f;
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
    state.m_maxResult = 0.000000f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 3);
    instructions->SetOperation(1, 1, 2);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 1, 19);
    instructions->SetOperation(5, 0, 13);
    instructions->SetOperation(6, 0, 12);
    instructions->SetOperation(7, 1, 21);
    instructions->SetOperation(8, 1, 10);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 0, 1);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 1);
    instructions->SetOperation(13, 0, 25);
    instructions->SetOperation(14, 0, 4);
    instructions->SetOperation(15, 1, 5);
    instructions->SetOperation(16, 1, 22);
    instructions->SetOperation(17, 0, 7);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 1, 16);
    instructions->SetOperation(20, 0, 9);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 1);
    instructions->SetOperation(23, 0, 8);
    instructions->SetOperation(24, 0, 2);
    instructions->SetOperation(25, 1, 13);
    instructions->SetOperation(26, 1, 25);
    instructions->SetOperation(27, 1, 7);
    instructions->SetOperation(28, 0, 8);
    instructions->SetOperation(29, 0, 4);
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
    state.m_generation = 10;
    state.m_evolution = 5;
    state.m_age = 32;
    state.m_index = 0;
    state.m_id = 24;
    state.m_copy_id = 7;
    state.m_test = 0;
    state.m_seed = 11964525186474904336;
    state.m_maxResult = 0.000000f;
    state.m_firstResult = 0.000002f;
    state.m_lastResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_lastEvolved = false;
} // LoadState
