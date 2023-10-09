#pragma once
#include "FireStarterState.h"

// Run date: 10/09/23 12:33:08 Pacific Daylight Time
// Run duration = 12724.493650 seconds
// Run generation = 30
// Run evolution = 5
// Run result = 0.00002980
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
    settings.m_processes = 4;
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

// Variation: 0  result = 0.00002636
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.553234f;
    data->d[1] = -1.649280f;
    data->d[2] = 1.354265f;
    data->d[3] = 0.043840f;
    data->d[4] = -0.377451f;
    data->d[5] = 0.502853f;
    data->d[6] = -1.818497f;
    data->d[7] = -0.519326f;
    data->d[8] = 0.643985f;
    data->d[9] = 3.253791f;
    data->d[10] = 0.595708f;
    data->d[11] = 1.467721f;
    data->d[12] = 2.461326f;
    data->d[13] = -1.478256f;
    data->d[14] = 0.577715f;
    data->d[15] = -2.077718f;
    data->d[16] = -1.370154f;
    data->d[17] = 0.275987f;
    data->d[18] = -0.074098f;
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
    *(result->MinResult()) = 0.000026f;
} // LoadVariation0

// Variation: 1  result = 0.00001299
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = -0.259195f;
    data->d[1] = -0.750258f;
    data->d[2] = -0.770698f;
    data->d[3] = 0.066329f;
    data->d[4] = -1.990675f;
    data->d[5] = -0.274810f;
    data->d[6] = 3.534851f;
    data->d[7] = 1.365222f;
    data->d[8] = 4.948050f;
    data->d[9] = -1.132174f;
    data->d[10] = 1.165040f;
    data->d[11] = -1.106142f;
    data->d[12] = 1.237351f;
    data->d[13] = 4.657019f;
    data->d[14] = -0.114491f;
    data->d[15] = -1.304503f;
    data->d[16] = 1.690560f;
    data->d[17] = -0.341199f;
    data->d[18] = 0.375357f;
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
    *(result->MinResult()) = 0.000013f;
} // LoadVariation1

// Variation: 2  result = 0.00002980
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 1.004817f;
    data->d[1] = -0.591990f;
    data->d[2] = 0.851874f;
    data->d[3] = -0.179231f;
    data->d[4] = -0.056005f;
    data->d[5] = -1.414140f;
    data->d[6] = 0.752467f;
    data->d[7] = 2.017640f;
    data->d[8] = 1.014215f;
    data->d[9] = -2.330257f;
    data->d[10] = -0.273553f;
    data->d[11] = 1.014896f;
    data->d[12] = 0.159336f;
    data->d[13] = 0.138472f;
    data->d[14] = -1.696723f;
    data->d[15] = 3.207693f;
    data->d[16] = 2.686382f;
    data->d[17] = 1.380503f;
    data->d[18] = 0.040581f;
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
    *(result->MinResult()) = 0.000030f;
} // LoadVariation2

inline void LoadResult(FireStarterState& state)
{
    LoadVariation0(state.Result(0));
    LoadVariation1(state.Result(1));
    LoadVariation2(state.Result(2));
    state.m_maxResult = 0.000030f;
} // LoadResult

inline void LoadProgram(FireStarterProgram& program)
{
    FireStarterInstructions* instructions = program.EvolvedInstructions();
    instructions->SetOperation(0, 0, 7);
    instructions->SetOperation(1, 0, 9);
    instructions->SetOperation(2, 1, 23);
    instructions->SetOperation(3, 0, 12);
    instructions->SetOperation(4, 0, 2);
    instructions->SetOperation(5, 1, 28);
    instructions->SetOperation(6, 0, 23);
    instructions->SetOperation(7, 0, 22);
    instructions->SetOperation(8, 1, 9);
    instructions->SetOperation(9, 0, 21);
    instructions->SetOperation(10, 0, 25);
    instructions->SetOperation(11, 1, 25);
    instructions->SetOperation(12, 1, 19);
    instructions->SetOperation(13, 1, 7);
    instructions->SetOperation(14, 0, 12);
    instructions->SetOperation(15, 0, 18);
    instructions->SetOperation(16, 1, 1);
    instructions->SetOperation(17, 1, 17);
    instructions->SetOperation(18, 0, 1);
    instructions->SetOperation(19, 1, 15);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 26);
    instructions->SetOperation(22, 1, 12);
    instructions->SetOperation(23, 0, 15);
    instructions->SetOperation(24, 0, 22);
    instructions->SetOperation(25, 1, 17);
    instructions->SetOperation(26, 0, 8);
    instructions->SetOperation(27, 0, 25);
    instructions->SetOperation(28, 0, 9);
    instructions->SetOperation(29, 0, 10);
    instructions->SetOperation(30, 1, 27);
    instructions->SetOperation(31, 0, 5);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 30;
    state.m_evolution = 5;
    state.m_age = 21;
    state.m_index = 34;
    state.m_id = 50;
    state.m_copy_id = 11;
    state.m_test = 25;
    state.m_seed = 6066341480795120346;
    state.m_maxResult = 0.000030f;
    state.m_optimizePass = false;
} // LoadState
