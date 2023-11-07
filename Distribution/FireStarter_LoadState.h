#pragma once
#include "FireStarterState.h"

// Run date: 11/06/23 16:14:17 Pacific Standard Time
// Run duration = 1192.461448 seconds
// Run generation = 38
// Run evolution = 9
// Run result = 0.00000024
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
// Run tests = 1
// Run seeds = 64
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
    settings.m_tests = 1;
    settings.m_seeds = 64;
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

// Variation: 0  result = 0.00000016
inline void LoadVariation0(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.472202f;
    data->d[1] = -1.483466f;
    data->d[2] = -0.282446f;
    data->d[3] = -0.353242f;
    data->d[4] = -1.449438f;
    data->d[5] = 0.176198f;
    data->d[6] = -4.894899f;
    data->d[7] = 1.371153f;
    data->d[8] = 1.315264f;
    data->d[9] = -1.362390f;
    data->d[10] = 1.036231f;
    data->d[11] = 0.321737f;
    data->d[12] = 13.329098f;
    data->d[13] = -0.000023f;
    data->d[14] = 0.168944f;
    data->d[15] = 3.556100f;
    data->d[16] = -0.000000f;
    data->d[17] = 0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation0

// Variation: 1  result = 0.00000024
inline void LoadVariation1(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.206025f;
    data->d[1] = -0.636753f;
    data->d[2] = -0.455082f;
    data->d[3] = -0.084389f;
    data->d[4] = -1.957751f;
    data->d[5] = -1.320573f;
    data->d[6] = 0.303171f;
    data->d[7] = 1.193530f;
    data->d[8] = -0.010334f;
    data->d[9] = -0.223789f;
    data->d[10] = 0.430256f;
    data->d[11] = -1.075741f;
    data->d[12] = 1.202827f;
    data->d[13] = -0.203556f;
    data->d[14] = 3.140100f;
    data->d[15] = 1.291775f;
    data->d[16] = -0.118132f;
    data->d[17] = 0.000000f;
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
    *(result->MinResult()) = 0.000000f;
} // LoadVariation1

// Variation: 2  result = 0.00000024
inline void LoadVariation2(FireStarterResult* result)
{
    FireStarterData *data = result->Data();
    data->d[0] = 0.610325f;
    data->d[1] = -1.597826f;
    data->d[2] = 0.471759f;
    data->d[3] = -0.560389f;
    data->d[4] = -11.727164f;
    data->d[5] = 0.003535f;
    data->d[6] = -15.582440f;
    data->d[7] = 1.690696f;
    data->d[8] = -0.422410f;
    data->d[9] = -0.198609f;
    data->d[10] = -0.914360f;
    data->d[11] = 2.119476f;
    data->d[12] = -0.000021f;
    data->d[13] = 5.301797f;
    data->d[14] = 7.651516f;
    data->d[15] = 0.000573f;
    data->d[16] = 0.523599f;
    data->d[17] = 0.000000f;
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
    instructions->SetOperation(0, 0, 2);
    instructions->SetOperation(1, 1, 18);
    instructions->SetOperation(2, 0, 0);
    instructions->SetOperation(3, 0, 0);
    instructions->SetOperation(4, 1, 4);
    instructions->SetOperation(5, 1, 7);
    instructions->SetOperation(6, 0, 5);
    instructions->SetOperation(7, 0, 7);
    instructions->SetOperation(8, 0, 5);
    instructions->SetOperation(9, 0, 15);
    instructions->SetOperation(10, 1, 14);
    instructions->SetOperation(11, 1, 19);
    instructions->SetOperation(12, 0, 4);
    instructions->SetOperation(13, 1, 20);
    instructions->SetOperation(14, 0, 9);
    instructions->SetOperation(15, 1, 0);
    instructions->SetOperation(16, 0, 0);
    instructions->SetOperation(17, 0, 4);
    instructions->SetOperation(18, 0, 26);
    instructions->SetOperation(19, 1, 15);
    instructions->SetOperation(20, 0, 18);
    instructions->SetOperation(21, 0, 27);
    instructions->SetOperation(22, 0, 13);
    instructions->SetOperation(23, 0, 26);
    instructions->SetOperation(24, 1, 19);
    instructions->SetOperation(25, 0, 13);
    instructions->SetOperation(26, 0, 1);
    instructions->SetOperation(27, 0, 3);
    instructions->SetOperation(28, 1, 26);
    instructions->SetOperation(29, 0, 20);
    instructions->SetOperation(30, 1, 11);
    instructions->SetOperation(31, 1, 18);
    program.OptimizeRegisters();
} // LoadProgram

inline void LoadState(FireStarterState& state)
{
    FireStarterSettings settings;

    LoadSettings(settings);
    state.InitState(settings);
    LoadResult(state);
    LoadProgram(state.m_program);
    state.m_generation = 38;
    state.m_evolution = 9;
    state.m_index = 0;
    state.m_id = 1;
    state.m_copy_id = 36;
    state.m_test = 5;
    state.m_seed = 14304312496857003278;
    state.m_maxResult = 0.000000f;
    state.m_optimizePass = true;
    state.m_optimizeValid = true;
} // LoadState
