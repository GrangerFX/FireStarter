#pragma once
#include "FireStarterState.h"

// Run date: 11/02/24 12:32:10 Pacific Daylight Time
// Run duration = 2767.464812 seconds
// Run generation = 25
// Run evolution = 0
// Run max result = 0.00000027
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
// Run tests = 256
// Run streams = 1
// Run units = 1
// Run states = 1
// Run generations = 0
// Run population = 65536
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
    settings.m_tests = 256;
    settings.m_streams = 1;
    settings.m_units = 1;
    settings.m_states = 1;
    settings.m_generations = 0;
    settings.m_population = 65536;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 1;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000027
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -3.14159274f;
    data->d[1] = 0.08851206f;
    data->d[2] = -0.49084109f;
    data->d[3] = -2.84860873f;
    data->d[4] = 2.99317718f;
    data->d[5] = 6.66178513f;
    data->d[6] = 4.84744835f;
    data->d[7] = 5.65639400f;
    data->d[8] = 0.18665758f;
    data->d[9] = -1.44700038f;
    data->d[10] = -1.87692022f;
    data->d[11] = -0.00206733f;
    data->d[12] = 0.85557526f;
    data->d[13] = 1.86471558f;
    data->d[14] = 1.05168533f;
    data->d[15] = 0.86430031f;
    data->d[16] = -8.41638279f;
    data->d[17] = 14.16246796f;
    data->d[18] = -0.13273050f;
    data->d[19] = 1.28922307f;
    data->d[20] = 0.97523808f;
    data->d[21] = -1.35484576f;
    data->d[22] = 1.74520636f;
    data->d[23] = 1.98557389f;
    data->d[24] = 0.64838988f;
    data->d[25] = -1.04724181f;
    data->d[26] = -1.39529479f;
    data->d[27] = -0.09857860f;
    data->d[28] = 1.64480603f;
    data->d[29] = 0.57875669f;
    *(result->MinResult()) = 0.00000027f;
} // LoadVariation0

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    state.m_maxResult = 0.00000027f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 1, 21);
    instructions->SetOperation(1, 0, 27);
    instructions->SetOperation(2, 0, 17);
    instructions->SetOperation(3, 0, 21);
    instructions->SetOperation(4, 1, 12);
    instructions->SetOperation(5, 1, 13);
    instructions->SetOperation(6, 1, 5);
    instructions->SetOperation(7, 0, 29);
    instructions->SetOperation(8, 1, 6);
    instructions->SetOperation(9, 0, 4);
    instructions->SetOperation(10, 1, 18);
    instructions->SetOperation(11, 1, 7);
    instructions->SetOperation(12, 0, 15);
    instructions->SetOperation(13, 1, 22);
    instructions->SetOperation(14, 0, 15);
    instructions->SetOperation(15, 1, 13);
    instructions->SetOperation(16, 1, 20);
    instructions->SetOperation(17, 0, 21);
    instructions->SetOperation(18, 0, 0);
    instructions->SetOperation(19, 0, 22);
    instructions->SetOperation(20, 1, 10);
    instructions->SetOperation(21, 0, 20);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 1, 7);
    instructions->SetOperation(24, 0, 15);
    instructions->SetOperation(25, 0, 29);
    instructions->SetOperation(26, 0, 24);
    instructions->SetOperation(27, 1, 0);
    instructions->SetOperation(28, 0, 1);
    instructions->SetOperation(29, 0, 13);
    instructions->SetOperation(30, 1, 7);
    instructions->SetOperation(31, 0, 27);
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
    state.m_generation = 25;
    state.m_evolution = 0;
    state.m_index = 0;
    state.m_copy_index = 0;
    state.m_id = 0;
    state.m_test = 255;
    state.m_seed = 9121779361673768559;
    state.m_optimize_pass = 0;
    state.m_oldResult = 10.00000000f;
    state.m_maxResult = 0.00000027f;
    state.m_evolveWeight = 0.000000f;
    state.m_optimizeValid = true;
} // LoadState
