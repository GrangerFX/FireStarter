#pragma once
#include "FireStarterState.h"

// Run date: 03/16/24 16:09:35 Pacific Daylight Time
// Run duration = 19943.920974 seconds
// Run generation = 1453
// Run evolution = 18
// Run max result = 0.00000018
// Run variations = 3
// Run samples = 15
// Run instructions = 32
// Run registers = 29
// Run opcodes = 2
// Run patternOpcodes = 4

// Run targetMin = 0.000000f
// Run targetMax = 6.283185f
// Run evolveTarget = 0.000001f

// Run mode = FIRESTARTER_EVOLVE
// Run evolveSeed = 0
// Run optimizeSeed = 0
// Run tests = 16
// Run streams = 4
// Run units = 4
// Run states = 16
// Run generations = 200
// Run population = 278528
// Run iterations = 64
// Run passes = 500
// Run precision = 0
// Run candidates = 16
// Run attempts = 0
// Run optimize = 8

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
    settings.m_evolveTarget = 0.000001f;

    settings.m_mode = FIRESTARTER_EVOLVE;
    settings.m_evolveSeed = 0;
    settings.m_optimizeSeed = 0;
    settings.m_tests = 16;
    settings.m_streams = 4;
    settings.m_units = 4;
    settings.m_states = 16;
    settings.m_generations = 200;
    settings.m_population = 278528;
    settings.m_iterations = 64;
    settings.m_passes = 500;
    settings.m_precision = 0;
    settings.m_candidates = 16;
    settings.m_attempts = 0;
    settings.m_optimize = 8;

    settings.m_scale = 0.100000f;
    settings.m_startScale = 2.000000f;
    settings.m_startResult = 10.000000f;
} // LoadSettings

// Variation: 0  result = 0.00000006
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.848462f;
    data->d[1] = 0.103110f;
    data->d[2] = 1.130138f;
    data->d[3] = -0.150686f;
    data->d[4] = -1.494236f;
    data->d[5] = -0.845682f;
    data->d[6] = 0.328613f;
    data->d[7] = -1.688376f;
    data->d[8] = 0.105646f;
    data->d[9] = -0.145076f;
    data->d[10] = 0.571403f;
    data->d[11] = -2.779450f;
    data->d[12] = 1.434468f;
    data->d[13] = 0.456703f;
    data->d[14] = -0.761397f;
    data->d[15] = 2.864767f;
    data->d[16] = 2.956509f;
    data->d[17] = -0.019002f;
    data->d[18] = -0.021383f;
    data->d[19] = 1.520690f;
    data->d[20] = -0.071921f;
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

// Variation: 1  result = 0.00000006
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.417297f;
    data->d[1] = -0.455363f;
    data->d[2] = 0.452530f;
    data->d[3] = 0.138757f;
    data->d[4] = -0.546140f;
    data->d[5] = -0.660848f;
    data->d[6] = -0.072791f;
    data->d[7] = 5.947267f;
    data->d[8] = -0.021680f;
    data->d[9] = 0.038402f;
    data->d[10] = -4.405213f;
    data->d[11] = 3.013471f;
    data->d[12] = 0.904718f;
    data->d[13] = 1.053063f;
    data->d[14] = 1.074406f;
    data->d[15] = -2.039221f;
    data->d[16] = 2.146583f;
    data->d[17] = 0.090552f;
    data->d[18] = -0.004132f;
    data->d[19] = 1.763703f;
    data->d[20] = 0.036074f;
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

// Variation: 2  result = 0.00000018
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -1.286140f;
    data->d[1] = 0.617254f;
    data->d[2] = -0.282472f;
    data->d[3] = 0.232218f;
    data->d[4] = 1.031682f;
    data->d[5] = 2.042980f;
    data->d[6] = 1.597270f;
    data->d[7] = 0.604169f;
    data->d[8] = 0.472326f;
    data->d[9] = -0.083730f;
    data->d[10] = -0.303298f;
    data->d[11] = 2.157435f;
    data->d[12] = 0.759016f;
    data->d[13] = 0.755202f;
    data->d[14] = -1.749053f;
    data->d[15] = 0.434990f;
    data->d[16] = 1.167793f;
    data->d[17] = 0.001272f;
    data->d[18] = -0.120232f;
    data->d[19] = 2.275092f;
    data->d[20] = -0.027849f;
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
    instructions->SetOperation(0, 1, 17);
    instructions->SetOperation(1, 0, 19);
    instructions->SetOperation(2, 0, 3);
    instructions->SetOperation(3, 1, 27);
    instructions->SetOperation(4, 0, 15);
    instructions->SetOperation(5, 0, 23);
    instructions->SetOperation(6, 0, 11);
    instructions->SetOperation(7, 0, 1);
    instructions->SetOperation(8, 1, 13);
    instructions->SetOperation(9, 0, 22);
    instructions->SetOperation(10, 0, 17);
    instructions->SetOperation(11, 0, 8);
    instructions->SetOperation(12, 1, 4);
    instructions->SetOperation(13, 0, 8);
    instructions->SetOperation(14, 1, 16);
    instructions->SetOperation(15, 1, 28);
    instructions->SetOperation(16, 0, 2);
    instructions->SetOperation(17, 0, 14);
    instructions->SetOperation(18, 0, 28);
    instructions->SetOperation(19, 1, 6);
    instructions->SetOperation(20, 0, 1);
    instructions->SetOperation(21, 0, 2);
    instructions->SetOperation(22, 0, 27);
    instructions->SetOperation(23, 0, 23);
    instructions->SetOperation(24, 0, 28);
    instructions->SetOperation(25, 1, 5);
    instructions->SetOperation(26, 1, 20);
    instructions->SetOperation(27, 1, 2);
    instructions->SetOperation(28, 0, 12);
    instructions->SetOperation(29, 1, 19);
    instructions->SetOperation(30, 1, 15);
    instructions->SetOperation(31, 1, 21);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 1453;
    state.m_evolution = 18;
    state.m_index = 2;
    state.m_copy_index = 5;
    state.m_id = 5;
    state.m_test = 13;
    state.m_seed = 18031617394893600056;
    state.m_optimize_pass =8;
    state.m_oldResult = 0.000001f;
    state.m_maxResult = 0.000000f;
    state.m_evolveWeight = 0.000093f;
    state.m_optimizeValid = true;
} // LoadState
