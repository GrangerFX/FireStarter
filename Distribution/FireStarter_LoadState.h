#pragma once
#include "FireStarterState.h"

// Run date: 09/22/24 10:35:36 Pacific Daylight Time
// Run duration = 49.147730 seconds
// Run generation = 17
// Run evolution = 0
// Run max result = 0.00000018
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_GPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 1
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 262144
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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_OPTIMIZE_GPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 1;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 262144;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000018
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.80504006f;
    data->d[1] = -0.35627738f;
    data->d[2] = 1.04728568f;
    data->d[3] = -1.37715948f;
    data->d[4] = -0.60039955f;
    data->d[5] = 2.16001606f;
    data->d[6] = 1.62572002f;
    data->d[7] = 0.24185146f;
    data->d[8] = -0.11718035f;
    data->d[9] = -0.00575084f;
    data->d[10] = 0.27235076f;
    data->d[11] = 0.73155653f;
    data->d[12] = -6.16468620f;
    data->d[13] = 0.45520696f;
    data->d[14] = -1.63915801f;
    data->d[15] = 0.47653311f;
    data->d[16] = 2.42299795f;
    data->d[17] = -0.25540403f;
    data->d[18] = 2.11410737f;
    data->d[19] = 1.28003359f;
    data->d[20] = 1.14006054f;
    data->d[21] = 1.26810646f;
    data->d[22] = 1.98780298f;
    data->d[23] = 0.17134674f;
    data->d[24] = -2.44276357f;
    data->d[25] = -1.07346320f;
    data->d[26] = -4.13413572f;
    data->d[27] = 1.82796586f;
    data->d[28] = -1.48232210f;
    data->d[29] = -1.35170352f;
    *(result->MinResult()) = 0.00000018f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000018f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 7);
    instructions->SetOperation(1, 0, 29);
    instructions->SetOperation(2, 1, 2);
    instructions->SetOperation(3, 1, 13);
    instructions->SetOperation(4, 0, 5);
    instructions->SetOperation(5, 1, 29);
    instructions->SetOperation(6, 0, 10);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 0, 29);
    instructions->SetOperation(9, 1, 19);
    instructions->SetOperation(10, 1, 4);
    instructions->SetOperation(11, 1, 15);
    instructions->SetOperation(12, 1, 27);
    instructions->SetOperation(13, 0, 19);
    instructions->SetOperation(14, 1, 24);
    instructions->SetOperation(15, 0, 21);
    instructions->SetOperation(16, 0, 9);
    instructions->SetOperation(17, 1, 17);
    instructions->SetOperation(18, 1, 19);
    instructions->SetOperation(19, 0, 27);
    instructions->SetOperation(20, 1, 4);
    instructions->SetOperation(21, 1, 21);
    instructions->SetOperation(22, 0, 11);
    instructions->SetOperation(23, 0, 16);
    instructions->SetOperation(24, 0, 28);
    instructions->SetOperation(25, 1, 9);
    instructions->SetOperation(26, 1, 19);
    instructions->SetOperation(27, 0, 23);
    instructions->SetOperation(28, 1, 25);
    instructions->SetOperation(29, 0, 10);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 0, 18);
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
    state.m_generation = 17;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 0;
    state.m_seed = 0;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00075388f;
    state.m_maxResult = 0.00000018f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
