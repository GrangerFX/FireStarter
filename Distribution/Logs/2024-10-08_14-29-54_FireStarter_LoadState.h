#pragma once
#include "FireStarterState.h"

// Run date: 10/08/24 14:29:54 Pacific Daylight Time
// Run duration = 680.322449 seconds
// Run generation = 36
// Run evolution = 0
// Run max result = 0.00000053
// Run variations = 1
// Run samples = 15
// Run instructions = 32
// Run registers = 30
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run target = 0.000001f

// Run mode = FIRESTARTER_OPTIMIZE_CPU
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 524288
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

    settings.m_mode = FIRESTARTER_OPTIMIZE_CPU;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 524288;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000053
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.22866307f;
    data->d[1] = -0.71836621f;
    data->d[2] = 0.03254267f;
    data->d[3] = 1.55483162f;
    data->d[4] = 0.60575873f;
    data->d[5] = 0.64594513f;
    data->d[6] = -1.50122750f;
    data->d[7] = -0.75328559f;
    data->d[8] = 0.30150631f;
    data->d[9] = -0.19628963f;
    data->d[10] = 0.27419800f;
    data->d[11] = -3.30574965f;
    data->d[12] = -0.81907284f;
    data->d[13] = -0.05926287f;
    data->d[14] = -1.04738533f;
    data->d[15] = 1.11332321f;
    data->d[16] = -0.95296800f;
    data->d[17] = -2.26587892f;
    data->d[18] = 1.05263960f;
    data->d[19] = -0.83510774f;
    data->d[20] = 1.68951321f;
    data->d[21] = -0.54575133f;
    data->d[22] = -1.65185678f;
    data->d[23] = 1.59947693f;
    data->d[24] = 1.88934898f;
    data->d[25] = -0.18718611f;
    data->d[26] = 1.68350852f;
    data->d[27] = 1.89751971f;
    data->d[28] = -1.92845464f;
    data->d[29] = 0.14835189f;
    *(result->MinResult()) = 0.00000053f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000053f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 27);
    instructions->SetOperation(1, 1, 10);
    instructions->SetOperation(2, 1, 25);
    instructions->SetOperation(3, 0, 26);
    instructions->SetOperation(4, 0, 23);
    instructions->SetOperation(5, 1, 4);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 6);
    instructions->SetOperation(8, 1, 27);
    instructions->SetOperation(9, 0, 16);
    instructions->SetOperation(10, 1, 21);
    instructions->SetOperation(11, 0, 18);
    instructions->SetOperation(12, 0, 5);
    instructions->SetOperation(13, 0, 13);
    instructions->SetOperation(14, 1, 19);
    instructions->SetOperation(15, 0, 21);
    instructions->SetOperation(16, 0, 14);
    instructions->SetOperation(17, 1, 19);
    instructions->SetOperation(18, 0, 11);
    instructions->SetOperation(19, 0, 29);
    instructions->SetOperation(20, 0, 16);
    instructions->SetOperation(21, 1, 17);
    instructions->SetOperation(22, 1, 11);
    instructions->SetOperation(23, 1, 8);
    instructions->SetOperation(24, 0, 15);
    instructions->SetOperation(25, 0, 12);
    instructions->SetOperation(26, 1, 5);
    instructions->SetOperation(27, 1, 12);
    instructions->SetOperation(28, 0, 17);
    instructions->SetOperation(29, 1, 29);
    instructions->SetOperation(30, 0, 27);
    instructions->SetOperation(31, 0, 10);
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
    state.m_generation = 36;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 15;
    state.m_seed = 13454318341311856951;
    state.m_optimize_pass = 0;
    state.m_oldResult = 0.00377360f;
    state.m_maxResult = 0.00000053f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
