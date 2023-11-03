#pragma once
#include "FireStarterState.h"

// Run date: 11/02/23 19:45:51 Pacific Daylight Time
// Run duration = 47076.835437 seconds
// Run generation = 0
// Run evolution = 0
// Run result = 0.49791831
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

// Variation: 0  result = 0.40332890
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -2.028576f;
    data->d[1] = 0.592587f;
    data->d[2] = 0.295217f;
    data->d[3] = 1.608361f;
    data->d[4] = -2.047618f;
    data->d[5] = -1.409489f;
    data->d[6] = 0.235209f;
    data->d[7] = -0.256623f;
    data->d[8] = -0.635829f;
    data->d[9] = -0.499986f;
    data->d[10] = -0.278179f;
    data->d[11] = -1.778959f;
    data->d[12] = 0.743034f;
    data->d[13] = 2.154402f;
    data->d[14] = -27.721962f;
    data->d[15] = 1.217513f;
    data->d[16] = 5.488214f;
    data->d[17] = 1.242840f;
    data->d[18] = 0.403329f;
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
    *(result->MinResult()) = 0.403329f;
} // LoadVariation0

// Variation: 1  result = 0.19286287
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.929476f;
    data->d[1] = 1.023319f;
    data->d[2] = 0.186474f;
    data->d[3] = -2.012249f;
    data->d[4] = -615.265625f;
    data->d[5] = -0.322996f;
    data->d[6] = -0.455631f;
    data->d[7] = 0.592618f;
    data->d[8] = -0.003803f;
    data->d[9] = -2.303049f;
    data->d[10] = -1.189258f;
    data->d[11] = -2.183012f;
    data->d[12] = 3.293750f;
    data->d[13] = 0.083225f;
    data->d[14] = 1.460877f;
    data->d[15] = -3.800760f;
    data->d[16] = 9.724248f;
    data->d[17] = -8.294263f;
    data->d[18] = 1.045137f;
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
    *(result->MinResult()) = 0.192863f;
} // LoadVariation1

// Variation: 2  result = 0.49791831
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.480052f;
    data->d[1] = 1.033668f;
    data->d[2] = 0.450180f;
    data->d[3] = -0.892146f;
    data->d[4] = -0.541351f;
    data->d[5] = -1.936089f;
    data->d[6] = 1.447139f;
    data->d[7] = -0.936615f;
    data->d[8] = -1.592084f;
    data->d[9] = -0.193608f;
    data->d[10] = 0.921086f;
    data->d[11] = 3.624872f;
    data->d[12] = -1.555077f;
    data->d[13] = 1.612833f;
    data->d[14] = 7.400361f;
    data->d[15] = -5.977091f;
    data->d[16] = -0.203902f;
    data->d[17] = 1.082813f;
    data->d[18] = 0.497904f;
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
    *(result->MinResult()) = 0.497918f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.497918f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 20);
    instructions->SetOperation(1, 0, 16);
    instructions->SetOperation(2, 0, 13);
    instructions->SetOperation(3, 0, 10);
    instructions->SetOperation(4, 0, 3);
    instructions->SetOperation(5, 0, 18);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 5);
    instructions->SetOperation(8, 0, 28);
    instructions->SetOperation(9, 0, 11);
    instructions->SetOperation(10, 1, 14);
    instructions->SetOperation(11, 0, 13);
    instructions->SetOperation(12, 0, 10);
    instructions->SetOperation(13, 0, 16);
    instructions->SetOperation(14, 0, 13);
    instructions->SetOperation(15, 1, 2);
    instructions->SetOperation(16, 1, 6);
    instructions->SetOperation(17, 0, 13);
    instructions->SetOperation(18, 1, 2);
    instructions->SetOperation(19, 0, 24);
    instructions->SetOperation(20, 0, 20);
    instructions->SetOperation(21, 1, 1);
    instructions->SetOperation(22, 0, 28);
    instructions->SetOperation(23, 0, 9);
    instructions->SetOperation(24, 0, 11);
    instructions->SetOperation(25, 0, 9);
    instructions->SetOperation(26, 1, 13);
    instructions->SetOperation(27, 0, 28);
    instructions->SetOperation(28, 0, 22);
    instructions->SetOperation(29, 0, 16);
    instructions->SetOperation(30, 0, 17);
    instructions->SetOperation(31, 1, 0);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 0;
    state.m_evolution = 0;
    state.m_age = 64;
    state.m_index = 0;
    state.m_id = 0;
    state.m_copy_id = 0;
    state.m_test = 3;
    state.m_seed = 937970866457169694;
    state.m_maxResult = 0.497918f;
    state.m_optimizePass = false;
    state.m_optimizeValid = false;
} // LoadState
