#pragma once
#include "FireStarterState.h"

// Run date: 07/08/23 13:43:39 Pacific Daylight Time
// Run duration = 1343.825030 seconds
// Run generation = 176
// Run evolution = 0
// Run result = 0.00000386
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f

// Run mode = FIRESTARTER_EVOLVE
// Run seed = 1
// Run optimizeSeed = 1
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
    settings.m_seed = 1;
    settings.m_optimizeSeed = 1;
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

// Variation: 0  result = 0.00000358
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.951916f;
    data->d[1] = -1.189696f;
    data->d[2] = -0.369522f;
    data->d[3] = 0.198788f;
    data->d[4] = 0.240806f;
    data->d[5] = 2.587542f;
    data->d[6] = 0.002263f;
    data->d[7] = 0.926870f;
    data->d[8] = -3.119751f;
    data->d[9] = -0.168287f;
    data->d[10] = 0.857620f;
    data->d[11] = 0.596813f;
    data->d[12] = -0.368451f;
    data->d[13] = 0.485556f;
    data->d[14] = 0.669391f;
    data->d[15] = -0.099183f;
    data->d[16] = -0.286992f;
    data->d[17] = 0.573965f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000004f;
} // LoadVariation0

// Variation: 1  result = 0.00000358
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.324580f;
    data->d[1] = -1.766101f;
    data->d[2] = 0.895273f;
    data->d[3] = -1.170011f;
    data->d[4] = -0.411052f;
    data->d[5] = -2.026870f;
    data->d[6] = -0.016363f;
    data->d[7] = 0.133946f;
    data->d[8] = 0.364624f;
    data->d[9] = -2.931000f;
    data->d[10] = -1.648135f;
    data->d[11] = 1.499627f;
    data->d[12] = -0.061254f;
    data->d[13] = -1.672976f;
    data->d[14] = -0.051660f;
    data->d[15] = 1.296759f;
    data->d[16] = 0.319249f;
    data->d[17] = -0.756659f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000004f;
} // LoadVariation1

// Variation: 2  result = 0.00000386
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.624369f;
    data->d[1] = -0.993621f;
    data->d[2] = -0.428333f;
    data->d[3] = 1.170516f;
    data->d[4] = -0.744908f;
    data->d[5] = 2.123307f;
    data->d[6] = 0.196159f;
    data->d[7] = -0.019411f;
    data->d[8] = 2.195501f;
    data->d[9] = 0.048094f;
    data->d[10] = -2.538978f;
    data->d[11] = -1.023722f;
    data->d[12] = -0.235060f;
    data->d[13] = 0.013287f;
    data->d[14] = 1.421727f;
    data->d[15] = -0.576804f;
    data->d[16] = -0.975726f;
    data->d[17] = 2.475058f;
    data->d[18] = 0.000000f;
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
    *(result->MinResult()) = 0.000004f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000004f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 19);
    instructions->SetOperation(1, 1, 25);
    instructions->SetOperation(2, 0, 21);
    instructions->SetOperation(3, 1, 0);
    instructions->SetOperation(4, 1, 22);
    instructions->SetOperation(5, 0, 19);
    instructions->SetOperation(6, 1, 27);
    instructions->SetOperation(7, 0, 26);
    instructions->SetOperation(8, 0, 20);
    instructions->SetOperation(9, 0, 10);
    instructions->SetOperation(10, 0, 23);
    instructions->SetOperation(11, 0, 14);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 1, 20);
    instructions->SetOperation(14, 1, 20);
    instructions->SetOperation(15, 1, 24);
    instructions->SetOperation(16, 0, 6);
    instructions->SetOperation(17, 0, 19);
    instructions->SetOperation(18, 0, 6);
    instructions->SetOperation(19, 1, 28);
    instructions->SetOperation(20, 1, 4);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 4);
    instructions->SetOperation(23, 1, 20);
    instructions->SetOperation(24, 0, 19);
    instructions->SetOperation(25, 0, 25);
    instructions->SetOperation(26, 0, 24);
    instructions->SetOperation(27, 1, 21);
    instructions->SetOperation(28, 0, 1);
    instructions->SetOperation(29, 1, 12);
    instructions->SetOperation(30, 1, 17);
    instructions->SetOperation(31, 1, 12);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 176;
    state.m_evolution = 0;
    state.m_index = 54;
    state.m_test = 39;
    state.m_seed = 7024706916159392907;
} // LoadState
